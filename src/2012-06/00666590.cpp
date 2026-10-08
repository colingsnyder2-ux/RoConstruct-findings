// from server: 100% by auto
// roc 2012-06 00666590  unit: seg_00660000  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00666590
//
// 00666590  56                   push esi
// 00666591  8b742408             mov esi, dword ptr [esp + 8]
// 00666595  57                   push edi
// 00666596  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 0066659c  8b4710               mov eax, dword ptr [edi + 0x10]
// 0066659f  894674               mov dword ptr [esi + 0x74], eax
// 006665a2  8b464c               mov eax, dword ptr [esi + 0x4c]
// 006665a5  83e800               sub eax, 0
// 006665a8  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 006665ab  894e70               mov dword ptr [esi + 0x70], ecx
// 006665ae  0f84a3000000         je 0x666657
// 006665b4  83e801               sub eax, 1
// 006665b7  53                   push ebx
// 006665b8  7460                 je 0x66661a
// 006665ba  83e801               sub eax, 1
// 006665bd  7417                 je 0x6665d6
// 006665bf  8b16                 mov edx, dword ptr [esi]
// 006665c1  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 006665c8  8b06                 mov eax, dword ptr [esi]
// 006665ca  8b08                 mov ecx, dword ptr [eax]
// 006665cc  56                   push esi
// 006665cd  ffd1                 call ecx
// 006665cf  83c404               add esp, 4
// 006665d2  5b                   pop ebx
// 006665d3  5f                   pop edi
// 006665d4  5e                   pop esi
// 006665d5  c3                   ret 
// 006665d6  837f4400             cmp dword ptr [edi + 0x44], 0
// 006665da  8d5f44               lea ebx, [edi + 0x44]
// 006665dd  c74704b0636600       mov dword ptr [edi + 4], 0x6663b0
// 006665e4  c6475400             mov byte ptr [edi + 0x54], 0
// 006665e8  7505                 jne 0x6665ef
// 006665ea  e861ffffff           call 0x666550
// 006665ef  55                   push ebp
// 006665f0  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 006665f3  33ff                 xor edi, edi
// 006665f5  397e64               cmp dword ptr [esi + 0x64], edi
// 006665f8  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 006665fc  7e17                 jle 0x666615
// 006665fe  8bff                 mov edi, edi
// 00666600  8b13                 mov edx, dword ptr [ebx]
// 00666602  55                   push ebp
// 00666603  52                   push edx
// 00666604  e847cffeff           call 0x653550
// 00666609  47                   inc edi
// 0066660a  83c408               add esp, 8
// 0066660d  83c304               add ebx, 4
// 00666610  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 00666613  7ceb                 jl 0x666600
// 00666615  5d                   pop ebp
// 00666616  5b                   pop ebx
// 00666617  5f                   pop edi
// 00666618  5e                   pop esi
// 00666619  c3                   ret 
// 0066661a  837e6403             cmp dword ptr [esi + 0x64], 3
// 0066661e  7509                 jne 0x666629
// 00666620  c7470480626600       mov dword ptr [edi + 4], 0x666280
// 00666627  eb07                 jmp 0x666630
// 00666629  c7470470616600       mov dword ptr [edi + 4], 0x666170
// 00666630  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 00666634  c7473000000000       mov dword ptr [edi + 0x30], 0
// 0066663b  7509                 jne 0x666646
// 0066663d  56                   push esi
// 0066663e  e8adf7ffff           call 0x665df0
// 00666643  83c404               add esp, 4
// 00666646  837f3400             cmp dword ptr [edi + 0x34], 0
// 0066664a  75ca                 jne 0x666616
// 0066664c  8bde                 mov ebx, esi
// 0066664e  e86df9ffff           call 0x665fc0
// 00666653  5b                   pop ebx
// 00666654  5f                   pop edi
// 00666655  5e                   pop esi
// 00666656  c3                   ret 
// 00666657  837e6403             cmp dword ptr [esi + 0x64], 3
// 0066665b  750a                 jne 0x666667
// 0066665d  c74704c0606600       mov dword ptr [edi + 4], 0x6660c0
// 00666664  5f                   pop edi
// 00666665  5e                   pop esi
// 00666666  c3                   ret 
// 00666667  c7470410606600       mov dword ptr [edi + 4], 0x666010
// 0066666e  5f                   pop edi
// 0066666f  5e                   pop esi
// 00666670  c3                   ret 
// library jpeg-6b/jquant1.c (function _start_pass_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
