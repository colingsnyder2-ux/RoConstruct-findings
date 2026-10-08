// roc 2009-12 004e0390  unit: G3D::VertexAndPixelShader  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004e0390
//
// 004e0390  8b442410             mov eax, dword ptr [esp + 0x10]
// 004e0394  8b542404             mov edx, dword ptr [esp + 4]
// 004e0398  0fafd0               imul edx, eax
// 004e039b  50                   push eax
// 004e039c  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004e03a0  52                   push edx
// 004e03a1  50                   push eax
// 004e03a2  e839fcffff           call 0x4dffe0
// 004e03a7  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?set@VAR@G3D@@AAEXHPBXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
