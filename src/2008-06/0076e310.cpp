// roc 2008-06 0076e310  unit: CXTPImageEditorPicker  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0076e310
//
// 0076e310  56                   push esi
// 0076e311  8bf1                 mov esi, ecx
// 0076e313  8b4620               mov eax, dword ptr [esi + 0x20]
// 0076e316  50                   push eax
// 0076e317  ff153c2d8000         call dword ptr [0x802d3c]
// 0076e31d  85c0                 test eax, eax
// 0076e31f  7426                 je 0x76e347
// 0076e321  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0076e324  51                   push ecx
// 0076e325  ff15f82d8000         call dword ptr [0x802df8]
// 0076e32b  50                   push eax
// 0076e32c  e8ad28f3ff           call 0x6a0bde
// 0076e331  85c0                 test eax, eax
// 0076e333  7412                 je 0x76e347
// 0076e335  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0076e339  8b16                 mov edx, dword ptr [esi]
// 0076e33b  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 0076e341  51                   push ecx
// 0076e342  50                   push eax
// 0076e343  8bce                 mov ecx, esi
// 0076e345  ffd2                 call edx
// 0076e347  33c0                 xor eax, eax
// 0076e349  5e                   pop esi
// 0076e34a  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPImageEditor.cpp (function ?OnIdleUpdateCmdUI@CDlgToolBar@CXTPImageEditorDlg@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPImageEditor.cpp
