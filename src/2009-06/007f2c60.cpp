// roc 2009-06 007f2c60  unit: CXTPPropertyGridInplaceList  size: 1202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007f2c60
//
// 007f2c60  6aff                 push -1
// 007f2c62  68750c8800           push 0x880c75
// 007f2c67  64a100000000         mov eax, dword ptr fs:[0]
// 007f2c6d  50                   push eax
// 007f2c6e  81ec80000000         sub esp, 0x80
// 007f2c74  53                   push ebx
// 007f2c75  55                   push ebp
// 007f2c76  56                   push esi
// 007f2c77  57                   push edi
// 007f2c78  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007f2c7d  33c4                 xor eax, esp
// 007f2c7f  50                   push eax
// 007f2c80  8d842494000000       lea eax, [esp + 0x94]
// 007f2c87  64a300000000         mov dword ptr fs:[0], eax
// 007f2c8d  8bf1                 mov esi, ecx
// 007f2c8f  8b9c24a4000000       mov ebx, dword ptr [esp + 0xa4]
// 007f2c96  33ed                 xor ebp, ebp
// 007f2c98  3bdd                 cmp ebx, ebp
// 007f2c9a  0f8456040000         je 0x7f30f6
// 007f2ca0  8b8424a8000000       mov eax, dword ptr [esp + 0xa8]
// 007f2ca7  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 007f2cae  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 007f2cb5  89442440             mov dword ptr [esp + 0x40], eax
// 007f2cb9  8b8424b4000000       mov eax, dword ptr [esp + 0xb4]
// 007f2cc0  894c2444             mov dword ptr [esp + 0x44], ecx
// 007f2cc4  8b8bbc000000         mov ecx, dword ptr [ebx + 0xbc]
// 007f2cca  89542448             mov dword ptr [esp + 0x48], edx
// 007f2cce  8944244c             mov dword ptr [esp + 0x4c], eax
// 007f2cd2  e879aaf9ff           call 0x78d750
// 007f2cd7  8bbbbc000000         mov edi, dword ptr [ebx + 0xbc]
// 007f2cdd  8b16                 mov edx, dword ptr [esi]
// 007f2cdf  40                   inc eax
// 007f2ce0  89442440             mov dword ptr [esp + 0x40], eax
// 007f2ce4  8b4268               mov eax, dword ptr [edx + 0x68]
// 007f2ce7  8bce                 mov ecx, esi
// 007f2ce9  897c2428             mov dword ptr [esp + 0x28], edi
// 007f2ced  895e54               mov dword ptr [esi + 0x54], ebx
// 007f2cf0  ffd0                 call eax
// 007f2cf2  396e20               cmp dword ptr [esi + 0x20], ebp
// 007f2cf5  754e                 jne 0x7f2d45
// 007f2cf7  55                   push ebp
// 007f2cf8  55                   push ebp
// 007f2cf9  57                   push edi
// 007f2cfa  8d4c245c             lea ecx, [esp + 0x5c]
// 007f2cfe  51                   push ecx
// 007f2cff  685100a040           push 0x40a00051
// 007f2d04  6816d28a00           push 0x8ad216
// 007f2d09  68981e8f00           push 0x8f1e98
// 007f2d0e  8bcf                 mov ecx, edi
// 007f2d10  896c246c             mov dword ptr [esp + 0x6c], ebp
// 007f2d14  896c2470             mov dword ptr [esp + 0x70], ebp
// 007f2d18  896c2474             mov dword ptr [esp + 0x74], ebp
// 007f2d1c  896c2478             mov dword ptr [esp + 0x78], ebp
// 007f2d20  e8bd910500           call 0x84bee2
// 007f2d25  2500004000           and eax, 0x400000
// 007f2d2a  0d80000000           or eax, 0x80
// 007f2d2f  50                   push eax
// 007f2d30  8bce                 mov ecx, esi
// 007f2d32  e8735df2ff           call 0x718aaa
// 007f2d37  3bfd                 cmp edi, ebp
// 007f2d39  7405                 je 0x7f2d40
// 007f2d3b  8b4720               mov eax, dword ptr [edi + 0x20]
// 007f2d3e  eb02                 jmp 0x7f2d42
// 007f2d40  33c0                 xor eax, eax
// 007f2d42  894638               mov dword ptr [esi + 0x38], eax
// 007f2d45  8b5720               mov edx, dword ptr [edi + 0x20]
// 007f2d48  8b3d90ee8900         mov edi, dword ptr [0x89ee90]
// 007f2d4e  55                   push ebp
// 007f2d4f  55                   push ebp
// 007f2d50  6a31                 push 0x31
// 007f2d52  52                   push edx
// 007f2d53  ffd7                 call edi
// 007f2d55  50                   push eax
// 007f2d56  e8db67f2ff           call 0x719536
// 007f2d5b  3bc5                 cmp eax, ebp
// 007f2d5d  7504                 jne 0x7f2d63
// 007f2d5f  33c0                 xor eax, eax
// 007f2d61  eb03                 jmp 0x7f2d66
// 007f2d63  8b4004               mov eax, dword ptr [eax + 4]
// 007f2d66  6a01                 push 1
// 007f2d68  50                   push eax
// 007f2d69  8b4620               mov eax, dword ptr [esi + 0x20]
// 007f2d6c  6a30                 push 0x30
// 007f2d6e  50                   push eax
// 007f2d6f  ffd7                 call edi
// 007f2d71  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007f2d74  55                   push ebp
// 007f2d75  55                   push ebp
// 007f2d76  6884010000           push 0x184
// 007f2d7b  51                   push ecx
// 007f2d7c  ffd7                 call edi
// 007f2d7e  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 007f2d85  2b442440             sub eax, dword ptr [esp + 0x40]
// 007f2d89  8b542428             mov edx, dword ptr [esp + 0x28]
// 007f2d8d  8babc4000000         mov ebp, dword ptr [ebx + 0xc4]
// 007f2d93  52                   push edx
// 007f2d94  8d8c2484000000       lea ecx, [esp + 0x84]
// 007f2d9b  896c2430             mov dword ptr [esp + 0x30], ebp
// 007f2d9f  89442428             mov dword ptr [esp + 0x28], eax
// 007f2da3  e852910500           call 0x84befa
// 007f2da8  8b442428             mov eax, dword ptr [esp + 0x28]
// 007f2dac  8b4820               mov ecx, dword ptr [eax + 0x20]
// 007f2daf  6a00                 push 0
// 007f2db1  6a00                 push 0
// 007f2db3  6a31                 push 0x31
// 007f2db5  51                   push ecx
// 007f2db6  c78424ac00000000000000 mov dword ptr [esp + 0xac], 0
// 007f2dc1  ffd7                 call edi
// 007f2dc3  50                   push eax
// 007f2dc4  e86d67f2ff           call 0x719536
// 007f2dc9  50                   push eax
// 007f2dca  8d942484000000       lea edx, [esp + 0x84]
// 007f2dd1  52                   push edx
// 007f2dd2  8d4c2478             lea ecx, [esp + 0x78]
// 007f2dd6  e885daf7ff           call 0x770860
// 007f2ddb  8b8c2488000000       mov ecx, dword ptr [esp + 0x88]
// 007f2de2  8d442438             lea eax, [esp + 0x38]
// 007f2de6  50                   push eax
// 007f2de7  6a01                 push 1
// 007f2de9  68f8338b00           push 0x8b33f8
// 007f2dee  51                   push ecx
// 007f2def  c68424ac00000001     mov byte ptr [esp + 0xac], 1
// 007f2df7  ff1550e18900         call dword ptr [0x89e150]
// 007f2dfd  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 007f2e01  83c203               add edx, 3
// 007f2e04  837d2800             cmp dword ptr [ebp + 0x28], 0
// 007f2e08  89542418             mov dword ptr [esp + 0x18], edx
// 007f2e0c  c744242000000000     mov dword ptr [esp + 0x20], 0
// 007f2e14  0f8e03010000         jle 0x7f2f1d
// 007f2e1a  eb06                 jmp 0x7f2e22
// 007f2e1c  8d642400             lea esp, [esp]
// 007f2e20  8be9                 mov ebp, ecx
// 007f2e22  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f2e26  50                   push eax
// 007f2e27  8bcd                 mov ecx, ebp
// 007f2e29  e83253fdff           call 0x7c8160
// 007f2e2e  8be8                 mov ebp, eax
// 007f2e30  8d4d20               lea ecx, [ebp + 0x20]
// 007f2e33  51                   push ecx
// 007f2e34  8d4c2420             lea ecx, [esp + 0x20]
// 007f2e38  ff15e4fc8900         call dword ptr [0x89fce4]
// 007f2e3e  8d4c241c             lea ecx, [esp + 0x1c]
// 007f2e42  c684249c00000002     mov byte ptr [esp + 0x9c], 2
// 007f2e4a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f2e50  8b5620               mov edx, dword ptr [esi + 0x20]
// 007f2e53  50                   push eax
// 007f2e54  6a00                 push 0
// 007f2e56  6880010000           push 0x180
// 007f2e5b  52                   push edx
// 007f2e5c  ffd7                 call edi
// 007f2e5e  55                   push ebp
// 007f2e5f  50                   push eax
// 007f2e60  8944243c             mov dword ptr [esp + 0x3c], eax
// 007f2e64  8b4620               mov eax, dword ptr [esi + 0x20]
// 007f2e67  689a010000           push 0x19a
// 007f2e6c  50                   push eax
// 007f2e6d  ffd7                 call edi
// 007f2e6f  8b13                 mov edx, dword ptr [ebx]
// 007f2e71  8b5270               mov edx, dword ptr [edx + 0x70]
// 007f2e74  55                   push ebp
// 007f2e75  8d842484000000       lea eax, [esp + 0x84]
// 007f2e7c  50                   push eax
// 007f2e7d  8d4c2440             lea ecx, [esp + 0x40]
// 007f2e81  51                   push ecx
// 007f2e82  8bcb                 mov ecx, ebx
// 007f2e84  ffd2                 call edx
// 007f2e86  8b442438             mov eax, dword ptr [esp + 0x38]
// 007f2e8a  39442424             cmp dword ptr [esp + 0x24], eax
// 007f2e8e  7f04                 jg 0x7f2e94
// 007f2e90  89442424             mov dword ptr [esp + 0x24], eax
// 007f2e94  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 007f2e98  39442418             cmp dword ptr [esp + 0x18], eax
// 007f2e9c  7f04                 jg 0x7f2ea2
// 007f2e9e  89442418             mov dword ptr [esp + 0x18], eax
// 007f2ea2  8d442430             lea eax, [esp + 0x30]
// 007f2ea6  50                   push eax
// 007f2ea7  8bcb                 mov ecx, ebx
// 007f2ea9  e8a2e7c3ff           call 0x431650
// 007f2eae  8be8                 mov ebp, eax
// 007f2eb0  8d4c241c             lea ecx, [esp + 0x1c]
// 007f2eb4  c684249c00000003     mov byte ptr [esp + 0x9c], 3
// 007f2ebc  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007f2ec2  50                   push eax
// 007f2ec3  8bcd                 mov ecx, ebp
// 007f2ec5  ff15d4fc8900         call dword ptr [0x89fcd4]
// 007f2ecb  85c0                 test eax, eax
// 007f2ecd  8d4c2430             lea ecx, [esp + 0x30]
// 007f2ed1  0f94442417           sete byte ptr [esp + 0x17]
// 007f2ed6  ff1510fd8900         call dword ptr [0x89fd10]
// 007f2edc  807c241700           cmp byte ptr [esp + 0x17], 0
// 007f2ee1  7412                 je 0x7f2ef5
// 007f2ee3  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007f2ee7  8b5620               mov edx, dword ptr [esi + 0x20]
// 007f2eea  6a00                 push 0
// 007f2eec  51                   push ecx
// 007f2eed  6886010000           push 0x186
// 007f2ef2  52                   push edx
// 007f2ef3  ffd7                 call edi
// 007f2ef5  8d4c241c             lea ecx, [esp + 0x1c]
// 007f2ef9  c684249c00000001     mov byte ptr [esp + 0x9c], 1
// 007f2f01  ff1510fd8900         call dword ptr [0x89fd10]
// 007f2f07  8b442420             mov eax, dword ptr [esp + 0x20]
// 007f2f0b  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 007f2f0f  40                   inc eax
// 007f2f10  3b4128               cmp eax, dword ptr [ecx + 0x28]
// 007f2f13  89442420             mov dword ptr [esp + 0x20], eax
// 007f2f17  0f8c03ffffff         jl 0x7f2e20
// 007f2f1d  0fb7542418           movzx edx, word ptr [esp + 0x18]
// 007f2f22  8b4620               mov eax, dword ptr [esi + 0x20]
// 007f2f25  52                   push edx
// 007f2f26  6a00                 push 0
// 007f2f28  68a0010000           push 0x1a0
// 007f2f2d  50                   push eax
// 007f2f2e  ffd7                 call edi
// 007f2f30  8b5620               mov edx, dword ptr [esi + 0x20]
// 007f2f33  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007f2f3a  8babdc000000         mov ebp, dword ptr [ebx + 0xdc]
// 007f2f40  6a00                 push 0
// 007f2f42  6a00                 push 0
// 007f2f44  688b010000           push 0x18b
// 007f2f49  52                   push edx
// 007f2f4a  898c24bc000000       mov dword ptr [esp + 0xbc], ecx
// 007f2f51  ffd7                 call edi
// 007f2f53  3be8                 cmp ebp, eax
// 007f2f55  7d08                 jge 0x7f2f5f
// 007f2f57  8b83dc000000         mov eax, dword ptr [ebx + 0xdc]
// 007f2f5d  eb0f                 jmp 0x7f2f6e
// 007f2f5f  8b4620               mov eax, dword ptr [esi + 0x20]
// 007f2f62  6a00                 push 0
// 007f2f64  6a00                 push 0
// 007f2f66  688b010000           push 0x18b
// 007f2f6b  50                   push eax
// 007f2f6c  ffd7                 call edi
// 007f2f6e  0faf442418           imul eax, dword ptr [esp + 0x18]
// 007f2f73  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007f2f7a  8d540102             lea edx, [ecx + eax + 2]
// 007f2f7e  8b8424b0000000       mov eax, dword ptr [esp + 0xb0]
// 007f2f85  8bc8                 mov ecx, eax
// 007f2f87  2b8c24a8000000       sub ecx, dword ptr [esp + 0xa8]
// 007f2f8e  899424b4000000       mov dword ptr [esp + 0xb4], edx
// 007f2f95  8b542424             mov edx, dword ptr [esp + 0x24]
// 007f2f99  83c1f2               add ecx, -0xe
// 007f2f9c  3bd1                 cmp edx, ecx
// 007f2f9e  7d02                 jge 0x7f2fa2
// 007f2fa0  8bca                 mov ecx, edx
// 007f2fa2  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 007f2fa6  2bc1                 sub eax, ecx
// 007f2fa8  8d9424a8000000       lea edx, [esp + 0xa8]
// 007f2faf  52                   push edx
// 007f2fb0  8bcd                 mov ecx, ebp
// 007f2fb2  898424ac000000       mov dword ptr [esp + 0xac], eax
// 007f2fb9  e81460f2ff           call 0x718fd2
// 007f2fbe  8d8424a8000000       lea eax, [esp + 0xa8]
// 007f2fc5  50                   push eax
// 007f2fc6  8d4c2464             lea ecx, [esp + 0x64]
// 007f2fca  51                   push ecx
// 007f2fcb  e8d0e9f6ff           call 0x7619a0
// 007f2fd0  8bc8                 mov ecx, eax
// 007f2fd2  e829e5f6ff           call 0x761500
// 007f2fd7  8b9c24b4000000       mov ebx, dword ptr [esp + 0xb4]
// 007f2fde  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 007f2fe2  3bd8                 cmp ebx, eax
// 007f2fe4  8b3df8ed8900         mov edi, dword ptr [0x89edf8]
// 007f2fea  7e31                 jle 0x7f301d
// 007f2fec  8b542464             mov edx, dword ptr [esp + 0x64]
// 007f2ff0  8b8c24ac000000       mov ecx, dword ptr [esp + 0xac]
// 007f2ff7  03c2                 add eax, edx
// 007f2ff9  99                   cdq 
// 007f2ffa  2bc2                 sub eax, edx
// 007f2ffc  d1f8                 sar eax, 1
// 007f2ffe  3bc8                 cmp ecx, eax
// 007f3000  7e1b                 jle 0x7f301d
// 007f3002  8b442444             mov eax, dword ptr [esp + 0x44]
// 007f3006  2b44244c             sub eax, dword ptr [esp + 0x4c]
// 007f300a  2bc3                 sub eax, ebx
// 007f300c  8d4408ff             lea eax, [eax + ecx - 1]
// 007f3010  50                   push eax
// 007f3011  6a00                 push 0
// 007f3013  8d8424b0000000       lea eax, [esp + 0xb0]
// 007f301a  50                   push eax
// 007f301b  ffd7                 call edi
// 007f301d  8b8c24a8000000       mov ecx, dword ptr [esp + 0xa8]
// 007f3024  8b442460             mov eax, dword ptr [esp + 0x60]
// 007f3028  3bc8                 cmp ecx, eax
// 007f302a  7d0f                 jge 0x7f303b
// 007f302c  2bc1                 sub eax, ecx
// 007f302e  6a00                 push 0
// 007f3030  50                   push eax
// 007f3031  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 007f3038  51                   push ecx
// 007f3039  ffd7                 call edi
// 007f303b  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 007f3042  8b442468             mov eax, dword ptr [esp + 0x68]
// 007f3046  3bc8                 cmp ecx, eax
// 007f3048  7e0f                 jle 0x7f3059
// 007f304a  6a00                 push 0
// 007f304c  2bc1                 sub eax, ecx
// 007f304e  50                   push eax
// 007f304f  8d9424b0000000       lea edx, [esp + 0xb0]
// 007f3056  52                   push edx
// 007f3057  ffd7                 call edi
// 007f3059  8bce                 mov ecx, esi
// 007f305b  e87a5df2ff           call 0x718dda
// 007f3060  8b4620               mov eax, dword ptr [esi + 0x20]
// 007f3063  8b3d34ed8900         mov edi, dword ptr [0x89ed34]
// 007f3069  6a00                 push 0
// 007f306b  6af8                 push -8
// 007f306d  50                   push eax
// 007f306e  ffd7                 call edi
// 007f3070  6a00                 push 0
// 007f3072  6800000080           push 0x80000000
// 007f3077  6800000040           push 0x40000000
// 007f307c  8bce                 mov ecx, esi
// 007f307e  e82f61f2ff           call 0x7191b2
// 007f3083  8b4520               mov eax, dword ptr [ebp + 0x20]
// 007f3086  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007f3089  50                   push eax
// 007f308a  6af8                 push -8
// 007f308c  51                   push ecx
// 007f308d  ffd7                 call edi
// 007f308f  8b8424ac000000       mov eax, dword ptr [esp + 0xac]
// 007f3096  8b8c24b4000000       mov ecx, dword ptr [esp + 0xb4]
// 007f309d  8b9424b0000000       mov edx, dword ptr [esp + 0xb0]
// 007f30a4  6850020000           push 0x250
// 007f30a9  2bc8                 sub ecx, eax
// 007f30ab  51                   push ecx
// 007f30ac  8b8c24b0000000       mov ecx, dword ptr [esp + 0xb0]
// 007f30b3  2bd1                 sub edx, ecx
// 007f30b5  52                   push edx
// 007f30b6  50                   push eax
// 007f30b7  a1b4fb8900           mov eax, dword ptr [0x89fbb4]
// 007f30bc  51                   push ecx
// 007f30bd  50                   push eax
// 007f30be  8bce                 mov ecx, esi
// 007f30c0  e83f5df2ff           call 0x718e04
// 007f30c5  56                   push esi
// 007f30c6  e8a5f9f7ff           call 0x772a70
// 007f30cb  83c404               add esp, 4
// 007f30ce  8d4c2470             lea ecx, [esp + 0x70]
// 007f30d2  c684249c00000000     mov byte ptr [esp + 0x9c], 0
// 007f30da  e801d8f7ff           call 0x7708e0
// 007f30df  8d8c2480000000       lea ecx, [esp + 0x80]
// 007f30e6  c784249c000000ffffffff mov dword ptr [esp + 0x9c], 0xffffffff
// 007f30f1  e8fe8d0500           call 0x84bef4
// 007f30f6  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007f30fd  64890d00000000       mov dword ptr fs:[0], ecx
// 007f3104  59                   pop ecx
// 007f3105  5f                   pop edi
// 007f3106  5e                   pop esi
// 007f3107  5d                   pop ebp
// 007f3108  5b                   pop ebx
// 007f3109  81c48c000000         add esp, 0x8c
// 007f310f  c21400               ret 0x14
// copied from an identical function in another client (function ?Create@CXTPPropertyGridInplaceList@@UAEXPAVCXTPPropertyGridItem@@VCRect@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\PropertyGrid\XTPPropertyGridInplaceList.cpp