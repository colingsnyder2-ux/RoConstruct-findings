// from server: 48% by colin
// roc 2007-08 00544df0  unit: RBX::VDebugSettings::?$GlobalSettingsItem  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544df0
//
// 00544df0  6aff                 push -1
// 00544df2  6879be7500           push 0x75be79
// 00544df7  64a100000000         mov eax, dword ptr fs:[0]
// 00544dfd  50                   push eax
// 00544dfe  64892500000000       mov dword ptr fs:[0], esp
// 00544e05  83ec1c               sub esp, 0x1c
// 00544e08  53                   push ebx
// 00544e09  6a07                 push 7
// 00544e0b  6a00                 push 0
// 00544e0d  8d44240c             lea eax, [esp + 0xc]
// 00544e11  50                   push eax
// 00544e12  ff1538e67700         call dword ptr [0x77e638]
// 00544e18  68f86e7a00           push 0x7a6ef8
// 00544e1d  50                   push eax
// 00544e1e  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00544e26  ff15f8e57700         call dword ptr [0x77e5f8]
// 00544e2c  83c408               add esp, 8
// 00544e2f  8d4c2404             lea ecx, [esp + 4]
// 00544e33  8ad8                 mov bl, al
// 00544e35  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00544e3d  ff15ace67700         call dword ptr [0x77e6ac]
// 00544e43  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00544e47  8ac3                 mov al, bl
// 00544e49  5b                   pop ebx
// 00544e4a  64890d00000000       mov dword ptr fs:[0], ecx
// 00544e51  83c428               add esp, 0x28
// 00544e54  c3                   ret 

struct S {
    bool f();
};

extern "C" int __stdcall GetModuleFileNameA(int, char*, int);
extern "C" int __stdcall CompareStringA(int, int, const char*, int, const char*, int);
extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_77E638(void*, int, int);

bool S::f()
{
    char buf[28];
    sub_77E638(buf, 0, 7);
    bool r = CompareStringA(0, 0, buf, 0, "file://", 7) == 0;
    sub_77E6AC(buf);
    return r;
}
