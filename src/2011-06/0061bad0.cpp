// from server: 50% by atomic.potato
struct WeakThreadRef
{
    void __stdcall f(void *, int);
};

extern "C" void __cdecl function_618990(void *, int);

void __stdcall WeakThreadRef::f(void *p, int value)
{
    if (value == 4)
    {
        *(int *)p = 0x00c4a7c8;
        *((unsigned char *)p + 4) = 0;
        *((unsigned char *)p + 5) = 0;
    }
    else
    {
        function_618990(p, value);
    }
}
