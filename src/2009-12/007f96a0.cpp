// roc 2009-12 007f96a0  unit: CXTPControlComboBoxPopupBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f96a0
//
// 007f96a0  56                   push esi
// 007f96a1  8bf1                 mov esi, ecx
// 007f96a3  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 007f96a9  85c9                 test ecx, ecx
// 007f96ab  7515                 jne 0x7f96c2
// 007f96ad  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007f96b1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 007f96b5  50                   push eax
// 007f96b6  51                   push ecx
// 007f96b7  8bce                 mov ecx, esi
// 007f96b9  e8f2e90000           call 0x8080b0
// 007f96be  5e                   pop esi
// 007f96bf  c20800               ret 8
// 007f96c2  8b442408             mov eax, dword ptr [esp + 8]
// 007f96c6  83f81b               cmp eax, 0x1b
// 007f96c9  7523                 jne 0x7f96ee
// 007f96cb  8b11                 mov edx, dword ptr [ecx]
// 007f96cd  8b4274               mov eax, dword ptr [edx + 0x74]
// 007f96d0  ffd0                 call eax
// 007f96d2  85c0                 test eax, eax
// 007f96d4  7406                 je 0x7f96dc
// 007f96d6  33c0                 xor eax, eax
// 007f96d8  5e                   pop esi
// 007f96d9  c20800               ret 8
// 007f96dc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f96e0  51                   push ecx
// 007f96e1  6a1b                 push 0x1b
// 007f96e3  8bce                 mov ecx, esi
// 007f96e5  e8c6e90000           call 0x8080b0
// 007f96ea  5e                   pop esi
// 007f96eb  c20800               ret 8
// 007f96ee  83f809               cmp eax, 9
// 007f96f1  74e3                 je 0x7f96d6
// 007f96f3  8b16                 mov edx, dword ptr [esi]
// 007f96f5  57                   push edi
// 007f96f6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 007f96fa  57                   push edi
// 007f96fb  50                   push eax
// 007f96fc  8b8228020000         mov eax, dword ptr [edx + 0x228]
// 007f9702  51                   push ecx
// 007f9703  8bce                 mov ecx, esi
// 007f9705  ffd0                 call eax
// 007f9707  5f                   pop edi
// 007f9708  5e                   pop esi
// 007f9709  c20800               ret 8
// copied from an identical function in another client (function ?OnHookKeyDown@CXTPControlComboBoxPopupBar@@UAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp