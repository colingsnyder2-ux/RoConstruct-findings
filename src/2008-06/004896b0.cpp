// roc 2008-06 004896b0  unit: G3D::VertexAndPixelShader  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004896b0
//
// 004896b0  8b442410             mov eax, dword ptr [esp + 0x10]
// 004896b4  8b542404             mov edx, dword ptr [esp + 4]
// 004896b8  0fafd0               imul edx, eax
// 004896bb  50                   push eax
// 004896bc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 004896c0  52                   push edx
// 004896c1  50                   push eax
// 004896c2  e839fcffff           call 0x489300
// 004896c7  c21000               ret 0x10
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?set@VAR@G3D@@AAEXHPBXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
