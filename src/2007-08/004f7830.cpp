// from server: 100% by auto
// roc 2007-08 004f7830  unit: G3D::Sphere  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f7830
//
// 004f7830  b801000000           mov eax, 1
// 004f7835  8405f4fb8b00         test byte ptr [0x8bfbf4], al
// 004f783b  751c                 jne 0x4f7859
// 004f783d  d9ee                 fldz 
// 004f783f  0905f4fb8b00         or dword ptr [0x8bfbf4], eax
// 004f7845  d915e8fb8b00         fst dword ptr [0x8bfbe8]
// 004f784b  d9e8                 fld1 
// 004f784d  d91decfb8b00         fstp dword ptr [0x8bfbec]
// 004f7853  d91df0fb8b00         fstp dword ptr [0x8bfbf0]
// 004f7859  b8e8fb8b00           mov eax, 0x8bfbe8
// 004f785e  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
