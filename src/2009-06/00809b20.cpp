// roc 2009-06 00809b20  unit: CXTCaptionButtonThemeOfficeXP  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00809b20
//
// 00809b20  8b442404             mov eax, dword ptr [esp + 4]
// 00809b24  8b11                 mov edx, dword ptr [ecx]
// 00809b26  898180000000         mov dword ptr [ecx + 0x80], eax
// 00809b2c  8b4204               mov eax, dword ptr [edx + 4]
// 00809b2f  ffd0                 call eax
// 00809b31  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?UseWordTheme@CXTButtonThemeOfficeXP@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
