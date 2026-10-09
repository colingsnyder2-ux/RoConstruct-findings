// roc 2009-12 005e04b0  unit: RBX::RbxG3D::RenderScene  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005e04b0
//
// 005e04b0  53                   push ebx
// 005e04b1  55                   push ebp
// 005e04b2  56                   push esi
// 005e04b3  57                   push edi
// 005e04b4  8bf9                 mov edi, ecx
// 005e04b6  8b4708               mov eax, dword ptr [edi + 8]
// 005e04b9  8b2f                 mov ebp, dword ptr [edi]
// 005e04bb  8d0480               lea eax, [eax + eax*4]
// 005e04be  c1e004               shl eax, 4
// 005e04c1  6a10                 push 0x10
// 005e04c3  50                   push eax
// 005e04c4  e8f79d0000           call 0x5ea2c0
// 005e04c9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005e04cd  8907                 mov dword ptr [edi], eax
// 005e04cf  8b7f08               mov edi, dword ptr [edi + 8]
// 005e04d2  83c408               add esp, 8
// 005e04d5  3bcf                 cmp ecx, edi
// 005e04d7  7c02                 jl 0x5e04db
// 005e04d9  8bcf                 mov ecx, edi
// 005e04db  8d3c89               lea edi, [ecx + ecx*4]
// 005e04de  c1e704               shl edi, 4
// 005e04e1  03f8                 add edi, eax
// 005e04e3  8bf0                 mov esi, eax
// 005e04e5  8bdd                 mov ebx, ebp
// 005e04e7  3bf7                 cmp esi, edi
// 005e04e9  731b                 jae 0x5e0506
// 005e04eb  eb03                 jmp 0x5e04f0
// 005e04ed  8d4900               lea ecx, [ecx]
// 005e04f0  85f6                 test esi, esi
// 005e04f2  7408                 je 0x5e04fc
// 005e04f4  53                   push ebx
// 005e04f5  8bce                 mov ecx, esi
// 005e04f7  e834b4eeff           call 0x4cb930
// 005e04fc  83c650               add esi, 0x50
// 005e04ff  83c350               add ebx, 0x50
// 005e0502  3bf7                 cmp esi, edi
// 005e0504  72ea                 jb 0x5e04f0
// 005e0506  55                   push ebp
// 005e0507  e8d49e0000           call 0x5ea3e0
// 005e050c  83c404               add esp, 4
// 005e050f  5f                   pop edi
// 005e0510  5e                   pop esi
// 005e0511  5d                   pop ebp
// 005e0512  5b                   pop ebx
// 005e0513  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?realloc@?$Array@VGLight@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
