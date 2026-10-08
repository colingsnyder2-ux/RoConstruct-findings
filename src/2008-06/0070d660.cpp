// from server: 100% by auto
// roc 2008-06 0070d660  unit: CSelectionCaption  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070d660
//
// 0070d660  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0070d663  85c0                 test eax, eax
// 0070d665  7503                 jne 0x70d66a
// 0070d667  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0070d66a  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ?GetSafeThemeFactory@CXTThemeManagerStyleHost@@IBEPAVCXTThemeManagerStyleFactory@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
