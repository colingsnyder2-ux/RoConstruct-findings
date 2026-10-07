// roc 2007-08 00486220  unit: G3D::VertexAndPixelShader  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00486220
//
// 00486220  56                   push esi
// 00486221  6875800000           push 0x8075
// 00486226  8bf1                 mov esi, ecx
// 00486228  ff154cea7700         call dword ptr [0x77ea4c]
// 0048622e  8b4604               mov eax, dword ptr [esi + 4]
// 00486231  8b4e08               mov ecx, dword ptr [esi + 8]
// 00486234  8b5618               mov edx, dword ptr [esi + 0x18]
// 00486237  50                   push eax
// 00486238  51                   push ecx
// 00486239  52                   push edx
// 0048623a  ff1548ea7700         call dword ptr [0x77ea48]
// 00486240  5e                   pop esi
// 00486241  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?normalPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
