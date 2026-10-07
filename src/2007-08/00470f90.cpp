// roc 2007-08 00470f90  unit: G3D::Texture  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00470f90
//
// 00470f90  56                   push esi
// 00470f91  8bf1                 mov esi, ecx
// 00470f93  8b4604               mov eax, dword ptr [esi + 4]
// 00470f96  3b4608               cmp eax, dword ptr [esi + 8]
// 00470f99  8b0e                 mov ecx, dword ptr [esi]
// 00470f9b  7d17                 jge 0x470fb4
// 00470f9d  8d0481               lea eax, [ecx + eax*4]
// 00470fa0  85c0                 test eax, eax
// 00470fa2  7408                 je 0x470fac
// 00470fa4  8b542408             mov edx, dword ptr [esp + 8]
// 00470fa8  8b0a                 mov ecx, dword ptr [edx]
// 00470faa  8908                 mov dword ptr [eax], ecx
// 00470fac  83460401             add dword ptr [esi + 4], 1
// 00470fb0  5e                   pop esi
// 00470fb1  c20400               ret 4
// 00470fb4  57                   push edi
// 00470fb5  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00470fb9  3bf9                 cmp edi, ecx
// 00470fbb  721e                 jb 0x470fdb
// 00470fbd  8d1481               lea edx, [ecx + eax*4]
// 00470fc0  3bfa                 cmp edi, edx
// 00470fc2  7317                 jae 0x470fdb
// 00470fc4  8b07                 mov eax, dword ptr [edi]
// 00470fc6  8d4c240c             lea ecx, [esp + 0xc]
// 00470fca  51                   push ecx
// 00470fcb  8bce                 mov ecx, esi
// 00470fcd  89442410             mov dword ptr [esp + 0x10], eax
// 00470fd1  e8baffffff           call 0x470f90
// 00470fd6  5f                   pop edi
// 00470fd7  5e                   pop esi
// 00470fd8  c20400               ret 4
// 00470fdb  6a00                 push 0
// 00470fdd  83c001               add eax, 1
// 00470fe0  50                   push eax
// 00470fe1  8bce                 mov ecx, esi
// 00470fe3  e828f9ffff           call 0x470910
// 00470fe8  8b0f                 mov ecx, dword ptr [edi]
// 00470fea  8b5604               mov edx, dword ptr [esi + 4]
// 00470fed  8b06                 mov eax, dword ptr [esi]
// 00470fef  5f                   pop edi
// 00470ff0  894c90fc             mov dword ptr [eax + edx*4 - 4], ecx
// 00470ff4  5e                   pop esi
// 00470ff5  c20400               ret 4
// library g3d-6.09/GLG3Dcpp\Texture.cpp (function ?append@?$Array@PBX@G3D@@QAEXABQBX@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Texture.cpp
