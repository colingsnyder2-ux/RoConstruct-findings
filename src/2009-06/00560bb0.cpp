// roc 2009-06 00560bb0  unit: RBX::WedgeBuilder  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00560bb0
//
// 00560bb0  8b4104               mov eax, dword ptr [ecx + 4]
// 00560bb3  8b09                 mov ecx, dword ptr [ecx]
// 00560bb5  8d4481fc             lea eax, [ecx + eax*4 - 4]
// 00560bb9  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Milestone.cpp (function ?last@?$Array@I@G3D@@QAEAAIXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Milestone.cpp
