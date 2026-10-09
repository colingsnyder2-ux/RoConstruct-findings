// from server: 22% by colin
// roc 2007-08 00699730  unit: CXTPPropertyGridItem  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00699730
//
// 00699730  6aff                 push -1
// 00699732  68f8797600           push 0x7679f8
// 00699737  64a100000000         mov eax, dword ptr fs:[0]
// 0069973d  50                   push eax
// 0069973e  51                   push ecx
// 0069973f  56                   push esi
// 00699740  a188518b00           mov eax, dword ptr [0x8b5188]
// 00699745  33c4                 xor eax, esp
// 00699747  50                   push eax
// 00699748  8d44240c             lea eax, [esp + 0xc]
// 0069974c  64a300000000         mov dword ptr fs:[0], eax
// 00699752  8bf1                 mov esi, ecx
// 00699754  89742408             mov dword ptr [esp + 8], esi
// 00699758  8d4e20               lea ecx, [esi + 0x20]
// 0069975b  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00699763  e818fbffff           call 0x699280
// 00699768  8bce                 mov ecx, esi
// 0069976a  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00699772  e8236ff9ff           call 0x63069a
// 00699777  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0069977b  64890d00000000       mov dword ptr fs:[0], ecx
// 00699782  59                   pop ecx
// 00699783  5e                   pop esi
// 00699784  83c410               add esp, 0x10
// 00699787  c3                   ret 

struct CXTPPropertyGridItem
{
    char pad[0x20];
    void sub_699280();
    void sub_63069A();
    void dtor();
};

void CXTPPropertyGridItem::dtor()
{
    ((CXTPPropertyGridItem*)((char*)this + 0x20))->sub_699280();
    this->sub_63069A();
}
