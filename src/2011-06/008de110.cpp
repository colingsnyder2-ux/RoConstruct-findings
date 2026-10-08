// roc 2011-06 008de110  unit: RBX::ViewRbxGfx  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008de110
//
// 008de110  8b4128               mov eax, dword ptr [ecx + 0x28]
// 008de113  33d2                 xor edx, edx
// 008de115  398854010000         cmp dword ptr [eax + 0x154], ecx
// 008de11b  0f94c2               sete dl
// 008de11e  8bc2                 mov eax, edx
// 008de120  c3                   ret 
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsFocused@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
