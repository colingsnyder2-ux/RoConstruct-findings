// roc 2012-06 00a7a1b0  unit: CXTCaptionButtonTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7a1b0
//
// 00a7a1b0  8b442404             mov eax, dword ptr [esp + 4]
// 00a7a1b4  85c0                 test eax, eax
// 00a7a1b6  7409                 je 0xa7a1c1
// 00a7a1b8  83780400             cmp dword ptr [eax + 4], 0
// 00a7a1bc  7403                 je 0xa7a1c1
// 00a7a1be  89411c               mov dword ptr [ecx + 0x1c], eax
// 00a7a1c1  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?SetThemeFont@CXTButtonTheme@@UAEXPAVCFont@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
