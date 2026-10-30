// roc 2009-12 00897130  unit: CXTPRibbonBar  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00897130
//
// 00897130  6aff                 push -1
// 00897132  6899869500           push 0x958699
// 00897137  64a100000000         mov eax, dword ptr fs:[0]
// 0089713d  50                   push eax
// 0089713e  51                   push ecx
// 0089713f  56                   push esi
// 00897140  a10052b600           mov eax, dword ptr [0xb65200]
// 00897145  33c4                 xor eax, esp
// 00897147  50                   push eax
// 00897148  8d44240c             lea eax, [esp + 0xc]
// 0089714c  64a300000000         mov dword ptr fs:[0], eax
// 00897152  8bf1                 mov esi, ecx
// 00897154  e8b7cbffff           call 0x893d10
// 00897159  8bce                 mov ecx, esi
// 0089715b  e870dbffff           call 0x894cd0
// 00897160  85c0                 test eax, eax
// 00897162  7451                 je 0x8971b5
// 00897164  8d4c2408             lea ecx, [esp + 8]
// 00897168  ff1574de9800         call dword ptr [0x98de74]
// 0089716e  8d442408             lea eax, [esp + 8]
// 00897172  50                   push eax
// 00897173  8bce                 mov ecx, esi
// 00897175  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0089717d  e80efff6ff           call 0x807090
// 00897182  8bc8                 mov ecx, eax
// 00897184  e8bfccf5ff           call 0x7f3e48
// 00897189  8d8e94020000         lea ecx, [esi + 0x294]
// 0089718f  ff1580de9800         call dword ptr [0x98de80]
// 00897195  50                   push eax
// 00897196  8d4c240c             lea ecx, [esp + 0xc]
// 0089719a  ff1584de9800         call dword ptr [0x98de84]
// 008971a0  85c0                 test eax, eax
// 008971a2  7407                 je 0x8971ab
// 008971a4  838ee800000001       or dword ptr [esi + 0xe8], 1
// 008971ab  8d4c2408             lea ecx, [esp + 8]
// 008971af  ff15c0de9800         call dword ptr [0x98dec0]
// 008971b5  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008971b9  64890d00000000       mov dword ptr fs:[0], ecx
// 008971c0  59                   pop ecx
// 008971c1  5e                   pop esi
// 008971c2  83c410               add esp, 0x10
// 008971c5  c3                   ret 
// copied from an identical function in another client (function ?RefreshSysButtons@CXTPRibbonBar@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonBar.cpp