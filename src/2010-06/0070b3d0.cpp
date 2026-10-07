// roc 2010-06 0070b3d0  unit: RBX::RbxG3D::Material::Level  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070b3d0
//
// 0070b3d0  56                   push esi
// 0070b3d1  8bf1                 mov esi, ecx
// 0070b3d3  8b4604               mov eax, dword ptr [esi + 4]
// 0070b3d6  3b4608               cmp eax, dword ptr [esi + 8]
// 0070b3d9  8b0e                 mov ecx, dword ptr [esi]
// 0070b3db  7d16                 jge 0x70b3f3
// 0070b3dd  8d0481               lea eax, [ecx + eax*4]
// 0070b3e0  85c0                 test eax, eax
// 0070b3e2  7408                 je 0x70b3ec
// 0070b3e4  8b542408             mov edx, dword ptr [esp + 8]
// 0070b3e8  8b0a                 mov ecx, dword ptr [edx]
// 0070b3ea  8908                 mov dword ptr [eax], ecx
// 0070b3ec  ff4604               inc dword ptr [esi + 4]
// 0070b3ef  5e                   pop esi
// 0070b3f0  c20400               ret 4
// 0070b3f3  57                   push edi
// 0070b3f4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0070b3f8  3bf9                 cmp edi, ecx
// 0070b3fa  721e                 jb 0x70b41a
// 0070b3fc  8d1481               lea edx, [ecx + eax*4]
// 0070b3ff  3bfa                 cmp edi, edx
// 0070b401  7317                 jae 0x70b41a
// 0070b403  8b07                 mov eax, dword ptr [edi]
// 0070b405  8d4c240c             lea ecx, [esp + 0xc]
// 0070b409  51                   push ecx
// 0070b40a  8bce                 mov ecx, esi
// 0070b40c  89442410             mov dword ptr [esp + 0x10], eax
// 0070b410  e8bbffffff           call 0x70b3d0
// 0070b415  5f                   pop edi
// 0070b416  5e                   pop esi
// 0070b417  c20400               ret 4
// 0070b41a  6a00                 push 0
// 0070b41c  40                   inc eax
// 0070b41d  50                   push eax
// 0070b41e  8bce                 mov ecx, esi
// 0070b420  e8cbf6ffff           call 0x70aaf0
// 0070b425  8b0f                 mov ecx, dword ptr [edi]
// 0070b427  8b5604               mov edx, dword ptr [esi + 4]
// 0070b42a  8b06                 mov eax, dword ptr [esi]
// 0070b42c  5f                   pop edi
// 0070b42d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0070b431  5e                   pop esi
// 0070b432  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
