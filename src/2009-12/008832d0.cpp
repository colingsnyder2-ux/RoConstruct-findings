// roc 2009-12 008832d0  unit: CXTPOffice2007Theme  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008832d0
//
// 008832d0  6aff                 push -1
// 008832d2  6878099600           push 0x960978
// 008832d7  64a100000000         mov eax, dword ptr fs:[0]
// 008832dd  50                   push eax
// 008832de  51                   push ecx
// 008832df  56                   push esi
// 008832e0  a10052b600           mov eax, dword ptr [0xb65200]
// 008832e5  33c4                 xor eax, esp
// 008832e7  50                   push eax
// 008832e8  8d44240c             lea eax, [esp + 0xc]
// 008832ec  64a300000000         mov dword ptr fs:[0], eax
// 008832f2  8bf1                 mov esi, ecx
// 008832f4  89742408             mov dword ptr [esp + 8], esi
// 008832f8  c7063428a000         mov dword ptr [esi], 0xa02834
// 008832fe  8d8e48050000         lea ecx, [esi + 0x548]
// 00883304  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0088330c  e8e10cf7ff           call 0x7f3ff2
// 00883311  8bce                 mov ecx, esi
// 00883313  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0088331b  e8d00af8ff           call 0x803df0
// 00883320  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00883324  64890d00000000       mov dword ptr fs:[0], ecx
// 0088332b  59                   pop ecx
// 0088332c  5e                   pop esi
// 0088332d  83c410               add esp, 0x10
// 00883330  c3                   ret 
// copied from an identical function in another client (function ??1CXTPOffice2003Theme@XTPPaintThemes@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp