// from server: 65% by colin
extern void __cdecl adjust_heap(float*, int, int, float);

#pragma float_control(precise, off, push)
void __cdecl sort_heap(float* first, float* last)
{
    int bytes = (char*)last - (char*)first;
    int n = bytes >> 2;
    while (n > 1)
    {
        float value = first[n - 1];
        first[n - 1] = first[0];
        adjust_heap(first, 0, n - 1, value);
        bytes -= 4;
        n = bytes >> 2;
    }
}
#pragma float_control(pop)
