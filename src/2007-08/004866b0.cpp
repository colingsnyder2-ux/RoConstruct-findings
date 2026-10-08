// from server: 100% by auto
// roc 2007-08 004866b0  unit: G3D::VertexAndPixelShader  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004866b0
//
// 004866b0  83790800             cmp dword ptr [ecx + 8], 0
// 004866b4  7e3e                 jle 0x4866f4
// 004866b6  8b4108               mov eax, dword ptr [ecx + 8]
// 004866b9  8b5104               mov edx, dword ptr [ecx + 4]
// 004866bc  8d0440               lea eax, [eax + eax*2]
// 004866bf  807c82fc00           cmp byte ptr [edx + eax*4 - 4], 0
// 004866c4  8b4108               mov eax, dword ptr [ecx + 8]
// 004866c7  7410                 je 0x4866d9
// 004866c9  8d0440               lea eax, [eax + eax*2]
// 004866cc  8bca                 mov ecx, edx
// 004866ce  8b4c81f4             mov ecx, dword ptr [ecx + eax*4 - 0xc]
// 004866d2  8b11                 mov edx, dword ptr [ecx]
// 004866d4  8b4228               mov eax, dword ptr [edx + 0x28]
// 004866d7  ffe0                 jmp eax
// 004866d9  56                   push esi
// 004866da  8b7104               mov esi, dword ptr [ecx + 4]
// 004866dd  8d1440               lea edx, [eax + eax*2]
// 004866e0  8d0440               lea eax, [eax + eax*2]
// 004866e3  8bce                 mov ecx, esi
// 004866e5  8b4481f8             mov eax, dword ptr [ecx + eax*4 - 8]
// 004866e9  8b4c96f4             mov ecx, dword ptr [esi + edx*4 - 0xc]
// 004866ed  50                   push eax
// 004866ee  ffd1                 call ecx
// 004866f0  83c404               add esp, 4
// 004866f3  5e                   pop esi
// 004866f4  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?executeLoopBody@GWindow@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
