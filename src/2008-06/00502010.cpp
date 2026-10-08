// roc 2008-06 00502010  unit: G3D::Sphere  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00502010
//
// 00502010  53                   push ebx
// 00502011  55                   push ebp
// 00502012  56                   push esi
// 00502013  57                   push edi
// 00502014  8bf9                 mov edi, ecx
// 00502016  8b4708               mov eax, dword ptr [edi + 8]
// 00502019  8b2f                 mov ebp, dword ptr [edi]
// 0050201b  8d0480               lea eax, [eax + eax*4]
// 0050201e  c1e004               shl eax, 4
// 00502021  6a10                 push 0x10
// 00502023  50                   push eax
// 00502024  e857650000           call 0x508580
// 00502029  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0050202d  8907                 mov dword ptr [edi], eax
// 0050202f  8b7f08               mov edi, dword ptr [edi + 8]
// 00502032  83c408               add esp, 8
// 00502035  3bcf                 cmp ecx, edi
// 00502037  7c02                 jl 0x50203b
// 00502039  8bcf                 mov ecx, edi
// 0050203b  8d3c89               lea edi, [ecx + ecx*4]
// 0050203e  c1e704               shl edi, 4
// 00502041  03f8                 add edi, eax
// 00502043  8bf0                 mov esi, eax
// 00502045  8bdd                 mov ebx, ebp
// 00502047  3bf7                 cmp esi, edi
// 00502049  731b                 jae 0x502066
// 0050204b  eb03                 jmp 0x502050
// 0050204d  8d4900               lea ecx, [ecx]
// 00502050  85f6                 test esi, esi
// 00502052  7408                 je 0x50205c
// 00502054  53                   push ebx
// 00502055  8bce                 mov ecx, esi
// 00502057  e8f45bf7ff           call 0x477c50
// 0050205c  83c650               add esi, 0x50
// 0050205f  83c350               add ebx, 0x50
// 00502062  3bf7                 cmp esi, edi
// 00502064  72ea                 jb 0x502050
// 00502066  55                   push ebp
// 00502067  e8b45c0000           call 0x507d20
// 0050206c  83c404               add esp, 4
// 0050206f  5f                   pop edi
// 00502070  5e                   pop esi
// 00502071  5d                   pop ebp
// 00502072  5b                   pop ebx
// 00502073  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?realloc@?$Array@VGLight@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
