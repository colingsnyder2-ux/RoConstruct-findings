// from server: 100% by auto
// roc 2008-06 00538200  unit: seg_00530000  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00538200
//
// 00538200  81ec2c080000         sub esp, 0x82c
// 00538206  53                   push ebx
// 00538207  33c0                 xor eax, eax
// 00538209  55                   push ebp
// 0053820a  56                   push esi
// 0053820b  57                   push edi
// 0053820c  6804040000           push 0x404
// 00538211  50                   push eax
// 00538212  89442418             mov dword ptr [esp + 0x18], eax
// 00538216  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053821a  89442420             mov dword ptr [esp + 0x20], eax
// 0053821e  89442424             mov dword ptr [esp + 0x24], eax
// 00538222  89442428             mov dword ptr [esp + 0x28], eax
// 00538226  8944242c             mov dword ptr [esp + 0x2c], eax
// 0053822a  89442430             mov dword ptr [esp + 0x30], eax
// 0053822e  89442434             mov dword ptr [esp + 0x34], eax
// 00538232  88442438             mov byte ptr [esp + 0x38], al
// 00538236  8d44243c             lea eax, [esp + 0x3c]
// 0053823a  50                   push eax
// 0053823b  e8c4941600           call 0x6a1704
// 00538240  8b9c2454080000       mov ebx, dword ptr [esp + 0x854]
// 00538247  83c40c               add esp, 0xc
// 0053824a  b901010000           mov ecx, 0x101
// 0053824f  83c8ff               or eax, 0xffffffff
// 00538252  8dbc2438040000       lea edi, [esp + 0x438]
// 00538259  bd01000000           mov ebp, 1
// 0053825e  f3ab                 rep stosd dword ptr es:[edi], eax
// 00538260  89ab00040000         mov dword ptr [ebx + 0x400], ebp
// 00538266  83c8ff               or eax, 0xffffffff
// 00538269  be00ca9a3b           mov esi, 0x3b9aca00
// 0053826e  33c9                 xor ecx, ecx
// 00538270  8b148b               mov edx, dword ptr [ebx + ecx*4]
// 00538273  85d2                 test edx, edx
// 00538275  7408                 je 0x53827f
// 00538277  3bd6                 cmp edx, esi
// 00538279  7f04                 jg 0x53827f
// 0053827b  8bf2                 mov esi, edx
// 0053827d  8bc1                 mov eax, ecx
// 0053827f  03cd                 add ecx, ebp
// 00538281  81f900010000         cmp ecx, 0x100
// 00538287  7ee7                 jle 0x538270
// 00538289  83caff               or edx, 0xffffffff
// 0053828c  bf00ca9a3b           mov edi, 0x3b9aca00
// 00538291  33c9                 xor ecx, ecx
// 00538293  8b348b               mov esi, dword ptr [ebx + ecx*4]
// 00538296  85f6                 test esi, esi
// 00538298  740c                 je 0x5382a6
// 0053829a  3bf7                 cmp esi, edi
// 0053829c  7f08                 jg 0x5382a6
// 0053829e  3bc8                 cmp ecx, eax
// 005382a0  7404                 je 0x5382a6
// 005382a2  8bfe                 mov edi, esi
// 005382a4  8bd1                 mov edx, ecx
// 005382a6  03cd                 add ecx, ebp
// 005382a8  81f900010000         cmp ecx, 0x100
// 005382ae  7ee3                 jle 0x538293
// 005382b0  85d2                 test edx, edx
// 005382b2  0f8c84000000         jl 0x53833c
// 005382b8  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 005382bb  010c83               add dword ptr [ebx + eax*4], ecx
// 005382be  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 005382c2  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 005382ca  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 005382d1  c7049300000000       mov dword ptr [ebx + edx*4], 0
// 005382d8  7c1d                 jl 0x5382f7
// 005382da  8d9b00000000         lea ebx, [ebx]
// 005382e0  8b01                 mov eax, dword ptr [ecx]
// 005382e2  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 005382e6  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 005382ee  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 005382f5  7de9                 jge 0x5382e0
// 005382f7  016c9434             add dword ptr [esp + edx*4 + 0x34], ebp
// 005382fb  89948438040000       mov dword ptr [esp + eax*4 + 0x438], edx
// 00538302  83bc943804000000     cmp dword ptr [esp + edx*4 + 0x438], 0
// 0053830a  8d849438040000       lea eax, [esp + edx*4 + 0x438]
// 00538311  0f8c4fffffff         jl 0x538266
// 00538317  eb07                 jmp 0x538320
// 00538319  8da42400000000       lea esp, [esp]
// 00538320  8b00                 mov eax, dword ptr [eax]
// 00538322  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 00538326  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 0053832e  8d848438040000       lea eax, [esp + eax*4 + 0x438]
// 00538335  7de9                 jge 0x538320
// 00538337  e92affffff           jmp 0x538266
// 0053833c  8b9c2440080000       mov ebx, dword ptr [esp + 0x840]
// 00538343  33ff                 xor edi, edi
// 00538345  8d6f27               lea ebp, [edi + 0x27]
// 00538348  8b74bc34             mov esi, dword ptr [esp + edi*4 + 0x34]
// 0053834c  85f6                 test esi, esi
// 0053834e  741c                 je 0x53836c
// 00538350  83fe20               cmp esi, 0x20
// 00538353  7e0f                 jle 0x538364
// 00538355  8b13                 mov edx, dword ptr [ebx]
// 00538357  896a14               mov dword ptr [edx + 0x14], ebp
// 0053835a  8b03                 mov eax, dword ptr [ebx]
// 0053835c  8b08                 mov ecx, dword ptr [eax]
// 0053835e  53                   push ebx
// 0053835f  ffd1                 call ecx
// 00538361  83c404               add esp, 4
// 00538364  fe443410             inc byte ptr [esp + esi + 0x10]
// 00538368  8d443410             lea eax, [esp + esi + 0x10]
// 0053836c  47                   inc edi
// 0053836d  81ff00010000         cmp edi, 0x100
// 00538373  7ed3                 jle 0x538348
// 00538375  be10000000           mov esi, 0x10
// 0053837a  b91e000000           mov ecx, 0x1e
// 0053837f  8bd6                 mov edx, esi
// 00538381  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 00538386  763d                 jbe 0x5383c5
// 00538388  eb06                 jmp 0x538390
// 0053838a  8d9b00000000         lea ebx, [ebx]
// 00538390  807c0c1000           cmp byte ptr [esp + ecx + 0x10], 0
// 00538395  8bc1                 mov eax, ecx
// 00538397  750f                 jne 0x5383a8
// 00538399  8da42400000000       lea esp, [esp]
// 005383a0  48                   dec eax
// 005383a1  807c041000           cmp byte ptr [esp + eax + 0x10], 0
// 005383a6  74f8                 je 0x5383a0
// 005383a8  80440c12fe           add byte ptr [esp + ecx + 0x12], 0xfe
// 005383ad  fe440c11             inc byte ptr [esp + ecx + 0x11]
// 005383b1  8044041102           add byte ptr [esp + eax + 0x11], 2
// 005383b6  fe4c0410             dec byte ptr [esp + eax + 0x10]
// 005383ba  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 005383bf  8d440410             lea eax, [esp + eax + 0x10]
// 005383c3  77cb                 ja 0x538390
// 005383c5  49                   dec ecx
// 005383c6  83ee01               sub esi, 1
// 005383c9  75b6                 jne 0x538381
// 005383cb  807c242000           cmp byte ptr [esp + 0x20], 0
// 005383d0  7508                 jne 0x5383da
// 005383d2  4a                   dec edx
// 005383d3  807c141000           cmp byte ptr [esp + edx + 0x10], 0
// 005383d8  74f8                 je 0x5383d2
// 005383da  fe4c1410             dec byte ptr [esp + edx + 0x10]
// 005383de  8b8c2444080000       mov ecx, dword ptr [esp + 0x844]
// 005383e5  8d441410             lea eax, [esp + edx + 0x10]
// 005383e9  8b542410             mov edx, dword ptr [esp + 0x10]
// 005383ed  8b442414             mov eax, dword ptr [esp + 0x14]
// 005383f1  8911                 mov dword ptr [ecx], edx
// 005383f3  8b542418             mov edx, dword ptr [esp + 0x18]
// 005383f7  894104               mov dword ptr [ecx + 4], eax
// 005383fa  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005383fe  895108               mov dword ptr [ecx + 8], edx
// 00538401  8a542420             mov dl, byte ptr [esp + 0x20]
// 00538405  89410c               mov dword ptr [ecx + 0xc], eax
// 00538408  885110               mov byte ptr [ecx + 0x10], dl
// 0053840b  33d2                 xor edx, edx
// 0053840d  be01000000           mov esi, 1
// 00538412  33c0                 xor eax, eax
// 00538414  39748434             cmp dword ptr [esp + eax*4 + 0x34], esi
// 00538418  7505                 jne 0x53841f
// 0053841a  88440a11             mov byte ptr [edx + ecx + 0x11], al
// 0053841e  42                   inc edx
// 0053841f  40                   inc eax
// 00538420  3dff000000           cmp eax, 0xff
// 00538425  7eed                 jle 0x538414
// 00538427  46                   inc esi
// 00538428  83fe20               cmp esi, 0x20
// 0053842b  7ee5                 jle 0x538412
// 0053842d  5f                   pop edi
// 0053842e  5e                   pop esi
// 0053842f  5d                   pop ebp
// 00538430  c6811101000000       mov byte ptr [ecx + 0x111], 0
// 00538437  5b                   pop ebx
// 00538438  81c42c080000         add esp, 0x82c
// 0053843e  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_gen_optimal_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
