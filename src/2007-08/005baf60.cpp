// from server: 100% by colin
// roc 2007-08 005baf60  unit: RBX::VModelInstance::?$FactoryProduct  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005baf60
//
// 005baf60  8b442404             mov eax, dword ptr [esp + 4]
// 005baf64  56                   push esi
// 005baf65  6a00                 push 0
// 005baf67  68c08f8900           push 0x898fc0
// 005baf6c  684c1f8800           push 0x881f4c
// 005baf71  6a00                 push 0
// 005baf73  50                   push eax
// 005baf74  e8bd5d0700           call 0x630d36
// 005baf79  8bf0                 mov esi, eax
// 005baf7b  83c414               add esp, 0x14
// 005baf7e  85f6                 test esi, esi
// 005baf80  7412                 je 0x5baf94
// 005baf82  8b16                 mov edx, dword ptr [esi]
// 005baf84  8b424c               mov eax, dword ptr [edx + 0x4c]
// 005baf87  8bce                 mov ecx, esi
// 005baf89  ffd0                 call eax
// 005baf8b  8b16                 mov edx, dword ptr [esi]
// 005baf8d  8b4250               mov eax, dword ptr [edx + 0x50]
// 005baf90  8bce                 mov ecx, esi
// 005baf92  ffd0                 call eax
// 005baf94  5e                   pop esi
// 005baf95  c20400               ret 4

struct RBX_Instance;

struct RBX_InstanceVtbl {
    void* pad[0x13];
    void (__thiscall *fn4c)(RBX_Instance*);
    void (__thiscall *fn50)(RBX_Instance*);
};

struct RBX_Instance {
    RBX_InstanceVtbl* vtbl;
};

extern "C" RBX_Instance* __cdecl sub_630d36(int, int, void*, void*, int);

void __stdcall sub_5baf60(int a1)
{
    RBX_Instance* p = sub_630d36(a1, 0, (void*)0x881f4c, (void*)0x898fc0, 0);
    if (p) {
        p->vtbl->fn4c(p);
        p->vtbl->fn50(p);
    }
}
