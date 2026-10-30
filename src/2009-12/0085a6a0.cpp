// roc 2009-12 0085a6a0  unit: CXTThemeManager  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085a6a0
//
// 0085a6a0  e86bf8ffff           call 0x859f10
// 0085a6a5  85c0                 test eax, eax
// 0085a6a7  7501                 jne 0x85a6aa
// 0085a6a9  c3                   ret 
// 0085a6aa  8bc8                 mov ecx, eax
// 0085a6ac  e96fffffff           jmp 0x85a620
// copied from an identical function in another client (function ?GetSafeTheme@CXTThemeManagerStyleHost@@IBEPAVCXTThemeManagerStyle@@XZ)

// from server: 100% by colin
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD /Ob1 /Oy-
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp