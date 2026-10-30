// roc 2007-03 006d8900  unit: seg_006d0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006d8900
//
// 006d8900  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006d8903  33d2                 xor edx, edx
// 006d8905  398854010000         cmp dword ptr [eax + 0x154], ecx
// 006d890b  0f94c2               sete dl
// 006d890e  8bc2                 mov eax, edx
// 006d8910  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsFocused@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
