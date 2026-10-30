// from server: 100% by auto
// roc 2007-08 00635c90  unit: CXTPEdit  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00635c90
//
// 00635c90  53                   push ebx
// 00635c91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00635c95  56                   push esi
// 00635c96  57                   push edi
// 00635c97  6818557c00           push 0x7c5518
// 00635c9c  89590c               mov dword ptr [ecx + 0xc], ebx
// 00635c9f  bf05400080           mov edi, 0x80004005
// 00635ca4  ff157cd27700         call dword ptr [0x77d27c]
// 00635caa  8bf0                 mov esi, eax
// 00635cac  85f6                 test esi, esi
// 00635cae  7421                 je 0x635cd1
// 00635cb0  6808557c00           push 0x7c5508
// 00635cb5  56                   push esi
// 00635cb6  ff1588d27700         call dword ptr [0x77d288]
// 00635cbc  85c0                 test eax, eax
// 00635cbe  740a                 je 0x635cca
// 00635cc0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00635cc4  51                   push ecx
// 00635cc5  53                   push ebx
// 00635cc6  ffd0                 call eax
// 00635cc8  8bf8                 mov edi, eax
// 00635cca  56                   push esi
// 00635ccb  ff15dcd27700         call dword ptr [0x77d2dc]
// 00635cd1  8bc7                 mov eax, edi
// 00635cd3  5f                   pop edi
// 00635cd4  5e                   pop esi
// 00635cd5  5b                   pop ebx
// 00635cd6  c20800               ret 8
// library xtp-11.2.2-vc8/Source\CommandBars\XTPControlComboBox.cpp (function ?ShellAutoComplete@CXTPControlComboBoxAutoCompleteWnd@@QAEJPAUHWND__@@K@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControlComboBox.cpp
