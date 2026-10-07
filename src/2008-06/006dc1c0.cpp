// roc 2008-06 006dc1c0  unit: CXTTreeBase  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006dc1c0
//
// 006dc1c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006dc1c4  8b542408             mov edx, dword ptr [esp + 8]
// 006dc1c8  6a00                 push 0
// 006dc1ca  50                   push eax
// 006dc1cb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006dc1cf  52                   push edx
// 006dc1d0  6a00                 push 0
// 006dc1d2  6a00                 push 0
// 006dc1d4  6a00                 push 0
// 006dc1d6  6a08                 push 8
// 006dc1d8  50                   push eax
// 006dc1d9  e8f84efcff           call 0x6a10d6
// 006dc1de  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTShellPidl.cpp (function ?SetItemState@CTreeCtrl@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellPidl.cpp
