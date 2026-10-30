// roc 2012-06 00a697c0  unit: CXTCaptionButtonThemeOfficeXP  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a697c0
//
// 00a697c0  8b442404             mov eax, dword ptr [esp + 4]
// 00a697c4  8b11                 mov edx, dword ptr [ecx]
// 00a697c6  898180000000         mov dword ptr [ecx + 0x80], eax
// 00a697cc  8b4204               mov eax, dword ptr [edx + 4]
// 00a697cf  ffd0                 call eax
// 00a697d1  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?UseWordTheme@CXTButtonThemeOfficeXP@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
