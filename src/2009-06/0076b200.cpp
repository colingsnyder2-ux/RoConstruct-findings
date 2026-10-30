// roc 2009-06 0076b200  unit: CXTPControls  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076b200
//
// 0076b200  83ec1c               sub esp, 0x1c
// 0076b203  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0076b207  8bd1                 mov edx, ecx
// 0076b209  83e010               and eax, 0x10
// 0076b20c  891424               mov dword ptr [esp], edx
// 0076b20f  89442404             mov dword ptr [esp + 4], eax
// 0076b213  740a                 je 0x76b21f
// 0076b215  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0076b219  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 0076b21d  eb08                 jmp 0x76b227
// 0076b21f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0076b223  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 0076b227  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0076b22a  53                   push ebx
// 0076b22b  55                   push ebp
// 0076b22c  56                   push esi
// 0076b22d  83e801               sub eax, 1
// 0076b230  57                   push edi
// 0076b231  8944241c             mov dword ptr [esp + 0x1c], eax
// 0076b235  0f888c000000         js 0x76b2c7
// 0076b23b  8bf0                 mov esi, eax
// 0076b23d  c1e606               shl esi, 6
// 0076b240  03742430             add esi, dword ptr [esp + 0x30]
// 0076b244  837e2800             cmp dword ptr [esi + 0x28], 0
// 0076b248  746b                 je 0x76b2b5
// 0076b24a  837e3000             cmp dword ptr [esi + 0x30], 0
// 0076b24e  7565                 jne 0x76b2b5
// 0076b250  85c0                 test eax, eax
// 0076b252  7c0d                 jl 0x76b261
// 0076b254  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 0076b257  7d08                 jge 0x76b261
// 0076b259  8b7a28               mov edi, dword ptr [edx + 0x28]
// 0076b25c  8b0487               mov eax, dword ptr [edi + eax*4]
// 0076b25f  eb02                 jmp 0x76b263
// 0076b261  33c0                 xor eax, eax
// 0076b263  f680d400000001       test byte ptr [eax + 0xd4], 1
// 0076b26a  745b                 je 0x76b2c7
// 0076b26c  837c241400           cmp dword ptr [esp + 0x14], 0
// 0076b271  8b06                 mov eax, dword ptr [esi]
// 0076b273  8b5604               mov edx, dword ptr [esi + 4]
// 0076b276  8b6e08               mov ebp, dword ptr [esi + 8]
// 0076b279  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 0076b27c  7511                 jne 0x76b28f
// 0076b27e  2bc5                 sub eax, ebp
// 0076b280  8d3c08               lea edi, [eax + ecx]
// 0076b283  3b7c2444             cmp edi, dword ptr [esp + 0x44]
// 0076b287  7c3a                 jl 0x76b2c3
// 0076b289  53                   push ebx
// 0076b28a  51                   push ecx
// 0076b28b  52                   push edx
// 0076b28c  57                   push edi
// 0076b28d  eb0f                 jmp 0x76b29e
// 0076b28f  2bd3                 sub edx, ebx
// 0076b291  8d3c0a               lea edi, [edx + ecx]
// 0076b294  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 0076b298  7c29                 jl 0x76b2c3
// 0076b29a  51                   push ecx
// 0076b29b  55                   push ebp
// 0076b29c  57                   push edi
// 0076b29d  50                   push eax
// 0076b29e  56                   push esi
// 0076b29f  ff15a4ed8900         call dword ptr [0x89eda4]
// 0076b2a5  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 0076b2a9  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076b2ad  8bcf                 mov ecx, edi
// 0076b2af  7516                 jne 0x76b2c7
// 0076b2b1  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0076b2b5  48                   dec eax
// 0076b2b6  83ee40               sub esi, 0x40
// 0076b2b9  8944241c             mov dword ptr [esp + 0x1c], eax
// 0076b2bd  85c0                 test eax, eax
// 0076b2bf  7d83                 jge 0x76b244
// 0076b2c1  eb04                 jmp 0x76b2c7
// 0076b2c3  8b542410             mov edx, dword ptr [esp + 0x10]
// 0076b2c7  33c9                 xor ecx, ecx
// 0076b2c9  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0076b2d1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0076b2d9  394c2414             cmp dword ptr [esp + 0x14], ecx
// 0076b2dd  740a                 je 0x76b2e9
// 0076b2df  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0076b2e3  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 0076b2e7  eb08                 jmp 0x76b2f1
// 0076b2e9  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0076b2ed  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 0076b2f1  8b422c               mov eax, dword ptr [edx + 0x2c]
// 0076b2f4  48                   dec eax
// 0076b2f5  8bd0                 mov edx, eax
// 0076b2f7  89442420             mov dword ptr [esp + 0x20], eax
// 0076b2fb  8954241c             mov dword ptr [esp + 0x1c], edx
// 0076b2ff  85d2                 test edx, edx
// 0076b301  0f8cdb010000         jl 0x76b4e2
// 0076b307  8b742430             mov esi, dword ptr [esp + 0x30]
// 0076b30b  8d42ff               lea eax, [edx - 1]
// 0076b30e  89442424             mov dword ptr [esp + 0x24], eax
// 0076b312  8bc2                 mov eax, edx
// 0076b314  c1e006               shl eax, 6
// 0076b317  8d7c3028             lea edi, [eax + esi + 0x28]
// 0076b31b  897c2428             mov dword ptr [esp + 0x28], edi
// 0076b31f  90                   nop 
// 0076b320  833f00               cmp dword ptr [edi], 0
// 0076b323  0f848e000000         je 0x76b3b7
// 0076b329  8b6f08               mov ebp, dword ptr [edi + 8]
// 0076b32c  85ed                 test ebp, ebp
// 0076b32e  0f8583000000         jne 0x76b3b7
// 0076b334  8b742410             mov esi, dword ptr [esp + 0x10]
// 0076b338  85c9                 test ecx, ecx
// 0076b33a  7529                 jne 0x76b365
// 0076b33c  85d2                 test edx, edx
// 0076b33e  7c0d                 jl 0x76b34d
// 0076b340  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 0076b343  7d08                 jge 0x76b34d
// 0076b345  8b4628               mov eax, dword ptr [esi + 0x28]
// 0076b348  8b0490               mov eax, dword ptr [eax + edx*4]
// 0076b34b  eb02                 jmp 0x76b34f
// 0076b34d  33c0                 xor eax, eax
// 0076b34f  f680d400000001       test byte ptr [eax + 0xd4], 1
// 0076b356  740d                 je 0x76b365
// 0076b358  8b442424             mov eax, dword ptr [esp + 0x24]
// 0076b35c  8b5fd8               mov ebx, dword ptr [edi - 0x28]
// 0076b35f  89442420             mov dword ptr [esp + 0x20], eax
// 0076b363  eb25                 jmp 0x76b38a
// 0076b365  85d2                 test edx, edx
// 0076b367  7c0d                 jl 0x76b376
// 0076b369  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 0076b36c  7d08                 jge 0x76b376
// 0076b36e  8b4628               mov eax, dword ptr [esi + 0x28]
// 0076b371  8b0490               mov eax, dword ptr [eax + edx*4]
// 0076b374  eb02                 jmp 0x76b378
// 0076b376  33c0                 xor eax, eax
// 0076b378  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 0076b37f  7409                 je 0x76b38a
// 0076b381  b901000000           mov ecx, 1
// 0076b386  014c2418             add dword ptr [esp + 0x18], ecx
// 0076b38a  837c244cff           cmp dword ptr [esp + 0x4c], -1
// 0076b38f  751d                 jne 0x76b3ae
// 0076b391  39542420             cmp dword ptr [esp + 0x20], edx
// 0076b395  7c17                 jl 0x76b3ae
// 0076b397  837c241400           cmp dword ptr [esp + 0x14], 0
// 0076b39c  7505                 jne 0x76b3a3
// 0076b39e  8b77e0               mov esi, dword ptr [edi - 0x20]
// 0076b3a1  eb03                 jmp 0x76b3a6
// 0076b3a3  8b77e4               mov esi, dword ptr [edi - 0x1c]
// 0076b3a6  8bc3                 mov eax, ebx
// 0076b3a8  2bc6                 sub eax, esi
// 0076b3aa  8944244c             mov dword ptr [esp + 0x4c], eax
// 0076b3ae  85ed                 test ebp, ebp
// 0076b3b0  7505                 jne 0x76b3b7
// 0076b3b2  396f04               cmp dword ptr [edi + 4], ebp
// 0076b3b5  7508                 jne 0x76b3bf
// 0076b3b7  85d2                 test edx, edx
// 0076b3b9  0f850b010000         jne 0x76b4ca
// 0076b3bf  837c241800           cmp dword ptr [esp + 0x18], 0
// 0076b3c4  0f8eca000000         jle 0x76b494
// 0076b3ca  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 0076b3cf  0f8ebf000000         jle 0x76b494
// 0076b3d5  33ed                 xor ebp, ebp
// 0076b3d7  3b542420             cmp edx, dword ptr [esp + 0x20]
// 0076b3db  89542430             mov dword ptr [esp + 0x30], edx
// 0076b3df  0f8faf000000         jg 0x76b494
// 0076b3e5  8d5fe0               lea ebx, [edi - 0x20]
// 0076b3e8  eb06                 jmp 0x76b3f0
// 0076b3ea  8d9b00000000         lea ebx, [ebx]
// 0076b3f0  837b2000             cmp dword ptr [ebx + 0x20], 0
// 0076b3f4  0f8484000000         je 0x76b47e
// 0076b3fa  837b2800             cmp dword ptr [ebx + 0x28], 0
// 0076b3fe  757e                 jne 0x76b47e
// 0076b400  837c241400           cmp dword ptr [esp + 0x14], 0
// 0076b405  8b4bf8               mov ecx, dword ptr [ebx - 8]
// 0076b408  8b53fc               mov edx, dword ptr [ebx - 4]
// 0076b40b  8b33                 mov esi, dword ptr [ebx]
// 0076b40d  8b7b04               mov edi, dword ptr [ebx + 4]
// 0076b410  8d43f8               lea eax, [ebx - 8]
// 0076b413  7506                 jne 0x76b41b
// 0076b415  03f5                 add esi, ebp
// 0076b417  03cd                 add ecx, ebp
// 0076b419  eb04                 jmp 0x76b41f
// 0076b41b  03fd                 add edi, ebp
// 0076b41d  03d5                 add edx, ebp
// 0076b41f  57                   push edi
// 0076b420  56                   push esi
// 0076b421  52                   push edx
// 0076b422  51                   push ecx
// 0076b423  50                   push eax
// 0076b424  ff15a4ed8900         call dword ptr [0x89eda4]
// 0076b42a  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0076b42e  85c9                 test ecx, ecx
// 0076b430  7c11                 jl 0x76b443
// 0076b432  8b442410             mov eax, dword ptr [esp + 0x10]
// 0076b436  3b482c               cmp ecx, dword ptr [eax + 0x2c]
// 0076b439  7d08                 jge 0x76b443
// 0076b43b  8b5028               mov edx, dword ptr [eax + 0x28]
// 0076b43e  8b048a               mov eax, dword ptr [edx + ecx*4]
// 0076b441  eb02                 jmp 0x76b445
// 0076b443  33c0                 xor eax, eax
// 0076b445  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 0076b44c  7428                 je 0x76b476
// 0076b44e  8b742418             mov esi, dword ptr [esp + 0x18]
// 0076b452  85f6                 test esi, esi
// 0076b454  7e20                 jle 0x76b476
// 0076b456  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0076b45a  99                   cdq 
// 0076b45b  f7fe                 idiv esi
// 0076b45d  837c241400           cmp dword ptr [esp + 0x14], 0
// 0076b462  7504                 jne 0x76b468
// 0076b464  0103                 add dword ptr [ebx], eax
// 0076b466  eb03                 jmp 0x76b46b
// 0076b468  014304               add dword ptr [ebx + 4], eax
// 0076b46b  2944244c             sub dword ptr [esp + 0x4c], eax
// 0076b46f  4e                   dec esi
// 0076b470  89742418             mov dword ptr [esp + 0x18], esi
// 0076b474  03e8                 add ebp, eax
// 0076b476  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0076b47a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0076b47e  8b442430             mov eax, dword ptr [esp + 0x30]
// 0076b482  40                   inc eax
// 0076b483  83c340               add ebx, 0x40
// 0076b486  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0076b48a  89442430             mov dword ptr [esp + 0x30], eax
// 0076b48e  0f8e5cffffff         jle 0x76b3f0
// 0076b494  837c241400           cmp dword ptr [esp + 0x14], 0
// 0076b499  740a                 je 0x76b4a5
// 0076b49b  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 0076b49f  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 0076b4a3  eb08                 jmp 0x76b4ad
// 0076b4a5  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 0076b4a9  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 0076b4ad  8b442424             mov eax, dword ptr [esp + 0x24]
// 0076b4b1  b901000000           mov ecx, 1
// 0076b4b6  89442420             mov dword ptr [esp + 0x20], eax
// 0076b4ba  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 0076b4c2  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0076b4ca  ff4c2424             dec dword ptr [esp + 0x24]
// 0076b4ce  4a                   dec edx
// 0076b4cf  83ef40               sub edi, 0x40
// 0076b4d2  8954241c             mov dword ptr [esp + 0x1c], edx
// 0076b4d6  897c2428             mov dword ptr [esp + 0x28], edi
// 0076b4da  85d2                 test edx, edx
// 0076b4dc  0f8d3efeffff         jge 0x76b320
// 0076b4e2  5f                   pop edi
// 0076b4e3  5e                   pop esi
// 0076b4e4  5d                   pop ebp
// 0076b4e5  5b                   pop ebx
// 0076b4e6  83c41c               add esp, 0x1c
// 0076b4e9  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_MoveRightAlligned@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@VCSize@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
