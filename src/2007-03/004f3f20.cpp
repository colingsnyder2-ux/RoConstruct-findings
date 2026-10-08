// roc 2007-03 004f3f20  unit: seg_004f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3f20
//
// 004f3f20  e87bf8ffff           call 0x4f37a0
// 004f3f25  a11c5e8900           mov eax, dword ptr [0x895e1c]
// 004f3f2a  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?machineEndian@System@G3D@@SA?AW4G3DEndian@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
