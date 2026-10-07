// roc 2012-06 0098e600  unit: CXTPEdit  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0098e600
//
// 0098e600  53                   push ebx
// 0098e601  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0098e605  56                   push esi
// 0098e606  57                   push edi
// 0098e607  6824d3c000           push 0xc0d324
// 0098e60c  89590c               mov dword ptr [ecx + 0xc], ebx
// 0098e60f  bf05400080           mov edi, 0x80004005
// 0098e614  ff154822b200         call dword ptr [0xb22248]
// 0098e61a  8bf0                 mov esi, eax
// 0098e61c  85f6                 test esi, esi
// 0098e61e  7421                 je 0x98e641
// 0098e620  6814d3c000           push 0xc0d314
// 0098e625  56                   push esi
// 0098e626  ff15b021b200         call dword ptr [0xb221b0]
// 0098e62c  85c0                 test eax, eax
// 0098e62e  740a                 je 0x98e63a
// 0098e630  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0098e634  51                   push ecx
// 0098e635  53                   push ebx
// 0098e636  ffd0                 call eax
// 0098e638  8bf8                 mov edi, eax
// 0098e63a  56                   push esi
// 0098e63b  ff158c21b200         call dword ptr [0xb2218c]
// 0098e641  8bc7                 mov eax, edi
// 0098e643  5f                   pop edi
// 0098e644  5e                   pop esi
// 0098e645  5b                   pop ebx
// 0098e646  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?ShellAutoComplete@CXTPControlComboBoxAutoCompleteWnd@@QAEJPAUHWND__@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
