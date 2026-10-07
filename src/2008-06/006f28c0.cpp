// roc 2008-06 006f28c0  unit: CXTPControls  size: 748 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006f28c0
//
// 006f28c0  83ec1c               sub esp, 0x1c
// 006f28c3  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 006f28c7  8bd1                 mov edx, ecx
// 006f28c9  83e010               and eax, 0x10
// 006f28cc  891424               mov dword ptr [esp], edx
// 006f28cf  89442404             mov dword ptr [esp + 4], eax
// 006f28d3  740a                 je 0x6f28df
// 006f28d5  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 006f28d9  2b4c2438             sub ecx, dword ptr [esp + 0x38]
// 006f28dd  eb08                 jmp 0x6f28e7
// 006f28df  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006f28e3  2b4c2434             sub ecx, dword ptr [esp + 0x34]
// 006f28e7  8b422c               mov eax, dword ptr [edx + 0x2c]
// 006f28ea  53                   push ebx
// 006f28eb  55                   push ebp
// 006f28ec  56                   push esi
// 006f28ed  83e801               sub eax, 1
// 006f28f0  57                   push edi
// 006f28f1  8944241c             mov dword ptr [esp + 0x1c], eax
// 006f28f5  0f888c000000         js 0x6f2987
// 006f28fb  8bf0                 mov esi, eax
// 006f28fd  c1e606               shl esi, 6
// 006f2900  03742430             add esi, dword ptr [esp + 0x30]
// 006f2904  837e2800             cmp dword ptr [esi + 0x28], 0
// 006f2908  746b                 je 0x6f2975
// 006f290a  837e3000             cmp dword ptr [esi + 0x30], 0
// 006f290e  7565                 jne 0x6f2975
// 006f2910  85c0                 test eax, eax
// 006f2912  7c0d                 jl 0x6f2921
// 006f2914  3b422c               cmp eax, dword ptr [edx + 0x2c]
// 006f2917  7d08                 jge 0x6f2921
// 006f2919  8b7a28               mov edi, dword ptr [edx + 0x28]
// 006f291c  8b0487               mov eax, dword ptr [edi + eax*4]
// 006f291f  eb02                 jmp 0x6f2923
// 006f2921  33c0                 xor eax, eax
// 006f2923  f680d400000001       test byte ptr [eax + 0xd4], 1
// 006f292a  745b                 je 0x6f2987
// 006f292c  837c241400           cmp dword ptr [esp + 0x14], 0
// 006f2931  8b06                 mov eax, dword ptr [esi]
// 006f2933  8b5604               mov edx, dword ptr [esi + 4]
// 006f2936  8b6e08               mov ebp, dword ptr [esi + 8]
// 006f2939  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 006f293c  7511                 jne 0x6f294f
// 006f293e  2bc5                 sub eax, ebp
// 006f2940  8d3c08               lea edi, [eax + ecx]
// 006f2943  3b7c2444             cmp edi, dword ptr [esp + 0x44]
// 006f2947  7c3a                 jl 0x6f2983
// 006f2949  53                   push ebx
// 006f294a  51                   push ecx
// 006f294b  52                   push edx
// 006f294c  57                   push edi
// 006f294d  eb0f                 jmp 0x6f295e
// 006f294f  2bd3                 sub edx, ebx
// 006f2951  8d3c0a               lea edi, [edx + ecx]
// 006f2954  3b7c2440             cmp edi, dword ptr [esp + 0x40]
// 006f2958  7c29                 jl 0x6f2983
// 006f295a  51                   push ecx
// 006f295b  55                   push ebp
// 006f295c  57                   push edi
// 006f295d  50                   push eax
// 006f295e  56                   push esi
// 006f295f  ff15102d8000         call dword ptr [0x802d10]
// 006f2965  837e2c00             cmp dword ptr [esi + 0x2c], 0
// 006f2969  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f296d  8bcf                 mov ecx, edi
// 006f296f  7516                 jne 0x6f2987
// 006f2971  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006f2975  48                   dec eax
// 006f2976  83ee40               sub esi, 0x40
// 006f2979  8944241c             mov dword ptr [esp + 0x1c], eax
// 006f297d  85c0                 test eax, eax
// 006f297f  7d83                 jge 0x6f2904
// 006f2981  eb04                 jmp 0x6f2987
// 006f2983  8b542410             mov edx, dword ptr [esp + 0x10]
// 006f2987  33c9                 xor ecx, ecx
// 006f2989  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 006f2991  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006f2999  394c2414             cmp dword ptr [esp + 0x14], ecx
// 006f299d  740a                 je 0x6f29a9
// 006f299f  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 006f29a3  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 006f29a7  eb08                 jmp 0x6f29b1
// 006f29a9  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006f29ad  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 006f29b1  8b422c               mov eax, dword ptr [edx + 0x2c]
// 006f29b4  48                   dec eax
// 006f29b5  8bd0                 mov edx, eax
// 006f29b7  89442420             mov dword ptr [esp + 0x20], eax
// 006f29bb  8954241c             mov dword ptr [esp + 0x1c], edx
// 006f29bf  85d2                 test edx, edx
// 006f29c1  0f8cdb010000         jl 0x6f2ba2
// 006f29c7  8b742430             mov esi, dword ptr [esp + 0x30]
// 006f29cb  8d42ff               lea eax, [edx - 1]
// 006f29ce  89442424             mov dword ptr [esp + 0x24], eax
// 006f29d2  8bc2                 mov eax, edx
// 006f29d4  c1e006               shl eax, 6
// 006f29d7  8d7c3028             lea edi, [eax + esi + 0x28]
// 006f29db  897c2428             mov dword ptr [esp + 0x28], edi
// 006f29df  90                   nop 
// 006f29e0  833f00               cmp dword ptr [edi], 0
// 006f29e3  0f848e000000         je 0x6f2a77
// 006f29e9  8b6f08               mov ebp, dword ptr [edi + 8]
// 006f29ec  85ed                 test ebp, ebp
// 006f29ee  0f8583000000         jne 0x6f2a77
// 006f29f4  8b742410             mov esi, dword ptr [esp + 0x10]
// 006f29f8  85c9                 test ecx, ecx
// 006f29fa  7529                 jne 0x6f2a25
// 006f29fc  85d2                 test edx, edx
// 006f29fe  7c0d                 jl 0x6f2a0d
// 006f2a00  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 006f2a03  7d08                 jge 0x6f2a0d
// 006f2a05  8b4628               mov eax, dword ptr [esi + 0x28]
// 006f2a08  8b0490               mov eax, dword ptr [eax + edx*4]
// 006f2a0b  eb02                 jmp 0x6f2a0f
// 006f2a0d  33c0                 xor eax, eax
// 006f2a0f  f680d400000001       test byte ptr [eax + 0xd4], 1
// 006f2a16  740d                 je 0x6f2a25
// 006f2a18  8b442424             mov eax, dword ptr [esp + 0x24]
// 006f2a1c  8b5fd8               mov ebx, dword ptr [edi - 0x28]
// 006f2a1f  89442420             mov dword ptr [esp + 0x20], eax
// 006f2a23  eb25                 jmp 0x6f2a4a
// 006f2a25  85d2                 test edx, edx
// 006f2a27  7c0d                 jl 0x6f2a36
// 006f2a29  3b562c               cmp edx, dword ptr [esi + 0x2c]
// 006f2a2c  7d08                 jge 0x6f2a36
// 006f2a2e  8b4628               mov eax, dword ptr [esi + 0x28]
// 006f2a31  8b0490               mov eax, dword ptr [eax + edx*4]
// 006f2a34  eb02                 jmp 0x6f2a38
// 006f2a36  33c0                 xor eax, eax
// 006f2a38  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 006f2a3f  7409                 je 0x6f2a4a
// 006f2a41  b901000000           mov ecx, 1
// 006f2a46  014c2418             add dword ptr [esp + 0x18], ecx
// 006f2a4a  837c244cff           cmp dword ptr [esp + 0x4c], -1
// 006f2a4f  751d                 jne 0x6f2a6e
// 006f2a51  39542420             cmp dword ptr [esp + 0x20], edx
// 006f2a55  7c17                 jl 0x6f2a6e
// 006f2a57  837c241400           cmp dword ptr [esp + 0x14], 0
// 006f2a5c  7505                 jne 0x6f2a63
// 006f2a5e  8b77e0               mov esi, dword ptr [edi - 0x20]
// 006f2a61  eb03                 jmp 0x6f2a66
// 006f2a63  8b77e4               mov esi, dword ptr [edi - 0x1c]
// 006f2a66  8bc3                 mov eax, ebx
// 006f2a68  2bc6                 sub eax, esi
// 006f2a6a  8944244c             mov dword ptr [esp + 0x4c], eax
// 006f2a6e  85ed                 test ebp, ebp
// 006f2a70  7505                 jne 0x6f2a77
// 006f2a72  396f04               cmp dword ptr [edi + 4], ebp
// 006f2a75  7508                 jne 0x6f2a7f
// 006f2a77  85d2                 test edx, edx
// 006f2a79  0f850b010000         jne 0x6f2b8a
// 006f2a7f  837c241800           cmp dword ptr [esp + 0x18], 0
// 006f2a84  0f8eca000000         jle 0x6f2b54
// 006f2a8a  837c244c00           cmp dword ptr [esp + 0x4c], 0
// 006f2a8f  0f8ebf000000         jle 0x6f2b54
// 006f2a95  33ed                 xor ebp, ebp
// 006f2a97  3b542420             cmp edx, dword ptr [esp + 0x20]
// 006f2a9b  89542430             mov dword ptr [esp + 0x30], edx
// 006f2a9f  0f8faf000000         jg 0x6f2b54
// 006f2aa5  8d5fe0               lea ebx, [edi - 0x20]
// 006f2aa8  eb06                 jmp 0x6f2ab0
// 006f2aaa  8d9b00000000         lea ebx, [ebx]
// 006f2ab0  837b2000             cmp dword ptr [ebx + 0x20], 0
// 006f2ab4  0f8484000000         je 0x6f2b3e
// 006f2aba  837b2800             cmp dword ptr [ebx + 0x28], 0
// 006f2abe  757e                 jne 0x6f2b3e
// 006f2ac0  837c241400           cmp dword ptr [esp + 0x14], 0
// 006f2ac5  8b4bf8               mov ecx, dword ptr [ebx - 8]
// 006f2ac8  8b53fc               mov edx, dword ptr [ebx - 4]
// 006f2acb  8b33                 mov esi, dword ptr [ebx]
// 006f2acd  8b7b04               mov edi, dword ptr [ebx + 4]
// 006f2ad0  8d43f8               lea eax, [ebx - 8]
// 006f2ad3  7506                 jne 0x6f2adb
// 006f2ad5  03f5                 add esi, ebp
// 006f2ad7  03cd                 add ecx, ebp
// 006f2ad9  eb04                 jmp 0x6f2adf
// 006f2adb  03fd                 add edi, ebp
// 006f2add  03d5                 add edx, ebp
// 006f2adf  57                   push edi
// 006f2ae0  56                   push esi
// 006f2ae1  52                   push edx
// 006f2ae2  51                   push ecx
// 006f2ae3  50                   push eax
// 006f2ae4  ff15102d8000         call dword ptr [0x802d10]
// 006f2aea  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 006f2aee  85c9                 test ecx, ecx
// 006f2af0  7c11                 jl 0x6f2b03
// 006f2af2  8b442410             mov eax, dword ptr [esp + 0x10]
// 006f2af6  3b482c               cmp ecx, dword ptr [eax + 0x2c]
// 006f2af9  7d08                 jge 0x6f2b03
// 006f2afb  8b5028               mov edx, dword ptr [eax + 0x28]
// 006f2afe  8b048a               mov eax, dword ptr [edx + ecx*4]
// 006f2b01  eb02                 jmp 0x6f2b05
// 006f2b03  33c0                 xor eax, eax
// 006f2b05  f680d400000020       test byte ptr [eax + 0xd4], 0x20
// 006f2b0c  7428                 je 0x6f2b36
// 006f2b0e  8b742418             mov esi, dword ptr [esp + 0x18]
// 006f2b12  85f6                 test esi, esi
// 006f2b14  7e20                 jle 0x6f2b36
// 006f2b16  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 006f2b1a  99                   cdq 
// 006f2b1b  f7fe                 idiv esi
// 006f2b1d  837c241400           cmp dword ptr [esp + 0x14], 0
// 006f2b22  7504                 jne 0x6f2b28
// 006f2b24  0103                 add dword ptr [ebx], eax
// 006f2b26  eb03                 jmp 0x6f2b2b
// 006f2b28  014304               add dword ptr [ebx + 4], eax
// 006f2b2b  2944244c             sub dword ptr [esp + 0x4c], eax
// 006f2b2f  4e                   dec esi
// 006f2b30  89742418             mov dword ptr [esp + 0x18], esi
// 006f2b34  03e8                 add ebp, eax
// 006f2b36  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 006f2b3a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006f2b3e  8b442430             mov eax, dword ptr [esp + 0x30]
// 006f2b42  40                   inc eax
// 006f2b43  83c340               add ebx, 0x40
// 006f2b46  3b442420             cmp eax, dword ptr [esp + 0x20]
// 006f2b4a  89442430             mov dword ptr [esp + 0x30], eax
// 006f2b4e  0f8e5cffffff         jle 0x6f2ab0
// 006f2b54  837c241400           cmp dword ptr [esp + 0x14], 0
// 006f2b59  740a                 je 0x6f2b65
// 006f2b5b  8b5c2438             mov ebx, dword ptr [esp + 0x38]
// 006f2b5f  2b5c2448             sub ebx, dword ptr [esp + 0x48]
// 006f2b63  eb08                 jmp 0x6f2b6d
// 006f2b65  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 006f2b69  2b5c2444             sub ebx, dword ptr [esp + 0x44]
// 006f2b6d  8b442424             mov eax, dword ptr [esp + 0x24]
// 006f2b71  b901000000           mov ecx, 1
// 006f2b76  89442420             mov dword ptr [esp + 0x20], eax
// 006f2b7a  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 006f2b82  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006f2b8a  ff4c2424             dec dword ptr [esp + 0x24]
// 006f2b8e  4a                   dec edx
// 006f2b8f  83ef40               sub edi, 0x40
// 006f2b92  8954241c             mov dword ptr [esp + 0x1c], edx
// 006f2b96  897c2428             mov dword ptr [esp + 0x28], edi
// 006f2b9a  85d2                 test edx, edx
// 006f2b9c  0f8d3efeffff         jge 0x6f29e0
// 006f2ba2  5f                   pop edi
// 006f2ba3  5e                   pop esi
// 006f2ba4  5d                   pop ebp
// 006f2ba5  5b                   pop ebx
// 006f2ba6  83c41c               add esp, 0x1c
// 006f2ba9  c22000               ret 0x20
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_MoveRightAlligned@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@VCSize@@VCRect@@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
