// roc 2008-06 0059a190  unit: RBX::PartInstance  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059a190
//
// 0059a190  56                   push esi
// 0059a191  8bf1                 mov esi, ecx
// 0059a193  8b4604               mov eax, dword ptr [esi + 4]
// 0059a196  3b4608               cmp eax, dword ptr [esi + 8]
// 0059a199  8b0e                 mov ecx, dword ptr [esi]
// 0059a19b  7d16                 jge 0x59a1b3
// 0059a19d  8d0481               lea eax, [ecx + eax*4]
// 0059a1a0  85c0                 test eax, eax
// 0059a1a2  7408                 je 0x59a1ac
// 0059a1a4  8b542408             mov edx, dword ptr [esp + 8]
// 0059a1a8  8b0a                 mov ecx, dword ptr [edx]
// 0059a1aa  8908                 mov dword ptr [eax], ecx
// 0059a1ac  ff4604               inc dword ptr [esi + 4]
// 0059a1af  5e                   pop esi
// 0059a1b0  c20400               ret 4
// 0059a1b3  57                   push edi
// 0059a1b4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059a1b8  3bf9                 cmp edi, ecx
// 0059a1ba  721e                 jb 0x59a1da
// 0059a1bc  8d1481               lea edx, [ecx + eax*4]
// 0059a1bf  3bfa                 cmp edi, edx
// 0059a1c1  7317                 jae 0x59a1da
// 0059a1c3  8b07                 mov eax, dword ptr [edi]
// 0059a1c5  8d4c240c             lea ecx, [esp + 0xc]
// 0059a1c9  51                   push ecx
// 0059a1ca  8bce                 mov ecx, esi
// 0059a1cc  89442410             mov dword ptr [esp + 0x10], eax
// 0059a1d0  e8bbffffff           call 0x59a190
// 0059a1d5  5f                   pop edi
// 0059a1d6  5e                   pop esi
// 0059a1d7  c20400               ret 4
// 0059a1da  6a00                 push 0
// 0059a1dc  40                   inc eax
// 0059a1dd  50                   push eax
// 0059a1de  8bce                 mov ecx, esi
// 0059a1e0  e88bf8ffff           call 0x599a70
// 0059a1e5  8b0f                 mov ecx, dword ptr [edi]
// 0059a1e7  8b5604               mov edx, dword ptr [esi + 4]
// 0059a1ea  8b06                 mov eax, dword ptr [esi]
// 0059a1ec  5f                   pop edi
// 0059a1ed  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0059a1f1  5e                   pop esi
// 0059a1f2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
