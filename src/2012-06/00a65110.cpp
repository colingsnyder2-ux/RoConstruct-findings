// roc 2012-06 00a65110  unit: CXTPRichRender::XTextHost  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a65110
//
// 00a65110  33c0                 xor eax, eax
// 00a65112  394108               cmp dword ptr [ecx + 8], eax
// 00a65115  0f95c0               setne al
// 00a65118  c3                   ret 
// library xtp-13.2.1/Source\Controls\XTThemeManager.cpp (function ?IsOfficeTheme@CXTThemeManagerStyle@@QAEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/Controls/XTThemeManager.cpp
