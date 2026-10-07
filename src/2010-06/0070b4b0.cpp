// roc 2010-06 0070b4b0  unit: RBX::RbxG3D::Material::Level  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070b4b0
//
// 0070b4b0  56                   push esi
// 0070b4b1  8bf1                 mov esi, ecx
// 0070b4b3  8b4604               mov eax, dword ptr [esi + 4]
// 0070b4b6  3b4608               cmp eax, dword ptr [esi + 8]
// 0070b4b9  8b0e                 mov ecx, dword ptr [esi]
// 0070b4bb  7d16                 jge 0x70b4d3
// 0070b4bd  8d0481               lea eax, [ecx + eax*4]
// 0070b4c0  85c0                 test eax, eax
// 0070b4c2  7408                 je 0x70b4cc
// 0070b4c4  8b542408             mov edx, dword ptr [esp + 8]
// 0070b4c8  8b0a                 mov ecx, dword ptr [edx]
// 0070b4ca  8908                 mov dword ptr [eax], ecx
// 0070b4cc  ff4604               inc dword ptr [esi + 4]
// 0070b4cf  5e                   pop esi
// 0070b4d0  c20400               ret 4
// 0070b4d3  57                   push edi
// 0070b4d4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0070b4d8  3bf9                 cmp edi, ecx
// 0070b4da  721e                 jb 0x70b4fa
// 0070b4dc  8d1481               lea edx, [ecx + eax*4]
// 0070b4df  3bfa                 cmp edi, edx
// 0070b4e1  7317                 jae 0x70b4fa
// 0070b4e3  8b07                 mov eax, dword ptr [edi]
// 0070b4e5  8d4c240c             lea ecx, [esp + 0xc]
// 0070b4e9  51                   push ecx
// 0070b4ea  8bce                 mov ecx, esi
// 0070b4ec  89442410             mov dword ptr [esp + 0x10], eax
// 0070b4f0  e8bbffffff           call 0x70b4b0
// 0070b4f5  5f                   pop edi
// 0070b4f6  5e                   pop esi
// 0070b4f7  c20400               ret 4
// 0070b4fa  6a00                 push 0
// 0070b4fc  40                   inc eax
// 0070b4fd  50                   push eax
// 0070b4fe  8bce                 mov ecx, esi
// 0070b500  e8ebf7ffff           call 0x70acf0
// 0070b505  8b0f                 mov ecx, dword ptr [edi]
// 0070b507  8b5604               mov edx, dword ptr [esi + 4]
// 0070b50a  8b06                 mov eax, dword ptr [esi]
// 0070b50c  5f                   pop edi
// 0070b50d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0070b511  5e                   pop esi
// 0070b512  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
