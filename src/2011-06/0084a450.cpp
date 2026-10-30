// from server: 100% by auto
// roc 2011-06 0084a450  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a450
//
// 0084a450  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084a454  8b542408             mov edx, dword ptr [esp + 8]
// 0084a458  50                   push eax
// 0084a459  8b442408             mov eax, dword ptr [esp + 8]
// 0084a45d  52                   push edx
// 0084a45e  50                   push eax
// 0084a45f  83c160               add ecx, 0x60
// 0084a462  e869e4ffff           call 0x8488d0
// 0084a467  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
