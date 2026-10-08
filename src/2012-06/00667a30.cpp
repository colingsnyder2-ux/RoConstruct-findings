// from server: 100% by auto
// roc 2012-06 00667a30  unit: seg_00660000  size: 575 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00667a30
//
// 00667a30  81ec2c080000         sub esp, 0x82c
// 00667a36  53                   push ebx
// 00667a37  33c0                 xor eax, eax
// 00667a39  55                   push ebp
// 00667a3a  56                   push esi
// 00667a3b  57                   push edi
// 00667a3c  6804040000           push 0x404
// 00667a41  50                   push eax
// 00667a42  89442418             mov dword ptr [esp + 0x18], eax
// 00667a46  8944241c             mov dword ptr [esp + 0x1c], eax
// 00667a4a  89442420             mov dword ptr [esp + 0x20], eax
// 00667a4e  89442424             mov dword ptr [esp + 0x24], eax
// 00667a52  89442428             mov dword ptr [esp + 0x28], eax
// 00667a56  8944242c             mov dword ptr [esp + 0x2c], eax
// 00667a5a  89442430             mov dword ptr [esp + 0x30], eax
// 00667a5e  89442434             mov dword ptr [esp + 0x34], eax
// 00667a62  88442438             mov byte ptr [esp + 0x38], al
// 00667a66  8d44243c             lea eax, [esp + 0x3c]
// 00667a6a  50                   push eax
// 00667a6b  e804b93100           call 0x983374
// 00667a70  8b9c2454080000       mov ebx, dword ptr [esp + 0x854]
// 00667a77  83c40c               add esp, 0xc
// 00667a7a  b901010000           mov ecx, 0x101
// 00667a7f  83c8ff               or eax, 0xffffffff
// 00667a82  8dbc2438040000       lea edi, [esp + 0x438]
// 00667a89  bd01000000           mov ebp, 1
// 00667a8e  f3ab                 rep stosd dword ptr es:[edi], eax
// 00667a90  89ab00040000         mov dword ptr [ebx + 0x400], ebp
// 00667a96  83c8ff               or eax, 0xffffffff
// 00667a99  be00ca9a3b           mov esi, 0x3b9aca00
// 00667a9e  33c9                 xor ecx, ecx
// 00667aa0  8b148b               mov edx, dword ptr [ebx + ecx*4]
// 00667aa3  85d2                 test edx, edx
// 00667aa5  7408                 je 0x667aaf
// 00667aa7  3bd6                 cmp edx, esi
// 00667aa9  7f04                 jg 0x667aaf
// 00667aab  8bf2                 mov esi, edx
// 00667aad  8bc1                 mov eax, ecx
// 00667aaf  03cd                 add ecx, ebp
// 00667ab1  81f900010000         cmp ecx, 0x100
// 00667ab7  7ee7                 jle 0x667aa0
// 00667ab9  83caff               or edx, 0xffffffff
// 00667abc  bf00ca9a3b           mov edi, 0x3b9aca00
// 00667ac1  33c9                 xor ecx, ecx
// 00667ac3  8b348b               mov esi, dword ptr [ebx + ecx*4]
// 00667ac6  85f6                 test esi, esi
// 00667ac8  740c                 je 0x667ad6
// 00667aca  3bf7                 cmp esi, edi
// 00667acc  7f08                 jg 0x667ad6
// 00667ace  3bc8                 cmp ecx, eax
// 00667ad0  7404                 je 0x667ad6
// 00667ad2  8bfe                 mov edi, esi
// 00667ad4  8bd1                 mov edx, ecx
// 00667ad6  03cd                 add ecx, ebp
// 00667ad8  81f900010000         cmp ecx, 0x100
// 00667ade  7ee3                 jle 0x667ac3
// 00667ae0  85d2                 test edx, edx
// 00667ae2  0f8c84000000         jl 0x667b6c
// 00667ae8  8b0c93               mov ecx, dword ptr [ebx + edx*4]
// 00667aeb  010c83               add dword ptr [ebx + eax*4], ecx
// 00667aee  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 00667af2  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 00667afa  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 00667b01  c7049300000000       mov dword ptr [ebx + edx*4], 0
// 00667b08  7c1d                 jl 0x667b27
// 00667b0a  8d9b00000000         lea ebx, [ebx]
// 00667b10  8b01                 mov eax, dword ptr [ecx]
// 00667b12  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 00667b16  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 00667b1e  8d8c8438040000       lea ecx, [esp + eax*4 + 0x438]
// 00667b25  7de9                 jge 0x667b10
// 00667b27  016c9434             add dword ptr [esp + edx*4 + 0x34], ebp
// 00667b2b  89948438040000       mov dword ptr [esp + eax*4 + 0x438], edx
// 00667b32  83bc943804000000     cmp dword ptr [esp + edx*4 + 0x438], 0
// 00667b3a  8d849438040000       lea eax, [esp + edx*4 + 0x438]
// 00667b41  0f8c4fffffff         jl 0x667a96
// 00667b47  eb07                 jmp 0x667b50
// 00667b49  8da42400000000       lea esp, [esp]
// 00667b50  8b00                 mov eax, dword ptr [eax]
// 00667b52  016c8434             add dword ptr [esp + eax*4 + 0x34], ebp
// 00667b56  83bc843804000000     cmp dword ptr [esp + eax*4 + 0x438], 0
// 00667b5e  8d848438040000       lea eax, [esp + eax*4 + 0x438]
// 00667b65  7de9                 jge 0x667b50
// 00667b67  e92affffff           jmp 0x667a96
// 00667b6c  8b9c2440080000       mov ebx, dword ptr [esp + 0x840]
// 00667b73  33ff                 xor edi, edi
// 00667b75  8d6f27               lea ebp, [edi + 0x27]
// 00667b78  8b74bc34             mov esi, dword ptr [esp + edi*4 + 0x34]
// 00667b7c  85f6                 test esi, esi
// 00667b7e  741c                 je 0x667b9c
// 00667b80  83fe20               cmp esi, 0x20
// 00667b83  7e0f                 jle 0x667b94
// 00667b85  8b13                 mov edx, dword ptr [ebx]
// 00667b87  896a14               mov dword ptr [edx + 0x14], ebp
// 00667b8a  8b03                 mov eax, dword ptr [ebx]
// 00667b8c  8b08                 mov ecx, dword ptr [eax]
// 00667b8e  53                   push ebx
// 00667b8f  ffd1                 call ecx
// 00667b91  83c404               add esp, 4
// 00667b94  fe443410             inc byte ptr [esp + esi + 0x10]
// 00667b98  8d443410             lea eax, [esp + esi + 0x10]
// 00667b9c  47                   inc edi
// 00667b9d  81ff00010000         cmp edi, 0x100
// 00667ba3  7ed3                 jle 0x667b78
// 00667ba5  be10000000           mov esi, 0x10
// 00667baa  b91e000000           mov ecx, 0x1e
// 00667baf  8bd6                 mov edx, esi
// 00667bb1  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 00667bb6  763d                 jbe 0x667bf5
// 00667bb8  eb06                 jmp 0x667bc0
// 00667bba  8d9b00000000         lea ebx, [ebx]
// 00667bc0  807c0c1000           cmp byte ptr [esp + ecx + 0x10], 0
// 00667bc5  8bc1                 mov eax, ecx
// 00667bc7  750f                 jne 0x667bd8
// 00667bc9  8da42400000000       lea esp, [esp]
// 00667bd0  48                   dec eax
// 00667bd1  807c041000           cmp byte ptr [esp + eax + 0x10], 0
// 00667bd6  74f8                 je 0x667bd0
// 00667bd8  80440c12fe           add byte ptr [esp + ecx + 0x12], 0xfe
// 00667bdd  fe440c11             inc byte ptr [esp + ecx + 0x11]
// 00667be1  8044041102           add byte ptr [esp + eax + 0x11], 2
// 00667be6  fe4c0410             dec byte ptr [esp + eax + 0x10]
// 00667bea  807c0c1200           cmp byte ptr [esp + ecx + 0x12], 0
// 00667bef  8d440410             lea eax, [esp + eax + 0x10]
// 00667bf3  77cb                 ja 0x667bc0
// 00667bf5  49                   dec ecx
// 00667bf6  83ee01               sub esi, 1
// 00667bf9  75b6                 jne 0x667bb1
// 00667bfb  807c242000           cmp byte ptr [esp + 0x20], 0
// 00667c00  7508                 jne 0x667c0a
// 00667c02  4a                   dec edx
// 00667c03  807c141000           cmp byte ptr [esp + edx + 0x10], 0
// 00667c08  74f8                 je 0x667c02
// 00667c0a  fe4c1410             dec byte ptr [esp + edx + 0x10]
// 00667c0e  8b8c2444080000       mov ecx, dword ptr [esp + 0x844]
// 00667c15  8d441410             lea eax, [esp + edx + 0x10]
// 00667c19  8b542410             mov edx, dword ptr [esp + 0x10]
// 00667c1d  8b442414             mov eax, dword ptr [esp + 0x14]
// 00667c21  8911                 mov dword ptr [ecx], edx
// 00667c23  8b542418             mov edx, dword ptr [esp + 0x18]
// 00667c27  894104               mov dword ptr [ecx + 4], eax
// 00667c2a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00667c2e  895108               mov dword ptr [ecx + 8], edx
// 00667c31  8a542420             mov dl, byte ptr [esp + 0x20]
// 00667c35  89410c               mov dword ptr [ecx + 0xc], eax
// 00667c38  885110               mov byte ptr [ecx + 0x10], dl
// 00667c3b  33d2                 xor edx, edx
// 00667c3d  be01000000           mov esi, 1
// 00667c42  33c0                 xor eax, eax
// 00667c44  39748434             cmp dword ptr [esp + eax*4 + 0x34], esi
// 00667c48  7505                 jne 0x667c4f
// 00667c4a  88440a11             mov byte ptr [edx + ecx + 0x11], al
// 00667c4e  42                   inc edx
// 00667c4f  40                   inc eax
// 00667c50  3dff000000           cmp eax, 0xff
// 00667c55  7eed                 jle 0x667c44
// 00667c57  46                   inc esi
// 00667c58  83fe20               cmp esi, 0x20
// 00667c5b  7ee5                 jle 0x667c42
// 00667c5d  5f                   pop edi
// 00667c5e  5e                   pop esi
// 00667c5f  5d                   pop ebp
// 00667c60  c6811101000000       mov byte ptr [ecx + 0x111], 0
// 00667c67  5b                   pop ebx
// 00667c68  81c42c080000         add esp, 0x82c
// 00667c6e  c3                   ret 
// library jpeg-6b/jchuff.c (function _jpeg_gen_optimal_table)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jchuff.c
