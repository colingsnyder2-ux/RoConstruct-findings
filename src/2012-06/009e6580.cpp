// roc 2012-06 009e6580  unit: CXTThemeManagerStyleFactory  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009e6580
//
// 009e6580  83790400             cmp dword ptr [ecx + 4], 0
// 009e6584  740a                 je 0x9e6590
// 009e6586  8b4904               mov ecx, dword ptr [ecx + 4]
// 009e6589  8b01                 mov eax, dword ptr [ecx]
// 009e658b  8b5004               mov edx, dword ptr [eax + 4]
// 009e658e  ffe2                 jmp edx
// 009e6590  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTThemeManager.cpp (function ?RefreshMetrics@CXTThemeManagerStyleFactory@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTThemeManager.cpp
