// from server: 100% by auto
// roc 2007-08 006670c0  unit: CRobloxTreeCtrl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006670c0
//
// 006670c0  8b442408             mov eax, dword ptr [esp + 8]
// 006670c4  56                   push esi
// 006670c5  f7d8                 neg eax
// 006670c7  1bc0                 sbb eax, eax
// 006670c9  6a10                 push 0x10
// 006670cb  8bf1                 mov esi, ecx
// 006670cd  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006670d1  83e010               and eax, 0x10
// 006670d4  50                   push eax
// 006670d5  51                   push ecx
// 006670d6  8bce                 mov ecx, esi
// 006670d8  e853ebffff           call 0x665c30
// 006670dd  8b5634               mov edx, dword ptr [esi + 0x34]
// 006670e0  8b4220               mov eax, dword ptr [edx + 0x20]
// 006670e3  6a01                 push 1
// 006670e5  6a00                 push 0
// 006670e7  50                   push eax
// 006670e8  ff15dcec7700         call dword ptr [0x77ecdc]
// 006670ee  5e                   pop esi
// 006670ef  c20800               ret 8
// library xtp-11.2.2-vc8/Source\Controls\XTTreeBase.cpp (function ?SetItemBold@CXTTreeBase@@UAEXPAU_TREEITEM@@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTTreeBase.cpp
