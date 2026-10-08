// from server: 100% by auto
// roc 2011-06 00426830  unit: CXTTreeCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00426830
//
// 00426830  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00426834  8b542408             mov edx, dword ptr [esp + 8]
// 00426838  50                   push eax
// 00426839  8b442408             mov eax, dword ptr [esp + 8]
// 0042683d  52                   push edx
// 0042683e  50                   push eax
// 0042683f  83c154               add ecx, 0x54
// 00426842  e8a9254200           call 0x848df0
// 00426847  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
