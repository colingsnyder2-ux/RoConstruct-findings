// from server: 100% by auto
// roc 2008-06 00772fd0  unit: CXTPPropertyGridInplaceButton  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00772fd0
//
// 00772fd0  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00772fd3  33d2                 xor edx, edx
// 00772fd5  398854010000         cmp dword ptr [eax + 0x154], ecx
// 00772fdb  0f94c2               sete dl
// 00772fde  8bc2                 mov eax, edx
// 00772fe0  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsFocused@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
