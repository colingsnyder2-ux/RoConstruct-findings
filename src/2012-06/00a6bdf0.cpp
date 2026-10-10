// roc 2012-06 00a6bdf0  unit: CXTCaptionPopupWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a6bdf0
//
// 00a6bdf0  837c240401           cmp dword ptr [esp + 4], 1
// 00a6bdf5  750d                 jne 0xa6be04
// 00a6bdf7  8b01                 mov eax, dword ptr [ecx]
// 00a6bdf9  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00a6bdff  ffd2                 call edx
// 00a6be01  c20400               ret 4
// 00a6be04  e8d568f1ff           call 0x9826de
// 00a6be09  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\Controls\Static\XTPCaptionPopupWnd.cpp (function ?OnTimer@CXTPCaptionPopupWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Static/XTPCaptionPopupWnd.cpp
