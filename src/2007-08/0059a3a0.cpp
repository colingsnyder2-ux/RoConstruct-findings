// from server: 100% by auto
// roc 2007-08 0059a3a0  unit: RBX::VCamera::?$FactoryProduct  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059a3a0
//
// 0059a3a0  56                   push esi
// 0059a3a1  8bf1                 mov esi, ecx
// 0059a3a3  8b4604               mov eax, dword ptr [esi + 4]
// 0059a3a6  3b4608               cmp eax, dword ptr [esi + 8]
// 0059a3a9  8b0e                 mov ecx, dword ptr [esi]
// 0059a3ab  7d17                 jge 0x59a3c4
// 0059a3ad  8d0481               lea eax, [ecx + eax*4]
// 0059a3b0  85c0                 test eax, eax
// 0059a3b2  7408                 je 0x59a3bc
// 0059a3b4  8b542408             mov edx, dword ptr [esp + 8]
// 0059a3b8  8b0a                 mov ecx, dword ptr [edx]
// 0059a3ba  8908                 mov dword ptr [eax], ecx
// 0059a3bc  83460401             add dword ptr [esi + 4], 1
// 0059a3c0  5e                   pop esi
// 0059a3c1  c20400               ret 4
// 0059a3c4  57                   push edi
// 0059a3c5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059a3c9  3bf9                 cmp edi, ecx
// 0059a3cb  721e                 jb 0x59a3eb
// 0059a3cd  8d1481               lea edx, [ecx + eax*4]
// 0059a3d0  3bfa                 cmp edi, edx
// 0059a3d2  7317                 jae 0x59a3eb
// 0059a3d4  8b07                 mov eax, dword ptr [edi]
// 0059a3d6  8d4c240c             lea ecx, [esp + 0xc]
// 0059a3da  51                   push ecx
// 0059a3db  8bce                 mov ecx, esi
// 0059a3dd  89442410             mov dword ptr [esp + 0x10], eax
// 0059a3e1  e8baffffff           call 0x59a3a0
// 0059a3e6  5f                   pop edi
// 0059a3e7  5e                   pop esi
// 0059a3e8  c20400               ret 4
// 0059a3eb  6a00                 push 0
// 0059a3ed  83c001               add eax, 1
// 0059a3f0  50                   push eax
// 0059a3f1  8bce                 mov ecx, esi
// 0059a3f3  e828fbffff           call 0x599f20
// 0059a3f8  8b0f                 mov ecx, dword ptr [edi]
// 0059a3fa  8b5604               mov edx, dword ptr [esi + 4]
// 0059a3fd  8b06                 mov eax, dword ptr [esi]
// 0059a3ff  5f                   pop edi
// 0059a400  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 0059a404  5e                   pop esi
// 0059a405  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
