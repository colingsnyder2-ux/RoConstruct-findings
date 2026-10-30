// roc 2009-06 007eb6f0  unit: CXTPPropertyGridInplaceButton  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007eb6f0
//
// 007eb6f0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 007eb6f3  33d2                 xor edx, edx
// 007eb6f5  398854010000         cmp dword ptr [eax + 0x154], ecx
// 007eb6fb  0f94c2               sete dl
// 007eb6fe  8bc2                 mov eax, edx
// 007eb700  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsFocused@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
