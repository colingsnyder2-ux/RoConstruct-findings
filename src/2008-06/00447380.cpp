// roc 2008-06 00447380  unit: CRenderSettings::W4ShadowMode::?$EnumDesc  size: 374 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00447380
//
// 00447380  6aff                 push -1
// 00447382  68c98e7d00           push 0x7d8ec9
// 00447387  64a100000000         mov eax, dword ptr fs:[0]
// 0044738d  50                   push eax
// 0044738e  64892500000000       mov dword ptr fs:[0], esp
// 00447395  83ec1c               sub esp, 0x1c
// 00447398  53                   push ebx
// 00447399  56                   push esi
// 0044739a  57                   push edi
// 0044739b  6860149300           push 0x931460
// 004473a0  8bf1                 mov esi, ecx
// 004473a2  68945f8100           push 0x815f94
// 004473a7  8974242c             mov dword ptr [esp + 0x2c], esi
// 004473ab  e8e0511200           call 0x56c590
// 004473b0  8d442423             lea eax, [esp + 0x23]
// 004473b4  50                   push eax
// 004473b5  8d542427             lea edx, [esp + 0x27]
// 004473b9  33ff                 xor edi, edi
// 004473bb  8d4e30               lea ecx, [esi + 0x30]
// 004473be  52                   push edx
// 004473bf  897c2438             mov dword ptr [esp + 0x38], edi
// 004473c3  c706e05e8100         mov dword ptr [esi], 0x815ee0
// 004473c9  e842edffff           call 0x446110
// 004473ce  8d442423             lea eax, [esp + 0x23]
// 004473d2  50                   push eax
// 004473d3  8d542427             lea edx, [esp + 0x27]
// 004473d7  8d4e50               lea ecx, [esi + 0x50]
// 004473da  52                   push edx
// 004473db  c644243801           mov byte ptr [esp + 0x38], 1
// 004473e0  e82bedffff           call 0x446110
// 004473e5  6a04                 push 4
// 004473e7  c644243402           mov byte ptr [esp + 0x34], 2
// 004473ec  8d5e70               lea ebx, [esi + 0x70]
// 004473ef  e82c952500           call 0x6a0920
// 004473f4  83c404               add esp, 4
// 004473f7  3bc7                 cmp eax, edi
// 004473f9  7404                 je 0x4473ff
// 004473fb  8918                 mov dword ptr [eax], ebx
// 004473fd  eb02                 jmp 0x447401
// 004473ff  33c0                 xor eax, eax
// 00447401  8903                 mov dword ptr [ebx], eax
// 00447403  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447406  897b10               mov dword ptr [ebx + 0x10], edi
// 00447409  897b14               mov dword ptr [ebx + 0x14], edi
// 0044740c  6a04                 push 4
// 0044740e  c644243404           mov byte ptr [esp + 0x34], 4
// 00447413  8d9e88000000         lea ebx, [esi + 0x88]
// 00447419  e802952500           call 0x6a0920
// 0044741e  83c404               add esp, 4
// 00447421  3bc7                 cmp eax, edi
// 00447423  7404                 je 0x447429
// 00447425  8918                 mov dword ptr [eax], ebx
// 00447427  eb02                 jmp 0x44742b
// 00447429  33c0                 xor eax, eax
// 0044742b  8903                 mov dword ptr [ebx], eax
// 0044742d  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447430  897b10               mov dword ptr [ebx + 0x10], edi
// 00447433  897b14               mov dword ptr [ebx + 0x14], edi
// 00447436  6a04                 push 4
// 00447438  c644243406           mov byte ptr [esp + 0x34], 6
// 0044743d  8d9ea0000000         lea ebx, [esi + 0xa0]
// 00447443  e8d8942500           call 0x6a0920
// 00447448  83c404               add esp, 4
// 0044744b  3bc7                 cmp eax, edi
// 0044744d  7404                 je 0x447453
// 0044744f  8918                 mov dword ptr [eax], ebx
// 00447451  eb02                 jmp 0x447455
// 00447453  33c0                 xor eax, eax
// 00447455  8903                 mov dword ptr [ebx], eax
// 00447457  897b0c               mov dword ptr [ebx + 0xc], edi
// 0044745a  897b10               mov dword ptr [ebx + 0x10], edi
// 0044745d  897b14               mov dword ptr [ebx + 0x14], edi
// 00447460  6a04                 push 4
// 00447462  c644243408           mov byte ptr [esp + 0x34], 8
// 00447467  8d9eb8000000         lea ebx, [esi + 0xb8]
// 0044746d  e8ae942500           call 0x6a0920
// 00447472  83c404               add esp, 4
// 00447475  3bc7                 cmp eax, edi
// 00447477  7404                 je 0x44747d
// 00447479  8918                 mov dword ptr [eax], ebx
// 0044747b  eb02                 jmp 0x44747f
// 0044747d  33c0                 xor eax, eax
// 0044747f  8903                 mov dword ptr [ebx], eax
// 00447481  897b0c               mov dword ptr [ebx + 0xc], edi
// 00447484  897b10               mov dword ptr [ebx + 0x10], edi
// 00447487  897b14               mov dword ptr [ebx + 0x14], edi
// 0044748a  6a04                 push 4
// 0044748c  c64424340a           mov byte ptr [esp + 0x34], 0xa
// 00447491  8d9ed0000000         lea ebx, [esi + 0xd0]
// 00447497  e884942500           call 0x6a0920
// 0044749c  83c404               add esp, 4
// 0044749f  3bc7                 cmp eax, edi
// 004474a1  7404                 je 0x4474a7
// 004474a3  8918                 mov dword ptr [eax], ebx
// 004474a5  eb02                 jmp 0x4474a9
// 004474a7  33c0                 xor eax, eax
// 004474a9  8903                 mov dword ptr [ebx], eax
// 004474ab  897b0c               mov dword ptr [ebx + 0xc], edi
// 004474ae  897b10               mov dword ptr [ebx + 0x10], edi
// 004474b1  897b14               mov dword ptr [ebx + 0x14], edi
// 004474b4  68705f8100           push 0x815f70
// 004474b9  57                   push edi
// 004474ba  8bce                 mov ecx, esi
// 004474bc  c64424380c           mov byte ptr [esp + 0x38], 0xc
// 004474c1  e86a602000           call 0x64d530
// 004474c6  68905f8100           push 0x815f90
// 004474cb  6a01                 push 1
// 004474cd  8bce                 mov ecx, esi
// 004474cf  e85c602000           call 0x64d530
// 004474d4  688c5f8100           push 0x815f8c
// 004474d9  6a02                 push 2
// 004474db  8bce                 mov ecx, esi
// 004474dd  e84e602000           call 0x64d530
// 004474e2  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004474e6  5f                   pop edi
// 004474e7  8bc6                 mov eax, esi
// 004474e9  5e                   pop esi
// 004474ea  5b                   pop ebx
// 004474eb  64890d00000000       mov dword ptr fs:[0], ecx
// 004474f2  83c428               add esp, 0x28
// 004474f5  c3                   ret 
// library rbxgs/roc_unit_17a2063a9f68116b.cpp (function ??0?$EnumDesc@W4FrameRateManagerMode@CRenderSettings@@@Reflection@RBX@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs roc_unit_17a2063a9f68116b.cpp
