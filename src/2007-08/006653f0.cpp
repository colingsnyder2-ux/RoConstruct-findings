// from server: 100% by auto
// roc 2007-08 006653f0  unit: CXTTreeBase  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006653f0
//
// 006653f0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006653f4  8b542408             mov edx, dword ptr [esp + 8]
// 006653f8  6a00                 push 0
// 006653fa  50                   push eax
// 006653fb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006653ff  52                   push edx
// 00665400  6a00                 push 0
// 00665402  6a00                 push 0
// 00665404  6a00                 push 0
// 00665406  6a08                 push 8
// 00665408  50                   push eax
// 00665409  e82cb2fcff           call 0x63063a
// 0066540e  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTShellPidl.cpp (function ?SetItemState@CTreeCtrl@@QAEHPAU_TREEITEM@@II@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellPidl.cpp
