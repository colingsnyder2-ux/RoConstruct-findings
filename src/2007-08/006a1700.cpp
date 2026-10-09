// from server: 28% by colin
// roc 2007-08 006a1700  unit: CXTPDockBar  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a1700
//
// 006a1700  6aff                 push -1
// 006a1702  6818257400           push 0x742518
// 006a1707  64a100000000         mov eax, dword ptr fs:[0]
// 006a170d  50                   push eax
// 006a170e  51                   push ecx
// 006a170f  56                   push esi
// 006a1710  a188518b00           mov eax, dword ptr [0x8b5188]
// 006a1715  33c4                 xor eax, esp
// 006a1717  50                   push eax
// 006a1718  8d44240c             lea eax, [esp + 0xc]
// 006a171c  64a300000000         mov dword ptr fs:[0], eax
// 006a1722  8bf1                 mov esi, ecx
// 006a1724  89742408             mov dword ptr [esp + 8], esi
// 006a1728  c706dc327d00         mov dword ptr [esi], 0x7d32dc
// 006a172e  8d4e58               lea ecx, [esi + 0x58]
// 006a1731  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006a1739  e82216f9ff           call 0x632d60
// 006a173e  8bce                 mov ecx, esi
// 006a1740  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 006a1748  e893eef8ff           call 0x6305e0
// 006a174d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a1751  64890d00000000       mov dword ptr fs:[0], ecx
// 006a1758  59                   pop ecx
// 006a1759  5e                   pop esi
// 006a175a  83c410               add esp, 0x10
// 006a175d  c3                   ret 

struct CXTPDockBar {
    void dtor_body();
};

extern "C" void __stdcall sub_632D60(void*);
extern "C" void __stdcall sub_6305E0(void*);

void CXTPDockBar::dtor_body()
{
    *(void**)this = (void*)0x7d32dc;
    sub_632D60((char*)this + 0x58);
    sub_6305E0(this);
}
