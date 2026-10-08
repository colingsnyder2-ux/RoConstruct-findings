// from server: 100% by auto
// roc 2007-08 005cf5a0  unit: RBX::IStage  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cf5a0
//
// 005cf5a0  56                   push esi
// 005cf5a1  8bf1                 mov esi, ecx
// 005cf5a3  8b4604               mov eax, dword ptr [esi + 4]
// 005cf5a6  3b4608               cmp eax, dword ptr [esi + 8]
// 005cf5a9  8b0e                 mov ecx, dword ptr [esi]
// 005cf5ab  7d17                 jge 0x5cf5c4
// 005cf5ad  8d0481               lea eax, [ecx + eax*4]
// 005cf5b0  85c0                 test eax, eax
// 005cf5b2  7408                 je 0x5cf5bc
// 005cf5b4  8b542408             mov edx, dword ptr [esp + 8]
// 005cf5b8  8b0a                 mov ecx, dword ptr [edx]
// 005cf5ba  8908                 mov dword ptr [eax], ecx
// 005cf5bc  83460401             add dword ptr [esi + 4], 1
// 005cf5c0  5e                   pop esi
// 005cf5c1  c20400               ret 4
// 005cf5c4  57                   push edi
// 005cf5c5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005cf5c9  3bf9                 cmp edi, ecx
// 005cf5cb  721e                 jb 0x5cf5eb
// 005cf5cd  8d1481               lea edx, [ecx + eax*4]
// 005cf5d0  3bfa                 cmp edi, edx
// 005cf5d2  7317                 jae 0x5cf5eb
// 005cf5d4  8b07                 mov eax, dword ptr [edi]
// 005cf5d6  8d4c240c             lea ecx, [esp + 0xc]
// 005cf5da  51                   push ecx
// 005cf5db  8bce                 mov ecx, esi
// 005cf5dd  89442410             mov dword ptr [esp + 0x10], eax
// 005cf5e1  e8baffffff           call 0x5cf5a0
// 005cf5e6  5f                   pop edi
// 005cf5e7  5e                   pop esi
// 005cf5e8  c20400               ret 4
// 005cf5eb  6a00                 push 0
// 005cf5ed  83c001               add eax, 1
// 005cf5f0  50                   push eax
// 005cf5f1  8bce                 mov ecx, esi
// 005cf5f3  e828feffff           call 0x5cf420
// 005cf5f8  8b0f                 mov ecx, dword ptr [edi]
// 005cf5fa  8b5604               mov edx, dword ptr [esi + 4]
// 005cf5fd  8b06                 mov eax, dword ptr [esi]
// 005cf5ff  5f                   pop edi
// 005cf600  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005cf604  5e                   pop esi
// 005cf605  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
