// roc 2010-06 00580920  unit: seg_00580000  size: 562 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00580920
//
// 00580920  83ec3c               sub esp, 0x3c
// 00580923  56                   push esi
// 00580924  8b742444             mov esi, dword ptr [esp + 0x44]
// 00580928  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0058092f  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00580935  57                   push edi
// 00580936  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0058093c  89442414             mov dword ptr [esp + 0x14], eax
// 00580940  7415                 je 0x580957
// 00580942  837f2800             cmp dword ptr [edi + 0x28], 0
// 00580946  750f                 jne 0x580957
// 00580948  e853ffffff           call 0x5808a0
// 0058094d  84c0                 test al, al
// 0058094f  7506                 jne 0x580957
// 00580951  5f                   pop edi
// 00580952  5e                   pop esi
// 00580953  83c43c               add esp, 0x3c
// 00580956  c3                   ret 
// 00580957  807f0800             cmp byte ptr [edi + 8], 0
// 0058095b  53                   push ebx
// 0058095c  55                   push ebp
// 0058095d  0f85d8010000         jne 0x580b3b
// 00580963  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0058096a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0058096d  89742434             mov dword ptr [esp + 0x34], esi
// 00580971  8b08                 mov ecx, dword ptr [eax]
// 00580973  894c2424             mov dword ptr [esp + 0x24], ecx
// 00580977  8b5004               mov edx, dword ptr [eax + 4]
// 0058097a  89542428             mov dword ptr [esp + 0x28], edx
// 0058097e  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00580981  8b5718               mov edx, dword ptr [edi + 0x18]
// 00580984  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00580987  8b4710               mov eax, dword ptr [edi + 0x10]
// 0058098a  894c2438             mov dword ptr [esp + 0x38], ecx
// 0058098e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00580991  8954243c             mov dword ptr [esp + 0x3c], edx
// 00580995  8b5720               mov edx, dword ptr [edi + 0x20]
// 00580998  894c2440             mov dword ptr [esp + 0x40], ecx
// 0058099c  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0058099f  896c2450             mov dword ptr [esp + 0x50], ebp
// 005809a3  89542444             mov dword ptr [esp + 0x44], edx
// 005809a7  894c2448             mov dword ptr [esp + 0x48], ecx
// 005809ab  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005809b3  0f8e46010000         jle 0x580aff
// 005809b9  8d9644010000         lea edx, [esi + 0x144]
// 005809bf  89542414             mov dword ptr [esp + 0x14], edx
// 005809c3  83f808               cmp eax, 8
// 005809c6  8b542410             mov edx, dword ptr [esp + 0x10]
// 005809ca  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 005809ce  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 005809d1  8b542414             mov edx, dword ptr [esp + 0x14]
// 005809d5  894c2420             mov dword ptr [esp + 0x20], ecx
// 005809d9  8b0a                 mov ecx, dword ptr [edx]
// 005809db  894c2418             mov dword ptr [esp + 0x18], ecx
// 005809df  8b8c8e28010000       mov ecx, dword ptr [esi + ecx*4 + 0x128]
// 005809e6  8b5114               mov edx, dword ptr [ecx + 0x14]
// 005809e9  8b5c972c             mov ebx, dword ptr [edi + edx*4 + 0x2c]
// 005809ed  7d31                 jge 0x580a20
// 005809ef  6a00                 push 0
// 005809f1  50                   push eax
// 005809f2  8d44242c             lea eax, [esp + 0x2c]
// 005809f6  55                   push ebp
// 005809f7  50                   push eax
// 005809f8  e863f6ffff           call 0x580060
// 005809fd  83c410               add esp, 0x10
// 00580a00  84c0                 test al, al
// 00580a02  0f8440010000         je 0x580b48
// 00580a08  8b442430             mov eax, dword ptr [esp + 0x30]
// 00580a0c  83f808               cmp eax, 8
// 00580a0f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00580a13  896c2450             mov dword ptr [esp + 0x50], ebp
// 00580a17  7d07                 jge 0x580a20
// 00580a19  b901000000           mov ecx, 1
// 00580a1e  eb29                 jmp 0x580a49
// 00580a20  8d48f8               lea ecx, [eax - 8]
// 00580a23  8bd5                 mov edx, ebp
// 00580a25  d3fa                 sar edx, cl
// 00580a27  81e2ff000000         and edx, 0xff
// 00580a2d  8b8c9390000000       mov ecx, dword ptr [ebx + edx*4 + 0x90]
// 00580a34  85c9                 test ecx, ecx
// 00580a36  740c                 je 0x580a44
// 00580a38  0fb69c1a90040000     movzx ebx, byte ptr [edx + ebx + 0x490]
// 00580a40  2bc1                 sub eax, ecx
// 00580a42  eb2c                 jmp 0x580a70
// 00580a44  b909000000           mov ecx, 9
// 00580a49  51                   push ecx
// 00580a4a  53                   push ebx
// 00580a4b  50                   push eax
// 00580a4c  8d4c2430             lea ecx, [esp + 0x30]
// 00580a50  55                   push ebp
// 00580a51  51                   push ecx
// 00580a52  e829f7ffff           call 0x580180
// 00580a57  8bd8                 mov ebx, eax
// 00580a59  83c414               add esp, 0x14
// 00580a5c  85db                 test ebx, ebx
// 00580a5e  0f8ce4000000         jl 0x580b48
// 00580a64  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00580a68  8b442430             mov eax, dword ptr [esp + 0x30]
// 00580a6c  896c2450             mov dword ptr [esp + 0x50], ebp
// 00580a70  85db                 test ebx, ebx
// 00580a72  7454                 je 0x580ac8
// 00580a74  3bc3                 cmp eax, ebx
// 00580a76  7d24                 jge 0x580a9c
// 00580a78  53                   push ebx
// 00580a79  50                   push eax
// 00580a7a  8d54242c             lea edx, [esp + 0x2c]
// 00580a7e  55                   push ebp
// 00580a7f  52                   push edx
// 00580a80  e8dbf5ffff           call 0x580060
// 00580a85  83c410               add esp, 0x10
// 00580a88  84c0                 test al, al
// 00580a8a  0f84b8000000         je 0x580b48
// 00580a90  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00580a94  8b442430             mov eax, dword ptr [esp + 0x30]
// 00580a98  896c2450             mov dword ptr [esp + 0x50], ebp
// 00580a9c  8bcb                 mov ecx, ebx
// 00580a9e  2bc3                 sub eax, ebx
// 00580aa0  ba01000000           mov edx, 1
// 00580aa5  d3e2                 shl edx, cl
// 00580aa7  8bc8                 mov ecx, eax
// 00580aa9  d3fd                 sar ebp, cl
// 00580aab  4a                   dec edx
// 00580aac  23d5                 and edx, ebp
// 00580aae  3b149dd086a200       cmp edx, dword ptr [ebx*4 + 0xa286d0]
// 00580ab5  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00580ab9  7d0b                 jge 0x580ac6
// 00580abb  8b1c9d1087a200       mov ebx, dword ptr [ebx*4 + 0xa28710]
// 00580ac2  03da                 add ebx, edx
// 00580ac4  eb02                 jmp 0x580ac8
// 00580ac6  8bda                 mov ebx, edx
// 00580ac8  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00580acc  015c8c3c             add dword ptr [esp + ecx*4 + 0x3c], ebx
// 00580ad0  8b548c3c             mov edx, dword ptr [esp + ecx*4 + 0x3c]
// 00580ad4  8344241404           add dword ptr [esp + 0x14], 4
// 00580ad9  8d4c8c3c             lea ecx, [esp + ecx*4 + 0x3c]
// 00580add  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00580ae1  d3e2                 shl edx, cl
// 00580ae3  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00580ae7  668911               mov word ptr [ecx], dx
// 00580aea  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00580aee  41                   inc ecx
// 00580aef  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 00580af5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00580af9  0f8cc4feffff         jl 0x5809c3
// 00580aff  8b5618               mov edx, dword ptr [esi + 0x18]
// 00580b02  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00580b06  890a                 mov dword ptr [edx], ecx
// 00580b08  8b5618               mov edx, dword ptr [esi + 0x18]
// 00580b0b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00580b0f  894a04               mov dword ptr [edx + 4], ecx
// 00580b12  8b542438             mov edx, dword ptr [esp + 0x38]
// 00580b16  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00580b1a  895714               mov dword ptr [edi + 0x14], edx
// 00580b1d  8b542444             mov edx, dword ptr [esp + 0x44]
// 00580b21  894710               mov dword ptr [edi + 0x10], eax
// 00580b24  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00580b28  894718               mov dword ptr [edi + 0x18], eax
// 00580b2b  8b442448             mov eax, dword ptr [esp + 0x48]
// 00580b2f  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00580b32  895720               mov dword ptr [edi + 0x20], edx
// 00580b35  896f0c               mov dword ptr [edi + 0xc], ebp
// 00580b38  894724               mov dword ptr [edi + 0x24], eax
// 00580b3b  ff4f28               dec dword ptr [edi + 0x28]
// 00580b3e  5d                   pop ebp
// 00580b3f  5b                   pop ebx
// 00580b40  5f                   pop edi
// 00580b41  b001                 mov al, 1
// 00580b43  5e                   pop esi
// 00580b44  83c43c               add esp, 0x3c
// 00580b47  c3                   ret 
// 00580b48  5d                   pop ebp
// 00580b49  5b                   pop ebx
// 00580b4a  5f                   pop edi
// 00580b4b  32c0                 xor al, al
// 00580b4d  5e                   pop esi
// 00580b4e  83c43c               add esp, 0x3c
// 00580b51  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
