// from server: 100% by auto
// roc 2012-06 009e65b0  unit: CSelectionCaption  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e65b0
//
// 009e65b0  8b410c               mov eax, dword ptr [ecx + 0xc]
// 009e65b3  85c0                 test eax, eax
// 009e65b5  7503                 jne 0x9e65ba
// 009e65b7  8b4110               mov eax, dword ptr [ecx + 0x10]
// 009e65ba  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ?GetSafeThemeFactory@CXTThemeManagerStyleHost@@IBEPAVCXTThemeManagerStyleFactory@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
