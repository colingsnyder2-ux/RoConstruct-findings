// roc 2008-06 004896d0  unit: G3D::VertexAndPixelShader  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004896d0
//
// 004896d0  83790800             cmp dword ptr [ecx + 8], 0
// 004896d4  7e3e                 jle 0x489714
// 004896d6  8b4108               mov eax, dword ptr [ecx + 8]
// 004896d9  8b5104               mov edx, dword ptr [ecx + 4]
// 004896dc  8d0440               lea eax, [eax + eax*2]
// 004896df  807c82fc00           cmp byte ptr [edx + eax*4 - 4], 0
// 004896e4  8b4108               mov eax, dword ptr [ecx + 8]
// 004896e7  7410                 je 0x4896f9
// 004896e9  8d0440               lea eax, [eax + eax*2]
// 004896ec  8bca                 mov ecx, edx
// 004896ee  8b4c81f4             mov ecx, dword ptr [ecx + eax*4 - 0xc]
// 004896f2  8b11                 mov edx, dword ptr [ecx]
// 004896f4  8b4228               mov eax, dword ptr [edx + 0x28]
// 004896f7  ffe0                 jmp eax
// 004896f9  56                   push esi
// 004896fa  8b7104               mov esi, dword ptr [ecx + 4]
// 004896fd  8d1440               lea edx, [eax + eax*2]
// 00489700  8d0440               lea eax, [eax + eax*2]
// 00489703  8bce                 mov ecx, esi
// 00489705  8b4481f8             mov eax, dword ptr [ecx + eax*4 - 8]
// 00489709  8b4c96f4             mov ecx, dword ptr [esi + edx*4 - 0xc]
// 0048970d  50                   push eax
// 0048970e  ffd1                 call ecx
// 00489710  83c404               add esp, 4
// 00489713  5e                   pop esi
// 00489714  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?executeLoopBody@GWindow@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
