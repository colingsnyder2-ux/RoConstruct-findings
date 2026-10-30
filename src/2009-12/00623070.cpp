// roc 2009-12 00623070  unit: seg_00620000  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00623070
//
// 00623070  56                   push esi
// 00623071  8b742408             mov esi, dword ptr [esp + 8]
// 00623075  57                   push edi
// 00623076  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 0062307c  8b4710               mov eax, dword ptr [edi + 0x10]
// 0062307f  894674               mov dword ptr [esi + 0x74], eax
// 00623082  8b464c               mov eax, dword ptr [esi + 0x4c]
// 00623085  83e800               sub eax, 0
// 00623088  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0062308b  894e70               mov dword ptr [esi + 0x70], ecx
// 0062308e  0f84a3000000         je 0x623137
// 00623094  83e801               sub eax, 1
// 00623097  53                   push ebx
// 00623098  7460                 je 0x6230fa
// 0062309a  83e801               sub eax, 1
// 0062309d  7417                 je 0x6230b6
// 0062309f  8b16                 mov edx, dword ptr [esi]
// 006230a1  c7421430000000       mov dword ptr [edx + 0x14], 0x30
// 006230a8  8b06                 mov eax, dword ptr [esi]
// 006230aa  8b08                 mov ecx, dword ptr [eax]
// 006230ac  56                   push esi
// 006230ad  ffd1                 call ecx
// 006230af  83c404               add esp, 4
// 006230b2  5b                   pop ebx
// 006230b3  5f                   pop edi
// 006230b4  5e                   pop esi
// 006230b5  c3                   ret 
// 006230b6  837f4400             cmp dword ptr [edi + 0x44], 0
// 006230ba  8d5f44               lea ebx, [edi + 0x44]
// 006230bd  c74704902e6200       mov dword ptr [edi + 4], 0x622e90
// 006230c4  c6475400             mov byte ptr [edi + 0x54], 0
// 006230c8  7505                 jne 0x6230cf
// 006230ca  e861ffffff           call 0x623030
// 006230cf  55                   push ebp
// 006230d0  8b6e5c               mov ebp, dword ptr [esi + 0x5c]
// 006230d3  33ff                 xor edi, edi
// 006230d5  397e64               cmp dword ptr [esi + 0x64], edi
// 006230d8  8d6c2d04             lea ebp, [ebp + ebp + 4]
// 006230dc  7e17                 jle 0x6230f5
// 006230de  8bff                 mov edi, edi
// 006230e0  8b13                 mov edx, dword ptr [ebx]
// 006230e2  55                   push ebp
// 006230e3  52                   push edx
// 006230e4  e8178cfeff           call 0x60bd00
// 006230e9  47                   inc edi
// 006230ea  83c408               add esp, 8
// 006230ed  83c304               add ebx, 4
// 006230f0  3b7e64               cmp edi, dword ptr [esi + 0x64]
// 006230f3  7ceb                 jl 0x6230e0
// 006230f5  5d                   pop ebp
// 006230f6  5b                   pop ebx
// 006230f7  5f                   pop edi
// 006230f8  5e                   pop esi
// 006230f9  c3                   ret 
// 006230fa  837e6403             cmp dword ptr [esi + 0x64], 3
// 006230fe  7509                 jne 0x623109
// 00623100  c74704602d6200       mov dword ptr [edi + 4], 0x622d60
// 00623107  eb07                 jmp 0x623110
// 00623109  c74704502c6200       mov dword ptr [edi + 4], 0x622c50
// 00623110  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 00623114  c7473000000000       mov dword ptr [edi + 0x30], 0
// 0062311b  7509                 jne 0x623126
// 0062311d  56                   push esi
// 0062311e  e8adf7ffff           call 0x6228d0
// 00623123  83c404               add esp, 4
// 00623126  837f3400             cmp dword ptr [edi + 0x34], 0
// 0062312a  75ca                 jne 0x6230f6
// 0062312c  8bde                 mov ebx, esi
// 0062312e  e86df9ffff           call 0x622aa0
// 00623133  5b                   pop ebx
// 00623134  5f                   pop edi
// 00623135  5e                   pop esi
// 00623136  c3                   ret 
// 00623137  837e6403             cmp dword ptr [esi + 0x64], 3
// 0062313b  750a                 jne 0x623147
// 0062313d  c74704a02b6200       mov dword ptr [edi + 4], 0x622ba0
// 00623144  5f                   pop edi
// 00623145  5e                   pop esi
// 00623146  c3                   ret 
// 00623147  c74704f02a6200       mov dword ptr [edi + 4], 0x622af0
// 0062314e  5f                   pop edi
// 0062314f  5e                   pop esi
// 00623150  c3                   ret 
// library jpeg-6b/jquant1.c (function _start_pass_1_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
