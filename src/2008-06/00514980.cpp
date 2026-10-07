// roc 2008-06 00514980  unit: G3D::GCamera  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514980
//
// 00514980  b801000000           mov eax, 1
// 00514985  840534379700         test byte ptr [0x973734], al
// 0051498b  751c                 jne 0x5149a9
// 0051498d  d9e8                 fld1 
// 0051498f  090534379700         or dword ptr [0x973734], eax
// 00514995  d91528379700         fst dword ptr [0x973728]
// 0051499b  d91d2c379700         fstp dword ptr [0x97372c]
// 005149a1  d9ee                 fldz 
// 005149a3  d91d30379700         fstp dword ptr [0x973730]
// 005149a9  b828379700           mov eax, 0x973728
// 005149ae  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?yellow@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
