// from server: 37% by colin
// roc 2007-08 005920b0  unit: RBX::VVisit::?$FactoryProduct  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005920b0
//
// 005920b0  64a100000000         mov eax, dword ptr fs:[0]
// 005920b6  6aff                 push -1
// 005920b8  68181f7500           push 0x751f18
// 005920bd  50                   push eax
// 005920be  64892500000000       mov dword ptr fs:[0], esp
// 005920c5  56                   push esi
// 005920c6  8bf1                 mov esi, ecx
// 005920c8  8d442414             lea eax, [esp + 0x14]
// 005920cc  50                   push eax
// 005920cd  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005920d5  ff159ce67700         call dword ptr [0x77e69c]
// 005920db  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 005920df  894e1c               mov dword ptr [esi + 0x1c], ecx
// 005920e2  8d4c2414             lea ecx, [esp + 0x14]
// 005920e6  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 005920ee  ff15ace67700         call dword ptr [0x77e6ac]
// 005920f4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005920f8  8bc6                 mov eax, esi
// 005920fa  64890d00000000       mov dword ptr fs:[0], ecx
// 00592101  5e                   pop esi
// 00592102  83c40c               add esp, 0xc
// 00592105  c22000               ret 0x20

struct S {
    char pad[0x1c];
    int field_1c;
    S* ctor(const S& other);
};

extern "C" void __stdcall sub_77e69c(void*);
extern "C" void __stdcall sub_77e6ac(void*);

S* S::ctor(const S& other)
{
    void* p = 0;
    sub_77e69c(&p);
    field_1c = *(int*)((const char*)&other + 0x1c);
    sub_77e6ac(&p);
    return this;
}
