// roc 2009-06 0056a400  unit: RBX::RbxG3D::RenderScene  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056a400
//
// 0056a400  83ec08               sub esp, 8
// 0056a403  53                   push ebx
// 0056a404  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0056a408  55                   push ebp
// 0056a409  56                   push esi
// 0056a40a  57                   push edi
// 0056a40b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0056a40f  8bcf                 mov ecx, edi
// 0056a411  2bcb                 sub ecx, ebx
// 0056a413  b867666666           mov eax, 0x66666667
// 0056a418  f7e9                 imul ecx
// 0056a41a  c1fa05               sar edx, 5
// 0056a41d  8bc2                 mov eax, edx
// 0056a41f  c1e81f               shr eax, 0x1f
// 0056a422  03c2                 add eax, edx
// 0056a424  83f820               cmp eax, 0x20
// 0056a427  0f8eb3000000         jle 0x56a4e0
// 0056a42d  8b742424             mov esi, dword ptr [esp + 0x24]
// 0056a431  85f6                 test esi, esi
// 0056a433  0f8ec5000000         jle 0x56a4fe
// 0056a439  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056a43d  50                   push eax
// 0056a43e  57                   push edi
// 0056a43f  8d4c2418             lea ecx, [esp + 0x18]
// 0056a443  53                   push ebx
// 0056a444  51                   push ecx
// 0056a445  e826f3ffff           call 0x569770
// 0056a44a  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 0056a44e  8bc6                 mov eax, esi
// 0056a450  99                   cdq 
// 0056a451  2bc2                 sub eax, edx
// 0056a453  d1f8                 sar eax, 1
// 0056a455  8bf0                 mov esi, eax
// 0056a457  99                   cdq 
// 0056a458  2bc2                 sub eax, edx
// 0056a45a  d1f8                 sar eax, 1
// 0056a45c  03f0                 add esi, eax
// 0056a45e  8bcf                 mov ecx, edi
// 0056a460  2bcd                 sub ecx, ebp
// 0056a462  b867666666           mov eax, 0x66666667
// 0056a467  f7e9                 imul ecx
// 0056a469  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0056a46d  c1fa05               sar edx, 5
// 0056a470  8bc2                 mov eax, edx
// 0056a472  c1e81f               shr eax, 0x1f
// 0056a475  03c2                 add eax, edx
// 0056a477  89442430             mov dword ptr [esp + 0x30], eax
// 0056a47b  2bcb                 sub ecx, ebx
// 0056a47d  b867666666           mov eax, 0x66666667
// 0056a482  f7e9                 imul ecx
// 0056a484  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0056a488  c1fa05               sar edx, 5
// 0056a48b  8bc2                 mov eax, edx
// 0056a48d  c1e81f               shr eax, 0x1f
// 0056a490  03c2                 add eax, edx
// 0056a492  83c410               add esp, 0x10
// 0056a495  3bc1                 cmp eax, ecx
// 0056a497  7d15                 jge 0x56a4ae
// 0056a499  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056a49d  8b542410             mov edx, dword ptr [esp + 0x10]
// 0056a4a1  51                   push ecx
// 0056a4a2  56                   push esi
// 0056a4a3  52                   push edx
// 0056a4a4  53                   push ebx
// 0056a4a5  e856ffffff           call 0x56a400
// 0056a4aa  8bdd                 mov ebx, ebp
// 0056a4ac  eb11                 jmp 0x56a4bf
// 0056a4ae  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056a4b2  50                   push eax
// 0056a4b3  56                   push esi
// 0056a4b4  57                   push edi
// 0056a4b5  55                   push ebp
// 0056a4b6  e845ffffff           call 0x56a400
// 0056a4bb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0056a4bf  8bcf                 mov ecx, edi
// 0056a4c1  2bcb                 sub ecx, ebx
// 0056a4c3  b867666666           mov eax, 0x66666667
// 0056a4c8  f7e9                 imul ecx
// 0056a4ca  c1fa05               sar edx, 5
// 0056a4cd  8bc2                 mov eax, edx
// 0056a4cf  c1e81f               shr eax, 0x1f
// 0056a4d2  03c2                 add eax, edx
// 0056a4d4  83c410               add esp, 0x10
// 0056a4d7  83f820               cmp eax, 0x20
// 0056a4da  0f8f51ffffff         jg 0x56a431
// 0056a4e0  83f801               cmp eax, 1
// 0056a4e3  7e11                 jle 0x56a4f6
// 0056a4e5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0056a4e9  6a00                 push 0
// 0056a4eb  51                   push ecx
// 0056a4ec  57                   push edi
// 0056a4ed  53                   push ebx
// 0056a4ee  e81dfbffff           call 0x56a010
// 0056a4f3  83c410               add esp, 0x10
// 0056a4f6  5f                   pop edi
// 0056a4f7  5e                   pop esi
// 0056a4f8  5d                   pop ebp
// 0056a4f9  5b                   pop ebx
// 0056a4fa  83c408               add esp, 8
// 0056a4fd  c3                   ret 
// 0056a4fe  83f820               cmp eax, 0x20
// 0056a501  7edd                 jle 0x56a4e0
// 0056a503  8bcf                 mov ecx, edi
// 0056a505  2bcb                 sub ecx, ebx
// 0056a507  b867666666           mov eax, 0x66666667
// 0056a50c  f7e9                 imul ecx
// 0056a50e  c1fa05               sar edx, 5
// 0056a511  8bca                 mov ecx, edx
// 0056a513  c1e91f               shr ecx, 0x1f
// 0056a516  03ca                 add ecx, edx
// 0056a518  83f901               cmp ecx, 1
// 0056a51b  7e13                 jle 0x56a530
// 0056a51d  8b542428             mov edx, dword ptr [esp + 0x28]
// 0056a521  6a00                 push 0
// 0056a523  6a00                 push 0
// 0056a525  52                   push edx
// 0056a526  57                   push edi
// 0056a527  53                   push ebx
// 0056a528  e833f1ffff           call 0x569660
// 0056a52d  83c414               add esp, 0x14
// 0056a530  8b442428             mov eax, dword ptr [esp + 0x28]
// 0056a534  50                   push eax
// 0056a535  57                   push edi
// 0056a536  53                   push ebx
// 0056a537  e824fdffff           call 0x56a260
// 0056a53c  83c40c               add esp, 0xc
// 0056a53f  5f                   pop edi
// 0056a540  5e                   pop esi
// 0056a541  5d                   pop ebp
// 0056a542  5b                   pop ebx
// 0056a543  83c408               add esp, 8
// 0056a546  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort@PAVGLight@G3D@@HP6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
