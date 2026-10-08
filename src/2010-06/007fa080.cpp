// roc 2010-06 007fa080  unit: CXTPControls  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fa080
//
// 007fa080  83ec1c               sub esp, 0x1c
// 007fa083  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007fa087  8bd1                 mov edx, ecx
// 007fa089  83e010               and eax, 0x10
// 007fa08c  891424               mov dword ptr [esp], edx
// 007fa08f  89442404             mov dword ptr [esp + 4], eax
// 007fa093  740a                 je 0x7fa09f
// 007fa095  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007fa099  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 007fa09d  eb08                 jmp 0x7fa0a7
// 007fa09f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 007fa0a3  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 007fa0a7  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007fa0aa  53                   push ebx
// 007fa0ab  55                   push ebp
// 007fa0ac  56                   push esi
// 007fa0ad  83e801               sub eax, 1
// 007fa0b0  57                   push edi
// 007fa0b1  8944241c             mov dword ptr [esp + 0x1c], eax
// 007fa0b5  0f888c000000         js 0x7fa147
// 007fa0bb  8bf0                 mov esi, eax
// 007fa0bd  c1e606               shl esi, 6
// 007fa0c0  03742430             add esi, dword ptr [esp + 0x30]
// 007fa0c4  837e2800             cmp dword ptr [esi + 0x28], 0
// 007fa0c8  746b                 je 0x7fa135
// 007fa0ca  837e3000             cmp dword ptr [esi + 0x30], 0
// 007fa0ce  7565                 jne 0x7fa135
// 007fa0d0  85c0                 test eax, eax
// 007fa0d2  7c0d                 jl 0x7fa0e1
// 007fa0d4  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 007fa0d7  7d08                 jge 0x7fa0e1
// 007fa0d9  8b7a28               mov edi, dword ptr [edx + 0x28]
// 007fa0dc  8b0487               mov eax, dword ptr [edi + eax*4]
// 007fa0df  eb02                 jmp 0x7fa0e3
// 007fa0e1  33c0                 xor eax, eax
// 007fa0e3  f680d400000001       test byte ptr [eax + 0xd4], 1
// 007fa0ea  745b                 je 0x7fa147
// 007fa0ec  837c241400           cmp dword ptr [esp + 0x14], 0
// 007fa0f1  8b06                 mov eax, dword ptr [esi]
// 007fa0f3  8b5604               mov edx, dword ptr [esi + 4]
// 007fa0f6  8b6e08               mov ebp, dword ptr [esi + 8]
// 007fa0f9  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 007fa0fc  7511                 jne 0x7fa10f
// 007fa0fe  2bc5                 sub eax, ebp
// 007fa100  8d3c08               lea edi, [eax + ecx]
// 007fa103  3b7c2444             cmp edi, dword ptr [esp + 0x44]
// 007fa107  7c3a                 jl 0x7fa143
// 007fa109  53                   push ebx
// 007fa10a  51                   push ecx
// 007fa10b  52                   push edx
// 007fa10c  57                   push edi
// 007fa10d  eb0f                 jmp 0x7fa11e
// 007fa10f  2bd3                 sub edx, ebx
// 007fa111  8d3c0a               lea edi, [edx + ecx]
// 007fa114  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 007fa118  7c29                 jl 0x7fa143
// 007fa11a  51                   push ecx
// 007fa11b  55                   push ebp
// 007fa11c  57                   push edi
// 007fa11d  50                   push eax
// 007fa11e  56                   push esi
// 007fa11f  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007fa125  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 007fa129  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fa12d  8bcf                 mov ecx, edi
// 007fa12f  7516                 jne 0x7fa147
// 007fa131  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fa135  48                   dec eax
// 007fa136  83ee40               sub esi, 0x40
// 007fa139  8944241c             mov dword ptr [esp + 0x1c], eax
// 007fa13d  85c0                 test eax, eax
// 007fa13f  7d83                 jge 0x7fa0c4
// 007fa141  eb04                 jmp 0x7fa147
// 007fa143  8b542410             mov edx, dword ptr [esp + 0x10]
// 007fa147  33c9                 xor ecx, ecx
// 007fa149  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 007fa151  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007fa159  394c2414             cmp dword ptr [esp + 0x14], ecx
// 007fa15d  740a                 je 0x7fa169
// 007fa15f  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007fa163  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 007fa167  eb08                 jmp 0x7fa171
// 007fa169  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007fa16d  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 007fa171  8b422c               mov eax, dword ptr [edx + 0x2c]
// 007fa174  48                   dec eax
// 007fa175  8bd0                 mov edx, eax
// 007fa177  89442420             mov dword ptr [esp + 0x20], eax
// 007fa17b  8954241c             mov dword ptr [esp + 0x1c], edx
// 007fa17f  85d2                 test edx, edx
// 007fa181  0f8cdb010000         jl 0x7fa362
// 007fa187  8b742430             mov esi, dword ptr [esp + 0x30]
// 007fa18b  8d42ff               lea eax, [edx - 1]
// 007fa18e  89442424             mov dword ptr [esp + 0x24], eax
// 007fa192  8bc2                 mov eax, edx
// 007fa194  c1e006               shl eax, 6
// 007fa197  8d7c3028             lea edi, [eax + esi + 0x28]
// 007fa19b  897c2428             mov dword ptr [esp + 0x28], edi
// 007fa19f  90                   nop 
// 007fa1a0  833f00               cmp dword ptr [edi], 0
// 007fa1a3  0f848e000000         je 0x7fa237
// 007fa1a9  8b6f08               mov ebp, dword ptr [edi + 8]
// 007fa1ac  85ed                 test ebp, ebp
// 007fa1ae  0f8583000000         jne 0x7fa237
// 007fa1b4  8b742410             mov esi, dword ptr [esp + 0x10]
// 007fa1b8  85c9                 test ecx, ecx
// 007fa1ba  7529                 jne 0x7fa1e5
// 007fa1bc  85d2                 test edx, edx
// 007fa1be  7c0d                 jl 0x7fa1cd
// 007fa1c0  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 007fa1c3  7d08                 jge 0x7fa1cd
// 007fa1c5  8b4628               mov eax, dword ptr [esi + 0x28]
// 007fa1c8  8b0490               mov eax, dword ptr [eax + edx*4]
// 007fa1cb  eb02                 jmp 0x7fa1cf
// 007fa1cd  33c0                 xor eax, eax
// 007fa1cf  f680d400000001       test byte ptr [eax + 0xd4], 1
// 007fa1d6  740d                 je 0x7fa1e5
// 007fa1d8  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fa1dc  8b5fd8               mov ebx, dword ptr [edi - 0x28]
// 007fa1df  89442420             mov dword ptr [esp + 0x20], eax
// 007fa1e3  eb25                 jmp 0x7fa20a
// 007fa1e5  85d2                 test edx, edx
// 007fa1e7  7c0d                 jl 0x7fa1f6
// 007fa1e9  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 007fa1ec  7d08                 jge 0x7fa1f6
// 007fa1ee  8b4628               mov eax, dword ptr [esi + 0x28]
// 007fa1f1  8b0490               mov eax, dword ptr [eax + edx*4]
// 007fa1f4  eb02                 jmp 0x7fa1f8
// 007fa1f6  33c0                 xor eax, eax
// 007fa1f8  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 007fa1ff  7409                 je 0x7fa20a
// 007fa201  b901000000           mov ecx, 1
// 007fa206  014c2418             add dword ptr [esp + 0x18], ecx
// 007fa20a  837c244cff           cmp dword ptr [esp + 0x4c], -1
// 007fa20f  751d                 jne 0x7fa22e
// 007fa211  39542420             cmp dword ptr [esp + 0x20], edx
// 007fa215  7c17                 jl 0x7fa22e
// 007fa217  837c241400           cmp dword ptr [esp + 0x14], 0
// 007fa21c  7505                 jne 0x7fa223
// 007fa21e  8b77e0               mov esi, dword ptr [edi - 0x20]
// 007fa221  eb03                 jmp 0x7fa226
// 007fa223  8b77e4               mov esi, dword ptr [edi - 0x1c]
// 007fa226  8bc3                 mov eax, ebx
// 007fa228  2bc6                 sub eax, esi
// 007fa22a  8944244c             mov dword ptr [esp + 0x4c], eax
// 007fa22e  85ed                 test ebp, ebp
// 007fa230  7505                 jne 0x7fa237
// 007fa232  396f04               cmp dword ptr [edi + 4], ebp
// 007fa235  7508                 jne 0x7fa23f
// 007fa237  85d2                 test edx, edx
// 007fa239  0f850b010000         jne 0x7fa34a
// 007fa23f  837c241800           cmp dword ptr [esp + 0x18], 0
// 007fa244  0f8eca000000         jle 0x7fa314
// 007fa24a  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 007fa24f  0f8ebf000000         jle 0x7fa314
// 007fa255  33ed                 xor ebp, ebp
// 007fa257  3b542420             cmp edx, dword ptr [esp + 0x20]
// 007fa25b  89542430             mov dword ptr [esp + 0x30], edx
// 007fa25f  0f8faf000000         jg 0x7fa314
// 007fa265  8d5fe0               lea ebx, [edi - 0x20]
// 007fa268  eb06                 jmp 0x7fa270
// 007fa26a  8d9b00000000         lea ebx, [ebx]
// 007fa270  837b2000             cmp dword ptr [ebx + 0x20], 0
// 007fa274  0f8484000000         je 0x7fa2fe
// 007fa27a  837b2800             cmp dword ptr [ebx + 0x28], 0
// 007fa27e  757e                 jne 0x7fa2fe
// 007fa280  837c241400           cmp dword ptr [esp + 0x14], 0
// 007fa285  8b4bf8               mov ecx, dword ptr [ebx - 8]
// 007fa288  8b53fc               mov edx, dword ptr [ebx - 4]
// 007fa28b  8b33                 mov esi, dword ptr [ebx]
// 007fa28d  8b7b04               mov edi, dword ptr [ebx + 4]
// 007fa290  8d43f8               lea eax, [ebx - 8]
// 007fa293  7506                 jne 0x7fa29b
// 007fa295  03f5                 add esi, ebp
// 007fa297  03cd                 add ecx, ebp
// 007fa299  eb04                 jmp 0x7fa29f
// 007fa29b  03fd                 add edi, ebp
// 007fa29d  03d5                 add edx, ebp
// 007fa29f  57                   push edi
// 007fa2a0  56                   push esi
// 007fa2a1  52                   push edx
// 007fa2a2  51                   push ecx
// 007fa2a3  50                   push eax
// 007fa2a4  ff15c0bb9e00         call dword ptr [0x9ebbc0]
// 007fa2aa  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 007fa2ae  85c9                 test ecx, ecx
// 007fa2b0  7c11                 jl 0x7fa2c3
// 007fa2b2  8b442410             mov eax, dword ptr [esp + 0x10]
// 007fa2b6  3b482c               cmp ecx, dword ptr [eax + 0x2c]
// 007fa2b9  7d08                 jge 0x7fa2c3
// 007fa2bb  8b5028               mov edx, dword ptr [eax + 0x28]
// 007fa2be  8b048a               mov eax, dword ptr [edx + ecx*4]
// 007fa2c1  eb02                 jmp 0x7fa2c5
// 007fa2c3  33c0                 xor eax, eax
// 007fa2c5  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 007fa2cc  7428                 je 0x7fa2f6
// 007fa2ce  8b742418             mov esi, dword ptr [esp + 0x18]
// 007fa2d2  85f6                 test esi, esi
// 007fa2d4  7e20                 jle 0x7fa2f6
// 007fa2d6  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007fa2da  99                   cdq 
// 007fa2db  f7fe                 idiv esi
// 007fa2dd  837c241400           cmp dword ptr [esp + 0x14], 0
// 007fa2e2  7504                 jne 0x7fa2e8
// 007fa2e4  0103                 add dword ptr [ebx], eax
// 007fa2e6  eb03                 jmp 0x7fa2eb
// 007fa2e8  014304               add dword ptr [ebx + 4], eax
// 007fa2eb  2944244c             sub dword ptr [esp + 0x4c], eax
// 007fa2ef  4e                   dec esi
// 007fa2f0  89742418             mov dword ptr [esp + 0x18], esi
// 007fa2f4  03e8                 add ebp, eax
// 007fa2f6  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007fa2fa  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007fa2fe  8b442430             mov eax, dword ptr [esp + 0x30]
// 007fa302  40                   inc eax
// 007fa303  83c340               add ebx, 0x40
// 007fa306  3b442420             cmp eax, dword ptr [esp + 0x20]
// 007fa30a  89442430             mov dword ptr [esp + 0x30], eax
// 007fa30e  0f8e5cffffff         jle 0x7fa270
// 007fa314  837c241400           cmp dword ptr [esp + 0x14], 0
// 007fa319  740a                 je 0x7fa325
// 007fa31b  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 007fa31f  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 007fa323  eb08                 jmp 0x7fa32d
// 007fa325  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 007fa329  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 007fa32d  8b442424             mov eax, dword ptr [esp + 0x24]
// 007fa331  b901000000           mov ecx, 1
// 007fa336  89442420             mov dword ptr [esp + 0x20], eax
// 007fa33a  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 007fa342  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007fa34a  ff4c2424             dec dword ptr [esp + 0x24]
// 007fa34e  4a                   dec edx
// 007fa34f  83ef40               sub edi, 0x40
// 007fa352  8954241c             mov dword ptr [esp + 0x1c], edx
// 007fa356  897c2428             mov dword ptr [esp + 0x28], edi
// 007fa35a  85d2                 test edx, edx
// 007fa35c  0f8d3efeffff         jge 0x7fa1a0
// 007fa362  5f                   pop edi
// 007fa363  5e                   pop esi
// 007fa364  5d                   pop ebp
// 007fa365  5b                   pop ebx
// 007fa366  83c41c               add esp, 0x1c
// 007fa369  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_MoveRightAlligned@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@VCSize@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
