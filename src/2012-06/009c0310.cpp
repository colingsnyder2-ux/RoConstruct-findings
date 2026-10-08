// from server: 100% by auto
// roc 2012-06 009c0310  unit: CRobloxTreeCtrl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c0310
//
// 009c0310  53                   push ebx
// 009c0311  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 009c0315  55                   push ebp
// 009c0316  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 009c031a  56                   push esi
// 009c031b  57                   push edi
// 009c031c  8bc3                 mov eax, ebx
// 009c031e  83e0fe               and eax, 0xfffffffe
// 009c0321  8bf1                 mov esi, ecx
// 009c0323  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 009c0326  50                   push eax
// 009c0327  55                   push ebp
// 009c0328  e8e5940d00           call 0xa99812
// 009c032d  8bf8                 mov edi, eax
// 009c032f  f6c301               test bl, 1
// 009c0332  741f                 je 0x9c0353
// 009c0334  8b7634               mov esi, dword ptr [esi + 0x34]
// 009c0337  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009c033a  6a00                 push 0
// 009c033c  6a09                 push 9
// 009c033e  680a110000           push 0x110a
// 009c0343  51                   push ecx
// 009c0344  ff15043cb200         call dword ptr [0xb23c04]
// 009c034a  3bc5                 cmp eax, ebp
// 009c034c  7503                 jne 0x9c0351
// 009c034e  83cf01               or edi, 1
// 009c0351  8bc7                 mov eax, edi
// 009c0353  5f                   pop edi
// 009c0354  5e                   pop esi
// 009c0355  5d                   pop ebp
// 009c0356  5b                   pop ebx
// 009c0357  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetItemState@CXTPTreeBase@@QBEIPAU_TREEITEM@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
