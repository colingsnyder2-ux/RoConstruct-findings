// roc 2007-03 00777ff0  unit: seg_00770000  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00777ff0
//
// 00777ff0  c705709c8800e4597900 mov dword ptr [0x889c70], 0x7959e4
// 00777ffa  b9709c8800           mov ecx, 0x889c70
// 00777fff  e92c31d0ff           jmp 0x47b130
// library rbxgs-g3d/G3Dcpp\MeshAlgAdjacency.cpp (function ??__FedgeTable@G3D@@YAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/MeshAlgAdjacency.cpp
