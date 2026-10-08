// roc 2011-06 008579c0  unit: CXTPControls  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008579c0
//
// 008579c0  83ec1c               sub esp, 0x1c
// 008579c3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 008579c7  8bd1                 mov edx, ecx
// 008579c9  83e010               and eax, 0x10
// 008579cc  891424               mov dword ptr [esp], edx
// 008579cf  89442404             mov dword ptr [esp + 4], eax
// 008579d3  740a                 je 0x8579df
// 008579d5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008579d9  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 008579dd  eb08                 jmp 0x8579e7
// 008579df  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008579e3  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 008579e7  8b422c               mov eax, dword ptr [edx + 0x2c]
// 008579ea  53                   push ebx
// 008579eb  55                   push ebp
// 008579ec  56                   push esi
// 008579ed  83e801               sub eax, 1
// 008579f0  57                   push edi
// 008579f1  8944241c             mov dword ptr [esp + 0x1c], eax
// 008579f5  0f888c000000         js 0x857a87
// 008579fb  8bf0                 mov esi, eax
// 008579fd  c1e606               shl esi, 6
// 00857a00  03742430             add esi, dword ptr [esp + 0x30]
// 00857a04  837e2800             cmp dword ptr [esi + 0x28], 0
// 00857a08  746b                 je 0x857a75
// 00857a0a  837e3000             cmp dword ptr [esi + 0x30], 0
// 00857a0e  7565                 jne 0x857a75
// 00857a10  85c0                 test eax, eax
// 00857a12  7c0d                 jl 0x857a21
// 00857a14  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 00857a17  7d08                 jge 0x857a21
// 00857a19  8b7a28               mov edi, dword ptr [edx + 0x28]
// 00857a1c  8b0487               mov eax, dword ptr [edi + eax*4]
// 00857a1f  eb02                 jmp 0x857a23
// 00857a21  33c0                 xor eax, eax
// 00857a23  f680d400000001       test byte ptr [eax + 0xd4], 1
// 00857a2a  745b                 je 0x857a87
// 00857a2c  837c241400           cmp dword ptr [esp + 0x14], 0
// 00857a31  8b06                 mov eax, dword ptr [esi]
// 00857a33  8b5604               mov edx, dword ptr [esi + 4]
// 00857a36  8b6e08               mov ebp, dword ptr [esi + 8]
// 00857a39  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 00857a3c  7511                 jne 0x857a4f
// 00857a3e  2bc5                 sub eax, ebp
// 00857a40  8d3c08               lea edi, [eax + ecx]
// 00857a43  3b7c2444             cmp edi, dword ptr [esp + 0x44]
// 00857a47  7c3a                 jl 0x857a83
// 00857a49  53                   push ebx
// 00857a4a  51                   push ecx
// 00857a4b  52                   push edx
// 00857a4c  57                   push edi
// 00857a4d  eb0f                 jmp 0x857a5e
// 00857a4f  2bd3                 sub edx, ebx
// 00857a51  8d3c0a               lea edi, [edx + ecx]
// 00857a54  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 00857a58  7c29                 jl 0x857a83
// 00857a5a  51                   push ecx
// 00857a5b  55                   push ebp
// 00857a5c  57                   push edi
// 00857a5d  50                   push eax
// 00857a5e  56                   push esi
// 00857a5f  ff15c81ba400         call dword ptr [0xa41bc8]
// 00857a65  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 00857a69  8b542410             mov edx, dword ptr [esp + 0x10]
// 00857a6d  8bcf                 mov ecx, edi
// 00857a6f  7516                 jne 0x857a87
// 00857a71  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00857a75  48                   dec eax
// 00857a76  83ee40               sub esi, 0x40
// 00857a79  8944241c             mov dword ptr [esp + 0x1c], eax
// 00857a7d  85c0                 test eax, eax
// 00857a7f  7d83                 jge 0x857a04
// 00857a81  eb04                 jmp 0x857a87
// 00857a83  8b542410             mov edx, dword ptr [esp + 0x10]
// 00857a87  33c9                 xor ecx, ecx
// 00857a89  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00857a91  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00857a99  394c2414             cmp dword ptr [esp + 0x14], ecx
// 00857a9d  740a                 je 0x857aa9
// 00857a9f  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00857aa3  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 00857aa7  eb08                 jmp 0x857ab1
// 00857aa9  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00857aad  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 00857ab1  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00857ab4  48                   dec eax
// 00857ab5  8bd0                 mov edx, eax
// 00857ab7  89442420             mov dword ptr [esp + 0x20], eax
// 00857abb  8954241c             mov dword ptr [esp + 0x1c], edx
// 00857abf  85d2                 test edx, edx
// 00857ac1  0f8cdb010000         jl 0x857ca2
// 00857ac7  8b742430             mov esi, dword ptr [esp + 0x30]
// 00857acb  8d42ff               lea eax, [edx - 1]
// 00857ace  89442424             mov dword ptr [esp + 0x24], eax
// 00857ad2  8bc2                 mov eax, edx
// 00857ad4  c1e006               shl eax, 6
// 00857ad7  8d7c3028             lea edi, [eax + esi + 0x28]
// 00857adb  897c2428             mov dword ptr [esp + 0x28], edi
// 00857adf  90                   nop 
// 00857ae0  833f00               cmp dword ptr [edi], 0
// 00857ae3  0f848e000000         je 0x857b77
// 00857ae9  8b6f08               mov ebp, dword ptr [edi + 8]
// 00857aec  85ed                 test ebp, ebp
// 00857aee  0f8583000000         jne 0x857b77
// 00857af4  8b742410             mov esi, dword ptr [esp + 0x10]
// 00857af8  85c9                 test ecx, ecx
// 00857afa  7529                 jne 0x857b25
// 00857afc  85d2                 test edx, edx
// 00857afe  7c0d                 jl 0x857b0d
// 00857b00  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 00857b03  7d08                 jge 0x857b0d
// 00857b05  8b4628               mov eax, dword ptr [esi + 0x28]
// 00857b08  8b0490               mov eax, dword ptr [eax + edx*4]
// 00857b0b  eb02                 jmp 0x857b0f
// 00857b0d  33c0                 xor eax, eax
// 00857b0f  f680d400000001       test byte ptr [eax + 0xd4], 1
// 00857b16  740d                 je 0x857b25
// 00857b18  8b442424             mov eax, dword ptr [esp + 0x24]
// 00857b1c  8b5fd8               mov ebx, dword ptr [edi - 0x28]
// 00857b1f  89442420             mov dword ptr [esp + 0x20], eax
// 00857b23  eb25                 jmp 0x857b4a
// 00857b25  85d2                 test edx, edx
// 00857b27  7c0d                 jl 0x857b36
// 00857b29  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 00857b2c  7d08                 jge 0x857b36
// 00857b2e  8b4628               mov eax, dword ptr [esi + 0x28]
// 00857b31  8b0490               mov eax, dword ptr [eax + edx*4]
// 00857b34  eb02                 jmp 0x857b38
// 00857b36  33c0                 xor eax, eax
// 00857b38  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 00857b3f  7409                 je 0x857b4a
// 00857b41  b901000000           mov ecx, 1
// 00857b46  014c2418             add dword ptr [esp + 0x18], ecx
// 00857b4a  837c244cff           cmp dword ptr [esp + 0x4c], -1
// 00857b4f  751d                 jne 0x857b6e
// 00857b51  39542420             cmp dword ptr [esp + 0x20], edx
// 00857b55  7c17                 jl 0x857b6e
// 00857b57  837c241400           cmp dword ptr [esp + 0x14], 0
// 00857b5c  7505                 jne 0x857b63
// 00857b5e  8b77e0               mov esi, dword ptr [edi - 0x20]
// 00857b61  eb03                 jmp 0x857b66
// 00857b63  8b77e4               mov esi, dword ptr [edi - 0x1c]
// 00857b66  8bc3                 mov eax, ebx
// 00857b68  2bc6                 sub eax, esi
// 00857b6a  8944244c             mov dword ptr [esp + 0x4c], eax
// 00857b6e  85ed                 test ebp, ebp
// 00857b70  7505                 jne 0x857b77
// 00857b72  396f04               cmp dword ptr [edi + 4], ebp
// 00857b75  7508                 jne 0x857b7f
// 00857b77  85d2                 test edx, edx
// 00857b79  0f850b010000         jne 0x857c8a
// 00857b7f  837c241800           cmp dword ptr [esp + 0x18], 0
// 00857b84  0f8eca000000         jle 0x857c54
// 00857b8a  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 00857b8f  0f8ebf000000         jle 0x857c54
// 00857b95  33ed                 xor ebp, ebp
// 00857b97  3b542420             cmp edx, dword ptr [esp + 0x20]
// 00857b9b  89542430             mov dword ptr [esp + 0x30], edx
// 00857b9f  0f8faf000000         jg 0x857c54
// 00857ba5  8d5fe0               lea ebx, [edi - 0x20]
// 00857ba8  eb06                 jmp 0x857bb0
// 00857baa  8d9b00000000         lea ebx, [ebx]
// 00857bb0  837b2000             cmp dword ptr [ebx + 0x20], 0
// 00857bb4  0f8484000000         je 0x857c3e
// 00857bba  837b2800             cmp dword ptr [ebx + 0x28], 0
// 00857bbe  757e                 jne 0x857c3e
// 00857bc0  837c241400           cmp dword ptr [esp + 0x14], 0
// 00857bc5  8b4bf8               mov ecx, dword ptr [ebx - 8]
// 00857bc8  8b53fc               mov edx, dword ptr [ebx - 4]
// 00857bcb  8b33                 mov esi, dword ptr [ebx]
// 00857bcd  8b7b04               mov edi, dword ptr [ebx + 4]
// 00857bd0  8d43f8               lea eax, [ebx - 8]
// 00857bd3  7506                 jne 0x857bdb
// 00857bd5  03f5                 add esi, ebp
// 00857bd7  03cd                 add ecx, ebp
// 00857bd9  eb04                 jmp 0x857bdf
// 00857bdb  03fd                 add edi, ebp
// 00857bdd  03d5                 add edx, ebp
// 00857bdf  57                   push edi
// 00857be0  56                   push esi
// 00857be1  52                   push edx
// 00857be2  51                   push ecx
// 00857be3  50                   push eax
// 00857be4  ff15c81ba400         call dword ptr [0xa41bc8]
// 00857bea  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00857bee  85c9                 test ecx, ecx
// 00857bf0  7c11                 jl 0x857c03
// 00857bf2  8b442410             mov eax, dword ptr [esp + 0x10]
// 00857bf6  3b482c               cmp ecx, dword ptr [eax + 0x2c]
// 00857bf9  7d08                 jge 0x857c03
// 00857bfb  8b5028               mov edx, dword ptr [eax + 0x28]
// 00857bfe  8b048a               mov eax, dword ptr [edx + ecx*4]
// 00857c01  eb02                 jmp 0x857c05
// 00857c03  33c0                 xor eax, eax
// 00857c05  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 00857c0c  7428                 je 0x857c36
// 00857c0e  8b742418             mov esi, dword ptr [esp + 0x18]
// 00857c12  85f6                 test esi, esi
// 00857c14  7e20                 jle 0x857c36
// 00857c16  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00857c1a  99                   cdq 
// 00857c1b  f7fe                 idiv esi
// 00857c1d  837c241400           cmp dword ptr [esp + 0x14], 0
// 00857c22  7504                 jne 0x857c28
// 00857c24  0103                 add dword ptr [ebx], eax
// 00857c26  eb03                 jmp 0x857c2b
// 00857c28  014304               add dword ptr [ebx + 4], eax
// 00857c2b  2944244c             sub dword ptr [esp + 0x4c], eax
// 00857c2f  4e                   dec esi
// 00857c30  89742418             mov dword ptr [esp + 0x18], esi
// 00857c34  03e8                 add ebp, eax
// 00857c36  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00857c3a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00857c3e  8b442430             mov eax, dword ptr [esp + 0x30]
// 00857c42  40                   inc eax
// 00857c43  83c340               add ebx, 0x40
// 00857c46  3b442420             cmp eax, dword ptr [esp + 0x20]
// 00857c4a  89442430             mov dword ptr [esp + 0x30], eax
// 00857c4e  0f8e5cffffff         jle 0x857bb0
// 00857c54  837c241400           cmp dword ptr [esp + 0x14], 0
// 00857c59  740a                 je 0x857c65
// 00857c5b  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 00857c5f  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 00857c63  eb08                 jmp 0x857c6d
// 00857c65  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00857c69  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 00857c6d  8b442424             mov eax, dword ptr [esp + 0x24]
// 00857c71  b901000000           mov ecx, 1
// 00857c76  89442420             mov dword ptr [esp + 0x20], eax
// 00857c7a  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00857c82  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00857c8a  ff4c2424             dec dword ptr [esp + 0x24]
// 00857c8e  4a                   dec edx
// 00857c8f  83ef40               sub edi, 0x40
// 00857c92  8954241c             mov dword ptr [esp + 0x1c], edx
// 00857c96  897c2428             mov dword ptr [esp + 0x28], edi
// 00857c9a  85d2                 test edx, edx
// 00857c9c  0f8d3efeffff         jge 0x857ae0
// 00857ca2  5f                   pop edi
// 00857ca3  5e                   pop esi
// 00857ca4  5d                   pop ebp
// 00857ca5  5b                   pop ebx
// 00857ca6  83c41c               add esp, 0x1c
// 00857ca9  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_MoveRightAlligned@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@VCSize@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
