// from server: 95% by colin
struct _com_error {
    char pad[0xf0];
    struct Inner {
        char pad[0x100];
    } inner;
    void method(int);
};

extern "C" void __stdcall sub_77dd6c(void*, int);

void _com_error::method(int arg) {
    sub_77dd6c(&inner, arg);
    void** vtbl = *(void***)this;
    void (__thiscall *fn)(void*, int, int) = (void (__thiscall *)(void*, int, int))vtbl[0x19c / 4];
    fn(this, 0, 1);
}
