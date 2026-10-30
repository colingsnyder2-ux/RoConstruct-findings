// roc 2010-06 0087a440  unit: CXTPPropertyGridInplaceButton  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0087a440
//
// 0087a440  8b4128               mov eax, dword ptr [ecx + 0x28]
// 0087a443  33d2                 xor edx, edx
// 0087a445  398854010000         cmp dword ptr [eax + 0x154], ecx
// 0087a44b  0f94c2               sete dl
// 0087a44e  8bc2                 mov eax, edx
// 0087a450  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsFocused@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
