// from server: 100% by auto
// roc 2007-08 00635c00  unit: CXTPEdit  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635c00
//
// 00635c00  83ec1c               sub esp, 0x1c
// 00635c03  57                   push edi
// 00635c04  8bf9                 mov edi, ecx
// 00635c06  837f0800             cmp dword ptr [edi + 8], 0
// 00635c0a  7509                 jne 0x635c15
// 00635c0c  33c0                 xor eax, eax
// 00635c0e  5f                   pop edi
// 00635c0f  83c41c               add esp, 0x1c
// 00635c12  c20800               ret 8
// 00635c15  53                   push ebx
// 00635c16  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00635c1a  83fb26               cmp ebx, 0x26
// 00635c1d  740f                 je 0x635c2e
// 00635c1f  83fb28               cmp ebx, 0x28
// 00635c22  740a                 je 0x635c2e
// 00635c24  83fb22               cmp ebx, 0x22
// 00635c27  7405                 je 0x635c2e
// 00635c29  83fb21               cmp ebx, 0x21
// 00635c2c  750d                 jne 0x635c3b
// 00635c2e  6a12                 push 0x12
// 00635c30  ff154cec7700         call dword ptr [0x77ec4c]
// 00635c36  6685c0               test ax, ax
// 00635c39  7d0a                 jge 0x635c45
// 00635c3b  5b                   pop ebx
// 00635c3c  33c0                 xor eax, eax
// 00635c3e  5f                   pop edi
// 00635c3f  83c41c               add esp, 0x1c
// 00635c42  c20800               ret 8
// 00635c45  8b4708               mov eax, dword ptr [edi + 8]
// 00635c48  56                   push esi
// 00635c49  8b35f4eb7700         mov esi, dword ptr [0x77ebf4]
// 00635c4f  6a05                 push 5
// 00635c51  50                   push eax
// 00635c52  ffd6                 call esi
// 00635c54  6a01                 push 1
// 00635c56  50                   push eax
// 00635c57  ffd6                 call esi
// 00635c59  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00635c5d  8d54240c             lea edx, [esp + 0xc]
// 00635c61  8944240c             mov dword ptr [esp + 0xc], eax
// 00635c65  8b4708               mov eax, dword ptr [edi + 8]
// 00635c68  52                   push edx
// 00635c69  50                   push eax
// 00635c6a  c744241800010000     mov dword ptr [esp + 0x18], 0x100
// 00635c72  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00635c76  894c2420             mov dword ptr [esp + 0x20], ecx
// 00635c7a  ff1524ee7700         call dword ptr [0x77ee24]
// 00635c80  f7d8                 neg eax
// 00635c82  5e                   pop esi
// 00635c83  1bc0                 sbb eax, eax
// 00635c85  5b                   pop ebx
// 00635c86  f7d8                 neg eax
// 00635c88  5f                   pop edi
// 00635c89  83c41c               add esp, 0x1c
// 00635c8c  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?IsDialogCode@CXTPControlComboBoxAutoCompleteWnd@@QAEHIJ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
