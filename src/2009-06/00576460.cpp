// from server: 100% by auto
// roc 2009-06 00576460  unit: G3D::BinaryInput  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00576460
//
// 00576460  b801000000           mov eax, 1
// 00576465  8405c82aa400         test byte ptr [0xa42ac8], al
// 0057646b  7522                 jne 0x57648f
// 0057646d  d90508e88b00         fld dword ptr [0x8be808]
// 00576473  0905c82aa400         or dword ptr [0xa42ac8], eax
// 00576479  d91dbc2aa400         fstp dword ptr [0xa42abc]
// 0057647f  d9ee                 fldz 
// 00576481  d91dc02aa400         fstp dword ptr [0xa42ac0]
// 00576487  d9e8                 fld1 
// 00576489  d91dc42aa400         fstp dword ptr [0xa42ac4]
// 0057648f  b8bc2aa400           mov eax, 0xa42abc
// 00576494  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?purple@Color3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
