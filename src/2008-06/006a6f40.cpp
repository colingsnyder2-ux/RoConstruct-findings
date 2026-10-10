// roc 2008-06 006a6f40  unit: CXTPControlComboBoxPopupBar  size: 108 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6f40
//
// 006a6f40  56                   push esi
// 006a6f41  8bf1                 mov esi, ecx
// 006a6f43  8b8e80010000         mov ecx, dword ptr [esi + 0x180]
// 006a6f49  85c9                 test ecx, ecx
// 006a6f4b  7515                 jne 0x6a6f62
// 006a6f4d  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006a6f51  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a6f55  50                   push eax
// 006a6f56  51                   push ecx
// 006a6f57  8bce                 mov ecx, esi
// 006a6f59  e8621a0100           call 0x6b89c0
// 006a6f5e  5e                   pop esi
// 006a6f5f  c20800               ret 8
// 006a6f62  8b442408             mov eax, dword ptr [esp + 8]
// 006a6f66  83f81b               cmp eax, 0x1b
// 006a6f69  7523                 jne 0x6a6f8e
// 006a6f6b  8b11                 mov edx, dword ptr [ecx]
// 006a6f6d  8b4274               mov eax, dword ptr [edx + 0x74]
// 006a6f70  ffd0                 call eax
// 006a6f72  85c0                 test eax, eax
// 006a6f74  7406                 je 0x6a6f7c
// 006a6f76  33c0                 xor eax, eax
// 006a6f78  5e                   pop esi
// 006a6f79  c20800               ret 8
// 006a6f7c  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006a6f80  51                   push ecx
// 006a6f81  6a1b                 push 0x1b
// 006a6f83  8bce                 mov ecx, esi
// 006a6f85  e8361a0100           call 0x6b89c0
// 006a6f8a  5e                   pop esi
// 006a6f8b  c20800               ret 8
// 006a6f8e  83f809               cmp eax, 9
// 006a6f91  74e3                 je 0x6a6f76
// 006a6f93  8b16                 mov edx, dword ptr [esi]
// 006a6f95  57                   push edi
// 006a6f96  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006a6f9a  57                   push edi
// 006a6f9b  50                   push eax
// 006a6f9c  8b8228020000         mov eax, dword ptr [edx + 0x228]
// 006a6fa2  51                   push ecx
// 006a6fa3  8bce                 mov ecx, esi
// 006a6fa5  ffd0                 call eax
// 006a6fa7  5f                   pop edi
// 006a6fa8  5e                   pop esi
// 006a6fa9  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlComboBox.cpp (function ?OnHookKeyDown@CXTPControlComboBoxPopupBar@@UAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlComboBox.cpp
