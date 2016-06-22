NOTES_LIST = ['C', 'C#', 'D', 'D#', 'E', 'F', 'F#', 'G', 'G#', 'A', 'A#', 'B']
'''
reference = [
    ['F#', 'G', 'A', 'B', 'C', 'D', 'E'],
    ['C#', 'D', 'E', 'F', 'G', 'A', 'B']
]
'''
def get_scales(start_note):
    SPACING_SEQUENCE = [2, 2, 1, 2, 2, 2]
    global NOTES_LIST
    scale = []
    scale.append(start_note)
    '''for index, a in enumerate(reference):
        if start_note == a[index][0]:
            start_index = index
            break '''   

    for index, value in enumerate(NOTES_LIST):
        if value == start_note:
            movement_index = index
            break
        
    for spaceindex, value in enumerate(SPACING_SEQUENCE):
        movement_index = (movement_index + value) % len(NOTES_LIST)
        '''if NOTES_LIST[movement_index] == reference[start_index][spaceindex + 1] and scale[spaceindex + 1][0] != reference[start_index][spaceindex + 1]:'''
        scale.append(NOTES_LIST[movement_index])
        '''else:
            reference[start_index][space_index + 1] += '#'
            scale.append(reference[start_index][space_index + 1])    '''
    return scale


for note in NOTES_LIST:
	 get_scales(note)


