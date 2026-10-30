// from server: 100% by auto
// roc 2012-06 0098e570  unit: CXTPEdit  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e570
//
// 0098e570  83ec1c               sub esp, 0x1c
// 0098e573  57                   push edi
// 0098e574  8bf9                 mov edi, ecx
// 0098e576  837f0800             cmp dword ptr [edi + 8], 0
// 0098e57a  7509                 jne 0x98e585
// 0098e57c  33c0                 xor eax, eax
// 0098e57e  5f                   pop edi
// 0098e57f  83c41c               add esp, 0x1c
// 0098e582  c20800               ret 8
// 0098e585  53                   push ebx
// 0098e586  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0098e58a  83fb26               cmp ebx, 0x26
// 0098e58d  740f                 je 0x98e59e
// 0098e58f  83fb28               cmp ebx, 0x28
// 0098e592  740a                 je 0x98e59e
// 0098e594  83fb22               cmp ebx, 0x22
// 0098e597  7405                 je 0x98e59e
// 0098e599  83fb21               cmp ebx, 0x21
// 0098e59c  750d                 jne 0x98e5ab
// 0098e59e  6a12                 push 0x12
// 0098e5a0  ff15843ab200         call dword ptr [0xb23a84]
// 0098e5a6  6685c0               test ax, ax
// 0098e5a9  7d0a                 jge 0x98e5b5
// 0098e5ab  5b                   pop ebx
// 0098e5ac  33c0                 xor eax, eax
// 0098e5ae  5f                   pop edi
// 0098e5af  83c41c               add esp, 0x1c
// 0098e5b2  c20800               ret 8
// 0098e5b5  8b4708               mov eax, dword ptr [edi + 8]
// 0098e5b8  56                   push esi
// 0098e5b9  8b35403bb200         mov esi, dword ptr [0xb23b40]
// 0098e5bf  6a05                 push 5
// 0098e5c1  50                   push eax
// 0098e5c2  ffd6                 call esi
// 0098e5c4  6a01                 push 1
// 0098e5c6  50                   push eax
// 0098e5c7  ffd6                 call esi
// 0098e5c9  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0098e5cd  8d54240c             lea edx, [esp + 0xc]
// 0098e5d1  8944240c             mov dword ptr [esp + 0xc], eax
// 0098e5d5  8b4708               mov eax, dword ptr [edi + 8]
// 0098e5d8  52                   push edx
// 0098e5d9  50                   push eax
// 0098e5da  c744241800010000     mov dword ptr [esp + 0x18], 0x100
// 0098e5e2  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0098e5e6  894c2420             mov dword ptr [esp + 0x20], ecx
// 0098e5ea  ff15dc3cb200         call dword ptr [0xb23cdc]
// 0098e5f0  f7d8                 neg eax
// 0098e5f2  5e                   pop esi
// 0098e5f3  1bc0                 sbb eax, eax
// 0098e5f5  5b                   pop ebx
// 0098e5f6  f7d8                 neg eax
// 0098e5f8  5f                   pop edi
// 0098e5f9  83c41c               add esp, 0x1c
// 0098e5fc  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?IsDialogCode@CXTPControlComboBoxAutoCompleteWnd@@QAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
