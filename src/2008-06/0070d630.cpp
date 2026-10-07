// roc 2008-06 0070d630  unit: CXTThemeManagerStyleFactory  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0070d630
//
// 0070d630  83790400             cmp dword ptr [ecx + 4], 0
// 0070d634  740a                 je 0x70d640
// 0070d636  8b4904               mov ecx, dword ptr [ecx + 4]
// 0070d639  8b01                 mov eax, dword ptr [ecx]
// 0070d63b  8b5004               mov edx, dword ptr [eax + 4]
// 0070d63e  ffe2                 jmp edx
// 0070d640  c3                   ret 
// library xtp-11.2.2/Source\Controls\XTThemeManager.cpp (function ?RefreshMetrics@CXTThemeManagerStyleFactory@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTThemeManager.cpp
