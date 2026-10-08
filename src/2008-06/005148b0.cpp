// from server: 100% by auto
// roc 2008-06 005148b0  unit: G3D::GCamera  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005148b0
//
// 005148b0  b801000000           mov eax, 1
// 005148b5  8405f4369700         test byte ptr [0x9736f4], al
// 005148bb  751c                 jne 0x5148d9
// 005148bd  d9e8                 fld1 
// 005148bf  0905f4369700         or dword ptr [0x9736f4], eax
// 005148c5  d91de8369700         fstp dword ptr [0x9736e8]
// 005148cb  d9ee                 fldz 
// 005148cd  d915ec369700         fst dword ptr [0x9736ec]
// 005148d3  d91df0369700         fstp dword ptr [0x9736f0]
// 005148d9  b8e8369700           mov eax, 0x9736e8
// 005148de  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitX@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
