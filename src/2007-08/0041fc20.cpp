// from server: 100% by auto
// roc 2007-08 0041fc20  unit: CXTTreeCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041fc20
//
// 0041fc20  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041fc24  8b542408             mov edx, dword ptr [esp + 8]
// 0041fc28  50                   push eax
// 0041fc29  8b442408             mov eax, dword ptr [esp + 8]
// 0041fc2d  52                   push edx
// 0041fc2e  50                   push eax
// 0041fc2f  83c154               add ecx, 0x54
// 0041fc32  e8996d2400           call 0x6669d0
// 0041fc37  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellTreeCtrlView.cpp
