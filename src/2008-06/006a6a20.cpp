// from server: 100% by auto
// roc 2008-06 006a6a20  unit: CXTPEdit  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006a6a20
//
// 006a6a20  53                   push ebx
// 006a6a21  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006a6a25  56                   push esi
// 006a6a26  57                   push edi
// 006a6a27  68a8088500           push 0x8508a8
// 006a6a2c  89590c               mov dword ptr [ecx + 0xc], ebx
// 006a6a2f  bf05400080           mov edi, 0x80004005
// 006a6a34  ff15cc218000         call dword ptr [0x8021cc]
// 006a6a3a  8bf0                 mov esi, eax
// 006a6a3c  85f6                 test esi, esi
// 006a6a3e  7421                 je 0x6a6a61
// 006a6a40  6898088500           push 0x850898
// 006a6a45  56                   push esi
// 006a6a46  ff15c0218000         call dword ptr [0x8021c0]
// 006a6a4c  85c0                 test eax, eax
// 006a6a4e  740a                 je 0x6a6a5a
// 006a6a50  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006a6a54  51                   push ecx
// 006a6a55  53                   push ebx
// 006a6a56  ffd0                 call eax
// 006a6a58  8bf8                 mov edi, eax
// 006a6a5a  56                   push esi
// 006a6a5b  ff15a0218000         call dword ptr [0x8021a0]
// 006a6a61  8bc7                 mov eax, edi
// 006a6a63  5f                   pop edi
// 006a6a64  5e                   pop esi
// 006a6a65  5b                   pop ebx
// 006a6a66  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPControlComboBox.cpp (function ?ShellAutoComplete@CXTPControlComboBoxAutoCompleteWnd@@QAEJPAUHWND__@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlComboBox.cpp
