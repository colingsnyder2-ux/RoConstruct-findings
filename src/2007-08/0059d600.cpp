// from server: 26% by colin
// roc 2007-08 0059d600  unit: RBX::VLegacyHopperService::?$FactoryProduct  size: 96 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059d600
//
// 0059d600  6aff                 push -1
// 0059d602  68667a7500           push 0x757a66
// 0059d607  64a100000000         mov eax, dword ptr fs:[0]
// 0059d60d  50                   push eax
// 0059d60e  64892500000000       mov dword ptr fs:[0], esp
// 0059d615  51                   push ecx
// 0059d616  56                   push esi
// 0059d617  8bf1                 mov esi, ecx
// 0059d619  89742404             mov dword ptr [esp + 4], esi
// 0059d61d  8d8e38010000         lea ecx, [esi + 0x138]
// 0059d623  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0059d62b  ff15ace67700         call dword ptr [0x77e6ac]
// 0059d631  8d8e00010000         lea ecx, [esi + 0x100]
// 0059d637  c644241000           mov byte ptr [esp + 0x10], 0
// 0059d63c  e85ff5ffff           call 0x59cba0
// 0059d641  8bce                 mov ecx, esi
// 0059d643  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0059d64b  e810f9e6ff           call 0x40cf60
// 0059d650  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0059d654  5e                   pop esi
// 0059d655  64890d00000000       mov dword ptr fs:[0], ecx
// 0059d65c  83c410               add esp, 0x10
// 0059d65f  c3                   ret 

struct S {
    char pad[0x100];
    char field100[0x38];
    char field138[4];
    void f();
};

extern "C" void __stdcall sub_77E6AC();
extern "C" void __fastcall sub_59CBA0(void*);
extern "C" void __fastcall sub_40CF60(void*);

void S::f() {
    sub_77E6AC();
    sub_59CBA0(field100);
    sub_40CF60(this);
}
