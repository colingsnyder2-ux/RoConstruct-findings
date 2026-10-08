// from server: 100% by auto
// roc 2008-06 005149f0  unit: G3D::GCamera  size: 45 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005149f0
//
// 005149f0  b801000000           mov eax, 1
// 005149f5  840554379700         test byte ptr [0x973754], al
// 005149fb  751a                 jne 0x514a17
// 005149fd  d9ee                 fldz 
// 005149ff  090554379700         or dword ptr [0x973754], eax
// 00514a05  d91548379700         fst dword ptr [0x973748]
// 00514a0b  d9154c379700         fst dword ptr [0x97374c]
// 00514a11  d91d50379700         fstp dword ptr [0x973750]
// 00514a17  b848379700           mov eax, 0x973748
// 00514a1c  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?zero@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
