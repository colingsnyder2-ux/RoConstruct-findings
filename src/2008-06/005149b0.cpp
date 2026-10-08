// from server: 100% by auto
// roc 2008-06 005149b0  unit: G3D::GCamera  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005149b0
//
// 005149b0  b801000000           mov eax, 1
// 005149b5  840544379700         test byte ptr [0x973744], al
// 005149bb  7522                 jne 0x5149df
// 005149bd  d9e8                 fld1 
// 005149bf  090544379700         or dword ptr [0x973744], eax
// 005149c5  d91d38379700         fstp dword ptr [0x973738]
// 005149cb  d905ac9b8100         fld dword ptr [0x819bac]
// 005149d1  d91d3c379700         fstp dword ptr [0x97373c]
// 005149d7  d9ee                 fldz 
// 005149d9  d91d40379700         fstp dword ptr [0x973740]
// 005149df  b838379700           mov eax, 0x973738
// 005149e4  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?orange@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
