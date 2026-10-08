// roc 2009-12 0086c020  unit: CXTPPropertyGridItemEnum  size: 35 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086c020
//
// 0086c020  b801000000           mov eax, 1
// 0086c025  8405c4bab900         test byte ptr [0xb9bac4], al
// 0086c02b  7510                 jne 0x86c03d
// 0086c02d  0905c4bab900         or dword ptr [0xb9bac4], eax
// 0086c033  b9b4bab900           mov ecx, 0xb9bab4
// 0086c038  e8c3ffffff           call 0x86c000
// 0086c03d  b8b4bab900           mov eax, 0xb9bab4
// 0086c042  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?box@Shape@G3D@@UAEAAVBox@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /arch:SSE2 /fp:fast
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
