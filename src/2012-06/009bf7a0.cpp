// from server: 100% by auto
// roc 2012-06 009bf7a0  unit: CXTTreeBase  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bf7a0
//
// 009bf7a0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009bf7a4  8b542408             mov edx, dword ptr [esp + 8]
// 009bf7a8  6a00                 push 0
// 009bf7aa  50                   push eax
// 009bf7ab  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009bf7af  52                   push edx
// 009bf7b0  6a00                 push 0
// 009bf7b2  6a00                 push 0
// 009bf7b4  6a00                 push 0
// 009bf7b6  6a08                 push 8
// 009bf7b8  50                   push eax
// 009bf7b9  e8a432fcff           call 0x982a62
// 009bf7be  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellPidl.cpp (function ?SetItemState@CTreeCtrl@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellPidl.cpp
