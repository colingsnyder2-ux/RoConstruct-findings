// roc 2007-03 00504030  unit: seg_00500000  size: 13 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00504030
//
// 00504030  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00504034  8b4104               mov eax, dword ptr [ecx + 4]
// 00504037  c1e010               shl eax, 0x10
// 0050403a  0301                 add eax, dword ptr [ecx]
// 0050403c  c3                   ret 
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ?hashCode@@YAIABVMeshDirectedEdgeKey@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
