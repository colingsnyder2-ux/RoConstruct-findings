// roc 2009-06 004b3630  unit: G3D::VertexAndPixelShader  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3630
//
// 004b3630  8b442410             mov eax, dword ptr [esp + 0x10]
// 004b3634  8b542404             mov edx, dword ptr [esp + 4]
// 004b3638  0fafd0               imul edx, eax
// 004b363b  50                   push eax
// 004b363c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004b3640  52                   push edx
// 004b3641  50                   push eax
// 004b3642  e839fcffff           call 0x4b3280
// 004b3647  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?set@VAR@G3D@@AAEXHPBXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
