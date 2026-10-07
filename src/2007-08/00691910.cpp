// roc 2007-08 00691910  unit: CXTThemeManagerStyleFactory  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00691910
//
// 00691910  83790400             cmp dword ptr [ecx + 4], 0
// 00691914  740a                 je 0x691920
// 00691916  8b4904               mov ecx, dword ptr [ecx + 4]
// 00691919  8b01                 mov eax, dword ptr [ecx]
// 0069191b  8b5004               mov edx, dword ptr [eax + 4]
// 0069191e  ffe2                 jmp edx
// 00691920  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTThemeManager.cpp (function ?RefreshMetrics@CXTThemeManagerStyleFactory@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTThemeManager.cpp
