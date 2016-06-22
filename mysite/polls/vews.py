from .models import Question
from django.http import HttpResponse
from django.shortcuts import get_object_or_404, render
import scales

def index(request):
	a = []
	a = scales.get_scales('C')
	response = a
	return HttpResponse(a)
	'''
	latest_question_list = Question.objects.order_by('-pub_date')[:5]
    context = {'latest_question_list': latest_question_list}
    return render(request, 'polls/index.html', context)'''


def detail(request, question_id):
	notes_list =['C', 'D', 'E', 'F']
	return render(request, 'polls/detail.html', {'notes_list' :notes_list}
    '''question = get_object_or_404(Question, pk=question_id)
    return render(request, 'polls/detail.html', {'question': question})
	'''

def results(request, question_id):
    response = "You're looking at the results of question %s."
    return HttpResponse(response % question_id)


def vote(request, question_id):
    return HttpResponse("You're voting on question %s." % question_id)      
    
