// roc 2008-06 006dcf50  unit: CRobloxTreeCtrl  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dcf50
//
// 006dcf50  53                   push ebx
// 006dcf51  33c0                 xor eax, eax
// 006dcf53  39442408             cmp dword ptr [esp + 8], eax
// 006dcf57  55                   push ebp
// 006dcf58  0f95c0               setne al
// 006dcf5b  56                   push esi
// 006dcf5c  57                   push edi
// 006dcf5d  6a00                 push 0
// 006dcf5f  8bf9                 mov edi, ecx
// 006dcf61  6a00                 push 0
// 006dcf63  680a110000           push 0x110a
// 006dcf68  8be8                 mov ebp, eax
// 006dcf6a  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dcf6d  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006dcf70  8bdd                 mov ebx, ebp
// 006dcf72  f7db                 neg ebx
// 006dcf74  1bdb                 sbb ebx, ebx
// 006dcf76  51                   push ecx
// 006dcf77  83e302               and ebx, 2
// 006dcf7a  ff15142e8000         call dword ptr [0x802e14]
// 006dcf80  8bf0                 mov esi, eax
// 006dcf82  85f6                 test esi, esi
// 006dcf84  7440                 je 0x6dcfc6
// 006dcf86  3b742418             cmp esi, dword ptr [esp + 0x18]
// 006dcf8a  741f                 je 0x6dcfab
// 006dcf8c  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006dcf8f  6a02                 push 2
// 006dcf91  56                   push esi
// 006dcf92  e885f30d00           call 0x7bc31c
// 006dcf97  d1e8                 shr eax, 1
// 006dcf99  83e001               and eax, 1
// 006dcf9c  3bc5                 cmp eax, ebp
// 006dcf9e  740b                 je 0x6dcfab
// 006dcfa0  6a02                 push 2
// 006dcfa2  53                   push ebx
// 006dcfa3  56                   push esi
// 006dcfa4  8bcf                 mov ecx, edi
// 006dcfa6  e855faffff           call 0x6dca00
// 006dcfab  8b4734               mov eax, dword ptr [edi + 0x34]
// 006dcfae  8b5020               mov edx, dword ptr [eax + 0x20]
// 006dcfb1  56                   push esi
// 006dcfb2  6a06                 push 6
// 006dcfb4  680a110000           push 0x110a
// 006dcfb9  52                   push edx
// 006dcfba  ff15142e8000         call dword ptr [0x802e14]
// 006dcfc0  8bf0                 mov esi, eax
// 006dcfc2  85f6                 test esi, esi
// 006dcfc4  75c0                 jne 0x6dcf86
// 006dcfc6  5f                   pop edi
// 006dcfc7  5e                   pop esi
// 006dcfc8  5d                   pop ebp
// 006dcfc9  5b                   pop ebx
// 006dcfca  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SelectAllIgnore@CXTTreeBase@@MAEXHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
