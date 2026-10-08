// roc 2007-03 004f3e60  unit: seg_004f0000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004f3e60
//
// 004f3e60  e83bf9ffff           call 0x4f37a0
// 004f3e65  a06aad8b00           mov al, byte ptr [0x8bad6a]
// 004f3e6a  c3                   ret 
// library rbxgs-g3d/G3Dcpp\System.cpp (function ?hasCPUID@System@G3D@@SA_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d G3Dcpp/System.cpp
