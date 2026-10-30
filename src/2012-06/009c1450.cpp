// from server: 100% by auto
// roc 2012-06 009c1450  unit: CRobloxTreeCtrl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c1450
//
// 009c1450  8b442408             mov eax, dword ptr [esp + 8]
// 009c1454  56                   push esi
// 009c1455  f7d8                 neg eax
// 009c1457  1bc0                 sbb eax, eax
// 009c1459  6a10                 push 0x10
// 009c145b  8bf1                 mov esi, ecx
// 009c145d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009c1461  83e010               and eax, 0x10
// 009c1464  50                   push eax
// 009c1465  51                   push ecx
// 009c1466  8bce                 mov ecx, esi
// 009c1468  e873ebffff           call 0x9bffe0
// 009c146d  8b5634               mov edx, dword ptr [esi + 0x34]
// 009c1470  8b4220               mov eax, dword ptr [edx + 0x20]
// 009c1473  6a01                 push 1
// 009c1475  6a00                 push 0
// 009c1477  50                   push eax
// 009c1478  ff15ec3bb200         call dword ptr [0xb23bec]
// 009c147e  5e                   pop esi
// 009c147f  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SetItemBold@CXTPTreeBase@@UAEXPAU_TREEITEM@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
