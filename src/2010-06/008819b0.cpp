// roc 2010-06 008819b0  unit: CXTPPropertyGridInplaceList  size: 1202 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008819b0
//
// 008819b0  6aff                 push -1
// 008819b2  68e5ac9b00           push 0x9bace5
// 008819b7  64a100000000         mov eax, dword ptr fs:[0]
// 008819bd  50                   push eax
// 008819be  81ec80000000         sub esp, 0x80
// 008819c4  53                   push ebx
// 008819c5  55                   push ebp
// 008819c6  56                   push esi
// 008819c7  57                   push edi
// 008819c8  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 008819cd  33c4                 xor eax, esp
// 008819cf  50                   push eax
// 008819d0  8d842494000000       lea eax, [esp + 0x94]
// 008819d7  64a300000000         mov dword ptr fs:[0], eax
// 008819dd  8bf1                 mov esi, ecx
// 008819df  8b9c24a4000000       mov ebx, dword ptr [esp + 0xa4]
// 008819e6  33ed                 xor ebp, ebp
// 008819e8  3bdd                 cmp ebx, ebp
// 008819ea  0f8456040000         je 0x881e46
// 008819f0  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 008819f7  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 008819fe  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00881a05  89442440             mov dword ptr [esp + 0x40], eax
// 00881a09  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 00881a10  894c2444             mov dword ptr [esp + 0x44], ecx
// 00881a14  8b8bbc000000         mov ecx, dword ptr [ebx + 0xbc]
// 00881a1a  89542448             mov dword ptr [esp + 0x48], edx
// 00881a1e  8944244c             mov dword ptr [esp + 0x4c], eax
// 00881a22  e849adf9ff           call 0x81c770
// 00881a27  8bbbbc000000         mov edi, dword ptr [ebx + 0xbc]
// 00881a2d  8b16                 mov edx, dword ptr [esi]
// 00881a2f  40                   inc eax
// 00881a30  89442440             mov dword ptr [esp + 0x40], eax
// 00881a34  8b4268               mov eax, dword ptr [edx + 0x68]
// 00881a37  8bce                 mov ecx, esi
// 00881a39  897c2428             mov dword ptr [esp + 0x28], edi
// 00881a3d  895e54               mov dword ptr [esi + 0x54], ebx
// 00881a40  ffd0                 call eax
// 00881a42  396e20               cmp dword ptr [esi + 0x20], ebp
// 00881a45  754e                 jne 0x881a95
// 00881a47  55                   push ebp
// 00881a48  55                   push ebp
// 00881a49  57                   push edi
// 00881a4a  8d4c245c             lea ecx, [esp + 0x5c]
// 00881a4e  51                   push ecx
// 00881a4f  685100a040           push 0x40a00051
// 00881a54  68fe08a000           push 0xa008fe
// 00881a59  68086ba500           push 0xa56b08
// 00881a5e  8bcf                 mov ecx, edi
// 00881a60  896c246c             mov dword ptr [esp + 0x6c], ebp
// 00881a64  896c2470             mov dword ptr [esp + 0x70], ebp
// 00881a68  896c2474             mov dword ptr [esp + 0x74], ebp
// 00881a6c  896c2478             mov dword ptr [esp + 0x78], ebp
// 00881a70  e86fb30f00           call 0x97cde4
// 00881a75  2500004000           and eax, 0x400000
// 00881a7a  0d80000000           or eax, 0x80
// 00881a7f  50                   push eax
// 00881a80  8bce                 mov ecx, esi
// 00881a82  e88b5ff2ff           call 0x7a7a12
// 00881a87  3bfd                 cmp edi, ebp
// 00881a89  7405                 je 0x881a90
// 00881a8b  8b4720               mov eax, dword ptr [edi + 0x20]
// 00881a8e  eb02                 jmp 0x881a92
// 00881a90  33c0                 xor eax, eax
// 00881a92  894638               mov dword ptr [esi + 0x38], eax
// 00881a95  8b5720               mov edx, dword ptr [edi + 0x20]
// 00881a98  8b3d54ba9e00         mov edi, dword ptr [0x9eba54]
// 00881a9e  55                   push ebp
// 00881a9f  55                   push ebp
// 00881aa0  6a31                 push 0x31
// 00881aa2  52                   push edx
// 00881aa3  ffd7                 call edi
// 00881aa5  50                   push eax
// 00881aa6  e8f969f2ff           call 0x7a84a4
// 00881aab  3bc5                 cmp eax, ebp
// 00881aad  7504                 jne 0x881ab3
// 00881aaf  33c0                 xor eax, eax
// 00881ab1  eb03                 jmp 0x881ab6
// 00881ab3  8b4004               mov eax, dword ptr [eax + 4]
// 00881ab6  6a01                 push 1
// 00881ab8  50                   push eax
// 00881ab9  8b4620               mov eax, dword ptr [esi + 0x20]
// 00881abc  6a30                 push 0x30
// 00881abe  50                   push eax
// 00881abf  ffd7                 call edi
// 00881ac1  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00881ac4  55                   push ebp
// 00881ac5  55                   push ebp
// 00881ac6  6884010000           push 0x184
// 00881acb  51                   push ecx
// 00881acc  ffd7                 call edi
// 00881ace  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00881ad5  2b442440             sub eax, dword ptr [esp + 0x40]
// 00881ad9  8b542428             mov edx, dword ptr [esp + 0x28]
// 00881add  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 00881ae3  52                   push edx
// 00881ae4  8d8c2484000000       lea ecx, [esp + 0x84]
// 00881aeb  896c2430             mov dword ptr [esp + 0x30], ebp
// 00881aef  89442428             mov dword ptr [esp + 0x28], eax
// 00881af3  e8a4b20f00           call 0x97cd9c
// 00881af8  8b442428             mov eax, dword ptr [esp + 0x28]
// 00881afc  8b4820               mov ecx, dword ptr [eax + 0x20]
// 00881aff  6a00                 push 0
// 00881b01  6a00                 push 0
// 00881b03  6a31                 push 0x31
// 00881b05  51                   push ecx
// 00881b06  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 00881b11  ffd7                 call edi
// 00881b13  50                   push eax
// 00881b14  e88b69f2ff           call 0x7a84a4
// 00881b19  50                   push eax
// 00881b1a  8d942484000000       lea edx, [esp + 0x84]
// 00881b21  52                   push edx
// 00881b22  8d4c2478             lea ecx, [esp + 0x78]
// 00881b26  e875dbf7ff           call 0x7ff6a0
// 00881b2b  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 00881b32  8d442438             lea eax, [esp + 0x38]
// 00881b36  50                   push eax
// 00881b37  6a01                 push 1
// 00881b39  68e86ea000           push 0xa06ee8
// 00881b3e  51                   push ecx
// 00881b3f  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 00881b47  ff1594a19e00         call dword ptr [0x9ea194]
// 00881b4d  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00881b51  83c203               add edx, 3
// 00881b54  837d2800             cmp dword ptr [ebp + 0x28], 0
// 00881b58  89542418             mov dword ptr [esp + 0x18], edx
// 00881b5c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00881b64  0f8e03010000         jle 0x881c6d
// 00881b6a  eb06                 jmp 0x881b72
// 00881b6c  8d642400             lea esp, [esp]
// 00881b70  8be9                 mov ebp, ecx
// 00881b72  8b442420             mov eax, dword ptr [esp + 0x20]
// 00881b76  50                   push eax
// 00881b77  8bcd                 mov ecx, ebp
// 00881b79  e85201f8ff           call 0x801cd0
// 00881b7e  8be8                 mov ebp, eax
// 00881b80  8d4d20               lea ecx, [ebp + 0x20]
// 00881b83  51                   push ecx
// 00881b84  8d4c2420             lea ecx, [esp + 0x20]
// 00881b88  ff15c4ce9e00         call dword ptr [0x9ecec4]
// 00881b8e  8d4c241c             lea ecx, [esp + 0x1c]
// 00881b92  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 00881b9a  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00881ba0  8b5620               mov edx, dword ptr [esi + 0x20]
// 00881ba3  50                   push eax
// 00881ba4  6a00                 push 0
// 00881ba6  6880010000           push 0x180
// 00881bab  52                   push edx
// 00881bac  ffd7                 call edi
// 00881bae  55                   push ebp
// 00881baf  50                   push eax
// 00881bb0  8944243c             mov dword ptr [esp + 0x3c], eax
// 00881bb4  8b4620               mov eax, dword ptr [esi + 0x20]
// 00881bb7  689a010000           push 0x19a
// 00881bbc  50                   push eax
// 00881bbd  ffd7                 call edi
// 00881bbf  8b13                 mov edx, dword ptr [ebx]
// 00881bc1  8b5270               mov edx, dword ptr [edx + 0x70]
// 00881bc4  55                   push ebp
// 00881bc5  8d842484000000       lea eax, [esp + 0x84]
// 00881bcc  50                   push eax
// 00881bcd  8d4c2440             lea ecx, [esp + 0x40]
// 00881bd1  51                   push ecx
// 00881bd2  8bcb                 mov ecx, ebx
// 00881bd4  ffd2                 call edx
// 00881bd6  8b442438             mov eax, dword ptr [esp + 0x38]
// 00881bda  39442424             cmp dword ptr [esp + 0x24], eax
// 00881bde  7f04                 jg 0x881be4
// 00881be0  89442424             mov dword ptr [esp + 0x24], eax
// 00881be4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00881be8  39442418             cmp dword ptr [esp + 0x18], eax
// 00881bec  7f04                 jg 0x881bf2
// 00881bee  89442418             mov dword ptr [esp + 0x18], eax
// 00881bf2  8d442430             lea eax, [esp + 0x30]
// 00881bf6  50                   push eax
// 00881bf7  8bcb                 mov ecx, ebx
// 00881bf9  e8421ebbff           call 0x433a40
// 00881bfe  8be8                 mov ebp, eax
// 00881c00  8d4c241c             lea ecx, [esp + 0x1c]
// 00881c04  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 00881c0c  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00881c12  50                   push eax
// 00881c13  8bcd                 mov ecx, ebp
// 00881c15  ff15b4ce9e00         call dword ptr [0x9eceb4]
// 00881c1b  85c0                 test eax, eax
// 00881c1d  8d4c2430             lea ecx, [esp + 0x30]
// 00881c21  0f94442417           sete byte ptr [esp + 0x17]
// 00881c26  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00881c2c  807c241700           cmp byte ptr [esp + 0x17], 0
// 00881c31  7412                 je 0x881c45
// 00881c33  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00881c37  8b5620               mov edx, dword ptr [esi + 0x20]
// 00881c3a  6a00                 push 0
// 00881c3c  51                   push ecx
// 00881c3d  6886010000           push 0x186
// 00881c42  52                   push edx
// 00881c43  ffd7                 call edi
// 00881c45  8d4c241c             lea ecx, [esp + 0x1c]
// 00881c49  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 00881c51  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00881c57  8b442420             mov eax, dword ptr [esp + 0x20]
// 00881c5b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00881c5f  40                   inc eax
// 00881c60  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 00881c63  89442420             mov dword ptr [esp + 0x20], eax
// 00881c67  0f8c03ffffff         jl 0x881b70
// 00881c6d  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 00881c72  8b4620               mov eax, dword ptr [esi + 0x20]
// 00881c75  52                   push edx
// 00881c76  6a00                 push 0
// 00881c78  68a0010000           push 0x1a0
// 00881c7d  50                   push eax
// 00881c7e  ffd7                 call edi
// 00881c80  8b5620               mov edx, dword ptr [esi + 0x20]
// 00881c83  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00881c8a  8babdc000000         mov ebp, dword ptr [ebx + 0xdc]
// 00881c90  6a00                 push 0
// 00881c92  6a00                 push 0
// 00881c94  688b010000           push 0x18b
// 00881c99  52                   push edx
// 00881c9a  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 00881ca1  ffd7                 call edi
// 00881ca3  3be8                 cmp ebp, eax
// 00881ca5  7d08                 jge 0x881caf
// 00881ca7  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 00881cad  eb0f                 jmp 0x881cbe
// 00881caf  8b4620               mov eax, dword ptr [esi + 0x20]
// 00881cb2  6a00                 push 0
// 00881cb4  6a00                 push 0
// 00881cb6  688b010000           push 0x18b
// 00881cbb  50                   push eax
// 00881cbc  ffd7                 call edi
// 00881cbe  0faf442418           imul eax, dword ptr [esp + 0x18]
// 00881cc3  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00881cca  8d540102             lea edx, [ecx + eax + 2]
// 00881cce  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 00881cd5  8bc8                 mov ecx, eax
// 00881cd7  2b8c24a8000000       sub ecx, dword ptr [esp + 0xa8]
// 00881cde  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 00881ce5  8b542424             mov edx, dword ptr [esp + 0x24]
// 00881ce9  83c1f2               add ecx, -0xe
// 00881cec  3bd1                 cmp edx, ecx
// 00881cee  7d02                 jge 0x881cf2
// 00881cf0  8bca                 mov ecx, edx
// 00881cf2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00881cf6  2bc1                 sub eax, ecx
// 00881cf8  8d9424a8000000       lea edx, [esp + 0xa8]
// 00881cff  52                   push edx
// 00881d00  8bcd                 mov ecx, ebp
// 00881d02  898424ac000000       mov dword ptr [esp + 0xac], eax
// 00881d09  e83262f2ff           call 0x7a7f40
// 00881d0e  8d8424a8000000       lea eax, [esp + 0xa8]
// 00881d15  50                   push eax
// 00881d16  8d4c2464             lea ecx, [esp + 0x64]
// 00881d1a  51                   push ecx
// 00881d1b  e8b0ebf6ff           call 0x7f08d0
// 00881d20  8bc8                 mov ecx, eax
// 00881d22  e809e7f6ff           call 0x7f0430
// 00881d27  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 00881d2e  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 00881d32  3bd8                 cmp ebx, eax
// 00881d34  8b3d40bc9e00         mov edi, dword ptr [0x9ebc40]
// 00881d3a  7e31                 jle 0x881d6d
// 00881d3c  8b542464             mov edx, dword ptr [esp + 0x64]
// 00881d40  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 00881d47  03c2                 add eax, edx
// 00881d49  99                   cdq 
// 00881d4a  2bc2                 sub eax, edx
// 00881d4c  d1f8                 sar eax, 1
// 00881d4e  3bc8                 cmp ecx, eax
// 00881d50  7e1b                 jle 0x881d6d
// 00881d52  8b442444             mov eax, dword ptr [esp + 0x44]
// 00881d56  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 00881d5a  2bc3                 sub eax, ebx
// 00881d5c  8d4408ff             lea eax, [eax + ecx - 1]
// 00881d60  50                   push eax
// 00881d61  6a00                 push 0
// 00881d63  8d8424b0000000       lea eax, [esp + 0xb0]
// 00881d6a  50                   push eax
// 00881d6b  ffd7                 call edi
// 00881d6d  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 00881d74  8b442460             mov eax, dword ptr [esp + 0x60]
// 00881d78  3bc8                 cmp ecx, eax
// 00881d7a  7d0f                 jge 0x881d8b
// 00881d7c  2bc1                 sub eax, ecx
// 00881d7e  6a00                 push 0
// 00881d80  50                   push eax
// 00881d81  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00881d88  51                   push ecx
// 00881d89  ffd7                 call edi
// 00881d8b  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00881d92  8b442468             mov eax, dword ptr [esp + 0x68]
// 00881d96  3bc8                 cmp ecx, eax
// 00881d98  7e0f                 jle 0x881da9
// 00881d9a  6a00                 push 0
// 00881d9c  2bc1                 sub eax, ecx
// 00881d9e  50                   push eax
// 00881d9f  8d9424b0000000       lea edx, [esp + 0xb0]
// 00881da6  52                   push edx
// 00881da7  ffd7                 call edi
// 00881da9  8bce                 mov ecx, esi
// 00881dab  e8925ff2ff           call 0x7a7d42
// 00881db0  8b4620               mov eax, dword ptr [esi + 0x20]
// 00881db3  8b3d00bc9e00         mov edi, dword ptr [0x9ebc00]
// 00881db9  6a00                 push 0
// 00881dbb  6af8                 push -8
// 00881dbd  50                   push eax
// 00881dbe  ffd7                 call edi
// 00881dc0  6a00                 push 0
// 00881dc2  6800000080           push 0x80000000
// 00881dc7  6800000040           push 0x40000000
// 00881dcc  8bce                 mov ecx, esi
// 00881dce  e84763f2ff           call 0x7a811a
// 00881dd3  8b4520               mov eax, dword ptr [ebp + 0x20]
// 00881dd6  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00881dd9  50                   push eax
// 00881dda  6af8                 push -8
// 00881ddc  51                   push ecx
// 00881ddd  ffd7                 call edi
// 00881ddf  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 00881de6  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 00881ded  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 00881df4  6850020000           push 0x250
// 00881df9  2bc8                 sub ecx, eax
// 00881dfb  51                   push ecx
// 00881dfc  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 00881e03  2bd1                 sub edx, ecx
// 00881e05  52                   push edx
// 00881e06  50                   push eax
// 00881e07  a10cca9e00           mov eax, dword ptr [0x9eca0c]
// 00881e0c  51                   push ecx
// 00881e0d  50                   push eax
// 00881e0e  8bce                 mov ecx, esi
// 00881e10  e8575ff2ff           call 0x7a7d6c
// 00881e15  56                   push esi
// 00881e16  e8e5f9f7ff           call 0x801800
// 00881e1b  83c404               add esp, 4
// 00881e1e  8d4c2470             lea ecx, [esp + 0x70]
// 00881e22  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 00881e2a  e8f1d8f7ff           call 0x7ff720
// 00881e2f  8d8c2480000000       lea ecx, [esp + 0x80]
// 00881e36  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 00881e41  e850af0f00           call 0x97cd96
// 00881e46  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00881e4d  64890d00000000       mov dword ptr fs:[0], ecx
// 00881e54  59                   pop ecx
// 00881e55  5f                   pop edi
// 00881e56  5e                   pop esi
// 00881e57  5d                   pop ebp
// 00881e58  5b                   pop ebx
// 00881e59  81c48c000000         add esp, 0x8c
// 00881e5f  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTPPropertyGridInplaceList@@UAEXPAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\PropertyGrid\XTPPropertyGridInplaceList.cpp