// roc 2010-06 005077a0  unit: seg_00500000  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005077a0
//
// 005077a0  56                   push esi
// 005077a1  8bf1                 mov esi, ecx
// 005077a3  8b4604               mov eax, dword ptr [esi + 4]
// 005077a6  3b4608               cmp eax, dword ptr [esi + 8]
// 005077a9  8b0e                 mov ecx, dword ptr [esi]
// 005077ab  7d16                 jge 0x5077c3
// 005077ad  8d0481               lea eax, [ecx + eax*4]
// 005077b0  85c0                 test eax, eax
// 005077b2  7408                 je 0x5077bc
// 005077b4  8b542408             mov edx, dword ptr [esp + 8]
// 005077b8  8b0a                 mov ecx, dword ptr [edx]
// 005077ba  8908                 mov dword ptr [eax], ecx
// 005077bc  ff4604               inc dword ptr [esi + 4]
// 005077bf  5e                   pop esi
// 005077c0  c20400               ret 4
// 005077c3  57                   push edi
// 005077c4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005077c8  3bf9                 cmp edi, ecx
// 005077ca  721e                 jb 0x5077ea
// 005077cc  8d1481               lea edx, [ecx + eax*4]
// 005077cf  3bfa                 cmp edi, edx
// 005077d1  7317                 jae 0x5077ea
// 005077d3  8b07                 mov eax, dword ptr [edi]
// 005077d5  8d4c240c             lea ecx, [esp + 0xc]
// 005077d9  51                   push ecx
// 005077da  8bce                 mov ecx, esi
// 005077dc  89442410             mov dword ptr [esp + 0x10], eax
// 005077e0  e8bbffffff           call 0x5077a0
// 005077e5  5f                   pop edi
// 005077e6  5e                   pop esi
// 005077e7  c20400               ret 4
// 005077ea  6a00                 push 0
// 005077ec  40                   inc eax
// 005077ed  50                   push eax
// 005077ee  8bce                 mov ecx, esi
// 005077f0  e83bf1fdff           call 0x4e6930
// 005077f5  8b0f                 mov ecx, dword ptr [edi]
// 005077f7  8b5604               mov edx, dword ptr [esi + 4]
// 005077fa  8b06                 mov eax, dword ptr [esi]
// 005077fc  5f                   pop edi
// 005077fd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00507801  5e                   pop esi
// 00507802  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
