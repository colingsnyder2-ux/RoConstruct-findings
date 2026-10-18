// from server: 71% by colin
extern void __cdecl adjust_heap(float*, int, int, float);

#pragma float_control(precise, off, push)
void __cdecl sort_heap(float* first, float* last)
{
    int bytes = (char*)last - (char*)first;
    while (bytes > 4)
    {
        float value = *(float*)((char*)first + bytes - 4);
        *(float*)((char*)first + bytes - 4) = first[0];
        adjust_heap(first, 0, (bytes - 4) >> 2, value);
        bytes -= 4;
    }
}
#pragma float_control(pop)
