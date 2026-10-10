// from server: 40% by colin
// roc 2007-08 00544e60  unit: RBX::VDebugSettings  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00544e60
//
// 00544e60  6aff                 push -1
// 00544e62  6879be7500           push 0x75be79
// 00544e67  64a100000000         mov eax, dword ptr fs:[0]
// 00544e6d  50                   push eax
// 00544e6e  64892500000000       mov dword ptr fs:[0], esp
// 00544e75  83ec1c               sub esp, 0x1c
// 00544e78  53                   push ebx
// 00544e79  6a0b                 push 0xb
// 00544e7b  6a00                 push 0
// 00544e7d  8d44240c             lea eax, [esp + 0xc]
// 00544e81  50                   push eax
// 00544e82  ff1538e67700         call dword ptr [0x77e638]
// 00544e88  68006f7a00           push 0x7a6f00
// 00544e8d  50                   push eax
// 00544e8e  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00544e96  ff15f8e57700         call dword ptr [0x77e5f8]
// 00544e9c  83c408               add esp, 8
// 00544e9f  8d4c2404             lea ecx, [esp + 4]
// 00544ea3  8ad8                 mov bl, al
// 00544ea5  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00544ead  ff15ace67700         call dword ptr [0x77e6ac]
// 00544eb3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00544eb7  8ac3                 mov al, bl
// 00544eb9  5b                   pop ebx
// 00544eba  64890d00000000       mov dword ptr fs:[0], ecx
// 00544ec1  83c428               add esp, 0x28
// 00544ec4  c3                   ret

struct S {
    bool f();
};

extern "C" {
    void* __stdcall sub_77E638(void*, int, int);
    int __stdcall sub_77E5F8(const char*, void*);
    void __stdcall sub_77E6AC(void*);
}

bool S::f()
{
    char buf[12];
    sub_77E638(buf, 0, 11);
    bool r = sub_77E5F8("rbxasset://", buf) != 0;
    sub_77E6AC(buf);
    return r;
}
