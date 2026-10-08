// roc 2009-12 005f4a80  unit: seg_005f0000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005f4a80
//
// 005f4a80  8b4108               mov eax, dword ptr [ecx + 8]
// 005f4a83  8b5104               mov edx, dword ptr [ecx + 4]
// 005f4a86  6bc065               imul eax, eax, 0x65
// 005f4a89  6bd225               imul edx, edx, 0x25
// 005f4a8c  03c2                 add eax, edx
// 005f4a8e  0301                 add eax, dword ptr [ecx]
// 005f4a90  c3                   ret 
// library g3d-6.09/G3Dcpp\Color3.cpp (function ?hashCode@Color3@G3D@@QBEIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Color3.cpp
