// roc 2012-06 00a56410  unit: CXTPPropertyGridInplaceButton  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a56410
//
// 00a56410  8b4128               mov eax, dword ptr [ecx + 0x28]
// 00a56413  33d2                 xor edx, edx
// 00a56415  398854010000         cmp dword ptr [eax + 0x154], ecx
// 00a5641b  0f94c2               sete dl
// 00a5641e  8bc2                 mov eax, edx
// 00a56420  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsFocused@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
