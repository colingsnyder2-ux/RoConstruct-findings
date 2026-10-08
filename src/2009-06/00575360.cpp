// from server: 100% by auto
// roc 2009-06 00575360  unit: G3D::BinaryInput  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00575360
//
// 00575360  8b4108               mov eax, dword ptr [ecx + 8]
// 00575363  8b5104               mov edx, dword ptr [ecx + 4]
// 00575366  6bc065               imul eax, eax, 0x65
// 00575369  6bd225               imul edx, edx, 0x25
// 0057536c  03c2                 add eax, edx
// 0057536e  0301                 add eax, dword ptr [ecx]
// 00575370  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?hashCode@Vector3@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
