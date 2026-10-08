// from server: 100% by auto
// roc 2011-06 0086b630  unit: CSelectionCaption  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086b630
//
// 0086b630  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0086b633  85c0                 test eax, eax
// 0086b635  7503                 jne 0x86b63a
// 0086b637  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0086b63a  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ?GetSafeThemeFactory@CXTThemeManagerStyleHost@@IBEPAVCXTThemeManagerStyleFactory@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
