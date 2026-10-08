// roc 2009-12 004e03b0  unit: G3D::VertexAndPixelShader  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004e03b0
//
// 004e03b0  83790800             cmp dword ptr [ecx + 8], 0
// 004e03b4  7e3e                 jle 0x4e03f4
// 004e03b6  8b4108               mov eax, dword ptr [ecx + 8]
// 004e03b9  8b5104               mov edx, dword ptr [ecx + 4]
// 004e03bc  8d0440               lea eax, [eax + eax*2]
// 004e03bf  807c82fc00           cmp byte ptr [edx + eax*4 - 4], 0
// 004e03c4  8b4108               mov eax, dword ptr [ecx + 8]
// 004e03c7  7410                 je 0x4e03d9
// 004e03c9  8d0440               lea eax, [eax + eax*2]
// 004e03cc  8bca                 mov ecx, edx
// 004e03ce  8b4c81f4             mov ecx, dword ptr [ecx + eax*4 - 0xc]
// 004e03d2  8b11                 mov edx, dword ptr [ecx]
// 004e03d4  8b4228               mov eax, dword ptr [edx + 0x28]
// 004e03d7  ffe0                 jmp eax
// 004e03d9  56                   push esi
// 004e03da  8b7104               mov esi, dword ptr [ecx + 4]
// 004e03dd  8d1440               lea edx, [eax + eax*2]
// 004e03e0  8d0440               lea eax, [eax + eax*2]
// 004e03e3  8bce                 mov ecx, esi
// 004e03e5  8b4481f8             mov eax, dword ptr [ecx + eax*4 - 8]
// 004e03e9  8b4c96f4             mov ecx, dword ptr [esi + edx*4 - 0xc]
// 004e03ed  50                   push eax
// 004e03ee  ffd1                 call ecx
// 004e03f0  83c404               add esp, 4
// 004e03f3  5e                   pop esi
// 004e03f4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?executeLoopBody@GWindow@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
