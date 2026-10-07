// roc 2008-06 00513e20  unit: G3D::GCamera  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00513e20
//
// 00513e20  b801000000           mov eax, 1
// 00513e25  84057c369700         test byte ptr [0x97367c], al
// 00513e2b  7540                 jne 0x513e6d
// 00513e2d  d9e8                 fld1 
// 00513e2f  09057c369700         or dword ptr [0x97367c], eax
// 00513e35  d91558369700         fst dword ptr [0x973658]
// 00513e3b  d9ee                 fldz 
// 00513e3d  d9155c369700         fst dword ptr [0x97365c]
// 00513e43  d91560369700         fst dword ptr [0x973660]
// 00513e49  d91564369700         fst dword ptr [0x973664]
// 00513e4f  d9156c369700         fst dword ptr [0x97366c]
// 00513e55  d91570369700         fst dword ptr [0x973670]
// 00513e5b  d91d74369700         fstp dword ptr [0x973674]
// 00513e61  d91568369700         fst dword ptr [0x973668]
// 00513e67  d91d78369700         fstp dword ptr [0x973678]
// 00513e6d  b858369700           mov eax, 0x973658
// 00513e72  c3                   ret 
// library g3d-6.09/G3Dcpp\Matrix3.cpp (function ?identity@Matrix3@G3D@@SAABV12@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Matrix3.cpp
