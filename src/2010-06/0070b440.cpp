// roc 2010-06 0070b440  unit: RBX::RbxG3D::Material::Level  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0070b440
//
// 0070b440  56                   push esi
// 0070b441  8bf1                 mov esi, ecx
// 0070b443  8b4604               mov eax, dword ptr [esi + 4]
// 0070b446  3b4608               cmp eax, dword ptr [esi + 8]
// 0070b449  8b0e                 mov ecx, dword ptr [esi]
// 0070b44b  7d16                 jge 0x70b463
// 0070b44d  8d0481               lea eax, [ecx + eax*4]
// 0070b450  85c0                 test eax, eax
// 0070b452  7408                 je 0x70b45c
// 0070b454  8b542408             mov edx, dword ptr [esp + 8]
// 0070b458  8b0a                 mov ecx, dword ptr [edx]
// 0070b45a  8908                 mov dword ptr [eax], ecx
// 0070b45c  ff4604               inc dword ptr [esi + 4]
// 0070b45f  5e                   pop esi
// 0070b460  c20400               ret 4
// 0070b463  57                   push edi
// 0070b464  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0070b468  3bf9                 cmp edi, ecx
// 0070b46a  721e                 jb 0x70b48a
// 0070b46c  8d1481               lea edx, [ecx + eax*4]
// 0070b46f  3bfa                 cmp edi, edx
// 0070b471  7317                 jae 0x70b48a
// 0070b473  8b07                 mov eax, dword ptr [edi]
// 0070b475  8d4c240c             lea ecx, [esp + 0xc]
// 0070b479  51                   push ecx
// 0070b47a  8bce                 mov ecx, esi
// 0070b47c  89442410             mov dword ptr [esp + 0x10], eax
// 0070b480  e8bbffffff           call 0x70b440
// 0070b485  5f                   pop edi
// 0070b486  5e                   pop esi
// 0070b487  c20400               ret 4
// 0070b48a  6a00                 push 0
// 0070b48c  40                   inc eax
// 0070b48d  50                   push eax
// 0070b48e  8bce                 mov ecx, esi
// 0070b490  e85bf7ffff           call 0x70abf0
// 0070b495  8b0f                 mov ecx, dword ptr [edi]
// 0070b497  8b5604               mov edx, dword ptr [esi + 4]
// 0070b49a  8b06                 mov eax, dword ptr [esi]
// 0070b49c  5f                   pop edi
// 0070b49d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0070b4a1  5e                   pop esi
// 0070b4a2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
