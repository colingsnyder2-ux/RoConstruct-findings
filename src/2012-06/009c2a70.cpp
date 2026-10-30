// from server: 100% by auto
// roc 2012-06 009c2a70  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c2a70
//
// 009c2a70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 009c2a74  8b542408             mov edx, dword ptr [esp + 8]
// 009c2a78  50                   push eax
// 009c2a79  8b442408             mov eax, dword ptr [esp + 8]
// 009c2a7d  52                   push edx
// 009c2a7e  50                   push eax
// 009c2a7f  83c154               add ecx, 0x54
// 009c2a82  e829e4ffff           call 0x9c0eb0
// 009c2a87  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
