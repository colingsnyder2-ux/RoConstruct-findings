// from server: 100% by auto
// roc 2011-06 00848020  unit: CRobloxTreeCtrl  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848020
//
// 00848020  33c0                 xor eax, eax
// 00848022  39442404             cmp dword ptr [esp + 4], eax
// 00848026  53                   push ebx
// 00848027  0f95c0               setne al
// 0084802a  55                   push ebp
// 0084802b  56                   push esi
// 0084802c  8b742414             mov esi, dword ptr [esp + 0x14]
// 00848030  57                   push edi
// 00848031  8bf9                 mov edi, ecx
// 00848033  8be8                 mov ebp, eax
// 00848035  8bdd                 mov ebx, ebp
// 00848037  f7db                 neg ebx
// 00848039  1bdb                 sbb ebx, ebx
// 0084803b  83e302               and ebx, 2
// 0084803e  85f6                 test esi, esi
// 00848040  751e                 jne 0x848060
// 00848042  8b4734               mov eax, dword ptr [edi + 0x34]
// 00848045  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00848048  56                   push esi
// 00848049  56                   push esi
// 0084804a  680a110000           push 0x110a
// 0084804f  51                   push ecx
// 00848050  ff15c019a400         call dword ptr [0xa419c0]
// 00848056  8bf0                 mov esi, eax
// 00848058  85f6                 test esi, esi
// 0084805a  743e                 je 0x84809a
// 0084805c  8d642400             lea esp, [esp]
// 00848060  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00848063  6a02                 push 2
// 00848065  56                   push esi
// 00848066  e8ed471800           call 0x9cc858
// 0084806b  d1e8                 shr eax, 1
// 0084806d  83e001               and eax, 1
// 00848070  3bc5                 cmp eax, ebp
// 00848072  740b                 je 0x84807f
// 00848074  6a02                 push 2
// 00848076  53                   push ebx
// 00848077  56                   push esi
// 00848078  8bcf                 mov ecx, edi
// 0084807a  e8e1faffff           call 0x847b60
// 0084807f  8b4734               mov eax, dword ptr [edi + 0x34]
// 00848082  8b5020               mov edx, dword ptr [eax + 0x20]
// 00848085  56                   push esi
// 00848086  6a06                 push 6
// 00848088  680a110000           push 0x110a
// 0084808d  52                   push edx
// 0084808e  ff15c019a400         call dword ptr [0xa419c0]
// 00848094  8bf0                 mov esi, eax
// 00848096  85f6                 test esi, esi
// 00848098  75c6                 jne 0x848060
// 0084809a  5f                   pop edi
// 0084809b  5e                   pop esi
// 0084809c  5d                   pop ebp
// 0084809d  5b                   pop ebx
// 0084809e  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SelectAll@CXTPTreeBase@@QAEXHPAU_TREEITEM@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
