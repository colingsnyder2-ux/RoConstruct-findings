// from server: 100% by auto
// roc 2012-06 009c29e0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c29e0
//
// 009c29e0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c29e4  8b542408             mov edx, dword ptr [esp + 8]
// 009c29e8  50                   push eax
// 009c29e9  8b442408             mov eax, dword ptr [esp + 8]
// 009c29ed  52                   push edx
// 009c29ee  50                   push eax
// 009c29ef  83c154               add ecx, 0x54
// 009c29f2  e889e7ffff           call 0x9c1180
// 009c29f7  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
