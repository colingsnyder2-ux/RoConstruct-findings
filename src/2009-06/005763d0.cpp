// roc 2009-06 005763d0  unit: G3D::BinaryInput  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005763d0
//
// 005763d0  b801000000           mov eax, 1
// 005763d5  8405982aa400         test byte ptr [0xa42a98], al
// 005763db  751c                 jne 0x5763f9
// 005763dd  d9e8                 fld1 
// 005763df  0905982aa400         or dword ptr [0xa42a98], eax
// 005763e5  d91d8c2aa400         fstp dword ptr [0xa42a8c]
// 005763eb  d9ee                 fldz 
// 005763ed  d915902aa400         fst dword ptr [0xa42a90]
// 005763f3  d91d942aa400         fstp dword ptr [0xa42a94]
// 005763f9  b88c2aa400           mov eax, 0xa42a8c
// 005763fe  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitX@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
