// roc 2007-03 004eb1f0  unit: seg_004e0000  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004eb1f0
//
// 004eb1f0  53                   push ebx
// 004eb1f1  55                   push ebp
// 004eb1f2  56                   push esi
// 004eb1f3  57                   push edi
// 004eb1f4  8bf9                 mov edi, ecx
// 004eb1f6  8b4708               mov eax, dword ptr [edi + 8]
// 004eb1f9  8b2f                 mov ebp, dword ptr [edi]
// 004eb1fb  8d0480               lea eax, [eax + eax*4]
// 004eb1fe  c1e004               shl eax, 4
// 004eb201  6a10                 push 0x10
// 004eb203  50                   push eax
// 004eb204  e8c7890000           call 0x4f3bd0
// 004eb209  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 004eb20d  8907                 mov dword ptr [edi], eax
// 004eb20f  8b7f08               mov edi, dword ptr [edi + 8]
// 004eb212  83c408               add esp, 8
// 004eb215  3bcf                 cmp ecx, edi
// 004eb217  7c02                 jl 0x4eb21b
// 004eb219  8bcf                 mov ecx, edi
// 004eb21b  8d3c89               lea edi, [ecx + ecx*4]
// 004eb21e  c1e704               shl edi, 4
// 004eb221  03f8                 add edi, eax
// 004eb223  8bf0                 mov esi, eax
// 004eb225  3bf7                 cmp esi, edi
// 004eb227  8bdd                 mov ebx, ebp
// 004eb229  731b                 jae 0x4eb246
// 004eb22b  eb03                 jmp 0x4eb230
// 004eb22d  8d4900               lea ecx, [ecx]
// 004eb230  85f6                 test esi, esi
// 004eb232  7408                 je 0x4eb23c
// 004eb234  53                   push ebx
// 004eb235  8bce                 mov ecx, esi
// 004eb237  e83498f8ff           call 0x474a70
// 004eb23c  83c650               add esi, 0x50
// 004eb23f  83c350               add ebx, 0x50
// 004eb242  3bf7                 cmp esi, edi
// 004eb244  72ea                 jb 0x4eb230
// 004eb246  55                   push ebp
// 004eb247  e834810000           call 0x4f3380
// 004eb24c  83c404               add esp, 4
// 004eb24f  5f                   pop edi
// 004eb250  5e                   pop esi
// 004eb251  5d                   pop ebp
// 004eb252  5b                   pop ebx
// 004eb253  c20400               ret 4
// library rbxgs-render/RenderScene.cpp (function ?realloc@?$Array@VGLight@G3D@@@G3D@@AAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs-render RenderScene.cpp
