// roc 2009-06 005a24e0  unit: seg_005a0000  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a24e0
//
// 005a24e0  81ec2c080000         sub esp, 0x82c
// 005a24e6  53                   push ebx
// 005a24e7  33c0                 xor eax, eax
// 005a24e9  55                   push ebp
// 005a24ea  56                   push esi
// 005a24eb  57                   push edi
// 005a24ec  6804040000           push 0x404
// 005a24f1  50                   push eax
// 005a24f2  89442418             mov dword ptr [esp + 0x18], eax
// 005a24f6  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a24fa  89442420             mov dword ptr [esp + 0x20], eax
// 005a24fe  89442424             mov dword ptr [esp + 0x24], eax
// 005a2502  89442428             mov dword ptr [esp + 0x28], eax
// 005a2506  8944242c             mov dword ptr [esp + 0x2c], eax
// 005a250a  89442430             mov dword ptr [esp + 0x30], eax
// 005a250e  89442434             mov dword ptr [esp + 0x34], eax
// 005a2512  88442438             mov byte ptr [esp + 0x38], al
// 005a2516  8d44243c             lea eax, [esp + 0x3c]
// 005a251a  50                   push eax
// 005a251b  e854771700           call 0x719c74
// 005a2520  8b9c2454080000       mov ebx, dword ptr [esp + 0x854]
// 005a2527  83c40c               add esp, 0xc
// 005a252a  b901010000           mov ecx, 0x101
// 005a252f  83c8ff               or eax, 0xffffffff
// 005a2532  8dbc2438040000       lea edi, [esp + 0x438]
// 005a2539  bd01000000           mov ebp, 1
// 005a253e  f3ab                 rep stosd dword ptr es:[edi], eax
// 005a2540  89ab00040000         mov dword ptr [ebx + 0x400], ebp
// 005a2546  83c8ff               or eax, 0xffffffff
// 005a2549  be00ca9a3b           mov esi, 0x3b9aca00
// 005a254e  33c9                 xor ecx, ecx
// 005a2550  8b148b               mov edx, dword ptr [ebx + ecx*4]
// 005a2553  85d2                 test edx, edx
// 005a2555  7408                 je 0x5a255f
// 005a2557  3bd6                 cmp edx, esi
// 005a2559  7f04                 jg 0x5a255f
// 005a255b  8bf2                 mov esi, edx
// 005a255d  8bc1                 mov eax, ecx
// 005a255f  03cd                 add ecx, ebp
// 005a2561  81f900010000         cmp ecx, 0x100
// 005a2567  7ee7                 jle 0x5a2550
// 005a2569  83caff               or edx, 0xffffffff
// 005a256c  bf00ca9a3b           mov edi, 0x3b9aca00
// 005a2571  33c9                 xor ecx, ecx
// 005a2573  8b348b               mov esi, dword ptr [ebx + ecx*4]
// 005a2576  85f6                 test esi, esi
// 005a2578  740c                 je 0x5a2586
// 005a257a  3bf7                 cmp esi, edi
// 005a257c  7f08                 jg 0x5a2586
// 005a257e  3bc8                 cmp ecx, eax
// 005a2580  7404                 je 0x5a2586
// 005a2582  8bfe                 mov edi, esi
// 005a2584  8bd1                 mov edx, ecx
// 005a2586  03cd                 add ecx, ebp
// 005a2588  81f900010000         cmp ecx, 0x100
// 005a258e  7ee3                 jle 0x5a2573
// 005a2590  85d2                 test edx, edx
// 005a2592  0f8c84000000         jl 0x5a261c
// 005a2598  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 005a259b  010c83               add dword ptr [ebx + eax*4], ecx
// 005a259e  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 005a25a2  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 005a25aa  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 005a25b1  c7049300000000       mov dword ptr [ebx + edx*4], 0
// 005a25b8  7c1d                 jl 0x5a25d7
// 005a25ba  8d9b00000000         lea ebx, [ebx]
// 005a25c0  8b01                 mov eax, dword ptr [ecx]
// 005a25c2  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 005a25c6  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 005a25ce  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 005a25d5  7de9                 jge 0x5a25c0
// 005a25d7  016c9434             add dword ptr [esp + edx*4 + 0x34], ebp
// 005a25db  89948438040000       mov dword ptr [esp + eax*4 + 0x438], edx
// 005a25e2  83bc943804000000     cmp dword ptr [esp + edx*4 + 0x438], 0
// 005a25ea  8d849438040000       lea eax, [esp + edx*4 + 0x438]
// 005a25f1  0f8c4fffffff         jl 0x5a2546
// 005a25f7  eb07                 jmp 0x5a2600
// 005a25f9  8da42400000000       lea esp, [esp]
// 005a2600  8b00                 mov eax, dword ptr [eax]
// 005a2602  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 005a2606  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 005a260e  8d848438040000       lea eax, [esp + eax*4 + 0x438]
// 005a2615  7de9                 jge 0x5a2600
// 005a2617  e92affffff           jmp 0x5a2546
// 005a261c  8b9c2440080000       mov ebx, dword ptr [esp + 0x840]
// 005a2623  33ff                 xor edi, edi
// 005a2625  8d6f27               lea ebp, [edi + 0x27]
// 005a2628  8b74bc34             mov esi, dword ptr [esp + edi*4 + 0x34]
// 005a262c  85f6                 test esi, esi
// 005a262e  741c                 je 0x5a264c
// 005a2630  83fe20               cmp esi, 0x20
// 005a2633  7e0f                 jle 0x5a2644
// 005a2635  8b13                 mov edx, dword ptr [ebx]
// 005a2637  896a14               mov dword ptr [edx + 0x14], ebp
// 005a263a  8b03                 mov eax, dword ptr [ebx]
// 005a263c  8b08                 mov ecx, dword ptr [eax]
// 005a263e  53                   push ebx
// 005a263f  ffd1                 call ecx
// 005a2641  83c404               add esp, 4
// 005a2644  fe443410             inc byte ptr [esp + esi + 0x10]
// 005a2648  8d443410             lea eax, [esp + esi + 0x10]
// 005a264c  47                   inc edi
// 005a264d  81ff00010000         cmp edi, 0x100
// 005a2653  7ed3                 jle 0x5a2628
// 005a2655  be10000000           mov esi, 0x10
// 005a265a  b91e000000           mov ecx, 0x1e
// 005a265f  8bd6                 mov edx, esi
// 005a2661  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 005a2666  763d                 jbe 0x5a26a5
// 005a2668  eb06                 jmp 0x5a2670
// 005a266a  8d9b00000000         lea ebx, [ebx]
// 005a2670  807c0c1000           cmp byte ptr [esp + ecx + 0x10], 0
// 005a2675  8bc1                 mov eax, ecx
// 005a2677  750f                 jne 0x5a2688
// 005a2679  8da42400000000       lea esp, [esp]
// 005a2680  48                   dec eax
// 005a2681  807c041000           cmp byte ptr [esp + eax + 0x10], 0
// 005a2686  74f8                 je 0x5a2680
// 005a2688  80440c12fe           add byte ptr [esp + ecx + 0x12], 0xfe
// 005a268d  fe440c11             inc byte ptr [esp + ecx + 0x11]
// 005a2691  8044041102           add byte ptr [esp + eax + 0x11], 2
// 005a2696  fe4c0410             dec byte ptr [esp + eax + 0x10]
// 005a269a  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 005a269f  8d440410             lea eax, [esp + eax + 0x10]
// 005a26a3  77cb                 ja 0x5a2670
// 005a26a5  49                   dec ecx
// 005a26a6  83ee01               sub esi, 1
// 005a26a9  75b6                 jne 0x5a2661
// 005a26ab  807c242000           cmp byte ptr [esp + 0x20], 0
// 005a26b0  7508                 jne 0x5a26ba
// 005a26b2  4a                   dec edx
// 005a26b3  807c141000           cmp byte ptr [esp + edx + 0x10], 0
// 005a26b8  74f8                 je 0x5a26b2
// 005a26ba  fe4c1410             dec byte ptr [esp + edx + 0x10]
// 005a26be  8b8c2444080000       mov ecx, dword ptr [esp + 0x844]
// 005a26c5  8d441410             lea eax, [esp + edx + 0x10]
// 005a26c9  8b542410             mov edx, dword ptr [esp + 0x10]
// 005a26cd  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a26d1  8911                 mov dword ptr [ecx], edx
// 005a26d3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005a26d7  894104               mov dword ptr [ecx + 4], eax
// 005a26da  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a26de  895108               mov dword ptr [ecx + 8], edx
// 005a26e1  8a542420             mov dl, byte ptr [esp + 0x20]
// 005a26e5  89410c               mov dword ptr [ecx + 0xc], eax
// 005a26e8  885110               mov byte ptr [ecx + 0x10], dl
// 005a26eb  33d2                 xor edx, edx
// 005a26ed  be01000000           mov esi, 1
// 005a26f2  33c0                 xor eax, eax
// 005a26f4  39748434             cmp dword ptr [esp + eax*4 + 0x34], esi
// 005a26f8  7505                 jne 0x5a26ff
// 005a26fa  88440a11             mov byte ptr [edx + ecx + 0x11], al
// 005a26fe  42                   inc edx
// 005a26ff  40                   inc eax
// 005a2700  3dff000000           cmp eax, 0xff
// 005a2705  7eed                 jle 0x5a26f4
// 005a2707  46                   inc esi
// 005a2708  83fe20               cmp esi, 0x20
// 005a270b  7ee5                 jle 0x5a26f2
// 005a270d  5f                   pop edi
// 005a270e  5e                   pop esi
// 005a270f  5d                   pop ebp
// 005a2710  c6811101000000       mov byte ptr [ecx + 0x111], 0
// 005a2717  5b                   pop ebx
// 005a2718  81c42c080000         add esp, 0x82c
// 005a271e  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_gen_optimal_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
