// from server: 100% by auto
// roc 2008-06 005333f0  unit: seg_00530000  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005333f0
//
// 005333f0  83ec0c               sub esp, 0xc
// 005333f3  53                   push ebx
// 005333f4  55                   push ebp
// 005333f5  56                   push esi
// 005333f6  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005333fa  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 00533400  33ed                 xor ebp, ebp
// 00533402  3bc5                 cmp eax, ebp
// 00533404  0f94c3               sete bl
// 00533407  57                   push edi
// 00533408  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0053340e  32c9                 xor cl, cl
// 00533410  897c2418             mov dword ptr [esp + 0x18], edi
// 00533414  885c2420             mov byte ptr [esp + 0x20], bl
// 00533418  84db                 test bl, bl
// 0053341a  7408                 je 0x533424
// 0053341c  39ae70010000         cmp dword ptr [esi + 0x170], ebp
// 00533422  eb18                 jmp 0x53343c
// 00533424  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0053342a  3bc2                 cmp eax, edx
// 0053342c  7f05                 jg 0x533433
// 0053342e  83fa40               cmp edx, 0x40
// 00533431  7c02                 jl 0x533435
// 00533433  b101                 mov cl, 1
// 00533435  83be2401000001       cmp dword ptr [esi + 0x124], 1
// 0053343c  7402                 je 0x533440
// 0053343e  b101                 mov cl, 1
// 00533440  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00533446  3bc5                 cmp eax, ebp
// 00533448  740b                 je 0x533455
// 0053344a  48                   dec eax
// 0053344b  398678010000         cmp dword ptr [esi + 0x178], eax
// 00533451  7402                 je 0x533455
// 00533453  b101                 mov cl, 1
// 00533455  83be780100000d       cmp dword ptr [esi + 0x178], 0xd
// 0053345c  7f04                 jg 0x533462
// 0053345e  84c9                 test cl, cl
// 00533460  743f                 je 0x5334a1
// 00533462  8b06                 mov eax, dword ptr [esi]
// 00533464  c7401410000000       mov dword ptr [eax + 0x14], 0x10
// 0053346b  8b0e                 mov ecx, dword ptr [esi]
// 0053346d  8b966c010000         mov edx, dword ptr [esi + 0x16c]
// 00533473  895118               mov dword ptr [ecx + 0x18], edx
// 00533476  8b06                 mov eax, dword ptr [esi]
// 00533478  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 0053347e  89481c               mov dword ptr [eax + 0x1c], ecx
// 00533481  8b16                 mov edx, dword ptr [esi]
// 00533483  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00533489  894220               mov dword ptr [edx + 0x20], eax
// 0053348c  8b0e                 mov ecx, dword ptr [esi]
// 0053348e  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 00533494  895124               mov dword ptr [ecx + 0x24], edx
// 00533497  8b06                 mov eax, dword ptr [esi]
// 00533499  8b08                 mov ecx, dword ptr [eax]
// 0053349b  56                   push esi
// 0053349c  ffd1                 call ecx
// 0053349e  83c404               add esp, 4
// 005334a1  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 005334a7  896c2410             mov dword ptr [esp + 0x10], ebp
// 005334ab  0f8ecf000000         jle 0x533580
// 005334b1  8d9628010000         lea edx, [esi + 0x128]
// 005334b7  89542414             mov dword ptr [esp + 0x14], edx
// 005334bb  eb03                 jmp 0x5334c0
// 005334bd  8d4900               lea ecx, [ecx]
// 005334c0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005334c4  8b08                 mov ecx, dword ptr [eax]
// 005334c6  8b5904               mov ebx, dword ptr [ecx + 4]
// 005334c9  8beb                 mov ebp, ebx
// 005334cb  c1e508               shl ebp, 8
// 005334ce  03ae8c000000         add ebp, dword ptr [esi + 0x8c]
// 005334d4  807c242000           cmp byte ptr [esp + 0x20], 0
// 005334d9  752a                 jne 0x533505
// 005334db  837d0000             cmp dword ptr [ebp], 0
// 005334df  7d24                 jge 0x533505
// 005334e1  8b16                 mov edx, dword ptr [esi]
// 005334e3  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 005334ea  8b06                 mov eax, dword ptr [esi]
// 005334ec  895818               mov dword ptr [eax + 0x18], ebx
// 005334ef  8b0e                 mov ecx, dword ptr [esi]
// 005334f1  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 005334f8  8b16                 mov edx, dword ptr [esi]
// 005334fa  8b4204               mov eax, dword ptr [edx + 4]
// 005334fd  6aff                 push -1
// 005334ff  56                   push esi
// 00533500  ffd0                 call eax
// 00533502  83c408               add esp, 8
// 00533505  8bbe6c010000         mov edi, dword ptr [esi + 0x16c]
// 0053350b  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 00533511  7f49                 jg 0x53355c
// 00533513  8b44bd00             mov eax, dword ptr [ebp + edi*4]
// 00533517  33c9                 xor ecx, ecx
// 00533519  85c0                 test eax, eax
// 0053351b  0f9cc1               setl cl
// 0053351e  49                   dec ecx
// 0053351f  23c1                 and eax, ecx
// 00533521  398674010000         cmp dword ptr [esi + 0x174], eax
// 00533527  7420                 je 0x533549
// 00533529  8b16                 mov edx, dword ptr [esi]
// 0053352b  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 00533532  8b06                 mov eax, dword ptr [esi]
// 00533534  895818               mov dword ptr [eax + 0x18], ebx
// 00533537  8b0e                 mov ecx, dword ptr [esi]
// 00533539  89791c               mov dword ptr [ecx + 0x1c], edi
// 0053353c  8b16                 mov edx, dword ptr [esi]
// 0053353e  8b4204               mov eax, dword ptr [edx + 4]
// 00533541  6aff                 push -1
// 00533543  56                   push esi
// 00533544  ffd0                 call eax
// 00533546  83c408               add esp, 8
// 00533549  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0053354f  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 00533553  47                   inc edi
// 00533554  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 0053355a  7eb7                 jle 0x533513
// 0053355c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00533560  8344241404           add dword ptr [esp + 0x14], 4
// 00533565  40                   inc eax
// 00533566  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0053356c  89442410             mov dword ptr [esp + 0x10], eax
// 00533570  0f8c4affffff         jl 0x5334c0
// 00533576  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0053357a  8a5c2420             mov bl, byte ptr [esp + 0x20]
// 0053357e  33ed                 xor ebp, ebp
// 00533580  39ae74010000         cmp dword ptr [esi + 0x174], ebp
// 00533586  7516                 jne 0x53359e
// 00533588  84db                 test bl, bl
// 0053358a  7409                 je 0x533595
// 0053358c  c74704b02a5300       mov dword ptr [edi + 4], 0x532ab0
// 00533593  eb1d                 jmp 0x5335b2
// 00533595  c74704f02c5300       mov dword ptr [edi + 4], 0x532cf0
// 0053359c  eb14                 jmp 0x5335b2
// 0053359e  84db                 test bl, bl
// 005335a0  7409                 je 0x5335ab
// 005335a2  c74704302f5300       mov dword ptr [edi + 4], 0x532f30
// 005335a9  eb07                 jmp 0x5335b2
// 005335ab  c7470410305300       mov dword ptr [edi + 4], 0x533010
// 005335b2  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 005335b8  896c2410             mov dword ptr [esp + 0x10], ebp
// 005335bc  7e6d                 jle 0x53362b
// 005335be  8d6f18               lea ebp, [edi + 0x18]
// 005335c1  8d9e28010000         lea ebx, [esi + 0x128]
// 005335c7  807c242000           cmp byte ptr [esp + 0x20], 0
// 005335cc  8b03                 mov eax, dword ptr [ebx]
// 005335ce  741c                 je 0x5335ec
// 005335d0  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 005335d7  7532                 jne 0x53360b
// 005335d9  8b4014               mov eax, dword ptr [eax + 0x14]
// 005335dc  8d54872c             lea edx, [edi + eax*4 + 0x2c]
// 005335e0  52                   push edx
// 005335e1  50                   push eax
// 005335e2  6a01                 push 1
// 005335e4  56                   push esi
// 005335e5  e846e9ffff           call 0x531f30
// 005335ea  eb1c                 jmp 0x533608
// 005335ec  8b4018               mov eax, dword ptr [eax + 0x18]
// 005335ef  8d7c872c             lea edi, [edi + eax*4 + 0x2c]
// 005335f3  57                   push edi
// 005335f4  50                   push eax
// 005335f5  6a00                 push 0
// 005335f7  56                   push esi
// 005335f8  e833e9ffff           call 0x531f30
// 005335fd  8b07                 mov eax, dword ptr [edi]
// 005335ff  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00533603  89413c               mov dword ptr [ecx + 0x3c], eax
// 00533606  8bf9                 mov edi, ecx
// 00533608  83c410               add esp, 0x10
// 0053360b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0053360f  c7450000000000       mov dword ptr [ebp], 0
// 00533616  40                   inc eax
// 00533617  83c304               add ebx, 4
// 0053361a  83c504               add ebp, 4
// 0053361d  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00533623  89442410             mov dword ptr [esp + 0x10], eax
// 00533627  7c9e                 jl 0x5335c7
// 00533629  33ed                 xor ebp, ebp
// 0053362b  896f10               mov dword ptr [edi + 0x10], ebp
// 0053362e  896f0c               mov dword ptr [edi + 0xc], ebp
// 00533631  896f14               mov dword ptr [edi + 0x14], ebp
// 00533634  c6470800             mov byte ptr [edi + 8], 0
// 00533638  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0053363e  895728               mov dword ptr [edi + 0x28], edx
// 00533641  5f                   pop edi
// 00533642  5e                   pop esi
// 00533643  5d                   pop ebp
// 00533644  5b                   pop ebx
// 00533645  83c40c               add esp, 0xc
// 00533648  c3                   ret 
// library jpeg-6b/jdphuff.c (function _start_pass_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
