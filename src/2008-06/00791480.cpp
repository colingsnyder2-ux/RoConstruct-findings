// roc 2008-06 00791480  unit: CXTCaptionButtonThemeOfficeXP  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00791480
//
// 00791480  8b442404             mov eax, dword ptr [esp + 4]
// 00791484  8b11                 mov edx, dword ptr [ecx]
// 00791486  898180000000         mov dword ptr [ecx + 0x80], eax
// 0079148c  8b4204               mov eax, dword ptr [edx + 4]
// 0079148f  ffd0                 call eax
// 00791491  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?UseWordTheme@CXTButtonThemeOfficeXP@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
