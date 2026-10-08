// from server: 100% by auto
// roc 2008-06 007fb060  unit: seg_007f0000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007fb060
//
// 007fb060  c7059c36930024ce8100 mov dword ptr [0x93369c], 0x81ce24
// 007fb06a  b99c369300           mov ecx, 0x93369c
// 007fb06f  e9ac50c8ff           jmp 0x480120
// library g3d-6.09/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/MeshAlgAdjacency.cpp
