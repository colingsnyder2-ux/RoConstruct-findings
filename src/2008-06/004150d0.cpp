// from server: 29% by colin
// roc 2008-06 004150d0  unit: boost::detail::sp_counted_base  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004150d0

extern "C" void* __cdecl malloc(unsigned int);
extern "C" void __stdcall sub_58AB90();

struct S {
    void sub_415020(void*, void*);
    void f(void*);
};

void S::f(void* a)
{
    void* p = malloc(0x1a4);
    if (p)
        sub_58AB90();
    else
        p = 0;
    sub_415020(p, a);
}
