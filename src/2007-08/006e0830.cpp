// from server: 33% by colin
// roc 2007-08 006e0830  unit: CXTPDockingPaneClientContainer  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0830
//
// 006e0830  6aff                 push -1
// 006e0832  68f8797600           push 0x7679f8
// 006e0837  64a100000000         mov eax, dword ptr fs:[0]
// 006e083d  50                   push eax
// 006e083e  51                   push ecx
// 006e083f  56                   push esi
// 006e0840  a188518b00           mov eax, dword ptr [0x8b5188]
// 006e0845  33c4                 xor eax, esp
// 006e0847  50                   push eax
// 006e0848  8d44240c             lea eax, [esp + 0xc]
// 006e084c  64a300000000         mov dword ptr fs:[0], eax
// 006e0852  8bf1                 mov esi, ecx
// 006e0854  89742408             mov dword ptr [esp + 8], esi
// 006e0858  33c9                 xor ecx, ecx
// 006e085a  3bf1                 cmp esi, ecx
// 006e085c  894c2414             mov dword ptr [esp + 0x14], ecx
// 006e0860  7403                 je 0x6e0865
// 006e0862  8d4e20               lea ecx, [esi + 0x20]
// 006e0865  e876fdffff           call 0x6e05e0
// 006e086a  8bce                 mov ecx, esi
// 006e086c  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006e0874  e821fef4ff           call 0x63069a
// 006e0879  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e087d  64890d00000000       mov dword ptr fs:[0], ecx
// 006e0884  59                   pop ecx
// 006e0885  5e                   pop esi
// 006e0886  83c410               add esp, 0x10
// 006e0889  c3                   ret 

struct CXTPDockingPaneClientContainer
{
    char pad[0x20];
    int field20;
    void sub_6e05e0();
    void sub_63069a();
    void func_6e0830();
};

void CXTPDockingPaneClientContainer::func_6e0830()
{
    if (this != 0)
        (this + 0x20)->sub_6e05e0();
    else
        ((CXTPDockingPaneClientContainer*)0x20)->sub_6e05e0();
    this->sub_63069a();
}
