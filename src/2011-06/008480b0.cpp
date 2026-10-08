// from server: 100% by auto
// roc 2011-06 008480b0  unit: CRobloxTreeCtrl  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008480b0
//
// 008480b0  53                   push ebx
// 008480b1  33c0                 xor eax, eax
// 008480b3  39442408             cmp dword ptr [esp + 8], eax
// 008480b7  55                   push ebp
// 008480b8  0f95c0               setne al
// 008480bb  56                   push esi
// 008480bc  57                   push edi
// 008480bd  6a00                 push 0
// 008480bf  8bf9                 mov edi, ecx
// 008480c1  6a00                 push 0
// 008480c3  680a110000           push 0x110a
// 008480c8  8be8                 mov ebp, eax
// 008480ca  8b4734               mov eax, dword ptr [edi + 0x34]
// 008480cd  8b4820               mov ecx, dword ptr [eax + 0x20]
// 008480d0  8bdd                 mov ebx, ebp
// 008480d2  f7db                 neg ebx
// 008480d4  1bdb                 sbb ebx, ebx
// 008480d6  51                   push ecx
// 008480d7  83e302               and ebx, 2
// 008480da  ff15c019a400         call dword ptr [0xa419c0]
// 008480e0  8bf0                 mov esi, eax
// 008480e2  85f6                 test esi, esi
// 008480e4  7440                 je 0x848126
// 008480e6  3b742418             cmp esi, dword ptr [esp + 0x18]
// 008480ea  741f                 je 0x84810b
// 008480ec  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 008480ef  6a02                 push 2
// 008480f1  56                   push esi
// 008480f2  e861471800           call 0x9cc858
// 008480f7  d1e8                 shr eax, 1
// 008480f9  83e001               and eax, 1
// 008480fc  3bc5                 cmp eax, ebp
// 008480fe  740b                 je 0x84810b
// 00848100  6a02                 push 2
// 00848102  53                   push ebx
// 00848103  56                   push esi
// 00848104  8bcf                 mov ecx, edi
// 00848106  e855faffff           call 0x847b60
// 0084810b  8b4734               mov eax, dword ptr [edi + 0x34]
// 0084810e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00848111  56                   push esi
// 00848112  6a06                 push 6
// 00848114  680a110000           push 0x110a
// 00848119  52                   push edx
// 0084811a  ff15c019a400         call dword ptr [0xa419c0]
// 00848120  8bf0                 mov esi, eax
// 00848122  85f6                 test esi, esi
// 00848124  75c0                 jne 0x8480e6
// 00848126  5f                   pop edi
// 00848127  5e                   pop esi
// 00848128  5d                   pop ebp
// 00848129  5b                   pop ebx
// 0084812a  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SelectAllIgnore@CXTPTreeBase@@MAEXHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
