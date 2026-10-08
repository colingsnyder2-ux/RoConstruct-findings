// roc 2009-12 0097eff0  unit: seg_00970000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0097eff0
//
// 0097eff0  c7052010b100d4589b00 mov dword ptr [0xb11020], 0x9b58d4
// 0097effa  b92010b100           mov ecx, 0xb11020
// 0097efff  e9dcd8b4ff           jmp 0x4cc8e0
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
