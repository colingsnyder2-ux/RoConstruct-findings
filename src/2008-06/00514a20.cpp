// roc 2008-06 00514a20  unit: G3D::GCamera  size: 49 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514a20
//
// 00514a20  b801000000           mov eax, 1
// 00514a25  840564379700         test byte ptr [0x973764], al
// 00514a2b  751e                 jne 0x514a4b
// 00514a2d  d905b8888200         fld dword ptr [0x8288b8]
// 00514a33  090564379700         or dword ptr [0x973764], eax
// 00514a39  d91558379700         fst dword ptr [0x973758]
// 00514a3f  d9155c379700         fst dword ptr [0x97375c]
// 00514a45  d91d60379700         fstp dword ptr [0x973760]
// 00514a4b  b858379700           mov eax, 0x973758
// 00514a50  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?gray@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
