// roc 2007-03 0047b880  unit: seg_00470000  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0047b880
//
// 0047b880  53                   push ebx
// 0047b881  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0047b885  56                   push esi
// 0047b886  8bf1                 mov esi, ecx
// 0047b888  8b06                 mov eax, dword ptr [esi]
// 0047b88a  57                   push edi
// 0047b88b  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047b88f  3bf8                 cmp edi, eax
// 0047b891  720a                 jb 0x47b89d
// 0047b893  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047b896  8d1488               lea edx, [eax + ecx*4]
// 0047b899  3bfa                 cmp edi, edx
// 0047b89b  7268                 jb 0x47b905
// 0047b89d  3bd8                 cmp ebx, eax
// 0047b89f  720a                 jb 0x47b8ab
// 0047b8a1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047b8a4  8d1488               lea edx, [eax + ecx*4]
// 0047b8a7  3bda                 cmp ebx, edx
// 0047b8a9  725a                 jb 0x47b905
// 0047b8ab  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047b8ae  8d5101               lea edx, [ecx + 1]
// 0047b8b1  3b5608               cmp edx, dword ptr [esi + 8]
// 0047b8b4  7d26                 jge 0x47b8dc
// 0047b8b6  8d0488               lea eax, [eax + ecx*4]
// 0047b8b9  85c0                 test eax, eax
// 0047b8bb  7404                 je 0x47b8c1
// 0047b8bd  8b0f                 mov ecx, dword ptr [edi]
// 0047b8bf  8908                 mov dword ptr [eax], ecx
// 0047b8c1  8b5604               mov edx, dword ptr [esi + 4]
// 0047b8c4  8b06                 mov eax, dword ptr [esi]
// 0047b8c6  8d449004             lea eax, [eax + edx*4 + 4]
// 0047b8ca  85c0                 test eax, eax
// 0047b8cc  7404                 je 0x47b8d2
// 0047b8ce  8b0b                 mov ecx, dword ptr [ebx]
// 0047b8d0  8908                 mov dword ptr [eax], ecx
// 0047b8d2  83460402             add dword ptr [esi + 4], 2
// 0047b8d6  5f                   pop edi
// 0047b8d7  5e                   pop esi
// 0047b8d8  5b                   pop ebx
// 0047b8d9  c20800               ret 8
// 0047b8dc  83c102               add ecx, 2
// 0047b8df  6a00                 push 0
// 0047b8e1  51                   push ecx
// 0047b8e2  8bce                 mov ecx, esi
// 0047b8e4  e837f7ffff           call 0x47b020
// 0047b8e9  8b5604               mov edx, dword ptr [esi + 4]
// 0047b8ec  8b06                 mov eax, dword ptr [esi]
// 0047b8ee  8b0f                 mov ecx, dword ptr [edi]
// 0047b8f0  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 0047b8f4  8b5604               mov edx, dword ptr [esi + 4]
// 0047b8f7  8b06                 mov eax, dword ptr [esi]
// 0047b8f9  8b0b                 mov ecx, dword ptr [ebx]
// 0047b8fb  5f                   pop edi
// 0047b8fc  5e                   pop esi
// 0047b8fd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0047b901  5b                   pop ebx
// 0047b902  c20800               ret 8
// 0047b905  8b17                 mov edx, dword ptr [edi]
// 0047b907  8b03                 mov eax, dword ptr [ebx]
// 0047b909  8d4c2410             lea ecx, [esp + 0x10]
// 0047b90d  89542414             mov dword ptr [esp + 0x14], edx
// 0047b911  51                   push ecx
// 0047b912  8d542418             lea edx, [esp + 0x18]
// 0047b916  52                   push edx
// 0047b917  8bce                 mov ecx, esi
// 0047b919  89442418             mov dword ptr [esp + 0x18], eax
// 0047b91d  e85effffff           call 0x47b880
// 0047b922  5f                   pop edi
// 0047b923  5e                   pop esi
// 0047b924  5b                   pop ebx
// 0047b925  c20800               ret 8
// library rbxgs-g3d/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@H@G3D@@QAEXABH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /arch:SSE2 /fp:fast
// roc-lib: rbxgs-g3d GLG3Dcpp/Win32Window.cpp
