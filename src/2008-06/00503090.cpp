// roc 2008-06 00503090  unit: RBX::Render::RenderScene  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00503090
//
// 00503090  56                   push esi
// 00503091  8bf1                 mov esi, ecx
// 00503093  8b4604               mov eax, dword ptr [esi + 4]
// 00503096  3b4608               cmp eax, dword ptr [esi + 8]
// 00503099  8b0e                 mov ecx, dword ptr [esi]
// 0050309b  7d16                 jge 0x5030b3
// 0050309d  8d0481               lea eax, [ecx + eax*4]
// 005030a0  85c0                 test eax, eax
// 005030a2  7408                 je 0x5030ac
// 005030a4  8b542408             mov edx, dword ptr [esp + 8]
// 005030a8  8b0a                 mov ecx, dword ptr [edx]
// 005030aa  8908                 mov dword ptr [eax], ecx
// 005030ac  ff4604               inc dword ptr [esi + 4]
// 005030af  5e                   pop esi
// 005030b0  c20400               ret 4
// 005030b3  57                   push edi
// 005030b4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005030b8  3bf9                 cmp edi, ecx
// 005030ba  721e                 jb 0x5030da
// 005030bc  8d1481               lea edx, [ecx + eax*4]
// 005030bf  3bfa                 cmp edi, edx
// 005030c1  7317                 jae 0x5030da
// 005030c3  8b07                 mov eax, dword ptr [edi]
// 005030c5  8d4c240c             lea ecx, [esp + 0xc]
// 005030c9  51                   push ecx
// 005030ca  8bce                 mov ecx, esi
// 005030cc  89442410             mov dword ptr [esp + 0x10], eax
// 005030d0  e8bbffffff           call 0x503090
// 005030d5  5f                   pop edi
// 005030d6  5e                   pop esi
// 005030d7  c20400               ret 4
// 005030da  6a00                 push 0
// 005030dc  40                   inc eax
// 005030dd  50                   push eax
// 005030de  8bce                 mov ecx, esi
// 005030e0  e82bf7ffff           call 0x502810
// 005030e5  8b0f                 mov ecx, dword ptr [edi]
// 005030e7  8b5604               mov edx, dword ptr [esi + 4]
// 005030ea  8b06                 mov eax, dword ptr [esi]
// 005030ec  5f                   pop edi
// 005030ed  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005030f1  5e                   pop esi
// 005030f2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
