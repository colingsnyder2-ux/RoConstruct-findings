// roc 2011-06 0084a530  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084a530
//
// 0084a530  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0084a534  8b542408             mov edx, dword ptr [esp + 8]
// 0084a538  50                   push eax
// 0084a539  8b442408             mov eax, dword ptr [esp + 8]
// 0084a53d  52                   push edx
// 0084a53e  50                   push eax
// 0084a53f  83c154               add ecx, 0x54
// 0084a542  e8b9e7ffff           call 0x848d00
// 0084a547  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
