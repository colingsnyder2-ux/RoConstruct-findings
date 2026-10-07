// roc 2008-06 00701210  unit: CXTPTabManagerAtom  size: 7 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00701210
//
// 00701210  8b01                 mov eax, dword ptr [ecx]
// 00701212  8b5004               mov edx, dword ptr [eax + 4]
// 00701215  ffe2                 jmp edx
// library g3d-6.09/G3Dcpp\Color4.cpp (function ?decimal_point@?$numpunct@D@std@@QBEDXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color4.cpp
