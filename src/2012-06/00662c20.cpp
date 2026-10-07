// roc 2012-06 00662c20  unit: seg_00660000  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00662c20
//
// 00662c20  83ec0c               sub esp, 0xc
// 00662c23  53                   push ebx
// 00662c24  55                   push ebp
// 00662c25  56                   push esi
// 00662c26  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00662c2a  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 00662c30  33ed                 xor ebp, ebp
// 00662c32  3bc5                 cmp eax, ebp
// 00662c34  0f94c3               sete bl
// 00662c37  57                   push edi
// 00662c38  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 00662c3e  32c9                 xor cl, cl
// 00662c40  897c2418             mov dword ptr [esp + 0x18], edi
// 00662c44  885c2420             mov byte ptr [esp + 0x20], bl
// 00662c48  84db                 test bl, bl
// 00662c4a  7408                 je 0x662c54
// 00662c4c  39ae70010000         cmp dword ptr [esi + 0x170], ebp
// 00662c52  eb18                 jmp 0x662c6c
// 00662c54  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 00662c5a  3bc2                 cmp eax, edx
// 00662c5c  7f05                 jg 0x662c63
// 00662c5e  83fa40               cmp edx, 0x40
// 00662c61  7c02                 jl 0x662c65
// 00662c63  b101                 mov cl, 1
// 00662c65  83be2401000001       cmp dword ptr [esi + 0x124], 1
// 00662c6c  7402                 je 0x662c70
// 00662c6e  b101                 mov cl, 1
// 00662c70  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00662c76  3bc5                 cmp eax, ebp
// 00662c78  740b                 je 0x662c85
// 00662c7a  48                   dec eax
// 00662c7b  398678010000         cmp dword ptr [esi + 0x178], eax
// 00662c81  7402                 je 0x662c85
// 00662c83  b101                 mov cl, 1
// 00662c85  83be780100000d       cmp dword ptr [esi + 0x178], 0xd
// 00662c8c  7f04                 jg 0x662c92
// 00662c8e  84c9                 test cl, cl
// 00662c90  743f                 je 0x662cd1
// 00662c92  8b06                 mov eax, dword ptr [esi]
// 00662c94  c7401410000000       mov dword ptr [eax + 0x14], 0x10
// 00662c9b  8b0e                 mov ecx, dword ptr [esi]
// 00662c9d  8b966c010000         mov edx, dword ptr [esi + 0x16c]
// 00662ca3  895118               mov dword ptr [ecx + 0x18], edx
// 00662ca6  8b06                 mov eax, dword ptr [esi]
// 00662ca8  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 00662cae  89481c               mov dword ptr [eax + 0x1c], ecx
// 00662cb1  8b16                 mov edx, dword ptr [esi]
// 00662cb3  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00662cb9  894220               mov dword ptr [edx + 0x20], eax
// 00662cbc  8b0e                 mov ecx, dword ptr [esi]
// 00662cbe  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 00662cc4  895124               mov dword ptr [ecx + 0x24], edx
// 00662cc7  8b06                 mov eax, dword ptr [esi]
// 00662cc9  8b08                 mov ecx, dword ptr [eax]
// 00662ccb  56                   push esi
// 00662ccc  ffd1                 call ecx
// 00662cce  83c404               add esp, 4
// 00662cd1  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 00662cd7  896c2410             mov dword ptr [esp + 0x10], ebp
// 00662cdb  0f8ecf000000         jle 0x662db0
// 00662ce1  8d9628010000         lea edx, [esi + 0x128]
// 00662ce7  89542414             mov dword ptr [esp + 0x14], edx
// 00662ceb  eb03                 jmp 0x662cf0
// 00662ced  8d4900               lea ecx, [ecx]
// 00662cf0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00662cf4  8b08                 mov ecx, dword ptr [eax]
// 00662cf6  8b5904               mov ebx, dword ptr [ecx + 4]
// 00662cf9  8beb                 mov ebp, ebx
// 00662cfb  c1e508               shl ebp, 8
// 00662cfe  03ae8c000000         add ebp, dword ptr [esi + 0x8c]
// 00662d04  807c242000           cmp byte ptr [esp + 0x20], 0
// 00662d09  752a                 jne 0x662d35
// 00662d0b  837d0000             cmp dword ptr [ebp], 0
// 00662d0f  7d24                 jge 0x662d35
// 00662d11  8b16                 mov edx, dword ptr [esi]
// 00662d13  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 00662d1a  8b06                 mov eax, dword ptr [esi]
// 00662d1c  895818               mov dword ptr [eax + 0x18], ebx
// 00662d1f  8b0e                 mov ecx, dword ptr [esi]
// 00662d21  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 00662d28  8b16                 mov edx, dword ptr [esi]
// 00662d2a  8b4204               mov eax, dword ptr [edx + 4]
// 00662d2d  6aff                 push -1
// 00662d2f  56                   push esi
// 00662d30  ffd0                 call eax
// 00662d32  83c408               add esp, 8
// 00662d35  8bbe6c010000         mov edi, dword ptr [esi + 0x16c]
// 00662d3b  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 00662d41  7f49                 jg 0x662d8c
// 00662d43  8b44bd00             mov eax, dword ptr [ebp + edi*4]
// 00662d47  33c9                 xor ecx, ecx
// 00662d49  85c0                 test eax, eax
// 00662d4b  0f9cc1               setl cl
// 00662d4e  49                   dec ecx
// 00662d4f  23c1                 and eax, ecx
// 00662d51  398674010000         cmp dword ptr [esi + 0x174], eax
// 00662d57  7420                 je 0x662d79
// 00662d59  8b16                 mov edx, dword ptr [esi]
// 00662d5b  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 00662d62  8b06                 mov eax, dword ptr [esi]
// 00662d64  895818               mov dword ptr [eax + 0x18], ebx
// 00662d67  8b0e                 mov ecx, dword ptr [esi]
// 00662d69  89791c               mov dword ptr [ecx + 0x1c], edi
// 00662d6c  8b16                 mov edx, dword ptr [esi]
// 00662d6e  8b4204               mov eax, dword ptr [edx + 4]
// 00662d71  6aff                 push -1
// 00662d73  56                   push esi
// 00662d74  ffd0                 call eax
// 00662d76  83c408               add esp, 8
// 00662d79  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 00662d7f  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 00662d83  47                   inc edi
// 00662d84  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 00662d8a  7eb7                 jle 0x662d43
// 00662d8c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00662d90  8344241404           add dword ptr [esp + 0x14], 4
// 00662d95  40                   inc eax
// 00662d96  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00662d9c  89442410             mov dword ptr [esp + 0x10], eax
// 00662da0  0f8c4affffff         jl 0x662cf0
// 00662da6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00662daa  8a5c2420             mov bl, byte ptr [esp + 0x20]
// 00662dae  33ed                 xor ebp, ebp
// 00662db0  39ae74010000         cmp dword ptr [esi + 0x174], ebp
// 00662db6  7516                 jne 0x662dce
// 00662db8  84db                 test bl, bl
// 00662dba  7409                 je 0x662dc5
// 00662dbc  c74704e0226600       mov dword ptr [edi + 4], 0x6622e0
// 00662dc3  eb1d                 jmp 0x662de2
// 00662dc5  c7470420256600       mov dword ptr [edi + 4], 0x662520
// 00662dcc  eb14                 jmp 0x662de2
// 00662dce  84db                 test bl, bl
// 00662dd0  7409                 je 0x662ddb
// 00662dd2  c7470460276600       mov dword ptr [edi + 4], 0x662760
// 00662dd9  eb07                 jmp 0x662de2
// 00662ddb  c7470440286600       mov dword ptr [edi + 4], 0x662840
// 00662de2  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 00662de8  896c2410             mov dword ptr [esp + 0x10], ebp
// 00662dec  7e6d                 jle 0x662e5b
// 00662dee  8d6f18               lea ebp, [edi + 0x18]
// 00662df1  8d9e28010000         lea ebx, [esi + 0x128]
// 00662df7  807c242000           cmp byte ptr [esp + 0x20], 0
// 00662dfc  8b03                 mov eax, dword ptr [ebx]
// 00662dfe  741c                 je 0x662e1c
// 00662e00  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 00662e07  7532                 jne 0x662e3b
// 00662e09  8b4014               mov eax, dword ptr [eax + 0x14]
// 00662e0c  8d54872c             lea edx, [edi + eax*4 + 0x2c]
// 00662e10  52                   push edx
// 00662e11  50                   push eax
// 00662e12  6a01                 push 1
// 00662e14  56                   push esi
// 00662e15  e846e9ffff           call 0x661760
// 00662e1a  eb1c                 jmp 0x662e38
// 00662e1c  8b4018               mov eax, dword ptr [eax + 0x18]
// 00662e1f  8d7c872c             lea edi, [edi + eax*4 + 0x2c]
// 00662e23  57                   push edi
// 00662e24  50                   push eax
// 00662e25  6a00                 push 0
// 00662e27  56                   push esi
// 00662e28  e833e9ffff           call 0x661760
// 00662e2d  8b07                 mov eax, dword ptr [edi]
// 00662e2f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00662e33  89413c               mov dword ptr [ecx + 0x3c], eax
// 00662e36  8bf9                 mov edi, ecx
// 00662e38  83c410               add esp, 0x10
// 00662e3b  8b442410             mov eax, dword ptr [esp + 0x10]
// 00662e3f  c7450000000000       mov dword ptr [ebp], 0
// 00662e46  40                   inc eax
// 00662e47  83c304               add ebx, 4
// 00662e4a  83c504               add ebp, 4
// 00662e4d  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00662e53  89442410             mov dword ptr [esp + 0x10], eax
// 00662e57  7c9e                 jl 0x662df7
// 00662e59  33ed                 xor ebp, ebp
// 00662e5b  896f10               mov dword ptr [edi + 0x10], ebp
// 00662e5e  896f0c               mov dword ptr [edi + 0xc], ebp
// 00662e61  896f14               mov dword ptr [edi + 0x14], ebp
// 00662e64  c6470800             mov byte ptr [edi + 8], 0
// 00662e68  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 00662e6e  895728               mov dword ptr [edi + 0x28], edx
// 00662e71  5f                   pop edi
// 00662e72  5e                   pop esi
// 00662e73  5d                   pop ebp
// 00662e74  5b                   pop ebx
// 00662e75  83c40c               add esp, 0xc
// 00662e78  c3                   ret 
// library jpeg-6b/jdphuff.c (function _start_pass_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
