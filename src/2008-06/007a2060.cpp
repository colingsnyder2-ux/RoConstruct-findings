// from server: 100% by auto
// roc 2008-06 007a2060  unit: CXTCaptionButtonTheme  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007a2060
//
// 007a2060  8b442404             mov eax, dword ptr [esp + 4]
// 007a2064  85c0                 test eax, eax
// 007a2066  7409                 je 0x7a2071
// 007a2068  83780400             cmp dword ptr [eax + 4], 0
// 007a206c  7403                 je 0x7a2071
// 007a206e  89411c               mov dword ptr [ecx + 0x1c], eax
// 007a2071  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?SetThemeFont@CXTButtonTheme@@UAEXPAVCFont@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
