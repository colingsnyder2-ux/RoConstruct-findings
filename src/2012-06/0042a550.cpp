// roc 2012-06 0042a550  unit: CXTTreeCtrl  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0042a550
//
// 0042a550  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0042a554  8b542408             mov edx, dword ptr [esp + 8]
// 0042a558  50                   push eax
// 0042a559  8b442408             mov eax, dword ptr [esp + 8]
// 0042a55d  52                   push edx
// 0042a55e  50                   push eax
// 0042a55f  83c154               add ecx, 0x54
// 0042a562  e8096d5900           call 0x9c1270
// 0042a567  c20c00               ret 0xc
// library xtp-15.2.1/Source\Controls\Shell\XTPShellTreeCtrlView.cpp (function ?OnLButtonDown@CXTPShellTreeBaseCTreeCtrl@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPShellTreeCtrlView.cpp
