// from server: 100% by auto
// roc 2012-06 0042a580  unit: CXTTreeCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042a580
//
// 0042a580  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a584  8b542408             mov edx, dword ptr [esp + 8]
// 0042a588  50                   push eax
// 0042a589  8b442408             mov eax, dword ptr [esp + 8]
// 0042a58d  52                   push edx
// 0042a58e  50                   push eax
// 0042a58f  83c154               add ecx, 0x54
// 0042a592  e8b9675900           call 0x9c0d50
// 0042a597  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
