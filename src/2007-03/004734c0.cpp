// roc 2007-03 004734c0  unit: seg_00470000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004734c0
//
// 004734c0  807c240400           cmp byte ptr [esp + 4], 0
// 004734c5  b824707900           mov eax, 0x797024
// 004734ca  7505                 jne 0x4734d1
// 004734cc  b818707900           mov eax, 0x797018
// 004734d1  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\RenderDevice.cpp (function ?isOk@G3D@@YAPBD_N@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/RenderDevice.cpp
