// from server: 100% by auto
// roc 2008-06 00489230  unit: G3D::VertexAndPixelShader  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00489230
//
// 00489230  56                   push esi
// 00489231  6875800000           push 0x8075
// 00489236  8bf1                 mov esi, ecx
// 00489238  ff15182a8000         call dword ptr [0x802a18]
// 0048923e  8b4604               mov eax, dword ptr [esi + 4]
// 00489241  8b4e08               mov ecx, dword ptr [esi + 8]
// 00489244  8b5618               mov edx, dword ptr [esi + 0x18]
// 00489247  50                   push eax
// 00489248  51                   push ecx
// 00489249  52                   push edx
// 0048924a  ff15142a8000         call dword ptr [0x802a14]
// 00489250  5e                   pop esi
// 00489251  c3                   ret 
// library g3d-6.09/GLG3Dcpp\VAR.cpp (function ?normalPointer@VAR@G3D@@ABEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/VAR.cpp
