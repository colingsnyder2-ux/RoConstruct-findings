// from server: 100% by auto
// roc 2007-08 00778d60  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00778d60
//
// 00778d60  c705d07589002cf17900 mov dword ptr [0x8975d0], 0x79f12c
// 00778d6a  b9d0758900           mov ecx, 0x8975d0
// 00778d6f  e93ccad5ff           jmp 0x4d57b0
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
