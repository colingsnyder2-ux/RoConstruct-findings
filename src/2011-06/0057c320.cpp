// from server: 100% by auto
// roc 2011-06 0057c320  unit: seg_00570000  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057c320
//
// 0057c320  81ec2c080000         sub esp, 0x82c
// 0057c326  53                   push ebx
// 0057c327  33c0                 xor eax, eax
// 0057c329  55                   push ebp
// 0057c32a  56                   push esi
// 0057c32b  57                   push edi
// 0057c32c  6804040000           push 0x404
// 0057c331  50                   push eax
// 0057c332  89442418             mov dword ptr [esp + 0x18], eax
// 0057c336  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057c33a  89442420             mov dword ptr [esp + 0x20], eax
// 0057c33e  89442424             mov dword ptr [esp + 0x24], eax
// 0057c342  89442428             mov dword ptr [esp + 0x28], eax
// 0057c346  8944242c             mov dword ptr [esp + 0x2c], eax
// 0057c34a  89442430             mov dword ptr [esp + 0x30], eax
// 0057c34e  89442434             mov dword ptr [esp + 0x34], eax
// 0057c352  88442438             mov byte ptr [esp + 0x38], al
// 0057c356  8d44243c             lea eax, [esp + 0x3c]
// 0057c35a  50                   push eax
// 0057c35b  e884ef2800           call 0x80b2e4
// 0057c360  8b9c2454080000       mov ebx, dword ptr [esp + 0x854]
// 0057c367  83c40c               add esp, 0xc
// 0057c36a  b901010000           mov ecx, 0x101
// 0057c36f  83c8ff               or eax, 0xffffffff
// 0057c372  8dbc2438040000       lea edi, [esp + 0x438]
// 0057c379  bd01000000           mov ebp, 1
// 0057c37e  f3ab                 rep stosd dword ptr es:[edi], eax
// 0057c380  89ab00040000         mov dword ptr [ebx + 0x400], ebp
// 0057c386  83c8ff               or eax, 0xffffffff
// 0057c389  be00ca9a3b           mov esi, 0x3b9aca00
// 0057c38e  33c9                 xor ecx, ecx
// 0057c390  8b148b               mov edx, dword ptr [ebx + ecx*4]
// 0057c393  85d2                 test edx, edx
// 0057c395  7408                 je 0x57c39f
// 0057c397  3bd6                 cmp edx, esi
// 0057c399  7f04                 jg 0x57c39f
// 0057c39b  8bf2                 mov esi, edx
// 0057c39d  8bc1                 mov eax, ecx
// 0057c39f  03cd                 add ecx, ebp
// 0057c3a1  81f900010000         cmp ecx, 0x100
// 0057c3a7  7ee7                 jle 0x57c390
// 0057c3a9  83caff               or edx, 0xffffffff
// 0057c3ac  bf00ca9a3b           mov edi, 0x3b9aca00
// 0057c3b1  33c9                 xor ecx, ecx
// 0057c3b3  8b348b               mov esi, dword ptr [ebx + ecx*4]
// 0057c3b6  85f6                 test esi, esi
// 0057c3b8  740c                 je 0x57c3c6
// 0057c3ba  3bf7                 cmp esi, edi
// 0057c3bc  7f08                 jg 0x57c3c6
// 0057c3be  3bc8                 cmp ecx, eax
// 0057c3c0  7404                 je 0x57c3c6
// 0057c3c2  8bfe                 mov edi, esi
// 0057c3c4  8bd1                 mov edx, ecx
// 0057c3c6  03cd                 add ecx, ebp
// 0057c3c8  81f900010000         cmp ecx, 0x100
// 0057c3ce  7ee3                 jle 0x57c3b3
// 0057c3d0  85d2                 test edx, edx
// 0057c3d2  0f8c84000000         jl 0x57c45c
// 0057c3d8  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 0057c3db  010c83               add dword ptr [ebx + eax*4], ecx
// 0057c3de  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 0057c3e2  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 0057c3ea  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 0057c3f1  c7049300000000       mov dword ptr [ebx + edx*4], 0
// 0057c3f8  7c1d                 jl 0x57c417
// 0057c3fa  8d9b00000000         lea ebx, [ebx]
// 0057c400  8b01                 mov eax, dword ptr [ecx]
// 0057c402  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 0057c406  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 0057c40e  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 0057c415  7de9                 jge 0x57c400
// 0057c417  016c9434             add dword ptr [esp + edx*4 + 0x34], ebp
// 0057c41b  89948438040000       mov dword ptr [esp + eax*4 + 0x438], edx
// 0057c422  83bc943804000000     cmp dword ptr [esp + edx*4 + 0x438], 0
// 0057c42a  8d849438040000       lea eax, [esp + edx*4 + 0x438]
// 0057c431  0f8c4fffffff         jl 0x57c386
// 0057c437  eb07                 jmp 0x57c440
// 0057c439  8da42400000000       lea esp, [esp]
// 0057c440  8b00                 mov eax, dword ptr [eax]
// 0057c442  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 0057c446  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 0057c44e  8d848438040000       lea eax, [esp + eax*4 + 0x438]
// 0057c455  7de9                 jge 0x57c440
// 0057c457  e92affffff           jmp 0x57c386
// 0057c45c  8b9c2440080000       mov ebx, dword ptr [esp + 0x840]
// 0057c463  33ff                 xor edi, edi
// 0057c465  8d6f27               lea ebp, [edi + 0x27]
// 0057c468  8b74bc34             mov esi, dword ptr [esp + edi*4 + 0x34]
// 0057c46c  85f6                 test esi, esi
// 0057c46e  741c                 je 0x57c48c
// 0057c470  83fe20               cmp esi, 0x20
// 0057c473  7e0f                 jle 0x57c484
// 0057c475  8b13                 mov edx, dword ptr [ebx]
// 0057c477  896a14               mov dword ptr [edx + 0x14], ebp
// 0057c47a  8b03                 mov eax, dword ptr [ebx]
// 0057c47c  8b08                 mov ecx, dword ptr [eax]
// 0057c47e  53                   push ebx
// 0057c47f  ffd1                 call ecx
// 0057c481  83c404               add esp, 4
// 0057c484  fe443410             inc byte ptr [esp + esi + 0x10]
// 0057c488  8d443410             lea eax, [esp + esi + 0x10]
// 0057c48c  47                   inc edi
// 0057c48d  81ff00010000         cmp edi, 0x100
// 0057c493  7ed3                 jle 0x57c468
// 0057c495  be10000000           mov esi, 0x10
// 0057c49a  b91e000000           mov ecx, 0x1e
// 0057c49f  8bd6                 mov edx, esi
// 0057c4a1  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 0057c4a6  763d                 jbe 0x57c4e5
// 0057c4a8  eb06                 jmp 0x57c4b0
// 0057c4aa  8d9b00000000         lea ebx, [ebx]
// 0057c4b0  807c0c1000           cmp byte ptr [esp + ecx + 0x10], 0
// 0057c4b5  8bc1                 mov eax, ecx
// 0057c4b7  750f                 jne 0x57c4c8
// 0057c4b9  8da42400000000       lea esp, [esp]
// 0057c4c0  48                   dec eax
// 0057c4c1  807c041000           cmp byte ptr [esp + eax + 0x10], 0
// 0057c4c6  74f8                 je 0x57c4c0
// 0057c4c8  80440c12fe           add byte ptr [esp + ecx + 0x12], 0xfe
// 0057c4cd  fe440c11             inc byte ptr [esp + ecx + 0x11]
// 0057c4d1  8044041102           add byte ptr [esp + eax + 0x11], 2
// 0057c4d6  fe4c0410             dec byte ptr [esp + eax + 0x10]
// 0057c4da  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 0057c4df  8d440410             lea eax, [esp + eax + 0x10]
// 0057c4e3  77cb                 ja 0x57c4b0
// 0057c4e5  49                   dec ecx
// 0057c4e6  83ee01               sub esi, 1
// 0057c4e9  75b6                 jne 0x57c4a1
// 0057c4eb  807c242000           cmp byte ptr [esp + 0x20], 0
// 0057c4f0  7508                 jne 0x57c4fa
// 0057c4f2  4a                   dec edx
// 0057c4f3  807c141000           cmp byte ptr [esp + edx + 0x10], 0
// 0057c4f8  74f8                 je 0x57c4f2
// 0057c4fa  fe4c1410             dec byte ptr [esp + edx + 0x10]
// 0057c4fe  8b8c2444080000       mov ecx, dword ptr [esp + 0x844]
// 0057c505  8d441410             lea eax, [esp + edx + 0x10]
// 0057c509  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057c50d  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057c511  8911                 mov dword ptr [ecx], edx
// 0057c513  8b542418             mov edx, dword ptr [esp + 0x18]
// 0057c517  894104               mov dword ptr [ecx + 4], eax
// 0057c51a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057c51e  895108               mov dword ptr [ecx + 8], edx
// 0057c521  8a542420             mov dl, byte ptr [esp + 0x20]
// 0057c525  89410c               mov dword ptr [ecx + 0xc], eax
// 0057c528  885110               mov byte ptr [ecx + 0x10], dl
// 0057c52b  33d2                 xor edx, edx
// 0057c52d  be01000000           mov esi, 1
// 0057c532  33c0                 xor eax, eax
// 0057c534  39748434             cmp dword ptr [esp + eax*4 + 0x34], esi
// 0057c538  7505                 jne 0x57c53f
// 0057c53a  88440a11             mov byte ptr [edx + ecx + 0x11], al
// 0057c53e  42                   inc edx
// 0057c53f  40                   inc eax
// 0057c540  3dff000000           cmp eax, 0xff
// 0057c545  7eed                 jle 0x57c534
// 0057c547  46                   inc esi
// 0057c548  83fe20               cmp esi, 0x20
// 0057c54b  7ee5                 jle 0x57c532
// 0057c54d  5f                   pop edi
// 0057c54e  5e                   pop esi
// 0057c54f  5d                   pop ebp
// 0057c550  c6811101000000       mov byte ptr [ecx + 0x111], 0
// 0057c557  5b                   pop ebx
// 0057c558  81c42c080000         add esp, 0x82c
// 0057c55e  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_gen_optimal_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
