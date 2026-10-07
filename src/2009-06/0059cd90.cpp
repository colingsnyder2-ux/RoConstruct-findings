// roc 2009-06 0059cd90  unit: seg_00590000  size: 562 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059cd90
//
// 0059cd90  83ec3c               sub esp, 0x3c
// 0059cd93  56                   push esi
// 0059cd94  8b742444             mov esi, dword ptr [esp + 0x44]
// 0059cd98  83befc00000000       cmp dword ptr [esi + 0xfc], 0
// 0059cd9f  8b8678010000         mov eax, dword ptr [esi + 0x178]
// 0059cda5  57                   push edi
// 0059cda6  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0059cdac  89442414             mov dword ptr [esp + 0x14], eax
// 0059cdb0  7415                 je 0x59cdc7
// 0059cdb2  837f2800             cmp dword ptr [edi + 0x28], 0
// 0059cdb6  750f                 jne 0x59cdc7
// 0059cdb8  e853ffffff           call 0x59cd10
// 0059cdbd  84c0                 test al, al
// 0059cdbf  7506                 jne 0x59cdc7
// 0059cdc1  5f                   pop edi
// 0059cdc2  5e                   pop esi
// 0059cdc3  83c43c               add esp, 0x3c
// 0059cdc6  c3                   ret 
// 0059cdc7  807f0800             cmp byte ptr [edi + 8], 0
// 0059cdcb  53                   push ebx
// 0059cdcc  55                   push ebp
// 0059cdcd  0f85d8010000         jne 0x59cfab
// 0059cdd3  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 0059cdda  8b4618               mov eax, dword ptr [esi + 0x18]
// 0059cddd  89742434             mov dword ptr [esp + 0x34], esi
// 0059cde1  8b08                 mov ecx, dword ptr [eax]
// 0059cde3  894c2424             mov dword ptr [esp + 0x24], ecx
// 0059cde7  8b5004               mov edx, dword ptr [eax + 4]
// 0059cdea  89542428             mov dword ptr [esp + 0x28], edx
// 0059cdee  8b4f14               mov ecx, dword ptr [edi + 0x14]
// 0059cdf1  8b5718               mov edx, dword ptr [edi + 0x18]
// 0059cdf4  8b6f0c               mov ebp, dword ptr [edi + 0xc]
// 0059cdf7  8b4710               mov eax, dword ptr [edi + 0x10]
// 0059cdfa  894c2438             mov dword ptr [esp + 0x38], ecx
// 0059cdfe  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0059ce01  8954243c             mov dword ptr [esp + 0x3c], edx
// 0059ce05  8b5720               mov edx, dword ptr [edi + 0x20]
// 0059ce08  894c2440             mov dword ptr [esp + 0x40], ecx
// 0059ce0c  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0059ce0f  896c2450             mov dword ptr [esp + 0x50], ebp
// 0059ce13  89542444             mov dword ptr [esp + 0x44], edx
// 0059ce17  894c2448             mov dword ptr [esp + 0x48], ecx
// 0059ce1b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0059ce23  0f8e46010000         jle 0x59cf6f
// 0059ce29  8d9644010000         lea edx, [esi + 0x144]
// 0059ce2f  89542414             mov dword ptr [esp + 0x14], edx
// 0059ce33  83f808               cmp eax, 8
// 0059ce36  8b542410             mov edx, dword ptr [esp + 0x10]
// 0059ce3a  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0059ce3e  8b0c91               mov ecx, dword ptr [ecx + edx*4]
// 0059ce41  8b542414             mov edx, dword ptr [esp + 0x14]
// 0059ce45  894c2420             mov dword ptr [esp + 0x20], ecx
// 0059ce49  8b0a                 mov ecx, dword ptr [edx]
// 0059ce4b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059ce4f  8b8c8e28010000       mov ecx, dword ptr [esi + ecx*4 + 0x128]
// 0059ce56  8b5114               mov edx, dword ptr [ecx + 0x14]
// 0059ce59  8b5c972c             mov ebx, dword ptr [edi + edx*4 + 0x2c]
// 0059ce5d  7d31                 jge 0x59ce90
// 0059ce5f  6a00                 push 0
// 0059ce61  50                   push eax
// 0059ce62  8d44242c             lea eax, [esp + 0x2c]
// 0059ce66  55                   push ebp
// 0059ce67  50                   push eax
// 0059ce68  e863f6ffff           call 0x59c4d0
// 0059ce6d  83c410               add esp, 0x10
// 0059ce70  84c0                 test al, al
// 0059ce72  0f8440010000         je 0x59cfb8
// 0059ce78  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059ce7c  83f808               cmp eax, 8
// 0059ce7f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0059ce83  896c2450             mov dword ptr [esp + 0x50], ebp
// 0059ce87  7d07                 jge 0x59ce90
// 0059ce89  b901000000           mov ecx, 1
// 0059ce8e  eb29                 jmp 0x59ceb9
// 0059ce90  8d48f8               lea ecx, [eax - 8]
// 0059ce93  8bd5                 mov edx, ebp
// 0059ce95  d3fa                 sar edx, cl
// 0059ce97  81e2ff000000         and edx, 0xff
// 0059ce9d  8b8c9390000000       mov ecx, dword ptr [ebx + edx*4 + 0x90]
// 0059cea4  85c9                 test ecx, ecx
// 0059cea6  740c                 je 0x59ceb4
// 0059cea8  0fb69c1a90040000     movzx ebx, byte ptr [edx + ebx + 0x490]
// 0059ceb0  2bc1                 sub eax, ecx
// 0059ceb2  eb2c                 jmp 0x59cee0
// 0059ceb4  b909000000           mov ecx, 9
// 0059ceb9  51                   push ecx
// 0059ceba  53                   push ebx
// 0059cebb  50                   push eax
// 0059cebc  8d4c2430             lea ecx, [esp + 0x30]
// 0059cec0  55                   push ebp
// 0059cec1  51                   push ecx
// 0059cec2  e829f7ffff           call 0x59c5f0
// 0059cec7  8bd8                 mov ebx, eax
// 0059cec9  83c414               add esp, 0x14
// 0059cecc  85db                 test ebx, ebx
// 0059cece  0f8ce4000000         jl 0x59cfb8
// 0059ced4  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0059ced8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059cedc  896c2450             mov dword ptr [esp + 0x50], ebp
// 0059cee0  85db                 test ebx, ebx
// 0059cee2  7454                 je 0x59cf38
// 0059cee4  3bc3                 cmp eax, ebx
// 0059cee6  7d24                 jge 0x59cf0c
// 0059cee8  53                   push ebx
// 0059cee9  50                   push eax
// 0059ceea  8d54242c             lea edx, [esp + 0x2c]
// 0059ceee  55                   push ebp
// 0059ceef  52                   push edx
// 0059cef0  e8dbf5ffff           call 0x59c4d0
// 0059cef5  83c410               add esp, 0x10
// 0059cef8  84c0                 test al, al
// 0059cefa  0f84b8000000         je 0x59cfb8
// 0059cf00  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0059cf04  8b442430             mov eax, dword ptr [esp + 0x30]
// 0059cf08  896c2450             mov dword ptr [esp + 0x50], ebp
// 0059cf0c  8bcb                 mov ecx, ebx
// 0059cf0e  2bc3                 sub eax, ebx
// 0059cf10  ba01000000           mov edx, 1
// 0059cf15  d3e2                 shl edx, cl
// 0059cf17  8bc8                 mov ecx, eax
// 0059cf19  d3fd                 sar ebp, cl
// 0059cf1b  4a                   dec edx
// 0059cf1c  23d5                 and edx, ebp
// 0059cf1e  3b149dc03a8d00       cmp edx, dword ptr [ebx*4 + 0x8d3ac0]
// 0059cf25  8b6c2450             mov ebp, dword ptr [esp + 0x50]
// 0059cf29  7d0b                 jge 0x59cf36
// 0059cf2b  8b1c9d003b8d00       mov ebx, dword ptr [ebx*4 + 0x8d3b00]
// 0059cf32  03da                 add ebx, edx
// 0059cf34  eb02                 jmp 0x59cf38
// 0059cf36  8bda                 mov ebx, edx
// 0059cf38  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059cf3c  015c8c3c             add dword ptr [esp + ecx*4 + 0x3c], ebx
// 0059cf40  8b548c3c             mov edx, dword ptr [esp + ecx*4 + 0x3c]
// 0059cf44  8344241404           add dword ptr [esp + 0x14], 4
// 0059cf49  8d4c8c3c             lea ecx, [esp + ecx*4 + 0x3c]
// 0059cf4d  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059cf51  d3e2                 shl edx, cl
// 0059cf53  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0059cf57  668911               mov word ptr [ecx], dx
// 0059cf5a  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059cf5e  41                   inc ecx
// 0059cf5f  3b8e40010000         cmp ecx, dword ptr [esi + 0x140]
// 0059cf65  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059cf69  0f8cc4feffff         jl 0x59ce33
// 0059cf6f  8b5618               mov edx, dword ptr [esi + 0x18]
// 0059cf72  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059cf76  890a                 mov dword ptr [edx], ecx
// 0059cf78  8b5618               mov edx, dword ptr [esi + 0x18]
// 0059cf7b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0059cf7f  894a04               mov dword ptr [edx + 4], ecx
// 0059cf82  8b542438             mov edx, dword ptr [esp + 0x38]
// 0059cf86  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 0059cf8a  895714               mov dword ptr [edi + 0x14], edx
// 0059cf8d  8b542444             mov edx, dword ptr [esp + 0x44]
// 0059cf91  894710               mov dword ptr [edi + 0x10], eax
// 0059cf94  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 0059cf98  894718               mov dword ptr [edi + 0x18], eax
// 0059cf9b  8b442448             mov eax, dword ptr [esp + 0x48]
// 0059cf9f  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0059cfa2  895720               mov dword ptr [edi + 0x20], edx
// 0059cfa5  896f0c               mov dword ptr [edi + 0xc], ebp
// 0059cfa8  894724               mov dword ptr [edi + 0x24], eax
// 0059cfab  ff4f28               dec dword ptr [edi + 0x28]
// 0059cfae  5d                   pop ebp
// 0059cfaf  5b                   pop ebx
// 0059cfb0  5f                   pop edi
// 0059cfb1  b001                 mov al, 1
// 0059cfb3  5e                   pop esi
// 0059cfb4  83c43c               add esp, 0x3c
// 0059cfb7  c3                   ret 
// 0059cfb8  5d                   pop ebp
// 0059cfb9  5b                   pop ebx
// 0059cfba  5f                   pop edi
// 0059cfbb  32c0                 xor al, al
// 0059cfbd  5e                   pop esi
// 0059cfbe  83c43c               add esp, 0x3c
// 0059cfc1  c3                   ret 
// library jpeg-6b/jdphuff.c (function _decode_mcu_DC_first)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
