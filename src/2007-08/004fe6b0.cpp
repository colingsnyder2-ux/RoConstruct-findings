// roc 2007-08 004fe6b0  unit: RBX::Render::AggregateChunk  size: 325 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004fe6b0
//
// 004fe6b0  83ec08               sub esp, 8
// 004fe6b3  53                   push ebx
// 004fe6b4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 004fe6b8  55                   push ebp
// 004fe6b9  56                   push esi
// 004fe6ba  57                   push edi
// 004fe6bb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004fe6bf  8bcf                 mov ecx, edi
// 004fe6c1  2bcb                 sub ecx, ebx
// 004fe6c3  b867666666           mov eax, 0x66666667
// 004fe6c8  f7e9                 imul ecx
// 004fe6ca  c1fa05               sar edx, 5
// 004fe6cd  8bc2                 mov eax, edx
// 004fe6cf  c1e81f               shr eax, 0x1f
// 004fe6d2  03c2                 add eax, edx
// 004fe6d4  83f820               cmp eax, 0x20
// 004fe6d7  0f8eb3000000         jle 0x4fe790
// 004fe6dd  8b742424             mov esi, dword ptr [esp + 0x24]
// 004fe6e1  85f6                 test esi, esi
// 004fe6e3  0f8ec3000000         jle 0x4fe7ac
// 004fe6e9  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fe6ed  50                   push eax
// 004fe6ee  57                   push edi
// 004fe6ef  8d4c2418             lea ecx, [esp + 0x18]
// 004fe6f3  53                   push ebx
// 004fe6f4  51                   push ecx
// 004fe6f5  e856f4ffff           call 0x4fdb50
// 004fe6fa  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 004fe6fe  8bc6                 mov eax, esi
// 004fe700  99                   cdq 
// 004fe701  2bc2                 sub eax, edx
// 004fe703  d1f8                 sar eax, 1
// 004fe705  8bf0                 mov esi, eax
// 004fe707  99                   cdq 
// 004fe708  2bc2                 sub eax, edx
// 004fe70a  d1f8                 sar eax, 1
// 004fe70c  03f0                 add esi, eax
// 004fe70e  8bcf                 mov ecx, edi
// 004fe710  2bcd                 sub ecx, ebp
// 004fe712  b867666666           mov eax, 0x66666667
// 004fe717  f7e9                 imul ecx
// 004fe719  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004fe71d  c1fa05               sar edx, 5
// 004fe720  8bc2                 mov eax, edx
// 004fe722  c1e81f               shr eax, 0x1f
// 004fe725  03c2                 add eax, edx
// 004fe727  89442430             mov dword ptr [esp + 0x30], eax
// 004fe72b  2bcb                 sub ecx, ebx
// 004fe72d  b867666666           mov eax, 0x66666667
// 004fe732  f7e9                 imul ecx
// 004fe734  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 004fe738  c1fa05               sar edx, 5
// 004fe73b  8bc2                 mov eax, edx
// 004fe73d  c1e81f               shr eax, 0x1f
// 004fe740  03c2                 add eax, edx
// 004fe742  83c410               add esp, 0x10
// 004fe745  3bc1                 cmp eax, ecx
// 004fe747  7d15                 jge 0x4fe75e
// 004fe749  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004fe74d  8b542410             mov edx, dword ptr [esp + 0x10]
// 004fe751  51                   push ecx
// 004fe752  56                   push esi
// 004fe753  52                   push edx
// 004fe754  53                   push ebx
// 004fe755  e856ffffff           call 0x4fe6b0
// 004fe75a  8bdd                 mov ebx, ebp
// 004fe75c  eb11                 jmp 0x4fe76f
// 004fe75e  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fe762  50                   push eax
// 004fe763  56                   push esi
// 004fe764  57                   push edi
// 004fe765  55                   push ebp
// 004fe766  e845ffffff           call 0x4fe6b0
// 004fe76b  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 004fe76f  8bcf                 mov ecx, edi
// 004fe771  2bcb                 sub ecx, ebx
// 004fe773  b867666666           mov eax, 0x66666667
// 004fe778  f7e9                 imul ecx
// 004fe77a  c1fa05               sar edx, 5
// 004fe77d  8bc2                 mov eax, edx
// 004fe77f  c1e81f               shr eax, 0x1f
// 004fe782  03c2                 add eax, edx
// 004fe784  83c410               add esp, 0x10
// 004fe787  83f820               cmp eax, 0x20
// 004fe78a  0f8f51ffffff         jg 0x4fe6e1
// 004fe790  83f801               cmp eax, 1
// 004fe793  7e0f                 jle 0x4fe7a4
// 004fe795  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004fe799  51                   push ecx
// 004fe79a  57                   push edi
// 004fe79b  53                   push ebx
// 004fe79c  e82ffcffff           call 0x4fe3d0
// 004fe7a1  83c40c               add esp, 0xc
// 004fe7a4  5f                   pop edi
// 004fe7a5  5e                   pop esi
// 004fe7a6  5d                   pop ebp
// 004fe7a7  5b                   pop ebx
// 004fe7a8  83c408               add esp, 8
// 004fe7ab  c3                   ret 
// 004fe7ac  83f820               cmp eax, 0x20
// 004fe7af  7edf                 jle 0x4fe790
// 004fe7b1  8bcf                 mov ecx, edi
// 004fe7b3  2bcb                 sub ecx, ebx
// 004fe7b5  b867666666           mov eax, 0x66666667
// 004fe7ba  f7e9                 imul ecx
// 004fe7bc  c1fa05               sar edx, 5
// 004fe7bf  8bca                 mov ecx, edx
// 004fe7c1  c1e91f               shr ecx, 0x1f
// 004fe7c4  03ca                 add ecx, edx
// 004fe7c6  83f901               cmp ecx, 1
// 004fe7c9  7e13                 jle 0x4fe7de
// 004fe7cb  8b542428             mov edx, dword ptr [esp + 0x28]
// 004fe7cf  6a00                 push 0
// 004fe7d1  6a00                 push 0
// 004fe7d3  52                   push edx
// 004fe7d4  57                   push edi
// 004fe7d5  53                   push ebx
// 004fe7d6  e865f2ffff           call 0x4fda40
// 004fe7db  83c414               add esp, 0x14
// 004fe7de  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fe7e2  50                   push eax
// 004fe7e3  57                   push edi
// 004fe7e4  53                   push ebx
// 004fe7e5  e806fdffff           call 0x4fe4f0
// 004fe7ea  83c40c               add esp, 0xc
// 004fe7ed  5f                   pop edi
// 004fe7ee  5e                   pop esi
// 004fe7ef  5d                   pop ebp
// 004fe7f0  5b                   pop ebx
// 004fe7f1  83c408               add esp, 8
// 004fe7f4  c3                   ret 
// library openrbx-client/Rendering\RenderLib\EffectSettings.cpp (function ??$_Sort@PAVGLight@G3D@@HP6A_NABV12@0@Z@std@@YAXPAVGLight@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client Rendering/RenderLib/EffectSettings.cpp
