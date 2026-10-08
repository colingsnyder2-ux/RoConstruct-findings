// roc 2009-06 005659f0  unit: RBX::RbxG3D::RenderScene  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005659f0
//
// 005659f0  53                   push ebx
// 005659f1  55                   push ebp
// 005659f2  56                   push esi
// 005659f3  57                   push edi
// 005659f4  8bf9                 mov edi, ecx
// 005659f6  8b4708               mov eax, dword ptr [edi + 8]
// 005659f9  8b2f                 mov ebp, dword ptr [edi]
// 005659fb  8d0480               lea eax, [eax + eax*4]
// 005659fe  c1e004               shl eax, 4
// 00565a01  6a10                 push 0x10
// 00565a03  50                   push eax
// 00565a04  e867570000           call 0x56b170
// 00565a09  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00565a0d  8907                 mov dword ptr [edi], eax
// 00565a0f  8b7f08               mov edi, dword ptr [edi + 8]
// 00565a12  83c408               add esp, 8
// 00565a15  3bcf                 cmp ecx, edi
// 00565a17  7c02                 jl 0x565a1b
// 00565a19  8bcf                 mov ecx, edi
// 00565a1b  8d3c89               lea edi, [ecx + ecx*4]
// 00565a1e  c1e704               shl edi, 4
// 00565a21  03f8                 add edi, eax
// 00565a23  8bf0                 mov esi, eax
// 00565a25  8bdd                 mov ebx, ebp
// 00565a27  3bf7                 cmp esi, edi
// 00565a29  731b                 jae 0x565a46
// 00565a2b  eb03                 jmp 0x565a30
// 00565a2d  8d4900               lea ecx, [ecx]
// 00565a30  85f6                 test esi, esi
// 00565a32  7408                 je 0x565a3c
// 00565a34  53                   push ebx
// 00565a35  8bce                 mov ecx, esi
// 00565a37  e88498f3ff           call 0x49f2c0
// 00565a3c  83c650               add esi, 0x50
// 00565a3f  83c350               add ebx, 0x50
// 00565a42  3bf7                 cmp esi, edi
// 00565a44  72ea                 jb 0x565a30
// 00565a46  55                   push ebp
// 00565a47  e844580000           call 0x56b290
// 00565a4c  83c404               add esp, 4
// 00565a4f  5f                   pop edi
// 00565a50  5e                   pop esi
// 00565a51  5d                   pop ebp
// 00565a52  5b                   pop ebx
// 00565a53  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?realloc@?$Array@VGLight@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
