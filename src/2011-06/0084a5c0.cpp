// roc 2011-06 0084a5c0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a5c0
//
// 0084a5c0  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084a5c4  8b542408             mov edx, dword ptr [esp + 8]
// 0084a5c8  50                   push eax
// 0084a5c9  8b442408             mov eax, dword ptr [esp + 8]
// 0084a5cd  52                   push edx
// 0084a5ce  50                   push eax
// 0084a5cf  83c154               add ecx, 0x54
// 0084a5d2  e859e4ffff           call 0x848a30
// 0084a5d7  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
