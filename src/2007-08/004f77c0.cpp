// roc 2007-08 004f77c0  unit: G3D::Sphere  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004f77c0
//
// 004f77c0  53                   push ebx
// 004f77c1  55                   push ebp
// 004f77c2  56                   push esi
// 004f77c3  57                   push edi
// 004f77c4  8bf9                 mov edi, ecx
// 004f77c6  8b4708               mov eax, dword ptr [edi + 8]
// 004f77c9  8b2f                 mov ebp, dword ptr [edi]
// 004f77cb  8d0480               lea eax, [eax + eax*4]
// 004f77ce  c1e004               shl eax, 4
// 004f77d1  6a10                 push 0x10
// 004f77d3  50                   push eax
// 004f77d4  e887880000           call 0x500060
// 004f77d9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004f77dd  8907                 mov dword ptr [edi], eax
// 004f77df  8b7f08               mov edi, dword ptr [edi + 8]
// 004f77e2  83c408               add esp, 8
// 004f77e5  3bcf                 cmp ecx, edi
// 004f77e7  7c02                 jl 0x4f77eb
// 004f77e9  8bcf                 mov ecx, edi
// 004f77eb  8d3c89               lea edi, [ecx + ecx*4]
// 004f77ee  c1e704               shl edi, 4
// 004f77f1  03f8                 add edi, eax
// 004f77f3  8bf0                 mov esi, eax
// 004f77f5  3bf7                 cmp esi, edi
// 004f77f7  8bdd                 mov ebx, ebp
// 004f77f9  731b                 jae 0x4f7816
// 004f77fb  eb03                 jmp 0x4f7800
// 004f77fd  8d4900               lea ecx, [ecx]
// 004f7800  85f6                 test esi, esi
// 004f7802  7408                 je 0x4f780c
// 004f7804  53                   push ebx
// 004f7805  8bce                 mov ecx, esi
// 004f7807  e864d1f7ff           call 0x474970
// 004f780c  83c650               add esi, 0x50
// 004f780f  83c350               add ebx, 0x50
// 004f7812  3bf7                 cmp esi, edi
// 004f7814  72ea                 jb 0x4f7800
// 004f7816  55                   push ebp
// 004f7817  e8f47f0000           call 0x4ff810
// 004f781c  83c404               add esp, 4
// 004f781f  5f                   pop edi
// 004f7820  5e                   pop esi
// 004f7821  5d                   pop ebp
// 004f7822  5b                   pop ebx
// 004f7823  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?realloc@?$Array@VGLight@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
