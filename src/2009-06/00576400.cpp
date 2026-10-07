// roc 2009-06 00576400  unit: G3D::BinaryInput  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576400
//
// 00576400  b801000000           mov eax, 1
// 00576405  8405a82aa400         test byte ptr [0xa42aa8], al
// 0057640b  751c                 jne 0x576429
// 0057640d  d9ee                 fldz 
// 0057640f  0905a82aa400         or dword ptr [0xa42aa8], eax
// 00576415  d9159c2aa400         fst dword ptr [0xa42a9c]
// 0057641b  d9e8                 fld1 
// 0057641d  d91da02aa400         fstp dword ptr [0xa42aa0]
// 00576423  d91da42aa400         fstp dword ptr [0xa42aa4]
// 00576429  b89c2aa400           mov eax, 0xa42a9c
// 0057642e  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
