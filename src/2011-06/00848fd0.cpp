// roc 2011-06 00848fd0  unit: CRobloxTreeCtrl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00848fd0
//
// 00848fd0  8b442408             mov eax, dword ptr [esp + 8]
// 00848fd4  56                   push esi
// 00848fd5  f7d8                 neg eax
// 00848fd7  1bc0                 sbb eax, eax
// 00848fd9  6a10                 push 0x10
// 00848fdb  8bf1                 mov esi, ecx
// 00848fdd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00848fe1  83e010               and eax, 0x10
// 00848fe4  50                   push eax
// 00848fe5  51                   push ecx
// 00848fe6  8bce                 mov ecx, esi
// 00848fe8  e873ebffff           call 0x847b60
// 00848fed  8b5634               mov edx, dword ptr [esi + 0x34]
// 00848ff0  8b4220               mov eax, dword ptr [edx + 0x20]
// 00848ff3  6a01                 push 1
// 00848ff5  6a00                 push 0
// 00848ff7  50                   push eax
// 00848ff8  ff15ec19a400         call dword ptr [0xa419ec]
// 00848ffe  5e                   pop esi
// 00848fff  c20800               ret 8
// library xtp-15.2.1/Source\Controls\Tree\XTPTreeBase.cpp (function ?SetItemBold@CXTPTreeBase@@UAEXPAU_TREEITEM@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Tree/XTPTreeBase.cpp
