// from server: 100% by auto
// roc 2007-08 006f5c10  unit: CXTPPropertyGridInplaceButton  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006f5c10
//
// 006f5c10  8b4128               mov eax, dword ptr [ecx + 0x28]
// 006f5c13  33d2                 xor edx, edx
// 006f5c15  398854010000         cmp dword ptr [eax + 0x154], ecx
// 006f5c1b  0f94c2               sete dl
// 006f5c1e  8bc2                 mov eax, edx
// 006f5c20  c3                   ret 
// library xtp-11.2.2-vc8/Source\PropertyGrid\XTPPropertyGridInplaceButton.cpp (function ?IsFocused@CXTPPropertyGridInplaceButton@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/PropertyGrid/XTPPropertyGridInplaceButton.cpp
