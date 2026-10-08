// roc 2007-03 00484530  unit: seg_00480000  size: 11 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00484530
//
// 00484530  8b4118               mov eax, dword ptr [ecx + 0x18]
// 00484533  50                   push eax
// 00484534  ff1574eb7700         call dword ptr [0x77eb74]
// 0048453a  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GPUProgram.cpp (function ?disable@GPUProgram@G3D@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GPUProgram.cpp
