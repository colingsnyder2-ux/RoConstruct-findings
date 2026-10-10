// roc 2008-06 00793a50  unit: CXTCaptionPopupWnd  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00793a50
//
// 00793a50  837c240401           cmp dword ptr [esp + 4], 1
// 00793a55  750d                 jne 0x793a64
// 00793a57  8b01                 mov eax, dword ptr [ecx]
// 00793a59  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00793a5f  ffd2                 call edx
// 00793a61  c20400               ret 4
// 00793a64  e8ffd1f0ff           call 0x6a0c68
// 00793a69  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\Controls\XTCaptionPopupWnd.cpp (function ?OnTimer@CXTCaptionPopupWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/Controls/XTCaptionPopupWnd.cpp
