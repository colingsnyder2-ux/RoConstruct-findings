// roc 2010-06 004896a0  unit: G3D::Win32Window  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004896a0
//
// 004896a0  56                   push esi
// 004896a1  8bf1                 mov esi, ecx
// 004896a3  8b4604               mov eax, dword ptr [esi + 4]
// 004896a6  3b4608               cmp eax, dword ptr [esi + 8]
// 004896a9  8b0e                 mov ecx, dword ptr [esi]
// 004896ab  7d16                 jge 0x4896c3
// 004896ad  8d0481               lea eax, [ecx + eax*4]
// 004896b0  85c0                 test eax, eax
// 004896b2  7408                 je 0x4896bc
// 004896b4  8b542408             mov edx, dword ptr [esp + 8]
// 004896b8  8b0a                 mov ecx, dword ptr [edx]
// 004896ba  8908                 mov dword ptr [eax], ecx
// 004896bc  ff4604               inc dword ptr [esi + 4]
// 004896bf  5e                   pop esi
// 004896c0  c20400               ret 4
// 004896c3  57                   push edi
// 004896c4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 004896c8  3bf9                 cmp edi, ecx
// 004896ca  721e                 jb 0x4896ea
// 004896cc  8d1481               lea edx, [ecx + eax*4]
// 004896cf  3bfa                 cmp edi, edx
// 004896d1  7317                 jae 0x4896ea
// 004896d3  8b07                 mov eax, dword ptr [edi]
// 004896d5  8d4c240c             lea ecx, [esp + 0xc]
// 004896d9  51                   push ecx
// 004896da  8bce                 mov ecx, esi
// 004896dc  89442410             mov dword ptr [esp + 0x10], eax
// 004896e0  e8bbffffff           call 0x4896a0
// 004896e5  5f                   pop edi
// 004896e6  5e                   pop esi
// 004896e7  c20400               ret 4
// 004896ea  6a00                 push 0
// 004896ec  40                   inc eax
// 004896ed  50                   push eax
// 004896ee  8bce                 mov ecx, esi
// 004896f0  e8abfaffff           call 0x4891a0
// 004896f5  8b0f                 mov ecx, dword ptr [edi]
// 004896f7  8b5604               mov edx, dword ptr [esi + 4]
// 004896fa  8b06                 mov eax, dword ptr [esi]
// 004896fc  5f                   pop edi
// 004896fd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00489701  5e                   pop esi
// 00489702  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
