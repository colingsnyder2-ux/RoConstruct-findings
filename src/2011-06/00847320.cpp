// roc 2011-06 00847320  unit: CXTTreeBase  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00847320
//
// 00847320  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00847324  8b542408             mov edx, dword ptr [esp + 8]
// 00847328  6a00                 push 0
// 0084732a  50                   push eax
// 0084732b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084732f  52                   push edx
// 00847330  6a00                 push 0
// 00847332  6a00                 push 0
// 00847334  6a00                 push 0
// 00847336  6a08                 push 8
// 00847338  50                   push eax
// 00847339  e8a436fcff           call 0x80a9e2
// 0084733e  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellPidl.cpp (function ?SetItemState@CTreeCtrl@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellPidl.cpp
