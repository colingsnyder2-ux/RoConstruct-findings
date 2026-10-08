// roc 2007-03 004f3e50  unit: seg_004f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3e50
//
// 004f3e50  e84bf9ffff           call 0x4f37a0
// 004f3e55  a068ad8b00           mov al, byte ptr [0x8bad68]
// 004f3e5a  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?hasCPUID@System@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
