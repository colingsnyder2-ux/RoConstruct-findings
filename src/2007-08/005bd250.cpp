// roc 2007-08 005bd250  unit: RBX::VPVInstance::?$EnumPropDescriptor  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005bd250
//
// 005bd250  56                   push esi
// 005bd251  8bf1                 mov esi, ecx
// 005bd253  8b4604               mov eax, dword ptr [esi + 4]
// 005bd256  3b4608               cmp eax, dword ptr [esi + 8]
// 005bd259  8b0e                 mov ecx, dword ptr [esi]
// 005bd25b  7d17                 jge 0x5bd274
// 005bd25d  8d0481               lea eax, [ecx + eax*4]
// 005bd260  85c0                 test eax, eax
// 005bd262  7408                 je 0x5bd26c
// 005bd264  8b542408             mov edx, dword ptr [esp + 8]
// 005bd268  8b0a                 mov ecx, dword ptr [edx]
// 005bd26a  8908                 mov dword ptr [eax], ecx
// 005bd26c  83460401             add dword ptr [esi + 4], 1
// 005bd270  5e                   pop esi
// 005bd271  c20400               ret 4
// 005bd274  57                   push edi
// 005bd275  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005bd279  3bf9                 cmp edi, ecx
// 005bd27b  721e                 jb 0x5bd29b
// 005bd27d  8d1481               lea edx, [ecx + eax*4]
// 005bd280  3bfa                 cmp edi, edx
// 005bd282  7317                 jae 0x5bd29b
// 005bd284  8b07                 mov eax, dword ptr [edi]
// 005bd286  8d4c240c             lea ecx, [esp + 0xc]
// 005bd28a  51                   push ecx
// 005bd28b  8bce                 mov ecx, esi
// 005bd28d  89442410             mov dword ptr [esp + 0x10], eax
// 005bd291  e8baffffff           call 0x5bd250
// 005bd296  5f                   pop edi
// 005bd297  5e                   pop esi
// 005bd298  c20400               ret 4
// 005bd29b  6a00                 push 0
// 005bd29d  83c001               add eax, 1
// 005bd2a0  50                   push eax
// 005bd2a1  8bce                 mov ecx, esi
// 005bd2a3  e8d8defbff           call 0x57b180
// 005bd2a8  8b0f                 mov ecx, dword ptr [edi]
// 005bd2aa  8b5604               mov edx, dword ptr [esi + 4]
// 005bd2ad  8b06                 mov eax, dword ptr [esi]
// 005bd2af  5f                   pop edi
// 005bd2b0  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 005bd2b4  5e                   pop esi
// 005bd2b5  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
