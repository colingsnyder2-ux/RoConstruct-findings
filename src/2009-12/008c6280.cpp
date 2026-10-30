// roc 2009-12 008c6280  unit: CXTPPropertyGridInplaceButton  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008c6280
//
// 008c6280  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008c6283  33d2                 xor edx, edx
// 008c6285  398854010000         cmp dword ptr [eax + 0x154], ecx
// 008c628b  0f94c2               sete dl
// 008c628e  8bc2                 mov eax, edx
// 008c6290  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsFocused@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
