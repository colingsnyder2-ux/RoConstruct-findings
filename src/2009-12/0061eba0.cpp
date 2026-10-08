// roc 2009-12 0061eba0  unit: seg_00610000  size: 328 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061eba0
//
// 0061eba0  51                   push ecx
// 0061eba1  53                   push ebx
// 0061eba2  55                   push ebp
// 0061eba3  56                   push esi
// 0061eba4  8b742414             mov esi, dword ptr [esp + 0x14]
// 0061eba8  83be6c01000000       cmp dword ptr [esi + 0x16c], 0
// 0061ebaf  57                   push edi
// 0061ebb0  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0061ebb6  751b                 jne 0x61ebd3
// 0061ebb8  83be700100003f       cmp dword ptr [esi + 0x170], 0x3f
// 0061ebbf  7512                 jne 0x61ebd3
// 0061ebc1  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 0061ebc8  7509                 jne 0x61ebd3
// 0061ebca  83be7801000000       cmp dword ptr [esi + 0x178], 0
// 0061ebd1  7416                 je 0x61ebe9
// 0061ebd3  8b06                 mov eax, dword ptr [esi]
// 0061ebd5  c740147a000000       mov dword ptr [eax + 0x14], 0x7a
// 0061ebdc  8b0e                 mov ecx, dword ptr [esi]
// 0061ebde  8b5104               mov edx, dword ptr [ecx + 4]
// 0061ebe1  6aff                 push -1
// 0061ebe3  56                   push esi
// 0061ebe4  ffd2                 call edx
// 0061ebe6  83c408               add esp, 8
// 0061ebe9  83be2401000000       cmp dword ptr [esi + 0x124], 0
// 0061ebf0  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0061ebf8  7e59                 jle 0x61ec53
// 0061ebfa  8d4714               lea eax, [edi + 0x14]
// 0061ebfd  89442410             mov dword ptr [esp + 0x10], eax
// 0061ec01  8d9e28010000         lea ebx, [esi + 0x128]
// 0061ec07  8b03                 mov eax, dword ptr [ebx]
// 0061ec09  8b4814               mov ecx, dword ptr [eax + 0x14]
// 0061ec0c  8b6818               mov ebp, dword ptr [eax + 0x18]
// 0061ec0f  8d548f28             lea edx, [edi + ecx*4 + 0x28]
// 0061ec13  52                   push edx
// 0061ec14  51                   push ecx
// 0061ec15  6a01                 push 1
// 0061ec17  56                   push esi
// 0061ec18  e823f6ffff           call 0x61e240
// 0061ec1d  8d44af38             lea eax, [edi + ebp*4 + 0x38]
// 0061ec21  50                   push eax
// 0061ec22  55                   push ebp
// 0061ec23  6a00                 push 0
// 0061ec25  56                   push esi
// 0061ec26  e815f6ffff           call 0x61e240
// 0061ec2b  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0061ec2f  8b442438             mov eax, dword ptr [esp + 0x38]
// 0061ec33  c70100000000         mov dword ptr [ecx], 0
// 0061ec39  40                   inc eax
// 0061ec3a  83c104               add ecx, 4
// 0061ec3d  83c420               add esp, 0x20
// 0061ec40  83c304               add ebx, 4
// 0061ec43  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0061ec49  89442418             mov dword ptr [esp + 0x18], eax
// 0061ec4d  894c2410             mov dword ptr [esp + 0x10], ecx
// 0061ec51  7cb4                 jl 0x61ec07
// 0061ec53  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0061ec5a  7e72                 jle 0x61ecce
// 0061ec5c  b868ffffff           mov eax, 0xffffff68
// 0061ec61  2bc7                 sub eax, edi
// 0061ec63  8d8f98000000         lea ecx, [edi + 0x98]
// 0061ec69  8d5770               lea edx, [edi + 0x70]
// 0061ec6c  8dae44010000         lea ebp, [esi + 0x144]
// 0061ec72  89442418             mov dword ptr [esp + 0x18], eax
// 0061ec76  eb08                 jmp 0x61ec80
// 0061ec78  8da42400000000       lea esp, [esp]
// 0061ec7f  90                   nop 
// 0061ec80  8b4500               mov eax, dword ptr [ebp]
// 0061ec83  8b848628010000       mov eax, dword ptr [esi + eax*4 + 0x128]
// 0061ec8a  8b5814               mov ebx, dword ptr [eax + 0x14]
// 0061ec8d  8b5c9f28             mov ebx, dword ptr [edi + ebx*4 + 0x28]
// 0061ec91  895ad8               mov dword ptr [edx - 0x28], ebx
// 0061ec94  8b5818               mov ebx, dword ptr [eax + 0x18]
// 0061ec97  8b5c9f38             mov ebx, dword ptr [edi + ebx*4 + 0x38]
// 0061ec9b  891a                 mov dword ptr [edx], ebx
// 0061ec9d  80783000             cmp byte ptr [eax + 0x30], 0
// 0061eca1  740f                 je 0x61ecb2
// 0061eca3  c60101               mov byte ptr [ecx], 1
// 0061eca6  83782401             cmp dword ptr [eax + 0x24], 1
// 0061ecaa  0f9fc0               setg al
// 0061ecad  88410a               mov byte ptr [ecx + 0xa], al
// 0061ecb0  eb07                 jmp 0x61ecb9
// 0061ecb2  c6410a00             mov byte ptr [ecx + 0xa], 0
// 0061ecb6  c60100               mov byte ptr [ecx], 0
// 0061ecb9  8b442418             mov eax, dword ptr [esp + 0x18]
// 0061ecbd  41                   inc ecx
// 0061ecbe  03c1                 add eax, ecx
// 0061ecc0  83c504               add ebp, 4
// 0061ecc3  83c204               add edx, 4
// 0061ecc6  3b8640010000         cmp eax, dword ptr [esi + 0x140]
// 0061eccc  7cb2                 jl 0x61ec80
// 0061ecce  33c0                 xor eax, eax
// 0061ecd0  894710               mov dword ptr [edi + 0x10], eax
// 0061ecd3  89470c               mov dword ptr [edi + 0xc], eax
// 0061ecd6  884708               mov byte ptr [edi + 8], al
// 0061ecd9  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0061ecdf  894f24               mov dword ptr [edi + 0x24], ecx
// 0061ece2  5f                   pop edi
// 0061ece3  5e                   pop esi
// 0061ece4  5d                   pop ebp
// 0061ece5  5b                   pop ebx
// 0061ece6  59                   pop ecx
// 0061ece7  c3                   ret 
// library jpeg-6b/jdhuff.c (function _start_pass_huff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdhuff.c
