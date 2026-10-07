// roc 2011-06 0084a390  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a390
//
// 0084a390  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084a394  8b542408             mov edx, dword ptr [esp + 8]
// 0084a398  50                   push eax
// 0084a399  8b442408             mov eax, dword ptr [esp + 8]
// 0084a39d  52                   push edx
// 0084a39e  50                   push eax
// 0084a39f  83c160               add ecx, 0x60
// 0084a3a2  e859e9ffff           call 0x848d00
// 0084a3a7  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
