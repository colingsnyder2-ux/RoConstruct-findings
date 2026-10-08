// roc 2010-06 008988f0  unit: CXTCaptionButtonThemeOfficeXP  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008988f0
//
// 008988f0  8b442404             mov eax, dword ptr [esp + 4]
// 008988f4  8b11                 mov edx, dword ptr [ecx]
// 008988f6  898180000000         mov dword ptr [ecx + 0x80], eax
// 008988fc  8b4204               mov eax, dword ptr [edx + 4]
// 008988ff  ffd0                 call eax
// 00898901  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?UseWordTheme@CXTButtonThemeOfficeXP@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
