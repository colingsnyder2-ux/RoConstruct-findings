// roc 2009-06 0079c2e0  unit: CXTPNewToolbarDlg  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0079c2e0
//
// 0079c2e0  51                   push ecx
// 0079c2e1  56                   push esi
// 0079c2e2  8d442404             lea eax, [esp + 4]
// 0079c2e6  50                   push eax
// 0079c2e7  6a04                 push 4
// 0079c2e9  6a00                 push 0
// 0079c2eb  6870c27900           push 0x79c270
// 0079c2f0  8bf1                 mov esi, ecx
// 0079c2f2  6a00                 push 0
// 0079c2f4  6a00                 push 0
// 0079c2f6  c70600000000         mov dword ptr [esi], 0
// 0079c2fc  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0079c303  ff1590e38900         call dword ptr [0x89e390]
// 0079c309  894608               mov dword ptr [esi + 8], eax
// 0079c30c  85c0                 test eax, eax
// 0079c30e  7413                 je 0x79c323
// 0079c310  6aff                 push -1
// 0079c312  50                   push eax
// 0079c313  ff1500e38900         call dword ptr [0x89e300]
// 0079c319  8b4e08               mov ecx, dword ptr [esi + 8]
// 0079c31c  51                   push ecx
// 0079c31d  ff1510e38900         call dword ptr [0x89e310]
// 0079c323  5e                   pop esi
// 0079c324  59                   pop ecx
// 0079c325  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StartThread@CXTPSoundManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
