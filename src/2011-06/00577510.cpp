// from server: 100% by auto
// roc 2011-06 00577510  unit: seg_00570000  size: 601 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00577510
//
// 00577510  83ec0c               sub esp, 0xc
// 00577513  53                   push ebx
// 00577514  55                   push ebp
// 00577515  56                   push esi
// 00577516  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0057751a  8b866c010000         mov eax, dword ptr [esi + 0x16c]
// 00577520  33ed                 xor ebp, ebp
// 00577522  3bc5                 cmp eax, ebp
// 00577524  0f94c3               sete bl
// 00577527  57                   push edi
// 00577528  8bbe98010000         mov edi, dword ptr [esi + 0x198]
// 0057752e  32c9                 xor cl, cl
// 00577530  897c2418             mov dword ptr [esp + 0x18], edi
// 00577534  885c2420             mov byte ptr [esp + 0x20], bl
// 00577538  84db                 test bl, bl
// 0057753a  7408                 je 0x577544
// 0057753c  39ae70010000         cmp dword ptr [esi + 0x170], ebp
// 00577542  eb18                 jmp 0x57755c
// 00577544  8b9670010000         mov edx, dword ptr [esi + 0x170]
// 0057754a  3bc2                 cmp eax, edx
// 0057754c  7f05                 jg 0x577553
// 0057754e  83fa40               cmp edx, 0x40
// 00577551  7c02                 jl 0x577555
// 00577553  b101                 mov cl, 1
// 00577555  83be2401000001       cmp dword ptr [esi + 0x124], 1
// 0057755c  7402                 je 0x577560
// 0057755e  b101                 mov cl, 1
// 00577560  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 00577566  3bc5                 cmp eax, ebp
// 00577568  740b                 je 0x577575
// 0057756a  48                   dec eax
// 0057756b  398678010000         cmp dword ptr [esi + 0x178], eax
// 00577571  7402                 je 0x577575
// 00577573  b101                 mov cl, 1
// 00577575  83be780100000d       cmp dword ptr [esi + 0x178], 0xd
// 0057757c  7f04                 jg 0x577582
// 0057757e  84c9                 test cl, cl
// 00577580  743f                 je 0x5775c1
// 00577582  8b06                 mov eax, dword ptr [esi]
// 00577584  c7401410000000       mov dword ptr [eax + 0x14], 0x10
// 0057758b  8b0e                 mov ecx, dword ptr [esi]
// 0057758d  8b966c010000         mov edx, dword ptr [esi + 0x16c]
// 00577593  895118               mov dword ptr [ecx + 0x18], edx
// 00577596  8b06                 mov eax, dword ptr [esi]
// 00577598  8b8e70010000         mov ecx, dword ptr [esi + 0x170]
// 0057759e  89481c               mov dword ptr [eax + 0x1c], ecx
// 005775a1  8b16                 mov edx, dword ptr [esi]
// 005775a3  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 005775a9  894220               mov dword ptr [edx + 0x20], eax
// 005775ac  8b0e                 mov ecx, dword ptr [esi]
// 005775ae  8b9678010000         mov edx, dword ptr [esi + 0x178]
// 005775b4  895124               mov dword ptr [ecx + 0x24], edx
// 005775b7  8b06                 mov eax, dword ptr [esi]
// 005775b9  8b08                 mov ecx, dword ptr [eax]
// 005775bb  56                   push esi
// 005775bc  ffd1                 call ecx
// 005775be  83c404               add esp, 4
// 005775c1  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 005775c7  896c2410             mov dword ptr [esp + 0x10], ebp
// 005775cb  0f8ecf000000         jle 0x5776a0
// 005775d1  8d9628010000         lea edx, [esi + 0x128]
// 005775d7  89542414             mov dword ptr [esp + 0x14], edx
// 005775db  eb03                 jmp 0x5775e0
// 005775dd  8d4900               lea ecx, [ecx]
// 005775e0  8b442414             mov eax, dword ptr [esp + 0x14]
// 005775e4  8b08                 mov ecx, dword ptr [eax]
// 005775e6  8b5904               mov ebx, dword ptr [ecx + 4]
// 005775e9  8beb                 mov ebp, ebx
// 005775eb  c1e508               shl ebp, 8
// 005775ee  03ae8c000000         add ebp, dword ptr [esi + 0x8c]
// 005775f4  807c242000           cmp byte ptr [esp + 0x20], 0
// 005775f9  752a                 jne 0x577625
// 005775fb  837d0000             cmp dword ptr [ebp], 0
// 005775ff  7d24                 jge 0x577625
// 00577601  8b16                 mov edx, dword ptr [esi]
// 00577603  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 0057760a  8b06                 mov eax, dword ptr [esi]
// 0057760c  895818               mov dword ptr [eax + 0x18], ebx
// 0057760f  8b0e                 mov ecx, dword ptr [esi]
// 00577611  c7411c00000000       mov dword ptr [ecx + 0x1c], 0
// 00577618  8b16                 mov edx, dword ptr [esi]
// 0057761a  8b4204               mov eax, dword ptr [edx + 4]
// 0057761d  6aff                 push -1
// 0057761f  56                   push esi
// 00577620  ffd0                 call eax
// 00577622  83c408               add esp, 8
// 00577625  8bbe6c010000         mov edi, dword ptr [esi + 0x16c]
// 0057762b  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 00577631  7f49                 jg 0x57767c
// 00577633  8b44bd00             mov eax, dword ptr [ebp + edi*4]
// 00577637  33c9                 xor ecx, ecx
// 00577639  85c0                 test eax, eax
// 0057763b  0f9cc1               setl cl
// 0057763e  49                   dec ecx
// 0057763f  23c1                 and eax, ecx
// 00577641  398674010000         cmp dword ptr [esi + 0x174], eax
// 00577647  7420                 je 0x577669
// 00577649  8b16                 mov edx, dword ptr [esi]
// 0057764b  c7421473000000       mov dword ptr [edx + 0x14], 0x73
// 00577652  8b06                 mov eax, dword ptr [esi]
// 00577654  895818               mov dword ptr [eax + 0x18], ebx
// 00577657  8b0e                 mov ecx, dword ptr [esi]
// 00577659  89791c               mov dword ptr [ecx + 0x1c], edi
// 0057765c  8b16                 mov edx, dword ptr [esi]
// 0057765e  8b4204               mov eax, dword ptr [edx + 4]
// 00577661  6aff                 push -1
// 00577663  56                   push esi
// 00577664  ffd0                 call eax
// 00577666  83c408               add esp, 8
// 00577669  8b8e78010000         mov ecx, dword ptr [esi + 0x178]
// 0057766f  894cbd00             mov dword ptr [ebp + edi*4], ecx
// 00577673  47                   inc edi
// 00577674  3bbe70010000         cmp edi, dword ptr [esi + 0x170]
// 0057767a  7eb7                 jle 0x577633
// 0057767c  8b442410             mov eax, dword ptr [esp + 0x10]
// 00577680  8344241404           add dword ptr [esp + 0x14], 4
// 00577685  40                   inc eax
// 00577686  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 0057768c  89442410             mov dword ptr [esp + 0x10], eax
// 00577690  0f8c4affffff         jl 0x5775e0
// 00577696  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0057769a  8a5c2420             mov bl, byte ptr [esp + 0x20]
// 0057769e  33ed                 xor ebp, ebp
// 005776a0  39ae74010000         cmp dword ptr [esi + 0x174], ebp
// 005776a6  7516                 jne 0x5776be
// 005776a8  84db                 test bl, bl
// 005776aa  7409                 je 0x5776b5
// 005776ac  c74704d06b5700       mov dword ptr [edi + 4], 0x576bd0
// 005776b3  eb1d                 jmp 0x5776d2
// 005776b5  c74704106e5700       mov dword ptr [edi + 4], 0x576e10
// 005776bc  eb14                 jmp 0x5776d2
// 005776be  84db                 test bl, bl
// 005776c0  7409                 je 0x5776cb
// 005776c2  c7470450705700       mov dword ptr [edi + 4], 0x577050
// 005776c9  eb07                 jmp 0x5776d2
// 005776cb  c7470430715700       mov dword ptr [edi + 4], 0x577130
// 005776d2  39ae24010000         cmp dword ptr [esi + 0x124], ebp
// 005776d8  896c2410             mov dword ptr [esp + 0x10], ebp
// 005776dc  7e6d                 jle 0x57774b
// 005776de  8d6f18               lea ebp, [edi + 0x18]
// 005776e1  8d9e28010000         lea ebx, [esi + 0x128]
// 005776e7  807c242000           cmp byte ptr [esp + 0x20], 0
// 005776ec  8b03                 mov eax, dword ptr [ebx]
// 005776ee  741c                 je 0x57770c
// 005776f0  83be7401000000       cmp dword ptr [esi + 0x174], 0
// 005776f7  7532                 jne 0x57772b
// 005776f9  8b4014               mov eax, dword ptr [eax + 0x14]
// 005776fc  8d54872c             lea edx, [edi + eax*4 + 0x2c]
// 00577700  52                   push edx
// 00577701  50                   push eax
// 00577702  6a01                 push 1
// 00577704  56                   push esi
// 00577705  e846e9ffff           call 0x576050
// 0057770a  eb1c                 jmp 0x577728
// 0057770c  8b4018               mov eax, dword ptr [eax + 0x18]
// 0057770f  8d7c872c             lea edi, [edi + eax*4 + 0x2c]
// 00577713  57                   push edi
// 00577714  50                   push eax
// 00577715  6a00                 push 0
// 00577717  56                   push esi
// 00577718  e833e9ffff           call 0x576050
// 0057771d  8b07                 mov eax, dword ptr [edi]
// 0057771f  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00577723  89413c               mov dword ptr [ecx + 0x3c], eax
// 00577726  8bf9                 mov edi, ecx
// 00577728  83c410               add esp, 0x10
// 0057772b  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057772f  c7450000000000       mov dword ptr [ebp], 0
// 00577736  40                   inc eax
// 00577737  83c304               add ebx, 4
// 0057773a  83c504               add ebp, 4
// 0057773d  3b8624010000         cmp eax, dword ptr [esi + 0x124]
// 00577743  89442410             mov dword ptr [esp + 0x10], eax
// 00577747  7c9e                 jl 0x5776e7
// 00577749  33ed                 xor ebp, ebp
// 0057774b  896f10               mov dword ptr [edi + 0x10], ebp
// 0057774e  896f0c               mov dword ptr [edi + 0xc], ebp
// 00577751  896f14               mov dword ptr [edi + 0x14], ebp
// 00577754  c6470800             mov byte ptr [edi + 8], 0
// 00577758  8b96fc000000         mov edx, dword ptr [esi + 0xfc]
// 0057775e  895728               mov dword ptr [edi + 0x28], edx
// 00577761  5f                   pop edi
// 00577762  5e                   pop esi
// 00577763  5d                   pop ebp
// 00577764  5b                   pop ebx
// 00577765  83c40c               add esp, 0xc
// 00577768  c3                   ret 
// library jpeg-6b/jdphuff.c (function _start_pass_phuff_decoder)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdphuff.c
