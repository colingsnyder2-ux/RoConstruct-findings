// from server: 25% by colin
// roc 2007-08 006efc60  unit: CXTPDockingPaneContext  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006efc60
//
// 006efc60  6aff                 push -1
// 006efc62  6818257400           push 0x742518
// 006efc67  64a100000000         mov eax, dword ptr fs:[0]
// 006efc6d  50                   push eax
// 006efc6e  51                   push ecx
// 006efc6f  56                   push esi
// 006efc70  a188518b00           mov eax, dword ptr [0x8b5188]
// 006efc75  33c4                 xor eax, esp
// 006efc77  50                   push eax
// 006efc78  8d44240c             lea eax, [esp + 0xc]
// 006efc7c  64a300000000         mov dword ptr fs:[0], eax
// 006efc82  8bf1                 mov esi, ecx
// 006efc84  89742408             mov dword ptr [esp + 8], esi
// 006efc88  33c9                 xor ecx, ecx
// 006efc8a  3bf1                 cmp esi, ecx
// 006efc8c  894c2414             mov dword ptr [esp + 0x14], ecx
// 006efc90  7403                 je 0x6efc95
// 006efc92  8d4e54               lea ecx, [esi + 0x54]
// 006efc95  e8c62efbff           call 0x6a2b60
// 006efc9a  8bce                 mov ecx, esi
// 006efc9c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006efca4  e83709f4ff           call 0x6305e0
// 006efca9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006efcad  64890d00000000       mov dword ptr fs:[0], ecx
// 006efcb4  59                   pop ecx
// 006efcb5  5e                   pop esi
// 006efcb6  83c410               add esp, 0x10
// 006efcb9  c3                   ret 

struct CXTPDockingPaneContext {
    char pad[0x54];
    int field_54;
    void sub_6a2b60();
    void sub_6305e0();
    void sub_6efc60();
};

void CXTPDockingPaneContext::sub_6efc60()
{
    if (this != 0) {
        this->sub_6a2b60();
    }
    this->sub_6305e0();
}
