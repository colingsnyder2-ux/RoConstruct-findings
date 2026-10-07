// roc 2011-06 00576bd0  unit: seg_00570000  size: 562 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00576bd0
//
// 00576bd0  83ec3c               sub esp, 0x3c
// 00576bd3  56                   push esi
// 00576bd4  8b742444             mov esi, dword ptr [esp + 0x44]
// 00576bd8  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 00576bdf  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 00576be5  57                   push edi
// 00576be6  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00576bec  89442414             mov dword ptr [esp + 0x14], eax
// 00576bf0  7415                 je 0x576c07
// 00576bf2  837f2800             cmp dword ptr [edi + 0x28], 0
// 00576bf6  750f                 jne 0x576c07
// 00576bf8  e853ffffff           call 0x576b50
// 00576bfd  84c0                 test al, al
// 00576bff  7506                 jne 0x576c07
// 00576c01  5f                   pop edi
// 00576c02  5e                   pop esi
// 00576c03  83c43c               add esp, 0x3c
// 00576c06  c3                   ret 
// 00576c07  807f0800             cmp byte ptr [edi + 8], 0
// 00576c0b  53                   push ebx
// 00576c0c  55                   push ebp
// 00576c0d  0f85d8010000         jne 0x576deb
// 00576c13  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 00576c1a  8b4618               mov eax, dword ptr [esi + 0x18]
// 00576c1d  89742434             mov dword ptr [esp + 0x34], esi
// 00576c21  8b08                 mov ecx, dword ptr [eax]
// 00576c23  894c2424             mov dword ptr [esp + 0x24], ecx
// 00576c27  8b5004               mov edx, dword ptr [eax + 4]
// 00576c2a  89542428             mov dword ptr [esp + 0x28], edx
// 00576c2e  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 00576c31  8b5718               mov edx, dword ptr [edi + 0x18]
// 00576c34  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 00576c37  8b4710               mov eax, dword ptr [edi + 0x10]
// 00576c3a  894c2438             mov dword ptr [esp + 0x38], ecx
// 00576c3e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 00576c41  8954243c             mov dword ptr [esp + 0x3c], edx
// 00576c45  8b5720               mov edx, dword ptr [edi + 0x20]
// 00576c48  894c2440             mov dword ptr [esp + 0x40], ecx
// 00576c4c  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 00576c4f  896c2450             mov dword ptr [esp + 0x50], ebp
// 00576c53  89542444             mov dword ptr [esp + 0x44], edx
// 00576c57  894c2448             mov dword ptr [esp + 0x48], ecx
// 00576c5b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00576c63  0f8e46010000         jle 0x576daf
// 00576c69  8d9644010000         lea edx, [esi + 0x144]
// 00576c6f  89542414             mov dword ptr [esp + 0x14], edx
// 00576c73  83f808               cmp eax, 8
// 00576c76  8b542410             mov edx, dword ptr [esp + 0x10]
// 00576c7a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00576c7e  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 00576c81  8b542414             mov edx, dword ptr [esp + 0x14]
// 00576c85  894c2420             mov dword ptr [esp + 0x20], ecx
// 00576c89  8b0a                 mov ecx, dword ptr [edx]
// 00576c8b  894c2418             mov dword ptr [esp + 0x18], ecx
// 00576c8f  8b8c8e28010000       mov ecx, dword ptr [esi + ecx*4 + 0x128]
// 00576c96  8b5114               mov edx, dword ptr [ecx + 0x14]
// 00576c99  8b5c972c             mov ebx, dword ptr [edi + edx*4 + 0x2c]
// 00576c9d  7d31                 jge 0x576cd0
// 00576c9f  6a00                 push 0
// 00576ca1  50                   push eax
// 00576ca2  8d44242c             lea eax, [esp + 0x2c]
// 00576ca6  55                   push ebp
// 00576ca7  50                   push eax
// 00576ca8  e863f6ffff           call 0x576310
// 00576cad  83c410               add esp, 0x10
// 00576cb0  84c0                 test al, al
// 00576cb2  0f8440010000         je 0x576df8
// 00576cb8  8b442430             mov eax, dword ptr [esp + 0x30]
// 00576cbc  83f808               cmp eax, 8
// 00576cbf  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00576cc3  896c2450             mov dword ptr [esp + 0x50], ebp
// 00576cc7  7d07                 jge 0x576cd0
// 00576cc9  b901000000           mov ecx, 1
// 00576cce  eb29                 jmp 0x576cf9
// 00576cd0  8d48f8               lea ecx, [eax - 8]
// 00576cd3  8bd5                 mov edx, ebp
// 00576cd5  d3fa                 sar edx, cl
// 00576cd7  81e2ff000000         and edx, 0xff
// 00576cdd  8b8c9390000000       mov ecx, dword ptr [ebx + edx*4 + 0x90]
// 00576ce4  85c9                 test ecx, ecx
// 00576ce6  740c                 je 0x576cf4
// 00576ce8  0fb69c1a90040000     movzx ebx, byte ptr [edx + ebx + 0x490]
// 00576cf0  2bc1                 sub eax, ecx
// 00576cf2  eb2c                 jmp 0x576d20
// 00576cf4  b909000000           mov ecx, 9
// 00576cf9  51                   push ecx
// 00576cfa  53                   push ebx
// 00576cfb  50                   push eax
// 00576cfc  8d4c2430             lea ecx, [esp + 0x30]
// 00576d00  55                   push ebp
// 00576d01  51                   push ecx
// 00576d02  e829f7ffff           call 0x576430
// 00576d07  8bd8                 mov ebx, eax
// 00576d09  83c414               add esp, 0x14
// 00576d0c  85db                 test ebx, ebx
// 00576d0e  0f8ce4000000         jl 0x576df8
// 00576d14  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00576d18  8b442430             mov eax, dword ptr [esp + 0x30]
// 00576d1c  896c2450             mov dword ptr [esp + 0x50], ebp
// 00576d20  85db                 test ebx, ebx
// 00576d22  7454                 je 0x576d78
// 00576d24  3bc3                 cmp eax, ebx
// 00576d26  7d24                 jge 0x576d4c
// 00576d28  53                   push ebx
// 00576d29  50                   push eax
// 00576d2a  8d54242c             lea edx, [esp + 0x2c]
// 00576d2e  55                   push ebp
// 00576d2f  52                   push edx
// 00576d30  e8dbf5ffff           call 0x576310
// 00576d35  83c410               add esp, 0x10
// 00576d38  84c0                 test al, al
// 00576d3a  0f84b8000000         je 0x576df8
// 00576d40  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00576d44  8b442430             mov eax, dword ptr [esp + 0x30]
// 00576d48  896c2450             mov dword ptr [esp + 0x50], ebp
// 00576d4c  8bcb                 mov ecx, ebx
// 00576d4e  2bc3                 sub eax, ebx
// 00576d50  ba01000000           mov edx, 1
// 00576d55  d3e2                 shl edx, cl
// 00576d57  8bc8                 mov ecx, eax
// 00576d59  d3fd                 sar ebp, cl
// 00576d5b  4a                   dec edx
// 00576d5c  23d5                 and edx, ebp
// 00576d5e  3b149d0880a800       cmp edx, dword ptr [ebx*4 + 0xa88008]
// 00576d65  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 00576d69  7d0b                 jge 0x576d76
// 00576d6b  8b1c9d4880a800       mov ebx, dword ptr [ebx*4 + 0xa88048]
// 00576d72  03da                 add ebx, edx
// 00576d74  eb02                 jmp 0x576d78
// 00576d76  8bda                 mov ebx, edx
// 00576d78  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00576d7c  015c8c3c             add dword ptr [esp + ecx*4 + 0x3c], ebx
// 00576d80  8b548c3c             mov edx, dword ptr [esp + ecx*4 + 0x3c]
// 00576d84  8344241404           add dword ptr [esp + 0x14], 4
// 00576d89  8d4c8c3c             lea ecx, [esp + ecx*4 + 0x3c]
// 00576d8d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00576d91  d3e2                 shl edx, cl
// 00576d93  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00576d97  668911               mov word ptr [ecx], dx
// 00576d9a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00576d9e  41                   inc ecx
// 00576d9f  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 00576da5  894c2410             mov dword ptr [esp + 0x10], ecx
// 00576da9  0f8cc4feffff         jl 0x576c73
// 00576daf  8b5618               mov edx, dword ptr [esi + 0x18]
// 00576db2  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00576db6  890a                 mov dword ptr [edx], ecx
// 00576db8  8b5618               mov edx, dword ptr [esi + 0x18]
// 00576dbb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00576dbf  894a04               mov dword ptr [edx + 4], ecx
// 00576dc2  8b542438             mov edx, dword ptr [esp + 0x38]
// 00576dc6  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 00576dca  895714               mov dword ptr [edi + 0x14], edx
// 00576dcd  8b542444             mov edx, dword ptr [esp + 0x44]
// 00576dd1  894710               mov dword ptr [edi + 0x10], eax
// 00576dd4  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00576dd8  894718               mov dword ptr [edi + 0x18], eax
// 00576ddb  8b442448             mov eax, dword ptr [esp + 0x48]
// 00576ddf  894f1c               mov dword ptr [edi + 0x1c], ecx
// 00576de2  895720               mov dword ptr [edi + 0x20], edx
// 00576de5  896f0c               mov dword ptr [edi + 0xc], ebp
// 00576de8  894724               mov dword ptr [edi + 0x24], eax
// 00576deb  ff4f28               dec dword ptr [edi + 0x28]
// 00576dee  5d                   pop ebp
// 00576def  5b                   pop ebx
// 00576df0  5f                   pop edi
// 00576df1  b001                 mov al, 1
// 00576df3  5e                   pop esi
// 00576df4  83c43c               add esp, 0x3c
// 00576df7  c3                   ret 
// 00576df8  5d                   pop ebp
// 00576df9  5b                   pop ebx
// 00576dfa  5f                   pop edi
// 00576dfb  32c0                 xor al, al
// 00576dfd  5e                   pop esi
// 00576dfe  83c43c               add esp, 0x3c
// 00576e01  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
