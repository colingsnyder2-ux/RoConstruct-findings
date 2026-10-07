// roc 2009-06 004b3650  unit: G3D::VertexAndPixelShader  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b3650
//
// 004b3650  83790800             cmp dword ptr [ecx + 8], 0
// 004b3654  7e3e                 jle 0x4b3694
// 004b3656  8b4108               mov eax, dword ptr [ecx + 8]
// 004b3659  8b5104               mov edx, dword ptr [ecx + 4]
// 004b365c  8d0440               lea eax, [eax + eax*2]
// 004b365f  807c82fc00           cmp byte ptr [edx + eax*4 - 4], 0
// 004b3664  8b4108               mov eax, dword ptr [ecx + 8]
// 004b3667  7410                 je 0x4b3679
// 004b3669  8d0440               lea eax, [eax + eax*2]
// 004b366c  8bca                 mov ecx, edx
// 004b366e  8b4c81f4             mov ecx, dword ptr [ecx + eax*4 - 0xc]
// 004b3672  8b11                 mov edx, dword ptr [ecx]
// 004b3674  8b4228               mov eax, dword ptr [edx + 0x28]
// 004b3677  ffe0                 jmp eax
// 004b3679  56                   push esi
// 004b367a  8b7104               mov esi, dword ptr [ecx + 4]
// 004b367d  8d1440               lea edx, [eax + eax*2]
// 004b3680  8d0440               lea eax, [eax + eax*2]
// 004b3683  8bce                 mov ecx, esi
// 004b3685  8b4481f8             mov eax, dword ptr [ecx + eax*4 - 8]
// 004b3689  8b4c96f4             mov ecx, dword ptr [esi + edx*4 - 0xc]
// 004b368d  50                   push eax
// 004b368e  ffd1                 call ecx
// 004b3690  83c404               add esp, 4
// 004b3693  5e                   pop esi
// 004b3694  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?executeLoopBody@GWindow@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
