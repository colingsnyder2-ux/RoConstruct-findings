// roc 2009-12 00980f10  unit: seg_00980000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00980f10
//
// 00980f10  c7055872b200b42e9c00 mov dword ptr [0xb27258], 0x9c2eb4
// 00980f1a  b95872b200           mov ecx, 0xb27258
// 00980f1f  e94cbbc7ff           jmp 0x5fca70
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
