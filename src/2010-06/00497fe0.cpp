// from server: 100% by auto
// roc 2010-06 00497fe0  unit: seg_00490000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00497fe0
//
// 00497fe0  83790800             cmp dword ptr [ecx + 8], 0
// 00497fe4  7e3e                 jle 0x498024
// 00497fe6  8b4108               mov eax, dword ptr [ecx + 8]
// 00497fe9  8b5104               mov edx, dword ptr [ecx + 4]
// 00497fec  8d0440               lea eax, [eax + eax*2]
// 00497fef  807c82fc00           cmp byte ptr [edx + eax*4 - 4], 0
// 00497ff4  8b4108               mov eax, dword ptr [ecx + 8]
// 00497ff7  7410                 je 0x498009
// 00497ff9  8d0440               lea eax, [eax + eax*2]
// 00497ffc  8bca                 mov ecx, edx
// 00497ffe  8b4c81f4             mov ecx, dword ptr [ecx + eax*4 - 0xc]
// 00498002  8b11                 mov edx, dword ptr [ecx]
// 00498004  8b4228               mov eax, dword ptr [edx + 0x28]
// 00498007  ffe0                 jmp eax
// 00498009  56                   push esi
// 0049800a  8b7104               mov esi, dword ptr [ecx + 4]
// 0049800d  8d1440               lea edx, [eax + eax*2]
// 00498010  8d0440               lea eax, [eax + eax*2]
// 00498013  8bce                 mov ecx, esi
// 00498015  8b4481f8             mov eax, dword ptr [ecx + eax*4 - 8]
// 00498019  8b4c96f4             mov ecx, dword ptr [esi + edx*4 - 0xc]
// 0049801d  50                   push eax
// 0049801e  ffd1                 call ecx
// 00498020  83c404               add esp, 4
// 00498023  5e                   pop esi
// 00498024  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GWindow.cpp (function ?executeLoopBody@GWindow@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GWindow.cpp
