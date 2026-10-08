// from server: 100% by auto
// roc 2007-08 005a4cf0  unit: RBX::Humanoid  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a4cf0
//
// 005a4cf0  56                   push esi
// 005a4cf1  8bf1                 mov esi, ecx
// 005a4cf3  8b4604               mov eax, dword ptr [esi + 4]
// 005a4cf6  3b4608               cmp eax, dword ptr [esi + 8]
// 005a4cf9  8b0e                 mov ecx, dword ptr [esi]
// 005a4cfb  7d17                 jge 0x5a4d14
// 005a4cfd  8d0481               lea eax, [ecx + eax*4]
// 005a4d00  85c0                 test eax, eax
// 005a4d02  7408                 je 0x5a4d0c
// 005a4d04  8b542408             mov edx, dword ptr [esp + 8]
// 005a4d08  8b0a                 mov ecx, dword ptr [edx]
// 005a4d0a  8908                 mov dword ptr [eax], ecx
// 005a4d0c  83460401             add dword ptr [esi + 4], 1
// 005a4d10  5e                   pop esi
// 005a4d11  c20400               ret 4
// 005a4d14  57                   push edi
// 005a4d15  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005a4d19  3bf9                 cmp edi, ecx
// 005a4d1b  721e                 jb 0x5a4d3b
// 005a4d1d  8d1481               lea edx, [ecx + eax*4]
// 005a4d20  3bfa                 cmp edi, edx
// 005a4d22  7317                 jae 0x5a4d3b
// 005a4d24  8b07                 mov eax, dword ptr [edi]
// 005a4d26  8d4c240c             lea ecx, [esp + 0xc]
// 005a4d2a  51                   push ecx
// 005a4d2b  8bce                 mov ecx, esi
// 005a4d2d  89442410             mov dword ptr [esp + 0x10], eax
// 005a4d31  e8baffffff           call 0x5a4cf0
// 005a4d36  5f                   pop edi
// 005a4d37  5e                   pop esi
// 005a4d38  c20400               ret 4
// 005a4d3b  6a00                 push 0
// 005a4d3d  83c001               add eax, 1
// 005a4d40  50                   push eax
// 005a4d41  8bce                 mov ecx, esi
// 005a4d43  e8a8feffff           call 0x5a4bf0
// 005a4d48  8b0f                 mov ecx, dword ptr [edi]
// 005a4d4a  8b5604               mov edx, dword ptr [esi + 4]
// 005a4d4d  8b06                 mov eax, dword ptr [esi]
// 005a4d4f  5f                   pop edi
// 005a4d50  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005a4d54  5e                   pop esi
// 005a4d55  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
