// roc 2010-06 0055e690  unit: G3D::TextInput::WrongSymbol  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0055e690
//
// 0055e690  8b4108               mov eax, dword ptr [ecx + 8]
// 0055e693  8b5104               mov edx, dword ptr [ecx + 4]
// 0055e696  6bc065               imul eax, eax, 0x65
// 0055e699  6bd225               imul edx, edx, 0x25
// 0055e69c  03c2                 add eax, edx
// 0055e69e  0301                 add eax, dword ptr [ecx]
// 0055e6a0  c3                   ret 
// library g3d-6.09/G3Dcpp\Vector3.cpp (function ?hashCode@Vector3@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Vector3.cpp
