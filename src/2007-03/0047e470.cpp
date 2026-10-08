// roc 2007-03 0047e470  unit: seg_00470000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047e470
//
// 0047e470  83790800             cmp dword ptr [ecx + 8], 0
// 0047e474  7e3e                 jle 0x47e4b4
// 0047e476  8b4108               mov eax, dword ptr [ecx + 8]
// 0047e479  8b5104               mov edx, dword ptr [ecx + 4]
// 0047e47c  8d0440               lea eax, [eax + eax*2]
// 0047e47f  807c82fc00           cmp byte ptr [edx + eax*4 - 4], 0
// 0047e484  8b4108               mov eax, dword ptr [ecx + 8]
// 0047e487  7410                 je 0x47e499
// 0047e489  8d0440               lea eax, [eax + eax*2]
// 0047e48c  8bca                 mov ecx, edx
// 0047e48e  8b4c81f4             mov ecx, dword ptr [ecx + eax*4 - 0xc]
// 0047e492  8b11                 mov edx, dword ptr [ecx]
// 0047e494  8b4228               mov eax, dword ptr [edx + 0x28]
// 0047e497  ffe0                 jmp eax
// 0047e499  56                   push esi
// 0047e49a  8b7104               mov esi, dword ptr [ecx + 4]
// 0047e49d  8d1440               lea edx, [eax + eax*2]
// 0047e4a0  8d0440               lea eax, [eax + eax*2]
// 0047e4a3  8bce                 mov ecx, esi
// 0047e4a5  8b4481f8             mov eax, dword ptr [ecx + eax*4 - 8]
// 0047e4a9  8b4c96f4             mov ecx, dword ptr [esi + edx*4 - 0xc]
// 0047e4ad  50                   push eax
// 0047e4ae  ffd1                 call ecx
// 0047e4b0  83c404               add esp, 4
// 0047e4b3  5e                   pop esi
// 0047e4b4  c3                   ret 
// library rbxgs-g3d/GLG3Dcpp\GWindow.cpp (function ?executeLoopBody@GWindow@G3D@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/GWindow.cpp
