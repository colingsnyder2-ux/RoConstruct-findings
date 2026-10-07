// roc 2009-06 005669b0  unit: RBX::RbxG3D::RenderScene  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005669b0
//
// 005669b0  56                   push esi
// 005669b1  8bf1                 mov esi, ecx
// 005669b3  8b4604               mov eax, dword ptr [esi + 4]
// 005669b6  3b4608               cmp eax, dword ptr [esi + 8]
// 005669b9  8b0e                 mov ecx, dword ptr [esi]
// 005669bb  7d16                 jge 0x5669d3
// 005669bd  8d0481               lea eax, [ecx + eax*4]
// 005669c0  85c0                 test eax, eax
// 005669c2  7408                 je 0x5669cc
// 005669c4  8b542408             mov edx, dword ptr [esp + 8]
// 005669c8  8b0a                 mov ecx, dword ptr [edx]
// 005669ca  8908                 mov dword ptr [eax], ecx
// 005669cc  ff4604               inc dword ptr [esi + 4]
// 005669cf  5e                   pop esi
// 005669d0  c20400               ret 4
// 005669d3  57                   push edi
// 005669d4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005669d8  3bf9                 cmp edi, ecx
// 005669da  721e                 jb 0x5669fa
// 005669dc  8d1481               lea edx, [ecx + eax*4]
// 005669df  3bfa                 cmp edi, edx
// 005669e1  7317                 jae 0x5669fa
// 005669e3  8b07                 mov eax, dword ptr [edi]
// 005669e5  8d4c240c             lea ecx, [esp + 0xc]
// 005669e9  51                   push ecx
// 005669ea  8bce                 mov ecx, esi
// 005669ec  89442410             mov dword ptr [esp + 0x10], eax
// 005669f0  e8bbffffff           call 0x5669b0
// 005669f5  5f                   pop edi
// 005669f6  5e                   pop esi
// 005669f7  c20400               ret 4
// 005669fa  6a00                 push 0
// 005669fc  40                   inc eax
// 005669fd  50                   push eax
// 005669fe  8bce                 mov ecx, esi
// 00566a00  e88bf7ffff           call 0x566190
// 00566a05  8b0f                 mov ecx, dword ptr [edi]
// 00566a07  8b5604               mov edx, dword ptr [esi + 4]
// 00566a0a  8b06                 mov eax, dword ptr [esi]
// 00566a0c  5f                   pop edi
// 00566a0d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00566a11  5e                   pop esi
// 00566a12  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
