// from server: 100% by auto
// roc 2011-06 00816380  unit: CXTPEdit  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00816380
//
// 00816380  53                   push ebx
// 00816381  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00816385  56                   push esi
// 00816386  57                   push edi
// 00816387  683c1cac00           push 0xac1c3c
// 0081638c  89590c               mov dword ptr [ecx + 0xc], ebx
// 0081638f  bf05400080           mov edi, 0x80004005
// 00816394  ff152403a400         call dword ptr [0xa40324]
// 0081639a  8bf0                 mov esi, eax
// 0081639c  85f6                 test esi, esi
// 0081639e  7421                 je 0x8163c1
// 008163a0  682c1cac00           push 0xac1c2c
// 008163a5  56                   push esi
// 008163a6  ff156c03a400         call dword ptr [0xa4036c]
// 008163ac  85c0                 test eax, eax
// 008163ae  740a                 je 0x8163ba
// 008163b0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008163b4  51                   push ecx
// 008163b5  53                   push ebx
// 008163b6  ffd0                 call eax
// 008163b8  8bf8                 mov edi, eax
// 008163ba  56                   push esi
// 008163bb  ff15b803a400         call dword ptr [0xa403b8]
// 008163c1  8bc7                 mov eax, edi
// 008163c3  5f                   pop edi
// 008163c4  5e                   pop esi
// 008163c5  5b                   pop ebx
// 008163c6  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?ShellAutoComplete@CXTPControlComboBoxAutoCompleteWnd@@QAEJPAUHWND__@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
