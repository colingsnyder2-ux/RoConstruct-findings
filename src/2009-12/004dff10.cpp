// roc 2009-12 004dff10  unit: G3D::VertexAndPixelShader  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004dff10
//
// 004dff10  56                   push esi
// 004dff11  6875800000           push 0x8075
// 004dff16  8bf1                 mov esi, ecx
// 004dff18  ff1554bb9800         call dword ptr [0x98bb54]
// 004dff1e  8b4604               mov eax, dword ptr [esi + 4]
// 004dff21  8b4e08               mov ecx, dword ptr [esi + 8]
// 004dff24  8b5618               mov edx, dword ptr [esi + 0x18]
// 004dff27  50                   push eax
// 004dff28  51                   push ecx
// 004dff29  52                   push edx
// 004dff2a  ff1558bb9800         call dword ptr [0x98bb58]
// 004dff30  5e                   pop esi
// 004dff31  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?normalPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
