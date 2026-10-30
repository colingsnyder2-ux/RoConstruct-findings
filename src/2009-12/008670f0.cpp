// roc 2009-12 008670f0  unit: CPropertyGridItemBrickColor  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008670f0
//
// 008670f0  6aff                 push -1
// 008670f2  686afd9500           push 0x95fd6a
// 008670f7  64a100000000         mov eax, dword ptr fs:[0]
// 008670fd  50                   push eax
// 008670fe  51                   push ecx
// 008670ff  56                   push esi
// 00867100  a10052b600           mov eax, dword ptr [0xb65200]
// 00867105  33c4                 xor eax, esp
// 00867107  50                   push eax
// 00867108  8d44240c             lea eax, [esp + 0xc]
// 0086710c  64a300000000         mov dword ptr fs:[0], eax
// 00867112  c744240800000000     mov dword ptr [esp + 8], 0
// 0086711a  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0086711e  8bce                 mov ecx, esi
// 00867120  ff1574de9800         call dword ptr [0x98de74]
// 00867126  8b442420             mov eax, dword ptr [esp + 0x20]
// 0086712a  8bc8                 mov ecx, eax
// 0086712c  c1e910               shr ecx, 0x10
// 0086712f  0fb6d1               movzx edx, cl
// 00867132  52                   push edx
// 00867133  8bc8                 mov ecx, eax
// 00867135  c1e908               shr ecx, 8
// 00867138  0fb6d1               movzx edx, cl
// 0086713b  52                   push edx
// 0086713c  0fb6c0               movzx eax, al
// 0086713f  50                   push eax
// 00867140  6894ed9f00           push 0x9fed94
// 00867145  56                   push esi
// 00867146  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0086714e  c744241c01000000     mov dword ptr [esp + 0x1c], 1
// 00867156  ff157cde9800         call dword ptr [0x98de7c]
// 0086715c  83c414               add esp, 0x14
// 0086715f  8bc6                 mov eax, esi
// 00867161  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00867165  64890d00000000       mov dword ptr fs:[0], ecx
// 0086716c  59                   pop ecx
// 0086716d  5e                   pop esi
// 0086716e  83c410               add esp, 0x10
// 00867171  c3                   ret 
// copied from an identical function in another client (function ?RGBToString@CXTPPropertyGridItemColor@@SA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\PropertyGrid\XTPPropertyGridItemColor.cpp