// roc 2009-12 0087eff0  unit: CXTPControlGalleryOffice2007Theme  size: 119 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0087eff0
//
// 0087eff0  6aff                 push -1
// 0087eff2  68f6049600           push 0x9604f6
// 0087eff7  64a100000000         mov eax, dword ptr fs:[0]
// 0087effd  50                   push eax
// 0087effe  51                   push ecx
// 0087efff  56                   push esi
// 0087f000  a10052b600           mov eax, dword ptr [0xb65200]
// 0087f005  33c4                 xor eax, esp
// 0087f007  50                   push eax
// 0087f008  8d44240c             lea eax, [esp + 0xc]
// 0087f00c  64a300000000         mov dword ptr fs:[0], eax
// 0087f012  8bf1                 mov esi, ecx
// 0087f014  89742408             mov dword ptr [esp + 8], esi
// 0087f018  c706b41fa000         mov dword ptr [esi], 0xa01fb4
// 0087f01e  8b8ec8050000         mov ecx, dword ptr [esi + 0x5c8]
// 0087f024  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0087f02c  e84f190600           call 0x8e0980
// 0087f031  8d8eb4050000         lea ecx, [esi + 0x5b4]
// 0087f037  c644241400           mov byte ptr [esp + 0x14], 0
// 0087f03c  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 0087f042  e8e901b9ff           call 0x40f230
// 0087f047  8bce                 mov ecx, esi
// 0087f049  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0087f051  e87a420000           call 0x8832d0
// 0087f056  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0087f05a  64890d00000000       mov dword ptr fs:[0], ecx
// 0087f061  59                   pop ecx
// 0087f062  5e                   pop esi
// 0087f063  83c410               add esp, 0x10
// 0087f066  c3                   ret 
// copied from an identical function in another client (function ??1CXTPOffice2007Theme@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\CommandBars\XTPOffice2007Theme.cpp