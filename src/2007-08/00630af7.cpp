// from server: 39% by colin
// roc 2007-08 00630af7  unit: type_info  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00630af7

extern "C" void __stdcall _SEH_prolog();
extern "C" void __stdcall _SEH_epilog();

void __stdcall sub_630af7(int a, int b, int c, void (__stdcall *fn)(int))
{
    int saved_esp;
    int count;
    int ptr;
    int state;

    __try
    {
        state = 0;
        count = c;
        ptr = a + b * c;
        state = 0;
        while (--count >= 0)
        {
            ptr -= b;
            fn(ptr);
        }
        state = 1;
    }
    __finally
    {
    }
}
