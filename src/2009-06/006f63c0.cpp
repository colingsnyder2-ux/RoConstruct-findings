// from server: 100% by auto
// roc 2009-06 006f63c0  unit: Ogre::RbxMeshLoader  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006f63c0
//
// 006f63c0  56                   push esi
// 006f63c1  8bf1                 mov esi, ecx
// 006f63c3  8b4604               mov eax, dword ptr [esi + 4]
// 006f63c6  3b4608               cmp eax, dword ptr [esi + 8]
// 006f63c9  8b0e                 mov ecx, dword ptr [esi]
// 006f63cb  7d16                 jge 0x6f63e3
// 006f63cd  8d0481               lea eax, [ecx + eax*4]
// 006f63d0  85c0                 test eax, eax
// 006f63d2  7408                 je 0x6f63dc
// 006f63d4  8b542408             mov edx, dword ptr [esp + 8]
// 006f63d8  8b0a                 mov ecx, dword ptr [edx]
// 006f63da  8908                 mov dword ptr [eax], ecx
// 006f63dc  ff4604               inc dword ptr [esi + 4]
// 006f63df  5e                   pop esi
// 006f63e0  c20400               ret 4
// 006f63e3  57                   push edi
// 006f63e4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006f63e8  3bf9                 cmp edi, ecx
// 006f63ea  721e                 jb 0x6f640a
// 006f63ec  8d1481               lea edx, [ecx + eax*4]
// 006f63ef  3bfa                 cmp edi, edx
// 006f63f1  7317                 jae 0x6f640a
// 006f63f3  8b07                 mov eax, dword ptr [edi]
// 006f63f5  8d4c240c             lea ecx, [esp + 0xc]
// 006f63f9  51                   push ecx
// 006f63fa  8bce                 mov ecx, esi
// 006f63fc  89442410             mov dword ptr [esp + 0x10], eax
// 006f6400  e8bbffffff           call 0x6f63c0
// 006f6405  5f                   pop edi
// 006f6406  5e                   pop esi
// 006f6407  c20400               ret 4
// 006f640a  6a00                 push 0
// 006f640c  40                   inc eax
// 006f640d  50                   push eax
// 006f640e  8bce                 mov ecx, esi
// 006f6410  e8cbfcffff           call 0x6f60e0
// 006f6415  8b0f                 mov ecx, dword ptr [edi]
// 006f6417  8b5604               mov edx, dword ptr [esi + 4]
// 006f641a  8b06                 mov eax, dword ptr [esi]
// 006f641c  5f                   pop edi
// 006f641d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006f6421  5e                   pop esi
// 006f6422  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
