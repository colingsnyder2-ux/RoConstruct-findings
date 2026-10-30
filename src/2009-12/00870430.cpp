// roc 2009-12 00870430  unit: CXTPNewToolbarDlg  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00870430
//
// 00870430  51                   push ecx
// 00870431  56                   push esi
// 00870432  8d442404             lea eax, [esp + 4]
// 00870436  50                   push eax
// 00870437  6a04                 push 4
// 00870439  6a00                 push 0
// 0087043b  68c0038700           push 0x8703c0
// 00870440  8bf1                 mov esi, ecx
// 00870442  6a00                 push 0
// 00870444  6a00                 push 0
// 00870446  c70600000000         mov dword ptr [esi], 0
// 0087044c  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00870453  ff154cb39800         call dword ptr [0x98b34c]
// 00870459  894608               mov dword ptr [esi + 8], eax
// 0087045c  85c0                 test eax, eax
// 0087045e  7413                 je 0x870473
// 00870460  6aff                 push -1
// 00870462  50                   push eax
// 00870463  ff159cb39800         call dword ptr [0x98b39c]
// 00870469  8b4e08               mov ecx, dword ptr [esi + 8]
// 0087046c  51                   push ecx
// 0087046d  ff1548b39800         call dword ptr [0x98b348]
// 00870473  5e                   pop esi
// 00870474  59                   pop ecx
// 00870475  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPSoundManager.cpp (function ?StartThread@CXTPSoundManager@@AAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPSoundManager.cpp
