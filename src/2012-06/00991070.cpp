// from server: 100% by auto
// roc 2012-06 00991070  unit: CXTPControlEditCtrl  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00991070
//
// 00991070  56                   push esi
// 00991071  8b742408             mov esi, dword ptr [esp + 8]
// 00991075  57                   push edi
// 00991076  8bf9                 mov edi, ecx
// 00991078  397708               cmp dword ptr [edi + 8], esi
// 0099107b  7443                 je 0x9910c0
// 0099107d  68704e9800           push 0x984e70
// 00991082  b958a0e500           mov ecx, 0xe5a058
// 00991087  e8f2841000           call 0xa9957e
// 0099108c  85f6                 test esi, esi
// 0099108e  7419                 je 0x9910a9
// 00991090  85c0                 test eax, eax
// 00991092  7505                 jne 0x991099
// 00991094  e82713ffff           call 0x9823c0
// 00991099  56                   push esi
// 0099109a  8bc8                 mov ecx, eax
// 0099109c  e86f820600           call 0x9f9310
// 009910a1  897708               mov dword ptr [edi + 8], esi
// 009910a4  5f                   pop edi
// 009910a5  5e                   pop esi
// 009910a6  c20400               ret 4
// 009910a9  85c0                 test eax, eax
// 009910ab  7505                 jne 0x9910b2
// 009910ad  e80e13ffff           call 0x9823c0
// 009910b2  8b4f08               mov ecx, dword ptr [edi + 8]
// 009910b5  51                   push ecx
// 009910b6  8bc8                 mov ecx, eax
// 009910b8  e8d37c0600           call 0x9f8d90
// 009910bd  897708               mov dword ptr [edi + 8], esi
// 009910c0  5f                   pop edi
// 009910c1  5e                   pop esi
// 009910c2  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPControlComboBox.cpp (function ?SetAutoCompeteHandle@CXTPControlComboBoxAutoCompleteWnd@@AAEXPAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPControlComboBox.cpp
