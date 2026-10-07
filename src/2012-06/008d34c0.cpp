// roc 2012-06 008d34c0  unit: CXTPTabManagerAtom  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008d34c0
//
// 008d34c0  8b01                 mov eax, dword ptr [ecx]
// 008d34c2  8b5004               mov edx, dword ptr [eax + 4]
// 008d34c5  ffe2                 jmp edx
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?decimal_point@?$numpunct@D@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
