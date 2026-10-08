// roc 2009-06 00676170  unit: RBX::Assembly  size: 106 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00676170
//
// 00676170  53                   push ebx
// 00676171  55                   push ebp
// 00676172  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00676176  56                   push esi
// 00676177  8b742414             mov esi, dword ptr [esp + 0x14]
// 0067617b  8b0e                 mov ecx, dword ptr [esi]
// 0067617d  57                   push edi
// 0067617e  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00676182  8b07                 mov eax, dword ptr [edi]
// 00676184  50                   push eax
// 00676185  51                   push ecx
// 00676186  ffd5                 call ebp
// 00676188  83c408               add esp, 8
// 0067618b  84c0                 test al, al
// 0067618d  740c                 je 0x67619b
// 0067618f  3bf7                 cmp esi, edi
// 00676191  7408                 je 0x67619b
// 00676193  8b17                 mov edx, dword ptr [edi]
// 00676195  8b06                 mov eax, dword ptr [esi]
// 00676197  8916                 mov dword ptr [esi], edx
// 00676199  8907                 mov dword ptr [edi], eax
// 0067619b  8b06                 mov eax, dword ptr [esi]
// 0067619d  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 006761a1  8b0b                 mov ecx, dword ptr [ebx]
// 006761a3  50                   push eax
// 006761a4  51                   push ecx
// 006761a5  ffd5                 call ebp
// 006761a7  83c408               add esp, 8
// 006761aa  84c0                 test al, al
// 006761ac  740c                 je 0x6761ba
// 006761ae  3bde                 cmp ebx, esi
// 006761b0  7408                 je 0x6761ba
// 006761b2  8b16                 mov edx, dword ptr [esi]
// 006761b4  8b03                 mov eax, dword ptr [ebx]
// 006761b6  8913                 mov dword ptr [ebx], edx
// 006761b8  8906                 mov dword ptr [esi], eax
// 006761ba  8b07                 mov eax, dword ptr [edi]
// 006761bc  8b0e                 mov ecx, dword ptr [esi]
// 006761be  50                   push eax
// 006761bf  51                   push ecx
// 006761c0  ffd5                 call ebp
// 006761c2  83c408               add esp, 8
// 006761c5  84c0                 test al, al
// 006761c7  740c                 je 0x6761d5
// 006761c9  3bf7                 cmp esi, edi
// 006761cb  7408                 je 0x6761d5
// 006761cd  8b17                 mov edx, dword ptr [edi]
// 006761cf  8b06                 mov eax, dword ptr [esi]
// 006761d1  8916                 mov dword ptr [esi], edx
// 006761d3  8907                 mov dword ptr [edi], eax
// 006761d5  5f                   pop edi
// 006761d6  5e                   pop esi
// 006761d7  5d                   pop ebp
// 006761d8  5b                   pop ebx
// 006761d9  c3                   ret 
// library rbxgs/v8world\Assembly.cpp (function ??$_Med3@PAPAVMotorJoint@RBX@@P6A_NPBV12@0@Z@std@@YAXPAPAVMotorJoint@RBX@@00P6A_NPBV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
