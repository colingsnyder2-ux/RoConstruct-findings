// roc 2009-12 00624510  unit: seg_00620000  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00624510
//
// 00624510  81ec2c080000         sub esp, 0x82c
// 00624516  53                   push ebx
// 00624517  33c0                 xor eax, eax
// 00624519  55                   push ebp
// 0062451a  56                   push esi
// 0062451b  57                   push edi
// 0062451c  6804040000           push 0x404
// 00624521  50                   push eax
// 00624522  89442418             mov dword ptr [esp + 0x18], eax
// 00624526  8944241c             mov dword ptr [esp + 0x1c], eax
// 0062452a  89442420             mov dword ptr [esp + 0x20], eax
// 0062452e  89442424             mov dword ptr [esp + 0x24], eax
// 00624532  89442428             mov dword ptr [esp + 0x28], eax
// 00624536  8944242c             mov dword ptr [esp + 0x2c], eax
// 0062453a  89442430             mov dword ptr [esp + 0x30], eax
// 0062453e  89442434             mov dword ptr [esp + 0x34], eax
// 00624542  88442438             mov byte ptr [esp + 0x38], al
// 00624546  8d44243c             lea eax, [esp + 0x3c]
// 0062454a  50                   push eax
// 0062454b  e854051d00           call 0x7f4aa4
// 00624550  8b9c2454080000       mov ebx, dword ptr [esp + 0x854]
// 00624557  83c40c               add esp, 0xc
// 0062455a  b901010000           mov ecx, 0x101
// 0062455f  83c8ff               or eax, 0xffffffff
// 00624562  8dbc2438040000       lea edi, [esp + 0x438]
// 00624569  bd01000000           mov ebp, 1
// 0062456e  f3ab                 rep stosd dword ptr es:[edi], eax
// 00624570  89ab00040000         mov dword ptr [ebx + 0x400], ebp
// 00624576  83c8ff               or eax, 0xffffffff
// 00624579  be00ca9a3b           mov esi, 0x3b9aca00
// 0062457e  33c9                 xor ecx, ecx
// 00624580  8b148b               mov edx, dword ptr [ebx + ecx*4]
// 00624583  85d2                 test edx, edx
// 00624585  7408                 je 0x62458f
// 00624587  3bd6                 cmp edx, esi
// 00624589  7f04                 jg 0x62458f
// 0062458b  8bf2                 mov esi, edx
// 0062458d  8bc1                 mov eax, ecx
// 0062458f  03cd                 add ecx, ebp
// 00624591  81f900010000         cmp ecx, 0x100
// 00624597  7ee7                 jle 0x624580
// 00624599  83caff               or edx, 0xffffffff
// 0062459c  bf00ca9a3b           mov edi, 0x3b9aca00
// 006245a1  33c9                 xor ecx, ecx
// 006245a3  8b348b               mov esi, dword ptr [ebx + ecx*4]
// 006245a6  85f6                 test esi, esi
// 006245a8  740c                 je 0x6245b6
// 006245aa  3bf7                 cmp esi, edi
// 006245ac  7f08                 jg 0x6245b6
// 006245ae  3bc8                 cmp ecx, eax
// 006245b0  7404                 je 0x6245b6
// 006245b2  8bfe                 mov edi, esi
// 006245b4  8bd1                 mov edx, ecx
// 006245b6  03cd                 add ecx, ebp
// 006245b8  81f900010000         cmp ecx, 0x100
// 006245be  7ee3                 jle 0x6245a3
// 006245c0  85d2                 test edx, edx
// 006245c2  0f8c84000000         jl 0x62464c
// 006245c8  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 006245cb  010c83               add dword ptr [ebx + eax*4], ecx
// 006245ce  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 006245d2  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 006245da  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 006245e1  c7049300000000       mov dword ptr [ebx + edx*4], 0
// 006245e8  7c1d                 jl 0x624607
// 006245ea  8d9b00000000         lea ebx, [ebx]
// 006245f0  8b01                 mov eax, dword ptr [ecx]
// 006245f2  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 006245f6  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 006245fe  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 00624605  7de9                 jge 0x6245f0
// 00624607  016c9434             add dword ptr [esp + edx*4 + 0x34], ebp
// 0062460b  89948438040000       mov dword ptr [esp + eax*4 + 0x438], edx
// 00624612  83bc943804000000     cmp dword ptr [esp + edx*4 + 0x438], 0
// 0062461a  8d849438040000       lea eax, [esp + edx*4 + 0x438]
// 00624621  0f8c4fffffff         jl 0x624576
// 00624627  eb07                 jmp 0x624630
// 00624629  8da42400000000       lea esp, [esp]
// 00624630  8b00                 mov eax, dword ptr [eax]
// 00624632  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 00624636  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 0062463e  8d848438040000       lea eax, [esp + eax*4 + 0x438]
// 00624645  7de9                 jge 0x624630
// 00624647  e92affffff           jmp 0x624576
// 0062464c  8b9c2440080000       mov ebx, dword ptr [esp + 0x840]
// 00624653  33ff                 xor edi, edi
// 00624655  8d6f27               lea ebp, [edi + 0x27]
// 00624658  8b74bc34             mov esi, dword ptr [esp + edi*4 + 0x34]
// 0062465c  85f6                 test esi, esi
// 0062465e  741c                 je 0x62467c
// 00624660  83fe20               cmp esi, 0x20
// 00624663  7e0f                 jle 0x624674
// 00624665  8b13                 mov edx, dword ptr [ebx]
// 00624667  896a14               mov dword ptr [edx + 0x14], ebp
// 0062466a  8b03                 mov eax, dword ptr [ebx]
// 0062466c  8b08                 mov ecx, dword ptr [eax]
// 0062466e  53                   push ebx
// 0062466f  ffd1                 call ecx
// 00624671  83c404               add esp, 4
// 00624674  fe443410             inc byte ptr [esp + esi + 0x10]
// 00624678  8d443410             lea eax, [esp + esi + 0x10]
// 0062467c  47                   inc edi
// 0062467d  81ff00010000         cmp edi, 0x100
// 00624683  7ed3                 jle 0x624658
// 00624685  be10000000           mov esi, 0x10
// 0062468a  b91e000000           mov ecx, 0x1e
// 0062468f  8bd6                 mov edx, esi
// 00624691  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 00624696  763d                 jbe 0x6246d5
// 00624698  eb06                 jmp 0x6246a0
// 0062469a  8d9b00000000         lea ebx, [ebx]
// 006246a0  807c0c1000           cmp byte ptr [esp + ecx + 0x10], 0
// 006246a5  8bc1                 mov eax, ecx
// 006246a7  750f                 jne 0x6246b8
// 006246a9  8da42400000000       lea esp, [esp]
// 006246b0  48                   dec eax
// 006246b1  807c041000           cmp byte ptr [esp + eax + 0x10], 0
// 006246b6  74f8                 je 0x6246b0
// 006246b8  80440c12fe           add byte ptr [esp + ecx + 0x12], 0xfe
// 006246bd  fe440c11             inc byte ptr [esp + ecx + 0x11]
// 006246c1  8044041102           add byte ptr [esp + eax + 0x11], 2
// 006246c6  fe4c0410             dec byte ptr [esp + eax + 0x10]
// 006246ca  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 006246cf  8d440410             lea eax, [esp + eax + 0x10]
// 006246d3  77cb                 ja 0x6246a0
// 006246d5  49                   dec ecx
// 006246d6  83ee01               sub esi, 1
// 006246d9  75b6                 jne 0x624691
// 006246db  807c242000           cmp byte ptr [esp + 0x20], 0
// 006246e0  7508                 jne 0x6246ea
// 006246e2  4a                   dec edx
// 006246e3  807c141000           cmp byte ptr [esp + edx + 0x10], 0
// 006246e8  74f8                 je 0x6246e2
// 006246ea  fe4c1410             dec byte ptr [esp + edx + 0x10]
// 006246ee  8b8c2444080000       mov ecx, dword ptr [esp + 0x844]
// 006246f5  8d441410             lea eax, [esp + edx + 0x10]
// 006246f9  8b542410             mov edx, dword ptr [esp + 0x10]
// 006246fd  8b442414             mov eax, dword ptr [esp + 0x14]
// 00624701  8911                 mov dword ptr [ecx], edx
// 00624703  8b542418             mov edx, dword ptr [esp + 0x18]
// 00624707  894104               mov dword ptr [ecx + 4], eax
// 0062470a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062470e  895108               mov dword ptr [ecx + 8], edx
// 00624711  8a542420             mov dl, byte ptr [esp + 0x20]
// 00624715  89410c               mov dword ptr [ecx + 0xc], eax
// 00624718  885110               mov byte ptr [ecx + 0x10], dl
// 0062471b  33d2                 xor edx, edx
// 0062471d  be01000000           mov esi, 1
// 00624722  33c0                 xor eax, eax
// 00624724  39748434             cmp dword ptr [esp + eax*4 + 0x34], esi
// 00624728  7505                 jne 0x62472f
// 0062472a  88440a11             mov byte ptr [edx + ecx + 0x11], al
// 0062472e  42                   inc edx
// 0062472f  40                   inc eax
// 00624730  3dff000000           cmp eax, 0xff
// 00624735  7eed                 jle 0x624724
// 00624737  46                   inc esi
// 00624738  83fe20               cmp esi, 0x20
// 0062473b  7ee5                 jle 0x624722
// 0062473d  5f                   pop edi
// 0062473e  5e                   pop esi
// 0062473f  5d                   pop ebp
// 00624740  c6811101000000       mov byte ptr [ecx + 0x111], 0
// 00624747  5b                   pop ebx
// 00624748  81c42c080000         add esp, 0x82c
// 0062474e  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_gen_optimal_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
