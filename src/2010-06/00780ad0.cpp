// roc 2010-06 00780ad0  unit: seg_00780000  size: 550 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00780ad0
//
// 00780ad0  83ec1c               sub esp, 0x1c
// 00780ad3  53                   push ebx
// 00780ad4  55                   push ebp
// 00780ad5  8b6f30               mov ebp, dword ptr [edi + 0x30]
// 00780ad8  8b4524               mov eax, dword ptr [ebp + 0x24]
// 00780adb  56                   push esi
// 00780adc  6a0b                 push 0xb
// 00780ade  685432a500           push 0xa53254
// 00780ae3  57                   push edi
// 00780ae4  89442418             mov dword ptr [esp + 0x18], eax
// 00780ae8  e8c31a0000           call 0x7825b0
// 00780aed  8b7730               mov esi, dword ptr [edi + 0x30]
// 00780af0  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00780af4  41                   inc ecx
// 00780af5  83c40c               add esp, 0xc
// 00780af8  81f9c8000000         cmp ecx, 0xc8
// 00780afe  8bd8                 mov ebx, eax
// 00780b00  7e0f                 jle 0x780b11
// 00780b02  b9dc30a500           mov ecx, 0xa530dc
// 00780b07  bac8000000           mov edx, 0xc8
// 00780b0c  e8cfdfffff           call 0x77eae0
// 00780b11  53                   push ebx
// 00780b12  57                   push edi
// 00780b13  e808e1ffff           call 0x77ec20
// 00780b18  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00780b1c  6a0b                 push 0xb
// 00780b1e  684832a500           push 0xa53248
// 00780b23  57                   push edi
// 00780b24  66898456ac000000     mov word ptr [esi + edx*2 + 0xac], ax
// 00780b2c  e87f1a0000           call 0x7825b0
// 00780b31  8b7730               mov esi, dword ptr [edi + 0x30]
// 00780b34  8bd8                 mov ebx, eax
// 00780b36  0fb64632             movzx eax, byte ptr [esi + 0x32]
// 00780b3a  83c002               add eax, 2
// 00780b3d  83c414               add esp, 0x14
// 00780b40  3dc8000000           cmp eax, 0xc8
// 00780b45  7e0f                 jle 0x780b56
// 00780b47  b9dc30a500           mov ecx, 0xa530dc
// 00780b4c  bac8000000           mov edx, 0xc8
// 00780b51  e88adfffff           call 0x77eae0
// 00780b56  53                   push ebx
// 00780b57  57                   push edi
// 00780b58  e8c3e0ffff           call 0x77ec20
// 00780b5d  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00780b61  6a0a                 push 0xa
// 00780b63  683c32a500           push 0xa5323c
// 00780b68  57                   push edi
// 00780b69  6689844eae000000     mov word ptr [esi + ecx*2 + 0xae], ax
// 00780b71  e83a1a0000           call 0x7825b0
// 00780b76  8b7730               mov esi, dword ptr [edi + 0x30]
// 00780b79  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00780b7d  83c203               add edx, 3
// 00780b80  83c414               add esp, 0x14
// 00780b83  81fac8000000         cmp edx, 0xc8
// 00780b89  8bd8                 mov ebx, eax
// 00780b8b  7e0f                 jle 0x780b9c
// 00780b8d  b9dc30a500           mov ecx, 0xa530dc
// 00780b92  bac8000000           mov edx, 0xc8
// 00780b97  e844dfffff           call 0x77eae0
// 00780b9c  53                   push ebx
// 00780b9d  57                   push edi
// 00780b9e  e87de0ffff           call 0x77ec20
// 00780ba3  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00780ba7  6689844eb0000000     mov word ptr [esi + ecx*2 + 0xb0], ax
// 00780baf  8b7730               mov esi, dword ptr [edi + 0x30]
// 00780bb2  0fb65632             movzx edx, byte ptr [esi + 0x32]
// 00780bb6  83c204               add edx, 4
// 00780bb9  83c408               add esp, 8
// 00780bbc  81fac8000000         cmp edx, 0xc8
// 00780bc2  7e0f                 jle 0x780bd3
// 00780bc4  b9dc30a500           mov ecx, 0xa530dc
// 00780bc9  bac8000000           mov edx, 0xc8
// 00780bce  e80ddfffff           call 0x77eae0
// 00780bd3  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00780bd7  50                   push eax
// 00780bd8  57                   push edi
// 00780bd9  e842e0ffff           call 0x77ec20
// 00780bde  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00780be2  83c408               add esp, 8
// 00780be5  6689844eb2000000     mov word ptr [esi + ecx*2 + 0xb2], ax
// 00780bed  837f103d             cmp dword ptr [edi + 0x10], 0x3d
// 00780bf1  7421                 je 0x780c14
// 00780bf3  6a3d                 push 0x3d
// 00780bf5  57                   push edi
// 00780bf6  e895180000           call 0x782490
// 00780bfb  8b5734               mov edx, dword ptr [edi + 0x34]
// 00780bfe  50                   push eax
// 00780bff  683830a500           push 0xa53038
// 00780c04  52                   push edx
// 00780c05  e8d621fbff           call 0x732de0
// 00780c0a  50                   push eax
// 00780c0b  57                   push edi
// 00780c0c  e87f190000           call 0x782590
// 00780c11  83c41c               add esp, 0x1c
// 00780c14  57                   push edi
// 00780c15  e8662d0000           call 0x783980
// 00780c1a  6a00                 push 0
// 00780c1c  8d442418             lea eax, [esp + 0x18]
// 00780c20  50                   push eax
// 00780c21  57                   push edi
// 00780c22  e8d9f6ffff           call 0x780300
// 00780c27  8b5730               mov edx, dword ptr [edi + 0x30]
// 00780c2a  8d4c2420             lea ecx, [esp + 0x20]
// 00780c2e  51                   push ecx
// 00780c2f  52                   push edx
// 00780c30  e83bf50000           call 0x790170
// 00780c35  be2c000000           mov esi, 0x2c
// 00780c3a  83c418               add esp, 0x18
// 00780c3d  397710               cmp dword ptr [edi + 0x10], esi
// 00780c40  7420                 je 0x780c62
// 00780c42  56                   push esi
// 00780c43  57                   push edi
// 00780c44  e847180000           call 0x782490
// 00780c49  50                   push eax
// 00780c4a  8b4734               mov eax, dword ptr [edi + 0x34]
// 00780c4d  683830a500           push 0xa53038
// 00780c52  50                   push eax
// 00780c53  e88821fbff           call 0x732de0
// 00780c58  50                   push eax
// 00780c59  57                   push edi
// 00780c5a  e831190000           call 0x782590
// 00780c5f  83c41c               add esp, 0x1c
// 00780c62  57                   push edi
// 00780c63  e8182d0000           call 0x783980
// 00780c68  6a00                 push 0
// 00780c6a  8d4c2418             lea ecx, [esp + 0x18]
// 00780c6e  51                   push ecx
// 00780c6f  57                   push edi
// 00780c70  e88bf6ffff           call 0x780300
// 00780c75  8b4730               mov eax, dword ptr [edi + 0x30]
// 00780c78  8d542420             lea edx, [esp + 0x20]
// 00780c7c  52                   push edx
// 00780c7d  50                   push eax
// 00780c7e  e8edf40000           call 0x790170
// 00780c83  83c418               add esp, 0x18
// 00780c86  397710               cmp dword ptr [edi + 0x10], esi
// 00780c89  7526                 jne 0x780cb1
// 00780c8b  57                   push edi
// 00780c8c  e8ef2c0000           call 0x783980
// 00780c91  6a00                 push 0
// 00780c93  8d4c2418             lea ecx, [esp + 0x18]
// 00780c97  51                   push ecx
// 00780c98  57                   push edi
// 00780c99  e862f6ffff           call 0x780300
// 00780c9e  8b4730               mov eax, dword ptr [edi + 0x30]
// 00780ca1  8d542420             lea edx, [esp + 0x20]
// 00780ca5  52                   push edx
// 00780ca6  50                   push eax
// 00780ca7  e8c4f40000           call 0x790170
// 00780cac  83c418               add esp, 0x18
// 00780caf  eb26                 jmp 0x780cd7
// 00780cb1  d9e8                 fld1 
// 00780cb3  83ec08               sub esp, 8
// 00780cb6  dd1c24               fstp qword ptr [esp]
// 00780cb9  55                   push ebp
// 00780cba  e871eb0000           call 0x78f830
// 00780cbf  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 00780cc2  50                   push eax
// 00780cc3  51                   push ecx
// 00780cc4  6a01                 push 1
// 00780cc6  55                   push ebp
// 00780cc7  e8c4ee0000           call 0x78fb90
// 00780ccc  6a01                 push 1
// 00780cce  55                   push ebp
// 00780ccf  e8ece90000           call 0x78f6c0
// 00780cd4  83c424               add esp, 0x24
// 00780cd7  8b542430             mov edx, dword ptr [esp + 0x30]
// 00780cdb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00780cdf  6a01                 push 1
// 00780ce1  6a01                 push 1
// 00780ce3  52                   push edx
// 00780ce4  50                   push eax
// 00780ce5  8bc7                 mov eax, edi
// 00780ce7  e844fcffff           call 0x780930
// 00780cec  83c410               add esp, 0x10
// 00780cef  5e                   pop esi
// 00780cf0  5d                   pop ebp
// 00780cf1  5b                   pop ebx
// 00780cf2  83c41c               add esp, 0x1c
// 00780cf5  c3                   ret 
// library lua-5.1.4/lparser.c (function _fornum)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
