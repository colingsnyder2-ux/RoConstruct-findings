// roc 2011-06 00901fb0  unit: CXTCaptionButtonTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00901fb0
//
// 00901fb0  8b442404             mov eax, dword ptr [esp + 4]
// 00901fb4  85c0                 test eax, eax
// 00901fb6  7409                 je 0x901fc1
// 00901fb8  83780400             cmp dword ptr [eax + 4], 0
// 00901fbc  7403                 je 0x901fc1
// 00901fbe  89411c               mov dword ptr [ecx + 0x1c], eax
// 00901fc1  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTButtonTheme.cpp (function ?SetThemeFont@CXTButtonTheme@@UAEXPAVCFont@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTButtonTheme.cpp
