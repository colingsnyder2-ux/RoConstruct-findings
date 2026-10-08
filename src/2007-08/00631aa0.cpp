// from server: 91% by colin
// roc 2007-08 00631aa0  unit: _com_error  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00631aa0
//
// 00631aa0  8b442404             mov eax, dword ptr [esp + 4]
// 00631aa4  56                   push esi
// 00631aa5  8bf1                 mov esi, ecx
// 00631aa7  50                   push eax
// 00631aa8  8d8ef0000000         lea ecx, [esi + 0xf0]
// 00631aae  ff156cdd7700         call dword ptr [0x77dd6c]
// 00631ab4  8b16                 mov edx, dword ptr [esi]
// 00631ab6  8b829c010000         mov eax, dword ptr [edx + 0x19c]
// 00631abc  6a01                 push 1
// 00631abe  6a00                 push 0
// 00631ac0  8bce                 mov ecx, esi
// 00631ac2  ffd0                 call eax
// 00631ac4  5e                   pop esi
// 00631ac5  c20400               ret 4

struct _com_error {
    char pad[0xf0];
    struct Inner {
        char pad[0x100];
    } inner;
    void method(int);
};

extern "C" int __stdcall sub_77dd6c(void*, int);

void _com_error::method(int arg) {
    sub_77dd6c(&inner, arg);
    void** vtbl = *(void***)this;
    void (__stdcall *fn)(void*, int, int) = (void (__stdcall *)(void*, int, int))vtbl[0x19c / 4];
    fn(this, 0, 1);
}
