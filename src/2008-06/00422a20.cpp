// roc 2008-06 00422a20  unit: CXTTreeCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422a20
//
// 00422a20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00422a24  8b542408             mov edx, dword ptr [esp + 8]
// 00422a28  50                   push eax
// 00422a29  8b442408             mov eax, dword ptr [esp + 8]
// 00422a2d  52                   push edx
// 00422a2e  50                   push eax
// 00422a2f  83c154               add ecx, 0x54
// 00422a32  e839ad2b00           call 0x6dd770
// 00422a37  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTShellTreeCtrlView.cpp
