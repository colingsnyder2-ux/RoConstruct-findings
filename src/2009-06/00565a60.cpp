// roc 2009-06 00565a60  unit: RBX::RbxG3D::RenderScene  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00565a60
//
// 00565a60  b801000000           mov eax, 1
// 00565a65  8405b01ca400         test byte ptr [0xa41cb0], al
// 00565a6b  751c                 jne 0x565a89
// 00565a6d  d9ee                 fldz 
// 00565a6f  0905b01ca400         or dword ptr [0xa41cb0], eax
// 00565a75  d915a41ca400         fst dword ptr [0xa41ca4]
// 00565a7b  d9e8                 fld1 
// 00565a7d  d91da81ca400         fstp dword ptr [0xa41ca8]
// 00565a83  d91dac1ca400         fstp dword ptr [0xa41cac]
// 00565a89  b8a41ca400           mov eax, 0xa41ca4
// 00565a8e  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?unitY@Vector3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
