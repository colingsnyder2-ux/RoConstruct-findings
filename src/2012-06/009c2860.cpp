// from server: 100% by auto
// roc 2012-06 009c2860  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2860
//
// 009c2860  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c2864  8b542408             mov edx, dword ptr [esp + 8]
// 009c2868  50                   push eax
// 009c2869  8b442408             mov eax, dword ptr [esp + 8]
// 009c286d  52                   push edx
// 009c286e  50                   push eax
// 009c286f  83c160               add ecx, 0x60
// 009c2872  e8f9e9ffff           call 0x9c1270
// 009c2877  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
