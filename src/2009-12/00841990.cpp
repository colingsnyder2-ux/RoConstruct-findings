// roc 2009-12 00841990  unit: CXTPPopupBar  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00841990
//
// 00841990  8b0d44aeb900         mov ecx, dword ptr [0xb9ae44]
// 00841996  e8c728fbff           call 0x7f4262
// 0084199b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0084199f  898804010000         mov dword ptr [eax + 0x104], ecx
// 008419a5  c3                   ret 
// library xtp-11.2.2/Source\CommandBars\XTPPopupBar.cpp (function ?CreatePopupBar@CXTPPopupBar@@SAPAV1@PAVCXTPCommandBars@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPPopupBar.cpp
