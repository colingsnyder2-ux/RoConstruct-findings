// roc 2011-06 00426860  unit: CXTTreeCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00426860
//
// 00426860  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00426864  8b542408             mov edx, dword ptr [esp + 8]
// 00426868  50                   push eax
// 00426869  8b442408             mov eax, dword ptr [esp + 8]
// 0042686d  52                   push edx
// 0042686e  50                   push eax
// 0042686f  83c154               add ecx, 0x54
// 00426872  e859204200           call 0x8488d0
// 00426877  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
