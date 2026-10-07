// roc 2008-06 00532ab0  unit: seg_00530000  size: 562 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00532ab0
//
// 00532ab0  83ec3c               sub esp, 0x3c
// 00532ab3  56                   push esi
// 00532ab4  8b742444             mov esi, dword ptr [esp + 0x44]
// 00532ab8  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 00532abf  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00532ac5  57                   push edi
// 00532ac6  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00532acc  89442414             mov dword ptr [esp + 0x14], eax
// 00532ad0  7415                 je 0x532ae7
// 00532ad2  837f2800             cmp dword ptr [edi + 0x28], 0
// 00532ad6  750f                 jne 0x532ae7
// 00532ad8  e853ffffff           call 0x532a30
// 00532add  84c0                 test al, al
// 00532adf  7506                 jne 0x532ae7
// 00532ae1  5f                   pop edi
// 00532ae2  5e                   pop esi
// 00532ae3  83c43c               add esp, 0x3c
// 00532ae6  c3                   ret 
// 00532ae7  807f0800             cmp byte ptr [edi + 8], 0
// 00532aeb  53                   push ebx
// 00532aec  55                   push ebp
// 00532aed  0f85d8010000         jne 0x532ccb
// 00532af3  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 00532afa  8b4618               mov eax, dword ptr [esi + 0x18]
// 00532afd  89742434             mov dword ptr [esp + 0x34], esi
// 00532b01  8b08                 mov ecx, dword ptr [eax]
// 00532b03  894c2424             mov dword ptr [esp + 0x24], ecx
// 00532b07  8b5004               mov edx, dword ptr [eax + 4]
// 00532b0a  89542428             mov dword ptr [esp + 0x28], edx
// 00532b0e  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00532b11  8b5718               mov edx, dword ptr [edi + 0x18]
// 00532b14  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00532b17  8b4710               mov eax, dword ptr [edi + 0x10]
// 00532b1a  894c2438             mov dword ptr [esp + 0x38], ecx
// 00532b1e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00532b21  8954243c             mov dword ptr [esp + 0x3c], edx
// 00532b25  8b5720               mov edx, dword ptr [edi + 0x20]
// 00532b28  894c2440             mov dword ptr [esp + 0x40], ecx
// 00532b2c  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00532b2f  896c2450             mov dword ptr [esp + 0x50], ebp
// 00532b33  89542444             mov dword ptr [esp + 0x44], edx
// 00532b37  894c2448             mov dword ptr [esp + 0x48], ecx
// 00532b3b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00532b43  0f8e46010000         jle 0x532c8f
// 00532b49  8d9644010000         lea edx, [esi + 0x144]
// 00532b4f  89542414             mov dword ptr [esp + 0x14], edx
// 00532b53  83f808               cmp eax, 8
// 00532b56  8b542410             mov edx, dword ptr [esp + 0x10]
// 00532b5a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00532b5e  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00532b61  8b542414             mov edx, dword ptr [esp + 0x14]
// 00532b65  894c2420             mov dword ptr [esp + 0x20], ecx
// 00532b69  8b0a                 mov ecx, dword ptr [edx]
// 00532b6b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00532b6f  8b8c8e28010000       mov ecx, dword ptr [esi + ecx*4 + 0x128]
// 00532b76  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00532b79  8b5c972c             mov ebx, dword ptr [edi + edx*4 + 0x2c]
// 00532b7d  7d31                 jge 0x532bb0
// 00532b7f  6a00                 push 0
// 00532b81  50                   push eax
// 00532b82  8d44242c             lea eax, [esp + 0x2c]
// 00532b86  55                   push ebp
// 00532b87  50                   push eax
// 00532b88  e863f6ffff           call 0x5321f0
// 00532b8d  83c410               add esp, 0x10
// 00532b90  84c0                 test al, al
// 00532b92  0f8440010000         je 0x532cd8
// 00532b98  8b442430             mov eax, dword ptr [esp + 0x30]
// 00532b9c  83f808               cmp eax, 8
// 00532b9f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00532ba3  896c2450             mov dword ptr [esp + 0x50], ebp
// 00532ba7  7d07                 jge 0x532bb0
// 00532ba9  b901000000           mov ecx, 1
// 00532bae  eb29                 jmp 0x532bd9
// 00532bb0  8d48f8               lea ecx, [eax - 8]
// 00532bb3  8bd5                 mov edx, ebp
// 00532bb5  d3fa                 sar edx, cl
// 00532bb7  81e2ff000000         and edx, 0xff
// 00532bbd  8b8c9390000000       mov ecx, dword ptr [ebx + edx*4 + 0x90]
// 00532bc4  85c9                 test ecx, ecx
// 00532bc6  740c                 je 0x532bd4
// 00532bc8  0fb69c1a90040000     movzx ebx, byte ptr [edx + ebx + 0x490]
// 00532bd0  2bc1                 sub eax, ecx
// 00532bd2  eb2c                 jmp 0x532c00
// 00532bd4  b909000000           mov ecx, 9
// 00532bd9  51                   push ecx
// 00532bda  53                   push ebx
// 00532bdb  50                   push eax
// 00532bdc  8d4c2430             lea ecx, [esp + 0x30]
// 00532be0  55                   push ebp
// 00532be1  51                   push ecx
// 00532be2  e829f7ffff           call 0x532310
// 00532be7  8bd8                 mov ebx, eax
// 00532be9  83c414               add esp, 0x14
// 00532bec  85db                 test ebx, ebx
// 00532bee  0f8ce4000000         jl 0x532cd8
// 00532bf4  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00532bf8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00532bfc  896c2450             mov dword ptr [esp + 0x50], ebp
// 00532c00  85db                 test ebx, ebx
// 00532c02  7454                 je 0x532c58
// 00532c04  3bc3                 cmp eax, ebx
// 00532c06  7d24                 jge 0x532c2c
// 00532c08  53                   push ebx
// 00532c09  50                   push eax
// 00532c0a  8d54242c             lea edx, [esp + 0x2c]
// 00532c0e  55                   push ebp
// 00532c0f  52                   push edx
// 00532c10  e8dbf5ffff           call 0x5321f0
// 00532c15  83c410               add esp, 0x10
// 00532c18  84c0                 test al, al
// 00532c1a  0f84b8000000         je 0x532cd8
// 00532c20  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00532c24  8b442430             mov eax, dword ptr [esp + 0x30]
// 00532c28  896c2450             mov dword ptr [esp + 0x50], ebp
// 00532c2c  8bcb                 mov ecx, ebx
// 00532c2e  2bc3                 sub eax, ebx
// 00532c30  ba01000000           mov edx, 1
// 00532c35  d3e2                 shl edx, cl
// 00532c37  8bc8                 mov ecx, eax
// 00532c39  d3fd                 sar ebp, cl
// 00532c3b  4a                   dec edx
// 00532c3c  23d5                 and edx, ebp
// 00532c3e  3b149dc8ca8200       cmp edx, dword ptr [ebx*4 + 0x82cac8]
// 00532c45  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00532c49  7d0b                 jge 0x532c56
// 00532c4b  8b1c9d08cb8200       mov ebx, dword ptr [ebx*4 + 0x82cb08]
// 00532c52  03da                 add ebx, edx
// 00532c54  eb02                 jmp 0x532c58
// 00532c56  8bda                 mov ebx, edx
// 00532c58  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00532c5c  015c8c3c             add dword ptr [esp + ecx*4 + 0x3c], ebx
// 00532c60  8b548c3c             mov edx, dword ptr [esp + ecx*4 + 0x3c]
// 00532c64  8344241404           add dword ptr [esp + 0x14], 4
// 00532c69  8d4c8c3c             lea ecx, [esp + ecx*4 + 0x3c]
// 00532c6d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00532c71  d3e2                 shl edx, cl
// 00532c73  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00532c77  668911               mov word ptr [ecx], dx
// 00532c7a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00532c7e  41                   inc ecx
// 00532c7f  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 00532c85  894c2410             mov dword ptr [esp + 0x10], ecx
// 00532c89  0f8cc4feffff         jl 0x532b53
// 00532c8f  8b5618               mov edx, dword ptr [esi + 0x18]
// 00532c92  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00532c96  890a                 mov dword ptr [edx], ecx
// 00532c98  8b5618               mov edx, dword ptr [esi + 0x18]
// 00532c9b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00532c9f  894a04               mov dword ptr [edx + 4], ecx
// 00532ca2  8b542438             mov edx, dword ptr [esp + 0x38]
// 00532ca6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00532caa  895714               mov dword ptr [edi + 0x14], edx
// 00532cad  8b542444             mov edx, dword ptr [esp + 0x44]
// 00532cb1  894710               mov dword ptr [edi + 0x10], eax
// 00532cb4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00532cb8  894718               mov dword ptr [edi + 0x18], eax
// 00532cbb  8b442448             mov eax, dword ptr [esp + 0x48]
// 00532cbf  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00532cc2  895720               mov dword ptr [edi + 0x20], edx
// 00532cc5  896f0c               mov dword ptr [edi + 0xc], ebp
// 00532cc8  894724               mov dword ptr [edi + 0x24], eax
// 00532ccb  ff4f28               dec dword ptr [edi + 0x28]
// 00532cce  5d                   pop ebp
// 00532ccf  5b                   pop ebx
// 00532cd0  5f                   pop edi
// 00532cd1  b001                 mov al, 1
// 00532cd3  5e                   pop esi
// 00532cd4  83c43c               add esp, 0x3c
// 00532cd7  c3                   ret 
// 00532cd8  5d                   pop ebp
// 00532cd9  5b                   pop ebx
// 00532cda  5f                   pop edi
// 00532cdb  32c0                 xor al, al
// 00532cdd  5e                   pop esi
// 00532cde  83c43c               add esp, 0x3c
// 00532ce1  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
