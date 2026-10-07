// roc 2008-06 005183a0  unit: G3D::TextInput::WrongSymbol  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005183a0
//
// 005183a0  8b4108               mov eax, dword ptr [ecx + 8]
// 005183a3  8b5104               mov edx, dword ptr [ecx + 4]
// 005183a6  6bc065               imul eax, eax, 0x65
// 005183a9  6bd225               imul edx, edx, 0x25
// 005183ac  03c2                 add eax, edx
// 005183ae  0301                 add eax, dword ptr [ecx]
// 005183b0  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?hashCode@Vector3@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
