// from server: 100% by auto
// roc 2007-08 006661b0  unit: CRobloxTreeCtrl  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006661b0
//
// 006661b0  53                   push ebx
// 006661b1  33c0                 xor eax, eax
// 006661b3  39442408             cmp dword ptr [esp + 8], eax
// 006661b7  55                   push ebp
// 006661b8  0f95c0               setne al
// 006661bb  56                   push esi
// 006661bc  57                   push edi
// 006661bd  6a00                 push 0
// 006661bf  8bf9                 mov edi, ecx
// 006661c1  6a00                 push 0
// 006661c3  680a110000           push 0x110a
// 006661c8  8be8                 mov ebp, eax
// 006661ca  8b4734               mov eax, dword ptr [edi + 0x34]
// 006661cd  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006661d0  8bdd                 mov ebx, ebp
// 006661d2  f7db                 neg ebx
// 006661d4  1bdb                 sbb ebx, ebx
// 006661d6  51                   push ecx
// 006661d7  83e302               and ebx, 2
// 006661da  ff15d8ec7700         call dword ptr [0x77ecd8]
// 006661e0  8bf0                 mov esi, eax
// 006661e2  85f6                 test esi, esi
// 006661e4  7440                 je 0x666226
// 006661e6  3b742418             cmp esi, dword ptr [esp + 0x18]
// 006661ea  741f                 je 0x66620b
// 006661ec  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 006661ef  6a02                 push 2
// 006661f1  56                   push esi
// 006661f2  e843240d00           call 0x73863a
// 006661f7  d1e8                 shr eax, 1
// 006661f9  83e001               and eax, 1
// 006661fc  3bc5                 cmp eax, ebp
// 006661fe  740b                 je 0x66620b
// 00666200  6a02                 push 2
// 00666202  53                   push ebx
// 00666203  56                   push esi
// 00666204  8bcf                 mov ecx, edi
// 00666206  e825faffff           call 0x665c30
// 0066620b  8b4734               mov eax, dword ptr [edi + 0x34]
// 0066620e  8b5020               mov edx, dword ptr [eax + 0x20]
// 00666211  56                   push esi
// 00666212  6a06                 push 6
// 00666214  680a110000           push 0x110a
// 00666219  52                   push edx
// 0066621a  ff15d8ec7700         call dword ptr [0x77ecd8]
// 00666220  8bf0                 mov esi, eax
// 00666222  85f6                 test esi, esi
// 00666224  75c0                 jne 0x6661e6
// 00666226  5f                   pop edi
// 00666227  5e                   pop esi
// 00666228  5d                   pop ebp
// 00666229  5b                   pop ebx
// 0066622a  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?SelectAllIgnore@CXTTreeBase@@MAEXHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
