// from server: 100% by auto
// roc 2012-06 00655e50  unit: seg_00650000  size: 213 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00655e50
//
// 00655e50  53                   push ebx
// 00655e51  56                   push esi
// 00655e52  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00655e56  57                   push edi
// 00655e57  68d8000000           push 0xd8
// 00655e5c  e85ff2ffff           call 0x6550c0
// 00655e61  83c404               add esp, 4
// 00655e64  33ff                 xor edi, edi
// 00655e66  8d5e48               lea ebx, [esi + 0x48]
// 00655e69  8da42400000000       lea esp, [esp]
// 00655e70  833b00               cmp dword ptr [ebx], 0
// 00655e73  740b                 je 0x655e80
// 00655e75  57                   push edi
// 00655e76  8bc6                 mov eax, esi
// 00655e78  e823f3ffff           call 0x6551a0
// 00655e7d  83c404               add esp, 4
// 00655e80  47                   inc edi
// 00655e81  83c304               add ebx, 4
// 00655e84  83ff04               cmp edi, 4
// 00655e87  7ce7                 jl 0x655e70
// 00655e89  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 00655e90  7533                 jne 0x655ec5
// 00655e92  33ff                 xor edi, edi
// 00655e94  8d5e68               lea ebx, [esi + 0x68]
// 00655e97  837bf000             cmp dword ptr [ebx - 0x10], 0
// 00655e9b  740d                 je 0x655eaa
// 00655e9d  6a00                 push 0
// 00655e9f  57                   push edi
// 00655ea0  8bc6                 mov eax, esi
// 00655ea2  e8d9f4ffff           call 0x655380
// 00655ea7  83c408               add esp, 8
// 00655eaa  833b00               cmp dword ptr [ebx], 0
// 00655ead  740d                 je 0x655ebc
// 00655eaf  6a01                 push 1
// 00655eb1  57                   push edi
// 00655eb2  8bc6                 mov eax, esi
// 00655eb4  e8c7f4ffff           call 0x655380
// 00655eb9  83c408               add esp, 8
// 00655ebc  47                   inc edi
// 00655ebd  83c304               add ebx, 4
// 00655ec0  83ff04               cmp edi, 4
// 00655ec3  7cd2                 jl 0x655e97
// 00655ec5  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655ec8  8b08                 mov ecx, dword ptr [eax]
// 00655eca  c601ff               mov byte ptr [ecx], 0xff
// 00655ecd  ff00                 inc dword ptr [eax]
// 00655ecf  83cfff               or edi, 0xffffffff
// 00655ed2  017804               add dword ptr [eax + 4], edi
// 00655ed5  8d5f19               lea ebx, [edi + 0x19]
// 00655ed8  751c                 jne 0x655ef6
// 00655eda  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655edd  56                   push esi
// 00655ede  ffd2                 call edx
// 00655ee0  83c404               add esp, 4
// 00655ee3  84c0                 test al, al
// 00655ee5  750f                 jne 0x655ef6
// 00655ee7  8b06                 mov eax, dword ptr [esi]
// 00655ee9  895814               mov dword ptr [eax + 0x14], ebx
// 00655eec  8b0e                 mov ecx, dword ptr [esi]
// 00655eee  8b11                 mov edx, dword ptr [ecx]
// 00655ef0  56                   push esi
// 00655ef1  ffd2                 call edx
// 00655ef3  83c404               add esp, 4
// 00655ef6  8b4618               mov eax, dword ptr [esi + 0x18]
// 00655ef9  8b08                 mov ecx, dword ptr [eax]
// 00655efb  c601d9               mov byte ptr [ecx], 0xd9
// 00655efe  ff00                 inc dword ptr [eax]
// 00655f00  017804               add dword ptr [eax + 4], edi
// 00655f03  751c                 jne 0x655f21
// 00655f05  8b500c               mov edx, dword ptr [eax + 0xc]
// 00655f08  56                   push esi
// 00655f09  ffd2                 call edx
// 00655f0b  83c404               add esp, 4
// 00655f0e  84c0                 test al, al
// 00655f10  750f                 jne 0x655f21
// 00655f12  8b06                 mov eax, dword ptr [esi]
// 00655f14  895814               mov dword ptr [eax + 0x14], ebx
// 00655f17  8b0e                 mov ecx, dword ptr [esi]
// 00655f19  8b11                 mov edx, dword ptr [ecx]
// 00655f1b  56                   push esi
// 00655f1c  ffd2                 call edx
// 00655f1e  83c404               add esp, 4
// 00655f21  5f                   pop edi
// 00655f22  5e                   pop esi
// 00655f23  5b                   pop ebx
// 00655f24  c3                   ret 
// library jpeg-6b/jcmarker.c (function _write_tables_only)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
