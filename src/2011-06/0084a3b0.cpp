// from server: 100% by auto
// roc 2011-06 0084a3b0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a3b0
//
// 0084a3b0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084a3b4  8b542408             mov edx, dword ptr [esp + 8]
// 0084a3b8  50                   push eax
// 0084a3b9  8b442408             mov eax, dword ptr [esp + 8]
// 0084a3bd  52                   push edx
// 0084a3be  50                   push eax
// 0084a3bf  83c160               add ecx, 0x60
// 0084a3c2  e829eaffff           call 0x848df0
// 0084a3c7  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
