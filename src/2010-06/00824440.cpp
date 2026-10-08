// roc 2010-06 00824440  unit: CXTPNewToolbarDlg  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00824440
//
// 00824440  51                   push ecx
// 00824441  56                   push esi
// 00824442  8d442404             lea eax, [esp + 4]
// 00824446  50                   push eax
// 00824447  6a04                 push 4
// 00824449  6a00                 push 0
// 0082444b  68d0438200           push 0x8243d0
// 00824450  8bf1                 mov esi, ecx
// 00824452  6a00                 push 0
// 00824454  6a00                 push 0
// 00824456  c70600000000         mov dword ptr [esi], 0
// 0082445c  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00824463  ff1540a29e00         call dword ptr [0x9ea240]
// 00824469  894608               mov dword ptr [esi + 8], eax
// 0082446c  85c0                 test eax, eax
// 0082446e  7413                 je 0x824483
// 00824470  6aff                 push -1
// 00824472  50                   push eax
// 00824473  ff15f0a19e00         call dword ptr [0x9ea1f0]
// 00824479  8b4e08               mov ecx, dword ptr [esi + 8]
// 0082447c  51                   push ecx
// 0082447d  ff1544a29e00         call dword ptr [0x9ea244]
// 00824483  5e                   pop esi
// 00824484  59                   pop ecx
// 00824485  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StartThread@CXTPSoundManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
