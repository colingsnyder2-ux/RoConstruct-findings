// from server: 30% by colin
// roc 2007-08 00631134  unit: std::bad_alloc  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631134

extern "C" void __stdcall sub_631620(int);
extern "C" void __stdcall sub_631665();
extern "C" void __stdcall sub_631185();

void __stdcall sub_631134(int a, int b, int c, int d, int e, int f)
{
    sub_631620(0x10);
    int i = 0;
    while (i < e)
    {
        ((void (__stdcall *)(int))f)(b);
        a += c;
        b += c;
        i++;
    }
    sub_631185();
    sub_631665();
}
