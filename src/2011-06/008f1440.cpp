// roc 2011-06 008f1440  unit: CXTCaptionButtonThemeOfficeXP  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f1440
//
// 008f1440  8b442404             mov eax, dword ptr [esp + 4]
// 008f1444  8b11                 mov edx, dword ptr [ecx]
// 008f1446  898180000000         mov dword ptr [ecx + 0x80], eax
// 008f144c  8b4204               mov eax, dword ptr [edx + 4]
// 008f144f  ffd0                 call eax
// 008f1451  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?UseWordTheme@CXTButtonThemeOfficeXP@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
