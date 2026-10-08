// from server: 100% by auto
// roc 2008-06 004f4e50  unit: RBX::ViewNew::PBBBuilder  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f4e50
//
// 004f4e50  8b4104               mov eax, dword ptr [ecx + 4]
// 004f4e53  8b09                 mov ecx, dword ptr [ecx]
// 004f4e55  8d4481fc             lea eax, [ecx + eax*4 - 4]
// 004f4e59  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?last@?$Array@I@G3D@@QAEAAIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
