// roc 2010-06 00581260  unit: seg_00580000  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00581260
//
// 00581260  83ec0c               sub esp, 0xc
// 00581263  53                   push ebx
// 00581264  55                   push ebp
// 00581265  56                   push esi
// 00581266  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0058126a  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 00581270  33ed                 xor ebp, ebp
// 00581272  3bc5                 cmp eax, ebp
// 00581274  0f94c3               sete bl
// 00581277  57                   push edi
// 00581278  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0058127e  32c9                 xor cl, cl
// 00581280  897c2418             mov dword ptr [esp + 0x18], edi
// 00581284  885c2420             mov byte ptr [esp + 0x20], bl
// 00581288  84db                 test bl, bl
// 0058128a  7408                 je 0x581294
// 0058128c  39ae70010000         cmp dword ptr [esi + 0x170], ebp
// 00581292  eb18                 jmp 0x5812ac
// 00581294  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0058129a  3bc2                 cmp eax, edx
// 0058129c  7f05                 jg 0x5812a3
// 0058129e  83fa40               cmp edx, 0x40
// 005812a1  7c02                 jl 0x5812a5
// 005812a3  b101                 mov cl, 1
// 005812a5  83be2401000001       cmp dword ptr [esi + 0x124], 1
// 005812ac  7402                 je 0x5812b0
// 005812ae  b101                 mov cl, 1
// 005812b0  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 005812b6  3bc5                 cmp eax, ebp
// 005812b8  740b                 je 0x5812c5
// 005812ba  48                   dec eax
// 005812bb  398678010000         cmp dword ptr [esi + 0x178], eax
// 005812c1  7402                 je 0x5812c5
// 005812c3  b101                 mov cl, 1
// 005812c5  83be780100000d       cmp dword ptr [esi + 0x178], 0xd
// 005812cc  7f04                 jg 0x5812d2
// 005812ce  84c9                 test cl, cl
// 005812d0  743f                 je 0x581311
// 005812d2  8b06                 mov eax, dword ptr [esi]
// 005812d4  c7401410000000       mov dword ptr [eax + 0x14], 0x10
// 005812db  8b0e                 mov ecx, dword ptr [esi]
// 005812dd  8b966c010000         mov edx, dword ptr [esi + 0x16c]
// 005812e3  895118               mov dword ptr [ecx + 0x18], edx
// 005812e6  8b06                 mov eax, dword ptr [esi]
// 005812e8  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 005812ee  89481c               mov dword ptr [eax + 0x1c], ecx
// 005812f1  8b16                 mov edx, dword ptr [esi]
// 005812f3  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 005812f9  894220               mov dword ptr [edx + 0x20], eax
// 005812fc  8b0e                 mov ecx, dword ptr [esi]
// 005812fe  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 00581304  895124               mov dword ptr [ecx + 0x24], edx
// 00581307  8b06                 mov eax, dword ptr [esi]
// 00581309  8b08                 mov ecx, dword ptr [eax]
// 0058130b  56                   push esi
// 0058130c  ffd1                 call ecx
// 0058130e  83c404               add esp, 4
// 00581311  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 00581317  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058131b  0f8ecf000000         jle 0x5813f0
// 00581321  8d9628010000         lea edx, [esi + 0x128]
// 00581327  89542414             mov dword ptr [esp + 0x14], edx
// 0058132b  eb03                 jmp 0x581330
// 0058132d  8d4900               lea ecx, [ecx]
// 00581330  8b442414             mov eax, dword ptr [esp + 0x14]
// 00581334  8b08                 mov ecx, dword ptr [eax]
// 00581336  8b5904               mov ebx, dword ptr [ecx + 4]
// 00581339  8beb                 mov ebp, ebx
// 0058133b  c1e508               shl ebp, 8
// 0058133e  03ae8c000000         add ebp, dword ptr [esi + 0x8c]
// 00581344  807c242000           cmp byte ptr [esp + 0x20], 0
// 00581349  752a                 jne 0x581375
// 0058134b  837d0000             cmp dword ptr [ebp], 0
// 0058134f  7d24                 jge 0x581375
// 00581351  8b16                 mov edx, dword ptr [esi]
// 00581353  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 0058135a  8b06                 mov eax, dword ptr [esi]
// 0058135c  895818               mov dword ptr [eax + 0x18], ebx
// 0058135f  8b0e                 mov ecx, dword ptr [esi]
// 00581361  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 00581368  8b16                 mov edx, dword ptr [esi]
// 0058136a  8b4204               mov eax, dword ptr [edx + 4]
// 0058136d  6aff                 push -1
// 0058136f  56                   push esi
// 00581370  ffd0                 call eax
// 00581372  83c408               add esp, 8
// 00581375  8bbe6c010000         mov edi, dword ptr [esi + 0x16c]
// 0058137b  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 00581381  7f49                 jg 0x5813cc
// 00581383  8b44bd00             mov eax, dword ptr [ebp + edi*4]
// 00581387  33c9                 xor ecx, ecx
// 00581389  85c0                 test eax, eax
// 0058138b  0f9cc1               setl cl
// 0058138e  49                   dec ecx
// 0058138f  23c1                 and eax, ecx
// 00581391  398674010000         cmp dword ptr [esi + 0x174], eax
// 00581397  7420                 je 0x5813b9
// 00581399  8b16                 mov edx, dword ptr [esi]
// 0058139b  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 005813a2  8b06                 mov eax, dword ptr [esi]
// 005813a4  895818               mov dword ptr [eax + 0x18], ebx
// 005813a7  8b0e                 mov ecx, dword ptr [esi]
// 005813a9  89791c               mov dword ptr [ecx + 0x1c], edi
// 005813ac  8b16                 mov edx, dword ptr [esi]
// 005813ae  8b4204               mov eax, dword ptr [edx + 4]
// 005813b1  6aff                 push -1
// 005813b3  56                   push esi
// 005813b4  ffd0                 call eax
// 005813b6  83c408               add esp, 8
// 005813b9  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 005813bf  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 005813c3  47                   inc edi
// 005813c4  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 005813ca  7eb7                 jle 0x581383
// 005813cc  8b442410             mov eax, dword ptr [esp + 0x10]
// 005813d0  8344241404           add dword ptr [esp + 0x14], 4
// 005813d5  40                   inc eax
// 005813d6  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 005813dc  89442410             mov dword ptr [esp + 0x10], eax
// 005813e0  0f8c4affffff         jl 0x581330
// 005813e6  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005813ea  8a5c2420             mov bl, byte ptr [esp + 0x20]
// 005813ee  33ed                 xor ebp, ebp
// 005813f0  39ae74010000         cmp dword ptr [esi + 0x174], ebp
// 005813f6  7516                 jne 0x58140e
// 005813f8  84db                 test bl, bl
// 005813fa  7409                 je 0x581405
// 005813fc  c7470420095800       mov dword ptr [edi + 4], 0x580920
// 00581403  eb1d                 jmp 0x581422
// 00581405  c74704600b5800       mov dword ptr [edi + 4], 0x580b60
// 0058140c  eb14                 jmp 0x581422
// 0058140e  84db                 test bl, bl
// 00581410  7409                 je 0x58141b
// 00581412  c74704a00d5800       mov dword ptr [edi + 4], 0x580da0
// 00581419  eb07                 jmp 0x581422
// 0058141b  c74704800e5800       mov dword ptr [edi + 4], 0x580e80
// 00581422  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 00581428  896c2410             mov dword ptr [esp + 0x10], ebp
// 0058142c  7e6d                 jle 0x58149b
// 0058142e  8d6f18               lea ebp, [edi + 0x18]
// 00581431  8d9e28010000         lea ebx, [esi + 0x128]
// 00581437  807c242000           cmp byte ptr [esp + 0x20], 0
// 0058143c  8b03                 mov eax, dword ptr [ebx]
// 0058143e  741c                 je 0x58145c
// 00581440  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 00581447  7532                 jne 0x58147b
// 00581449  8b4014               mov eax, dword ptr [eax + 0x14]
// 0058144c  8d54872c             lea edx, [edi + eax*4 + 0x2c]
// 00581450  52                   push edx
// 00581451  50                   push eax
// 00581452  6a01                 push 1
// 00581454  56                   push esi
// 00581455  e846e9ffff           call 0x57fda0
// 0058145a  eb1c                 jmp 0x581478
// 0058145c  8b4018               mov eax, dword ptr [eax + 0x18]
// 0058145f  8d7c872c             lea edi, [edi + eax*4 + 0x2c]
// 00581463  57                   push edi
// 00581464  50                   push eax
// 00581465  6a00                 push 0
// 00581467  56                   push esi
// 00581468  e833e9ffff           call 0x57fda0
// 0058146d  8b07                 mov eax, dword ptr [edi]
// 0058146f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00581473  89413c               mov dword ptr [ecx + 0x3c], eax
// 00581476  8bf9                 mov edi, ecx
// 00581478  83c410               add esp, 0x10
// 0058147b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0058147f  c7450000000000       mov dword ptr [ebp], 0
// 00581486  40                   inc eax
// 00581487  83c304               add ebx, 4
// 0058148a  83c504               add ebp, 4
// 0058148d  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00581493  89442410             mov dword ptr [esp + 0x10], eax
// 00581497  7c9e                 jl 0x581437
// 00581499  33ed                 xor ebp, ebp
// 0058149b  896f10               mov dword ptr [edi + 0x10], ebp
// 0058149e  896f0c               mov dword ptr [edi + 0xc], ebp
// 005814a1  896f14               mov dword ptr [edi + 0x14], ebp
// 005814a4  c6470800             mov byte ptr [edi + 8], 0
// 005814a8  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 005814ae  895728               mov dword ptr [edi + 0x28], edx
// 005814b1  5f                   pop edi
// 005814b2  5e                   pop esi
// 005814b3  5d                   pop ebp
// 005814b4  5b                   pop ebx
// 005814b5  83c40c               add esp, 0xc
// 005814b8  c3                   ret 
// library jpeg-6b/jdphuff.c (function _start_pass_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
