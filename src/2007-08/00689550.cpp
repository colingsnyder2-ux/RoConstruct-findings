// roc 2007-08 00689550  unit: CXTPTabManagerAtom  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00689550
//
// 00689550  8b01                 mov eax, dword ptr [ecx]
// 00689552  8b5008               mov edx, dword ptr [eax + 8]
// 00689555  ffe2                 jmp edx
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?thousands_sep@?$numpunct@D@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
