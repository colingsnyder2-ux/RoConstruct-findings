// roc 2007-08 0047d3c0  unit: G3D::Win32Window  size: 168 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0047d3c0
//
// 0047d3c0  53                   push ebx
// 0047d3c1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0047d3c5  56                   push esi
// 0047d3c6  8bf1                 mov esi, ecx
// 0047d3c8  8b06                 mov eax, dword ptr [esi]
// 0047d3ca  57                   push edi
// 0047d3cb  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0047d3cf  3bf8                 cmp edi, eax
// 0047d3d1  720a                 jb 0x47d3dd
// 0047d3d3  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047d3d6  8d1488               lea edx, [eax + ecx*4]
// 0047d3d9  3bfa                 cmp edi, edx
// 0047d3db  7268                 jb 0x47d445
// 0047d3dd  3bd8                 cmp ebx, eax
// 0047d3df  720a                 jb 0x47d3eb
// 0047d3e1  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047d3e4  8d1488               lea edx, [eax + ecx*4]
// 0047d3e7  3bda                 cmp ebx, edx
// 0047d3e9  725a                 jb 0x47d445
// 0047d3eb  8b4e04               mov ecx, dword ptr [esi + 4]
// 0047d3ee  8d5101               lea edx, [ecx + 1]
// 0047d3f1  3b5608               cmp edx, dword ptr [esi + 8]
// 0047d3f4  7d26                 jge 0x47d41c
// 0047d3f6  8d0488               lea eax, [eax + ecx*4]
// 0047d3f9  85c0                 test eax, eax
// 0047d3fb  7404                 je 0x47d401
// 0047d3fd  8b0f                 mov ecx, dword ptr [edi]
// 0047d3ff  8908                 mov dword ptr [eax], ecx
// 0047d401  8b5604               mov edx, dword ptr [esi + 4]
// 0047d404  8b06                 mov eax, dword ptr [esi]
// 0047d406  8d449004             lea eax, [eax + edx*4 + 4]
// 0047d40a  85c0                 test eax, eax
// 0047d40c  7404                 je 0x47d412
// 0047d40e  8b0b                 mov ecx, dword ptr [ebx]
// 0047d410  8908                 mov dword ptr [eax], ecx
// 0047d412  83460402             add dword ptr [esi + 4], 2
// 0047d416  5f                   pop edi
// 0047d417  5e                   pop esi
// 0047d418  5b                   pop ebx
// 0047d419  c20800               ret 8
// 0047d41c  83c102               add ecx, 2
// 0047d41f  6a00                 push 0
// 0047d421  51                   push ecx
// 0047d422  8bce                 mov ecx, esi
// 0047d424  e877f6ffff           call 0x47caa0
// 0047d429  8b5604               mov edx, dword ptr [esi + 4]
// 0047d42c  8b06                 mov eax, dword ptr [esi]
// 0047d42e  8b0f                 mov ecx, dword ptr [edi]
// 0047d430  894c90f8             mov dword ptr [eax + edx*4 - 8], ecx
// 0047d434  8b5604               mov edx, dword ptr [esi + 4]
// 0047d437  8b06                 mov eax, dword ptr [esi]
// 0047d439  8b0b                 mov ecx, dword ptr [ebx]
// 0047d43b  5f                   pop edi
// 0047d43c  5e                   pop esi
// 0047d43d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0047d441  5b                   pop ebx
// 0047d442  c20800               ret 8
// 0047d445  8b17                 mov edx, dword ptr [edi]
// 0047d447  8b03                 mov eax, dword ptr [ebx]
// 0047d449  8d4c2410             lea ecx, [esp + 0x10]
// 0047d44d  89542414             mov dword ptr [esp + 0x14], edx
// 0047d451  51                   push ecx
// 0047d452  8d542418             lea edx, [esp + 0x18]
// 0047d456  52                   push edx
// 0047d457  8bce                 mov ecx, esi
// 0047d459  89442418             mov dword ptr [esp + 0x18], eax
// 0047d45d  e85effffff           call 0x47d3c0
// 0047d462  5f                   pop edi
// 0047d463  5e                   pop esi
// 0047d464  5b                   pop ebx
// 0047d465  c20800               ret 8
// library g3d-6.09/GLG3Dcpp\Win32Window.cpp (function ?append@?$Array@H@G3D@@QAEXABH0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Win32Window.cpp
