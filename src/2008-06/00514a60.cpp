// roc 2008-06 00514a60  unit: G3D::GCamera  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514a60
//
// 00514a60  b801000000           mov eax, 1
// 00514a65  840574379700         test byte ptr [0x973774], al
// 00514a6b  751a                 jne 0x514a87
// 00514a6d  d9e8                 fld1 
// 00514a6f  090574379700         or dword ptr [0x973774], eax
// 00514a75  d91568379700         fst dword ptr [0x973768]
// 00514a7b  d9156c379700         fst dword ptr [0x97376c]
// 00514a81  d91d70379700         fstp dword ptr [0x973770]
// 00514a87  b868379700           mov eax, 0x973768
// 00514a8c  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?white@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
