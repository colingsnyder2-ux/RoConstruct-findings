// roc 2009-12 008f1930  unit: CXTPRibbonControlSystemButton  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f1930
//
// 008f1930  6aff                 push -1
// 008f1932  68e8639600           push 0x9663e8
// 008f1937  64a100000000         mov eax, dword ptr fs:[0]
// 008f193d  50                   push eax
// 008f193e  51                   push ecx
// 008f193f  56                   push esi
// 008f1940  a10052b600           mov eax, dword ptr [0xb65200]
// 008f1945  33c4                 xor eax, esp
// 008f1947  50                   push eax
// 008f1948  8d44240c             lea eax, [esp + 0xc]
// 008f194c  64a300000000         mov dword ptr fs:[0], eax
// 008f1952  8bf1                 mov esi, ecx
// 008f1954  89742408             mov dword ptr [esp + 8], esi
// 008f1958  e87391f4ff           call 0x83aad0
// 008f195d  6a18                 push 0x18
// 008f195f  8bce                 mov ecx, esi
// 008f1961  c744241800000000     mov dword ptr [esp + 0x18], 0
// 008f1969  c706c4eaa000         mov dword ptr [esi], 0xa0eac4
// 008f196f  c7462064eaa000       mov dword ptr [esi + 0x20], 0xa0ea64
// 008f1976  e8e546f0ff           call 0x7f6060
// 008f197b  8bc6                 mov eax, esi
// 008f197d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f1981  64890d00000000       mov dword ptr fs:[0], ecx
// 008f1988  59                   pop ecx
// 008f1989  5e                   pop esi
// 008f198a  83c410               add esp, 0x10
// 008f198d  c3                   ret 
// copied from an identical function in another client (function ??0CXTPRibbonControlSystemButton@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/Ribbon/XTPRibbonSystemButton.cpp