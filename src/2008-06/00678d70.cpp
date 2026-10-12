// from server: 62% by king_originala
extern void __cdecl adjust_heap(float*, int, int, float);

#pragma float_control(precise, off, push)
void __cdecl sort_heap(float* first, float* last)
{
    int bytes = (char*)last - (char*)first;
    while ((bytes >> 2) > 1)
    {
        float* tail = (float*)((char*)first + bytes - 4);
        float value = *tail;
        *tail = *first;
        adjust_heap(first, 0, (bytes - 4) >> 2, value);
        bytes -= 4;
    }
}
#pragma float_control(pop)
