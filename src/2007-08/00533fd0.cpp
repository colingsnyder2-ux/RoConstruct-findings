// from server: 100% by colin
// roc 2007-08 00533fd0  unit: RBX::Selection  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00533fd0
//
// 00533fd0  8b81f0000000         mov eax, dword ptr [ecx + 0xf0]
// 00533fd6  85c0                 test eax, eax
// 00533fd8  740d                 je 0x533fe7
// 00533fda  6a00                 push 0
// 00533fdc  6a02                 push 2
// 00533fde  50                   push eax
// 00533fdf  e80ca40800           call 0x5be3f0
// 00533fe4  83c40c               add esp, 0xc
// 00533fe7  c3                   ret 

struct Selection {
    char pad[0xf0];
    void* field;
    void func_00533fd0();
};

extern "C" void __cdecl func_005be3f0(void*, int, int);

void Selection::func_00533fd0()
{
    void* p = field;
    if (p != 0)
        func_005be3f0(p, 2, 0);
}
