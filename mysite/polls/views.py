from .models import Question
from django.http import HttpResponse
from django.shortcuts import get_object_or_404, render
import scales

def index(request):
    selected_choice = request.POST['choice']
    response = []
    a = scales.get_scales(selected_choice)
    response = a
    return HttpResponse(response)
    
    
def detail(request, question_id):
    notes_list =['C', 'C#', 'D', 'D#', 'E', 'F', 'F#', 'G', 'G#', 'A', 'A#', 'B']
    return render(request, 'polls/detail.html', {'notes_list' :notes_list} )
    

def results(request, question_id):
    response = "You're looking at the results of question %s."
    return HttpResponse(response % question_id)


def vote(request, question_id):
    return HttpResponse("You're voting on question %s." % question_id)      
    
