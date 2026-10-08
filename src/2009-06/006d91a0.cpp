// from server: 100% by auto
// roc 2009-06 006d91a0  unit: RBX::SleepStage  size: 101 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d91a0
//
// 006d91a0  56                   push esi
// 006d91a1  8bf1                 mov esi, ecx
// 006d91a3  8b4604               mov eax, dword ptr [esi + 4]
// 006d91a6  3b4608               cmp eax, dword ptr [esi + 8]
// 006d91a9  8b0e                 mov ecx, dword ptr [esi]
// 006d91ab  7d16                 jge 0x6d91c3
// 006d91ad  8d0481               lea eax, [ecx + eax*4]
// 006d91b0  85c0                 test eax, eax
// 006d91b2  7408                 je 0x6d91bc
// 006d91b4  8b542408             mov edx, dword ptr [esp + 8]
// 006d91b8  8b0a                 mov ecx, dword ptr [edx]
// 006d91ba  8908                 mov dword ptr [eax], ecx
// 006d91bc  ff4604               inc dword ptr [esi + 4]
// 006d91bf  5e                   pop esi
// 006d91c0  c20400               ret 4
// 006d91c3  57                   push edi
// 006d91c4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006d91c8  3bf9                 cmp edi, ecx
// 006d91ca  721e                 jb 0x6d91ea
// 006d91cc  8d1481               lea edx, [ecx + eax*4]
// 006d91cf  3bfa                 cmp edi, edx
// 006d91d1  7317                 jae 0x6d91ea
// 006d91d3  8b07                 mov eax, dword ptr [edi]
// 006d91d5  8d4c240c             lea ecx, [esp + 0xc]
// 006d91d9  51                   push ecx
// 006d91da  8bce                 mov ecx, esi
// 006d91dc  89442410             mov dword ptr [esp + 0x10], eax
// 006d91e0  e8bbffffff           call 0x6d91a0
// 006d91e5  5f                   pop edi
// 006d91e6  5e                   pop esi
// 006d91e7  c20400               ret 4
// 006d91ea  6a00                 push 0
// 006d91ec  40                   inc eax
// 006d91ed  50                   push eax
// 006d91ee  8bce                 mov ecx, esi
// 006d91f0  e85bfeffff           call 0x6d9050
// 006d91f5  8b0f                 mov ecx, dword ptr [edi]
// 006d91f7  8b5604               mov edx, dword ptr [esi + 4]
// 006d91fa  8b06                 mov eax, dword ptr [esi]
// 006d91fc  5f                   pop edi
// 006d91fd  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 006d9201  5e                   pop esi
// 006d9202  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
