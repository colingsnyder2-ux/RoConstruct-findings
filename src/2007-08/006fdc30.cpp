// from server: 54% by colin
struct Base {
    Base(int, int, int);
};

struct CXTPTabManagerNavigateButton : Base {
    void* vtable;
    char pad[0x24];
    int field28;
    CXTPTabManagerNavigateButton(int, int);
};

extern "C" void* __cdecl sub_6b3010();

CXTPTabManagerNavigateButton::CXTPTabManagerNavigateButton(int a, int b)
    : Base(a, 0, b)
{
    *(void**)this = (void*)0x7dcddc;
    void* p = sub_6b3010();
    void** vt = *(void***)p;
    typedef void (__thiscall *Fn)(void*, int*, int);
    Fn fn = (Fn)vt[1];
    fn(p, &this->field28, 0x2648);
}
