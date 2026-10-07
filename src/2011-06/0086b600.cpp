// roc 2011-06 0086b600  unit: CXTThemeManagerStyleFactory  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0086b600
//
// 0086b600  83790400             cmp dword ptr [ecx + 4], 0
// 0086b604  740a                 je 0x86b610
// 0086b606  8b4904               mov ecx, dword ptr [ecx + 4]
// 0086b609  8b01                 mov eax, dword ptr [ecx]
// 0086b60b  8b5004               mov edx, dword ptr [eax + 4]
// 0086b60e  ffe2                 jmp edx
// 0086b610  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ?RefreshMetrics@CXTThemeManagerStyleFactory@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
