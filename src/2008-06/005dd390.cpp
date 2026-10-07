// roc 2008-06 005dd390  unit: RBX::Message  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005dd390
//
// 005dd390  56                   push esi
// 005dd391  8bf1                 mov esi, ecx
// 005dd393  8b4604               mov eax, dword ptr [esi + 4]
// 005dd396  3b4608               cmp eax, dword ptr [esi + 8]
// 005dd399  8b0e                 mov ecx, dword ptr [esi]
// 005dd39b  7d16                 jge 0x5dd3b3
// 005dd39d  8d0481               lea eax, [ecx + eax*4]
// 005dd3a0  85c0                 test eax, eax
// 005dd3a2  7408                 je 0x5dd3ac
// 005dd3a4  8b542408             mov edx, dword ptr [esp + 8]
// 005dd3a8  8b0a                 mov ecx, dword ptr [edx]
// 005dd3aa  8908                 mov dword ptr [eax], ecx
// 005dd3ac  ff4604               inc dword ptr [esi + 4]
// 005dd3af  5e                   pop esi
// 005dd3b0  c20400               ret 4
// 005dd3b3  57                   push edi
// 005dd3b4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005dd3b8  3bf9                 cmp edi, ecx
// 005dd3ba  721e                 jb 0x5dd3da
// 005dd3bc  8d1481               lea edx, [ecx + eax*4]
// 005dd3bf  3bfa                 cmp edi, edx
// 005dd3c1  7317                 jae 0x5dd3da
// 005dd3c3  8b07                 mov eax, dword ptr [edi]
// 005dd3c5  8d4c240c             lea ecx, [esp + 0xc]
// 005dd3c9  51                   push ecx
// 005dd3ca  8bce                 mov ecx, esi
// 005dd3cc  89442410             mov dword ptr [esp + 0x10], eax
// 005dd3d0  e8bbffffff           call 0x5dd390
// 005dd3d5  5f                   pop edi
// 005dd3d6  5e                   pop esi
// 005dd3d7  c20400               ret 4
// 005dd3da  6a00                 push 0
// 005dd3dc  40                   inc eax
// 005dd3dd  50                   push eax
// 005dd3de  8bce                 mov ecx, esi
// 005dd3e0  e85beaecff           call 0x4abe40
// 005dd3e5  8b0f                 mov ecx, dword ptr [edi]
// 005dd3e7  8b5604               mov edx, dword ptr [esi + 4]
// 005dd3ea  8b06                 mov eax, dword ptr [esi]
// 005dd3ec  5f                   pop edi
// 005dd3ed  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005dd3f1  5e                   pop esi
// 005dd3f2  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
