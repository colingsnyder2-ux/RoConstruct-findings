// roc 2009-12 008c14e0  unit: CXTPImageEditorPicker  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c14e0
//
// 008c14e0  56                   push esi
// 008c14e1  8bf1                 mov esi, ecx
// 008c14e3  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c14e6  50                   push eax
// 008c14e7  ff1564ca9800         call dword ptr [0x98ca64]
// 008c14ed  85c0                 test eax, eax
// 008c14ef  7426                 je 0x8c1517
// 008c14f1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c14f4  51                   push ecx
// 008c14f5  ff15bccb9800         call dword ptr [0x98cbbc]
// 008c14fb  50                   push eax
// 008c14fc  e82926f3ff           call 0x7f3b2a
// 008c1501  85c0                 test eax, eax
// 008c1503  7412                 je 0x8c1517
// 008c1505  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008c1509  8b16                 mov edx, dword ptr [esi]
// 008c150b  8b924c010000         mov edx, dword ptr [edx + 0x14c]
// 008c1511  51                   push ecx
// 008c1512  50                   push eax
// 008c1513  8bce                 mov ecx, esi
// 008c1515  ffd2                 call edx
// 008c1517  33c0                 xor eax, eax
// 008c1519  5e                   pop esi
// 008c151a  c20800               ret 8
// copied from an identical function in another client (function ?OnIdleUpdateCmdUI@CDlgToolBar@CXTPImageEditorDlg@@QAEJIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPImageEditor.cpp