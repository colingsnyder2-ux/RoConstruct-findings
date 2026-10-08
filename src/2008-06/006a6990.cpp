// from server: 100% by auto
// roc 2008-06 006a6990  unit: CXTPEdit  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6990
//
// 006a6990  83ec1c               sub esp, 0x1c
// 006a6993  57                   push edi
// 006a6994  8bf9                 mov edi, ecx
// 006a6996  837f0800             cmp dword ptr [edi + 8], 0
// 006a699a  7509                 jne 0x6a69a5
// 006a699c  33c0                 xor eax, eax
// 006a699e  5f                   pop edi
// 006a699f  83c41c               add esp, 0x1c
// 006a69a2  c20800               ret 8
// 006a69a5  53                   push ebx
// 006a69a6  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 006a69aa  83fb26               cmp ebx, 0x26
// 006a69ad  740f                 je 0x6a69be
// 006a69af  83fb28               cmp ebx, 0x28
// 006a69b2  740a                 je 0x6a69be
// 006a69b4  83fb22               cmp ebx, 0x22
// 006a69b7  7405                 je 0x6a69be
// 006a69b9  83fb21               cmp ebx, 0x21
// 006a69bc  750d                 jne 0x6a69cb
// 006a69be  6a12                 push 0x12
// 006a69c0  ff15a42d8000         call dword ptr [0x802da4]
// 006a69c6  6685c0               test ax, ax
// 006a69c9  7d0a                 jge 0x6a69d5
// 006a69cb  5b                   pop ebx
// 006a69cc  33c0                 xor eax, eax
// 006a69ce  5f                   pop edi
// 006a69cf  83c41c               add esp, 0x1c
// 006a69d2  c20800               ret 8
// 006a69d5  8b4708               mov eax, dword ptr [edi + 8]
// 006a69d8  56                   push esi
// 006a69d9  8b35fc2d8000         mov esi, dword ptr [0x802dfc]
// 006a69df  6a05                 push 5
// 006a69e1  50                   push eax
// 006a69e2  ffd6                 call esi
// 006a69e4  6a01                 push 1
// 006a69e6  50                   push eax
// 006a69e7  ffd6                 call esi
// 006a69e9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006a69ed  8d54240c             lea edx, [esp + 0xc]
// 006a69f1  8944240c             mov dword ptr [esp + 0xc], eax
// 006a69f5  8b4708               mov eax, dword ptr [edi + 8]
// 006a69f8  52                   push edx
// 006a69f9  50                   push eax
// 006a69fa  c744241800010000     mov dword ptr [esp + 0x18], 0x100
// 006a6a02  895c241c             mov dword ptr [esp + 0x1c], ebx
// 006a6a06  894c2420             mov dword ptr [esp + 0x20], ecx
// 006a6a0a  ff156c2c8000         call dword ptr [0x802c6c]
// 006a6a10  f7d8                 neg eax
// 006a6a12  5e                   pop esi
// 006a6a13  1bc0                 sbb eax, eax
// 006a6a15  5b                   pop ebx
// 006a6a16  f7d8                 neg eax
// 006a6a18  5f                   pop edi
// 006a6a19  83c41c               add esp, 0x1c
// 006a6a1c  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?IsDialogCode@CXTPControlComboBoxAutoCompleteWnd@@QAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
