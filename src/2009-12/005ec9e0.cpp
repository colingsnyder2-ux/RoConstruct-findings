// roc 2009-12 005ec9e0  unit: G3D::Log  size: 905 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005ec9e0
//
// 005ec9e0  83ec08               sub esp, 8
// 005ec9e3  53                   push ebx
// 005ec9e4  55                   push ebp
// 005ec9e5  56                   push esi
// 005ec9e6  8b742418             mov esi, dword ptr [esp + 0x18]
// 005ec9ea  57                   push edi
// 005ec9eb  8bf9                 mov edi, ecx
// 005ec9ed  bd01000000           mov ebp, 1
// 005ec9f2  55                   push ebp
// 005ec9f3  8bce                 mov ecx, esi
// 005ec9f5  897c2414             mov dword ptr [esp + 0x14], edi
// 005ec9f9  e892250100           call 0x5fef90
// 005ec9fe  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005eca01  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005eca04  03c5                 add eax, ebp
// 005eca06  3bc8                 cmp ecx, eax
// 005eca08  7c02                 jl 0x5eca0c
// 005eca0a  8bc1                 mov eax, ecx
// 005eca0c  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005eca0f  894634               mov dword ptr [esi + 0x34], eax
// 005eca12  7e09                 jle 0x5eca1d
// 005eca14  51                   push ecx
// 005eca15  55                   push ebp
// 005eca16  8bce                 mov ecx, esi
// 005eca18  e893250100           call 0x5fefb0
// 005eca1d  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005eca20  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005eca23  c6040800             mov byte ptr [eax + ecx], 0
// 005eca27  016e3c               add dword ptr [esi + 0x3c], ebp
// 005eca2a  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005eca2d  8b4634               mov eax, dword ptr [esi + 0x34]
// 005eca30  41                   inc ecx
// 005eca31  3bc1                 cmp eax, ecx
// 005eca33  7c02                 jl 0x5eca37
// 005eca35  8bc8                 mov ecx, eax
// 005eca37  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005eca3a  894e34               mov dword ptr [esi + 0x34], ecx
// 005eca3d  7e09                 jle 0x5eca48
// 005eca3f  50                   push eax
// 005eca40  55                   push ebp
// 005eca41  8bce                 mov ecx, esi
// 005eca43  e868250100           call 0x5fefb0
// 005eca48  8b563c               mov edx, dword ptr [esi + 0x3c]
// 005eca4b  8b4630               mov eax, dword ptr [esi + 0x30]
// 005eca4e  c6040200             mov byte ptr [edx + eax], 0
// 005eca52  016e3c               add dword ptr [esi + 0x3c], ebp
// 005eca55  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005eca58  8b4634               mov eax, dword ptr [esi + 0x34]
// 005eca5b  41                   inc ecx
// 005eca5c  3bc1                 cmp eax, ecx
// 005eca5e  7c02                 jl 0x5eca62
// 005eca60  8bc8                 mov ecx, eax
// 005eca62  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005eca65  894e34               mov dword ptr [esi + 0x34], ecx
// 005eca68  7e09                 jle 0x5eca73
// 005eca6a  50                   push eax
// 005eca6b  55                   push ebp
// 005eca6c  8bce                 mov ecx, esi
// 005eca6e  e83d250100           call 0x5fefb0
// 005eca73  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005eca76  8b5630               mov edx, dword ptr [esi + 0x30]
// 005eca79  c6041102             mov byte ptr [ecx + edx], 2
// 005eca7d  016e3c               add dword ptr [esi + 0x3c], ebp
// 005eca80  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005eca83  8d4805               lea ecx, [eax + 5]
// 005eca86  3b4e34               cmp ecx, dword ptr [esi + 0x34]
// 005eca89  7e0f                 jle 0x5eca9a
// 005eca8b  8b5644               mov edx, dword ptr [esi + 0x44]
// 005eca8e  8d440205             lea eax, [edx + eax + 5]
// 005eca92  50                   push eax
// 005eca93  8bce                 mov ecx, esi
// 005eca95  e826f9ffff           call 0x5ec3c0
// 005eca9a  83463c05             add dword ptr [esi + 0x3c], 5
// 005eca9e  6a00                 push 0
// 005ecaa0  8bce                 mov ecx, esi
// 005ecaa2  e829260100           call 0x5ff0d0
// 005ecaa7  6a00                 push 0
// 005ecaa9  8bce                 mov ecx, esi
// 005ecaab  e820260100           call 0x5ff0d0
// 005ecab0  0fb74f08             movzx ecx, word ptr [edi + 8]
// 005ecab4  51                   push ecx
// 005ecab5  8bce                 mov ecx, esi
// 005ecab7  e814260100           call 0x5ff0d0
// 005ecabc  0fb7570c             movzx edx, word ptr [edi + 0xc]
// 005ecac0  52                   push edx
// 005ecac1  8bce                 mov ecx, esi
// 005ecac3  e808260100           call 0x5ff0d0
// 005ecac8  8a5f10               mov bl, byte ptr [edi + 0x10]
// 005ecacb  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ecace  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ecad1  02db                 add bl, bl
// 005ecad3  02db                 add bl, bl
// 005ecad5  03c5                 add eax, ebp
// 005ecad7  02db                 add bl, bl
// 005ecad9  3bc8                 cmp ecx, eax
// 005ecadb  7c02                 jl 0x5ecadf
// 005ecadd  8bc1                 mov eax, ecx
// 005ecadf  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005ecae2  894634               mov dword ptr [esi + 0x34], eax
// 005ecae5  7e09                 jle 0x5ecaf0
// 005ecae7  51                   push ecx
// 005ecae8  55                   push ebp
// 005ecae9  8bce                 mov ecx, esi
// 005ecaeb  e8c0240100           call 0x5fefb0
// 005ecaf0  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ecaf3  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005ecaf6  881c08               mov byte ptr [eax + ecx], bl
// 005ecaf9  016e3c               add dword ptr [esi + 0x3c], ebp
// 005ecafc  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ecaff  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 005ecb02  bb03000000           mov ebx, 3
// 005ecb07  40                   inc eax
// 005ecb08  395f10               cmp dword ptr [edi + 0x10], ebx
// 005ecb0b  7523                 jne 0x5ecb30
// 005ecb0d  3bc8                 cmp ecx, eax
// 005ecb0f  7c02                 jl 0x5ecb13
// 005ecb11  8bc1                 mov eax, ecx
// 005ecb13  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005ecb16  894634               mov dword ptr [esi + 0x34], eax
// 005ecb19  7e09                 jle 0x5ecb24
// 005ecb1b  51                   push ecx
// 005ecb1c  55                   push ebp
// 005ecb1d  8bce                 mov ecx, esi
// 005ecb1f  e88c240100           call 0x5fefb0
// 005ecb24  8b563c               mov edx, dword ptr [esi + 0x3c]
// 005ecb27  8b4630               mov eax, dword ptr [esi + 0x30]
// 005ecb2a  c6040200             mov byte ptr [edx + eax], 0
// 005ecb2e  eb21                 jmp 0x5ecb51
// 005ecb30  3bc8                 cmp ecx, eax
// 005ecb32  7c02                 jl 0x5ecb36
// 005ecb34  8bc1                 mov eax, ecx
// 005ecb36  3b4638               cmp eax, dword ptr [esi + 0x38]
// 005ecb39  894634               mov dword ptr [esi + 0x34], eax
// 005ecb3c  7e09                 jle 0x5ecb47
// 005ecb3e  51                   push ecx
// 005ecb3f  55                   push ebp
// 005ecb40  8bce                 mov ecx, esi
// 005ecb42  e869240100           call 0x5fefb0
// 005ecb47  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ecb4a  8b5630               mov edx, dword ptr [esi + 0x30]
// 005ecb4d  c6041108             mov byte ptr [ecx + edx], 8
// 005ecb51  016e3c               add dword ptr [esi + 0x3c], ebp
// 005ecb54  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ecb57  8b470c               mov eax, dword ptr [edi + 0xc]
// 005ecb5a  395f10               cmp dword ptr [edi + 0x10], ebx
// 005ecb5d  0f85d9000000         jne 0x5ecc3c
// 005ecb63  2bc5                 sub eax, ebp
// 005ecb65  8944241c             mov dword ptr [esp + 0x1c], eax
// 005ecb69  0f88e4010000         js 0x5ecd53
// 005ecb6f  90                   nop 
// 005ecb70  8b4708               mov eax, dword ptr [edi + 8]
// 005ecb73  33ed                 xor ebp, ebp
// 005ecb75  85c0                 test eax, eax
// 005ecb77  0f8eaf000000         jle 0x5ecc2c
// 005ecb7d  8d4900               lea ecx, [ecx]
// 005ecb80  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 005ecb85  03c5                 add eax, ebp
// 005ecb87  8d3c40               lea edi, [eax + eax*2]
// 005ecb8a  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ecb8e  037804               add edi, dword ptr [eax + 4]
// 005ecb91  8b4634               mov eax, dword ptr [esi + 0x34]
// 005ecb94  8a5f02               mov bl, byte ptr [edi + 2]
// 005ecb97  41                   inc ecx
// 005ecb98  3bc1                 cmp eax, ecx
// 005ecb9a  7c02                 jl 0x5ecb9e
// 005ecb9c  8bc8                 mov ecx, eax
// 005ecb9e  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005ecba1  894e34               mov dword ptr [esi + 0x34], ecx
// 005ecba4  7e0a                 jle 0x5ecbb0
// 005ecba6  50                   push eax
// 005ecba7  6a01                 push 1
// 005ecba9  8bce                 mov ecx, esi
// 005ecbab  e800240100           call 0x5fefb0
// 005ecbb0  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ecbb3  8b5630               mov edx, dword ptr [esi + 0x30]
// 005ecbb6  881c11               mov byte ptr [ecx + edx], bl
// 005ecbb9  ff463c               inc dword ptr [esi + 0x3c]
// 005ecbbc  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ecbbf  8b4634               mov eax, dword ptr [esi + 0x34]
// 005ecbc2  8a5f01               mov bl, byte ptr [edi + 1]
// 005ecbc5  41                   inc ecx
// 005ecbc6  3bc1                 cmp eax, ecx
// 005ecbc8  7c02                 jl 0x5ecbcc
// 005ecbca  8bc8                 mov ecx, eax
// 005ecbcc  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005ecbcf  894e34               mov dword ptr [esi + 0x34], ecx
// 005ecbd2  7e0a                 jle 0x5ecbde
// 005ecbd4  50                   push eax
// 005ecbd5  6a01                 push 1
// 005ecbd7  8bce                 mov ecx, esi
// 005ecbd9  e8d2230100           call 0x5fefb0
// 005ecbde  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ecbe1  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005ecbe4  881c08               mov byte ptr [eax + ecx], bl
// 005ecbe7  ff463c               inc dword ptr [esi + 0x3c]
// 005ecbea  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ecbed  8b4634               mov eax, dword ptr [esi + 0x34]
// 005ecbf0  8a1f                 mov bl, byte ptr [edi]
// 005ecbf2  41                   inc ecx
// 005ecbf3  3bc1                 cmp eax, ecx
// 005ecbf5  7c02                 jl 0x5ecbf9
// 005ecbf7  8bc8                 mov ecx, eax
// 005ecbf9  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005ecbfc  894e34               mov dword ptr [esi + 0x34], ecx
// 005ecbff  7e0a                 jle 0x5ecc0b
// 005ecc01  50                   push eax
// 005ecc02  6a01                 push 1
// 005ecc04  8bce                 mov ecx, esi
// 005ecc06  e8a5230100           call 0x5fefb0
// 005ecc0b  8b563c               mov edx, dword ptr [esi + 0x3c]
// 005ecc0e  8b4630               mov eax, dword ptr [esi + 0x30]
// 005ecc11  881c02               mov byte ptr [edx + eax], bl
// 005ecc14  ff463c               inc dword ptr [esi + 0x3c]
// 005ecc17  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ecc1b  8b4208               mov eax, dword ptr [edx + 8]
// 005ecc1e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ecc21  45                   inc ebp
// 005ecc22  3be8                 cmp ebp, eax
// 005ecc24  0f8c56ffffff         jl 0x5ecb80
// 005ecc2a  8bfa                 mov edi, edx
// 005ecc2c  836c241c01           sub dword ptr [esp + 0x1c], 1
// 005ecc31  0f8939ffffff         jns 0x5ecb70
// 005ecc37  e917010000           jmp 0x5ecd53
// 005ecc3c  2bc5                 sub eax, ebp
// 005ecc3e  8944241c             mov dword ptr [esp + 0x1c], eax
// 005ecc42  0f880b010000         js 0x5ecd53
// 005ecc48  eb06                 jmp 0x5ecc50
// 005ecc4a  8d9b00000000         lea ebx, [ebx]
// 005ecc50  8b4708               mov eax, dword ptr [edi + 8]
// 005ecc53  33d2                 xor edx, edx
// 005ecc55  89542414             mov dword ptr [esp + 0x14], edx
// 005ecc59  85c0                 test eax, eax
// 005ecc5b  0f8ee8000000         jle 0x5ecd49
// 005ecc61  0faf44241c           imul eax, dword ptr [esp + 0x1c]
// 005ecc66  03c2                 add eax, edx
// 005ecc68  8b5704               mov edx, dword ptr [edi + 4]
// 005ecc6b  8a5c8202             mov bl, byte ptr [edx + eax*4 + 2]
// 005ecc6f  8d3c82               lea edi, [edx + eax*4]
// 005ecc72  8b4634               mov eax, dword ptr [esi + 0x34]
// 005ecc75  41                   inc ecx
// 005ecc76  3bc1                 cmp eax, ecx
// 005ecc78  7c02                 jl 0x5ecc7c
// 005ecc7a  8bc8                 mov ecx, eax
// 005ecc7c  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005ecc7f  894e34               mov dword ptr [esi + 0x34], ecx
// 005ecc82  bd01000000           mov ebp, 1
// 005ecc87  7e09                 jle 0x5ecc92
// 005ecc89  50                   push eax
// 005ecc8a  55                   push ebp
// 005ecc8b  8bce                 mov ecx, esi
// 005ecc8d  e81e230100           call 0x5fefb0
// 005ecc92  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ecc95  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005ecc98  881c08               mov byte ptr [eax + ecx], bl
// 005ecc9b  016e3c               add dword ptr [esi + 0x3c], ebp
// 005ecc9e  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ecca1  8b4634               mov eax, dword ptr [esi + 0x34]
// 005ecca4  8a5f01               mov bl, byte ptr [edi + 1]
// 005ecca7  41                   inc ecx
// 005ecca8  3bc1                 cmp eax, ecx
// 005eccaa  7c02                 jl 0x5eccae
// 005eccac  8bc8                 mov ecx, eax
// 005eccae  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005eccb1  894e34               mov dword ptr [esi + 0x34], ecx
// 005eccb4  7e09                 jle 0x5eccbf
// 005eccb6  50                   push eax
// 005eccb7  55                   push ebp
// 005eccb8  8bce                 mov ecx, esi
// 005eccba  e8f1220100           call 0x5fefb0
// 005eccbf  8b563c               mov edx, dword ptr [esi + 0x3c]
// 005eccc2  8b4630               mov eax, dword ptr [esi + 0x30]
// 005eccc5  881c02               mov byte ptr [edx + eax], bl
// 005eccc8  016e3c               add dword ptr [esi + 0x3c], ebp
// 005ecccb  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005eccce  8b4634               mov eax, dword ptr [esi + 0x34]
// 005eccd1  8a1f                 mov bl, byte ptr [edi]
// 005eccd3  41                   inc ecx
// 005eccd4  3bc1                 cmp eax, ecx
// 005eccd6  7c02                 jl 0x5eccda
// 005eccd8  8bc8                 mov ecx, eax
// 005eccda  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005eccdd  894e34               mov dword ptr [esi + 0x34], ecx
// 005ecce0  7e09                 jle 0x5ecceb
// 005ecce2  50                   push eax
// 005ecce3  55                   push ebp
// 005ecce4  8bce                 mov ecx, esi
// 005ecce6  e8c5220100           call 0x5fefb0
// 005ecceb  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005eccee  8b5630               mov edx, dword ptr [esi + 0x30]
// 005eccf1  881c11               mov byte ptr [ecx + edx], bl
// 005eccf4  016e3c               add dword ptr [esi + 0x3c], ebp
// 005eccf7  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005eccfa  8b4634               mov eax, dword ptr [esi + 0x34]
// 005eccfd  8a5f03               mov bl, byte ptr [edi + 3]
// 005ecd00  41                   inc ecx
// 005ecd01  3bc1                 cmp eax, ecx
// 005ecd03  7c02                 jl 0x5ecd07
// 005ecd05  8bc8                 mov ecx, eax
// 005ecd07  3b4e38               cmp ecx, dword ptr [esi + 0x38]
// 005ecd0a  894e34               mov dword ptr [esi + 0x34], ecx
// 005ecd0d  7e09                 jle 0x5ecd18
// 005ecd0f  50                   push eax
// 005ecd10  55                   push ebp
// 005ecd11  8bce                 mov ecx, esi
// 005ecd13  e898220100           call 0x5fefb0
// 005ecd18  8b463c               mov eax, dword ptr [esi + 0x3c]
// 005ecd1b  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 005ecd1e  8b542414             mov edx, dword ptr [esp + 0x14]
// 005ecd22  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005ecd26  881c08               mov byte ptr [eax + ecx], bl
// 005ecd29  016e3c               add dword ptr [esi + 0x3c], ebp
// 005ecd2c  8b442410             mov eax, dword ptr [esp + 0x10]
// 005ecd30  8b4008               mov eax, dword ptr [eax + 8]
// 005ecd33  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005ecd36  03d5                 add edx, ebp
// 005ecd38  3bd0                 cmp edx, eax
// 005ecd3a  89542414             mov dword ptr [esp + 0x14], edx
// 005ecd3e  0f8c1dffffff         jl 0x5ecc61
// 005ecd44  bd01000000           mov ebp, 1
// 005ecd49  296c241c             sub dword ptr [esp + 0x1c], ebp
// 005ecd4d  0f89fdfeffff         jns 0x5ecc50
// 005ecd53  6878219c00           push 0x9c2178
// 005ecd58  8bce                 mov ecx, esi
// 005ecd5a  e851240100           call 0x5ff1b0
// 005ecd5f  5f                   pop edi
// 005ecd60  5e                   pop esi
// 005ecd61  5d                   pop ebp
// 005ecd62  5b                   pop ebx
// 005ecd63  83c408               add esp, 8
// 005ecd66  c20400               ret 4
// library g3d-6.09/G3Dcpp\GImage_tga.cpp (function ?encodeTGA@GImage@G3D@@ABEXAAVBinaryOutput@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage_tga.cpp
