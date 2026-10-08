// roc 2010-06 00543cb0  unit: RBX::RbxG3D::RenderScene  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00543cb0
//
// 00543cb0  53                   push ebx
// 00543cb1  55                   push ebp
// 00543cb2  56                   push esi
// 00543cb3  57                   push edi
// 00543cb4  8bf9                 mov edi, ecx
// 00543cb6  8b4708               mov eax, dword ptr [edi + 8]
// 00543cb9  8b2f                 mov ebp, dword ptr [edi]
// 00543cbb  8d0480               lea eax, [eax + eax*4]
// 00543cbe  c1e004               shl eax, 4
// 00543cc1  6a10                 push 0x10
// 00543cc3  50                   push eax
// 00543cc4  e8d79b0000           call 0x54d8a0
// 00543cc9  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00543ccd  8907                 mov dword ptr [edi], eax
// 00543ccf  8b7f08               mov edi, dword ptr [edi + 8]
// 00543cd2  83c408               add esp, 8
// 00543cd5  3bcf                 cmp ecx, edi
// 00543cd7  7c02                 jl 0x543cdb
// 00543cd9  8bcf                 mov ecx, edi
// 00543cdb  8d3c89               lea edi, [ecx + ecx*4]
// 00543cde  c1e704               shl edi, 4
// 00543ce1  03f8                 add edi, eax
// 00543ce3  8bf0                 mov esi, eax
// 00543ce5  8bdd                 mov ebx, ebp
// 00543ce7  3bf7                 cmp esi, edi
// 00543ce9  731b                 jae 0x543d06
// 00543ceb  eb03                 jmp 0x543cf0
// 00543ced  8d4900               lea ecx, [ecx]
// 00543cf0  85f6                 test esi, esi
// 00543cf2  7408                 je 0x543cfc
// 00543cf4  53                   push ebx
// 00543cf5  8bce                 mov ecx, esi
// 00543cf7  e8d4e4f4ff           call 0x4921d0
// 00543cfc  83c650               add esi, 0x50
// 00543cff  83c350               add ebx, 0x50
// 00543d02  3bf7                 cmp esi, edi
// 00543d04  72ea                 jb 0x543cf0
// 00543d06  55                   push ebp
// 00543d07  e8b49c0000           call 0x54d9c0
// 00543d0c  83c404               add esp, 4
// 00543d0f  5f                   pop edi
// 00543d10  5e                   pop esi
// 00543d11  5d                   pop ebp
// 00543d12  5b                   pop ebx
// 00543d13  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?realloc@?$Array@VGLight@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
