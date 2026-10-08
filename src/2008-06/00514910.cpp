// from server: 100% by auto
// roc 2008-06 00514910  unit: G3D::GCamera  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00514910
//
// 00514910  b801000000           mov eax, 1
// 00514915  840514379700         test byte ptr [0x973714], al
// 0051491b  751c                 jne 0x514939
// 0051491d  d9ee                 fldz 
// 0051491f  090514379700         or dword ptr [0x973714], eax
// 00514925  d91508379700         fst dword ptr [0x973708]
// 0051492b  d91d0c379700         fstp dword ptr [0x97370c]
// 00514931  d9e8                 fld1 
// 00514933  d91d10379700         fstp dword ptr [0x973710]
// 00514939  b808379700           mov eax, 0x973708
// 0051493e  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?unitZ@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
