// roc 2007-08 00691940  unit: CSelectionCaption  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691940
//
// 00691940  8b410c               mov eax, dword ptr [ecx + 0xc]
// 00691943  85c0                 test eax, eax
// 00691945  7503                 jne 0x69194a
// 00691947  8b4110               mov eax, dword ptr [ecx + 0x10]
// 0069194a  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTThemeManager.cpp (function ?GetSafeThemeFactory@CXTThemeManagerStyleHost@@IBEPAVCXTThemeManagerStyleFactory@@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTThemeManager.cpp
