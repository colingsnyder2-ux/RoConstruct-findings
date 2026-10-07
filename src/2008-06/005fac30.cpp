// roc 2008-06 005fac30  unit: UString_sink::?$stream_buffer  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fac30
//
// 005fac30  56                   push esi
// 005fac31  8bf1                 mov esi, ecx
// 005fac33  8b4604               mov eax, dword ptr [esi + 4]
// 005fac36  3b4608               cmp eax, dword ptr [esi + 8]
// 005fac39  8b0e                 mov ecx, dword ptr [esi]
// 005fac3b  7d16                 jge 0x5fac53
// 005fac3d  8d0481               lea eax, [ecx + eax*4]
// 005fac40  85c0                 test eax, eax
// 005fac42  7408                 je 0x5fac4c
// 005fac44  8b542408             mov edx, dword ptr [esp + 8]
// 005fac48  8b0a                 mov ecx, dword ptr [edx]
// 005fac4a  8908                 mov dword ptr [eax], ecx
// 005fac4c  ff4604               inc dword ptr [esi + 4]
// 005fac4f  5e                   pop esi
// 005fac50  c20400               ret 4
// 005fac53  57                   push edi
// 005fac54  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005fac58  3bf9                 cmp edi, ecx
// 005fac5a  721e                 jb 0x5fac7a
// 005fac5c  8d1481               lea edx, [ecx + eax*4]
// 005fac5f  3bfa                 cmp edi, edx
// 005fac61  7317                 jae 0x5fac7a
// 005fac63  8b07                 mov eax, dword ptr [edi]
// 005fac65  8d4c240c             lea ecx, [esp + 0xc]
// 005fac69  51                   push ecx
// 005fac6a  8bce                 mov ecx, esi
// 005fac6c  89442410             mov dword ptr [esp + 0x10], eax
// 005fac70  e8bbffffff           call 0x5fac30
// 005fac75  5f                   pop edi
// 005fac76  5e                   pop esi
// 005fac77  c20400               ret 4
// 005fac7a  6a00                 push 0
// 005fac7c  40                   inc eax
// 005fac7d  50                   push eax
// 005fac7e  8bce                 mov ecx, esi
// 005fac80  e8ebfbffff           call 0x5fa870
// 005fac85  8b0f                 mov ecx, dword ptr [edi]
// 005fac87  8b5604               mov edx, dword ptr [esi + 4]
// 005fac8a  8b06                 mov eax, dword ptr [esi]
// 005fac8c  5f                   pop edi
// 005fac8d  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005fac91  5e                   pop esi
// 005fac92  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
