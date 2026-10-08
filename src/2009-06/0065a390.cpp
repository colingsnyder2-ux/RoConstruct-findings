// from server: 100% by auto
// roc 2009-06 0065a390  unit: RBX::Camera  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065a390
//
// 0065a390  56                   push esi
// 0065a391  8bf1                 mov esi, ecx
// 0065a393  8b4604               mov eax, dword ptr [esi + 4]
// 0065a396  3b4608               cmp eax, dword ptr [esi + 8]
// 0065a399  8b0e                 mov ecx, dword ptr [esi]
// 0065a39b  7d16                 jge 0x65a3b3
// 0065a39d  8d0481               lea eax, [ecx + eax*4]
// 0065a3a0  85c0                 test eax, eax
// 0065a3a2  7408                 je 0x65a3ac
// 0065a3a4  8b542408             mov edx, dword ptr [esp + 8]
// 0065a3a8  8b0a                 mov ecx, dword ptr [edx]
// 0065a3aa  8908                 mov dword ptr [eax], ecx
// 0065a3ac  ff4604               inc dword ptr [esi + 4]
// 0065a3af  5e                   pop esi
// 0065a3b0  c20400               ret 4
// 0065a3b3  57                   push edi
// 0065a3b4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0065a3b8  3bf9                 cmp edi, ecx
// 0065a3ba  721e                 jb 0x65a3da
// 0065a3bc  8d1481               lea edx, [ecx + eax*4]
// 0065a3bf  3bfa                 cmp edi, edx
// 0065a3c1  7317                 jae 0x65a3da
// 0065a3c3  8b07                 mov eax, dword ptr [edi]
// 0065a3c5  8d4c240c             lea ecx, [esp + 0xc]
// 0065a3c9  51                   push ecx
// 0065a3ca  8bce                 mov ecx, esi
// 0065a3cc  89442410             mov dword ptr [esp + 0x10], eax
// 0065a3d0  e8bbffffff           call 0x65a390
// 0065a3d5  5f                   pop edi
// 0065a3d6  5e                   pop esi
// 0065a3d7  c20400               ret 4
// 0065a3da  6a00                 push 0
// 0065a3dc  40                   inc eax
// 0065a3dd  50                   push eax
// 0065a3de  8bce                 mov ecx, esi
// 0065a3e0  e87bf9ffff           call 0x659d60
// 0065a3e5  8b0f                 mov ecx, dword ptr [edi]
// 0065a3e7  8b5604               mov edx, dword ptr [esi + 4]
// 0065a3ea  8b06                 mov eax, dword ptr [esi]
// 0065a3ec  5f                   pop edi
// 0065a3ed  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0065a3f1  5e                   pop esi
// 0065a3f2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
