// from server: 100% by king_originala
// roc 2008-06 00494f80  unit: RBX::VRunService::?$SignalDesc  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00494f80
//
// 00494f80  6aff                 push -1
// 00494f82  6858647c00           push 0x7c6458
// 00494f87  64a100000000         mov eax, dword ptr fs:[0]
// 00494f8d  50                   push eax
// 00494f8e  64892500000000       mov dword ptr fs:[0], esp
// 00494f95  51                   push ecx
// 00494f96  56                   push esi
// 00494f97  57                   push edi
// 00494f98  8bf1                 mov esi, ecx
// 00494f9a  6a00                 push 0
// 00494f9c  83ec24               sub esp, 0x24
// 00494f9f  8bfc                 mov edi, esp
// 00494fa1  8d442444             lea eax, [esp + 0x44]
// 00494fa5  89642430             mov dword ptr [esp + 0x30], esp
// 00494fa9  50                   push eax
// 00494faa  8bcf                 mov ecx, edi
// 00494fac  c744244000000000     mov dword ptr [esp + 0x40], 0
// 00494fb4  e88784ffff           call 0x48d440
// 00494fb9  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 00494fbd  894f20               mov dword ptr [edi + 0x20], ecx
// 00494fc0  8bce                 mov ecx, esi
// 00494fc2  e809ffffff           call 0x494ed0
// 00494fc7  8d4c241c             lea ecx, [esp + 0x1c]
// 00494fcb  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00494fd3  e8c887ffff           call 0x48d7a0
// 00494fd8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00494fdc  5f                   pop edi
// 00494fdd  8bc6                 mov eax, esi
// 00494fdf  64890d00000000       mov dword ptr fs:[0], ecx
// 00494fe6  5e                   pop esi
// 00494fe7  83c410               add esp, 0x10
// 00494fea  c22800               ret 0x28

struct String {
    char storage[32];
    String(const String&);
    ~String();
};

struct Argument {
    String name;
    void* value;
};

struct S {
    S(Argument argument, int unused);
    void initialize(Argument argument, int flags);
};

S::S(Argument argument, int unused)
{
    initialize(argument, 0);
}
