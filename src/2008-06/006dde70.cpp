// from server: 100% by auto
// roc 2008-06 006dde70  unit: CRobloxTreeCtrl  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dde70
//
// 006dde70  8b442408             mov eax, dword ptr [esp + 8]
// 006dde74  56                   push esi
// 006dde75  f7d8                 neg eax
// 006dde77  1bc0                 sbb eax, eax
// 006dde79  6a10                 push 0x10
// 006dde7b  8bf1                 mov esi, ecx
// 006dde7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006dde81  83e010               and eax, 0x10
// 006dde84  50                   push eax
// 006dde85  51                   push ecx
// 006dde86  8bce                 mov ecx, esi
// 006dde88  e873ebffff           call 0x6dca00
// 006dde8d  8b5634               mov edx, dword ptr [esi + 0x34]
// 006dde90  8b4220               mov eax, dword ptr [edx + 0x20]
// 006dde93  6a01                 push 1
// 006dde95  6a00                 push 0
// 006dde97  50                   push eax
// 006dde98  ff15182e8000         call dword ptr [0x802e18]
// 006dde9e  5e                   pop esi
// 006dde9f  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTTreeBase.cpp (function ?SetItemBold@CXTTreeBase@@UAEXPAU_TREEITEM@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTTreeBase.cpp
