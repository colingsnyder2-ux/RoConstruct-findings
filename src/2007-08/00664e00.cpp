// from server: 25% by colin
// roc 2007-08 00664e00  unit: CXTTreeViewBase  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00664e00
//
// 00664e00  6aff                 push -1
// 00664e02  68e8087600           push 0x7608e8
// 00664e07  64a100000000         mov eax, dword ptr fs:[0]
// 00664e0d  50                   push eax
// 00664e0e  51                   push ecx
// 00664e0f  56                   push esi
// 00664e10  a188518b00           mov eax, dword ptr [0x8b5188]
// 00664e15  33c4                 xor eax, esp
// 00664e17  50                   push eax
// 00664e18  8d44240c             lea eax, [esp + 0xc]
// 00664e1c  64a300000000         mov dword ptr fs:[0], eax
// 00664e22  8bf1                 mov esi, ecx
// 00664e24  89742408             mov dword ptr [esp + 8], esi
// 00664e28  33c9                 xor ecx, ecx
// 00664e2a  3bf1                 cmp esi, ecx
// 00664e2c  894c2414             mov dword ptr [esp + 0x14], ecx
// 00664e30  7403                 je 0x664e35
// 00664e32  8d4e60               lea ecx, [esi + 0x60]
// 00664e35  e8b61f0000           call 0x666df0
// 00664e3a  8bce                 mov ecx, esi
// 00664e3c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00664e44  e8e5370d00           call 0x73862e
// 00664e49  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00664e4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00664e54  59                   pop ecx
// 00664e55  5e                   pop esi
// 00664e56  83c410               add esp, 0x10
// 00664e59  c3                   ret 

struct CXTTreeViewBase {
    char pad[0x60];
    int field60;
    void sub_666df0();
    void sub_73862e();
    void func();
};

void CXTTreeViewBase::func() {
    CXTTreeViewBase* self = this;
    if (self != 0) {
        self->sub_666df0();
    }
    self->sub_73862e();
}
