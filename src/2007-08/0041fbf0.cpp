// roc 2007-08 0041fbf0  unit: CXTTreeCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041fbf0
//
// 0041fbf0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0041fbf4  8b542408             mov edx, dword ptr [esp + 8]
// 0041fbf8  50                   push eax
// 0041fbf9  8b442408             mov eax, dword ptr [esp + 8]
// 0041fbfd  52                   push edx
// 0041fbfe  50                   push eax
// 0041fbff  83c154               add ecx, 0x54
// 0041fc02  e8e9722400           call 0x666ef0
// 0041fc07  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTShellTreeCtrlView.cpp
