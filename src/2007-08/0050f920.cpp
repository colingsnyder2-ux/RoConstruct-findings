// roc 2007-08 0050f920  unit: G3D::TextInput::WrongSymbol  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0050f920
//
// 0050f920  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0050f924  8b4104               mov eax, dword ptr [ecx + 4]
// 0050f927  c1e010               shl eax, 0x10
// 0050f92a  0301                 add eax, dword ptr [ecx]
// 0050f92c  c3                   ret 
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ?hashCode@@YAIABVMeshDirectedEdgeKey@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
