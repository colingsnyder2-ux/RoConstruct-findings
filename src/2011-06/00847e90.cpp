// roc 2011-06 00847e90  unit: CRobloxTreeCtrl  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847e90
//
// 00847e90  53                   push ebx
// 00847e91  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00847e95  55                   push ebp
// 00847e96  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00847e9a  56                   push esi
// 00847e9b  57                   push edi
// 00847e9c  8bc3                 mov eax, ebx
// 00847e9e  83e0fe               and eax, 0xfffffffe
// 00847ea1  8bf1                 mov esi, ecx
// 00847ea3  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00847ea6  50                   push eax
// 00847ea7  55                   push ebp
// 00847ea8  e8ab491800           call 0x9cc858
// 00847ead  8bf8                 mov edi, eax
// 00847eaf  f6c301               test bl, 1
// 00847eb2  741f                 je 0x847ed3
// 00847eb4  8b7634               mov esi, dword ptr [esi + 0x34]
// 00847eb7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00847eba  6a00                 push 0
// 00847ebc  6a09                 push 9
// 00847ebe  680a110000           push 0x110a
// 00847ec3  51                   push ecx
// 00847ec4  ff15c019a400         call dword ptr [0xa419c0]
// 00847eca  3bc5                 cmp eax, ebp
// 00847ecc  7503                 jne 0x847ed1
// 00847ece  83cf01               or edi, 1
// 00847ed1  8bc7                 mov eax, edi
// 00847ed3  5f                   pop edi
// 00847ed4  5e                   pop esi
// 00847ed5  5d                   pop ebp
// 00847ed6  5b                   pop ebx
// 00847ed7  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?GetItemState@CXTPTreeBase@@QBEIPAU_TREEITEM@@I@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
