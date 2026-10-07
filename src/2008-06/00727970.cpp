// roc 2008-06 00727970  unit: CXTPRibbonBar  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00727970
//
// 00727970  51                   push ecx
// 00727971  56                   push esi
// 00727972  8d442404             lea eax, [esp + 4]
// 00727976  50                   push eax
// 00727977  6a04                 push 4
// 00727979  6a00                 push 0
// 0072797b  6800797200           push 0x727900
// 00727980  8bf1                 mov esi, ecx
// 00727982  6a00                 push 0
// 00727984  6a00                 push 0
// 00727986  c70600000000         mov dword ptr [esi], 0
// 0072798c  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00727993  ff1530238000         call dword ptr [0x802330]
// 00727999  894608               mov dword ptr [esi + 8], eax
// 0072799c  85c0                 test eax, eax
// 0072799e  7413                 je 0x7279b3
// 007279a0  6aff                 push -1
// 007279a2  50                   push eax
// 007279a3  ff1594228000         call dword ptr [0x802294]
// 007279a9  8b4e08               mov ecx, dword ptr [esi + 8]
// 007279ac  51                   push ecx
// 007279ad  ff152c238000         call dword ptr [0x80232c]
// 007279b3  5e                   pop esi
// 007279b4  59                   pop ecx
// 007279b5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StartThread@CXTPSoundManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
