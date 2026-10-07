// roc 2012-06 009c2930  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2930
//
// 009c2930  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c2934  8b542408             mov edx, dword ptr [esp + 8]
// 009c2938  50                   push eax
// 009c2939  8b442408             mov eax, dword ptr [esp + 8]
// 009c293d  52                   push edx
// 009c293e  50                   push eax
// 009c293f  83c160               add ecx, 0x60
// 009c2942  e869e5ffff           call 0x9c0eb0
// 009c2947  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeView@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
