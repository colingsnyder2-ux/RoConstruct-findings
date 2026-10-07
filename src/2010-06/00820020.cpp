// roc 2010-06 00820020  unit: CXTPPropertyGridItemEnum  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00820020
//
// 00820020  b801000000           mov eax, 1
// 00820025  8405f461c200         test byte ptr [0xc261f4], al
// 0082002b  7510                 jne 0x82003d
// 0082002d  0905f461c200         or dword ptr [0xc261f4], eax
// 00820033  b9e461c200           mov ecx, 0xc261e4
// 00820038  e8c3ffffff           call 0x820000
// 0082003d  b8e461c200           mov eax, 0xc261e4
// 00820042  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
