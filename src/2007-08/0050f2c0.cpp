// from server: 100% by auto
// roc 2007-08 0050f2c0  unit: G3D::TextInput::WrongSymbol  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f2c0
//
// 0050f2c0  8b4108               mov eax, dword ptr [ecx + 8]
// 0050f2c3  8b5104               mov edx, dword ptr [ecx + 4]
// 0050f2c6  6bc065               imul eax, eax, 0x65
// 0050f2c9  6bd225               imul edx, edx, 0x25
// 0050f2cc  03c2                 add eax, edx
// 0050f2ce  0301                 add eax, dword ptr [ecx]
// 0050f2d0  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?hashCode@Vector3@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
