// from server: 100% by auto
// roc 2012-06 00668640  unit: seg_00660000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00668640
//
// 00668640  81ec14010000         sub esp, 0x114
// 00668646  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0066864d  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 00668653  8b5018               mov edx, dword ptr [eax + 0x18]
// 00668656  53                   push ebx
// 00668657  8b9830010000         mov ebx, dword ptr [eax + 0x130]
// 0066865d  55                   push ebp
// 0066865e  56                   push esi
// 0066865f  8bb05c010000         mov esi, dword ptr [eax + 0x15c]
// 00668665  894c2410             mov dword ptr [esp + 0x10], ecx
// 00668669  8b0a                 mov ecx, dword ptr [edx]
// 0066866b  894e10               mov dword ptr [esi + 0x10], ecx
// 0066866e  8b5018               mov edx, dword ptr [eax + 0x18]
// 00668671  8b4a04               mov ecx, dword ptr [edx + 4]
// 00668674  894e14               mov dword ptr [esi + 0x14], ecx
// 00668677  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 0066867e  57                   push edi
// 0066867f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00668683  741b                 je 0x6686a0
// 00668685  837e4400             cmp dword ptr [esi + 0x44], 0
// 00668689  7515                 jne 0x6686a0
// 0066868b  8b5648               mov edx, dword ptr [esi + 0x48]
// 0066868e  52                   push edx
// 0066868f  8bc6                 mov eax, esi
// 00668691  e8fafaffff           call 0x668190
// 00668696  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 0066869d  83c404               add esp, 4
// 006686a0  8b902c010000         mov edx, dword ptr [eax + 0x12c]
// 006686a6  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 006686ad  8b29                 mov ebp, dword ptr [ecx]
// 006686af  8bc2                 mov eax, edx
// 006686b1  3bc3                 cmp eax, ebx
// 006686b3  896c2420             mov dword ptr [esp + 0x20], ebp
// 006686b7  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 006686bf  7f2a                 jg 0x6686eb
// 006686c1  8b0c854097b800       mov ecx, dword ptr [eax*4 + 0xb89740]
// 006686c8  0fbf7c4d00           movsx edi, word ptr [ebp + ecx*2]
// 006686cd  85ff                 test edi, edi
// 006686cf  7d02                 jge 0x6686d3
// 006686d1  f7df                 neg edi
// 006686d3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006686d7  d3ff                 sar edi, cl
// 006686d9  897c8424             mov dword ptr [esp + eax*4 + 0x24], edi
// 006686dd  83ff01               cmp edi, 1
// 006686e0  7504                 jne 0x6686e6
// 006686e2  8944241c             mov dword ptr [esp + 0x1c], eax
// 006686e6  40                   inc eax
// 006686e7  3bc3                 cmp eax, ebx
// 006686e9  7ed6                 jle 0x6686c1
// 006686eb  8b7e40               mov edi, dword ptr [esi + 0x40]
// 006686ee  037e3c               add edi, dword ptr [esi + 0x3c]
// 006686f1  8bca                 mov ecx, edx
// 006686f3  33ed                 xor ebp, ebp
// 006686f5  33db                 xor ebx, ebx
// 006686f7  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 006686fb  89542410             mov dword ptr [esp + 0x10], edx
// 006686ff  0f8f63010000         jg 0x668868
// 00668705  8b448c24             mov eax, dword ptr [esp + ecx*4 + 0x24]
// 00668709  89442414             mov dword ptr [esp + 0x14], eax
// 0066870d  85c0                 test eax, eax
// 0066870f  7506                 jne 0x668717
// 00668711  45                   inc ebp
// 00668712  e918010000           jmp 0x66882f
// 00668717  83fd0f               cmp ebp, 0xf
// 0066871a  7e7a                 jle 0x668796
// 0066871c  8d642400             lea esp, [esp]
// 00668720  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00668724  7f70                 jg 0x668796
// 00668726  8bc6                 mov eax, esi
// 00668728  e8c3f9ffff           call 0x6680f0
// 0066872d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00668731  8b4634               mov eax, dword ptr [esi + 0x34]
// 00668734  740c                 je 0x668742
// 00668736  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 0066873a  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 00668740  eb1b                 jmp 0x66875d
// 00668742  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00668746  0fbe90f0040000       movsx edx, byte ptr [eax + 0x4f0]
// 0066874d  8b80c0030000         mov eax, dword ptr [eax + 0x3c0]
// 00668753  52                   push edx
// 00668754  50                   push eax
// 00668755  e826f8ffff           call 0x667f80
// 0066875a  83c408               add esp, 8
// 0066875d  83ed10               sub ebp, 0x10
// 00668760  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00668764  751e                 jne 0x668784
// 00668766  85db                 test ebx, ebx
// 00668768  761a                 jbe 0x668784
// 0066876a  8d9b00000000         lea ebx, [ebx]
// 00668770  0fbe0f               movsx ecx, byte ptr [edi]
// 00668773  6a01                 push 1
// 00668775  51                   push ecx
// 00668776  e805f8ffff           call 0x667f80
// 0066877b  83c408               add esp, 8
// 0066877e  47                   inc edi
// 0066877f  83eb01               sub ebx, 1
// 00668782  75ec                 jne 0x668770
// 00668784  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00668787  8b442414             mov eax, dword ptr [esp + 0x14]
// 0066878b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066878f  33db                 xor ebx, ebx
// 00668791  83fd0f               cmp ebp, 0xf
// 00668794  7f8a                 jg 0x668720
// 00668796  83f801               cmp eax, 1
// 00668799  7e0b                 jle 0x6687a6
// 0066879b  2401                 and al, 1
// 0066879d  88041f               mov byte ptr [edi + ebx], al
// 006687a0  43                   inc ebx
// 006687a1  e989000000           jmp 0x66882f
// 006687a6  8bc6                 mov eax, esi
// 006687a8  e843f9ffff           call 0x6680f0
// 006687ad  8b4634               mov eax, dword ptr [esi + 0x34]
// 006687b0  c1e504               shl ebp, 4
// 006687b3  45                   inc ebp
// 006687b4  807e0c00             cmp byte ptr [esi + 0xc], 0
// 006687b8  740c                 je 0x6687c6
// 006687ba  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 006687be  ff04aa               inc dword ptr [edx + ebp*4]
// 006687c1  8d04aa               lea eax, [edx + ebp*4]
// 006687c4  eb19                 jmp 0x6687df
// 006687c6  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 006687ca  0fbe8c2800040000     movsx ecx, byte ptr [eax + ebp + 0x400]
// 006687d2  8b14a8               mov edx, dword ptr [eax + ebp*4]
// 006687d5  51                   push ecx
// 006687d6  52                   push edx
// 006687d7  e8a4f7ffff           call 0x667f80
// 006687dc  83c408               add esp, 8
// 006687df  8b442410             mov eax, dword ptr [esp + 0x10]
// 006687e3  8b0c854097b800       mov ecx, dword ptr [eax*4 + 0xb89740]
// 006687ea  8b442420             mov eax, dword ptr [esp + 0x20]
// 006687ee  33d2                 xor edx, edx
// 006687f0  66391448             cmp word ptr [eax + ecx*2], dx
// 006687f4  6a01                 push 1
// 006687f6  0f9dc2               setge dl
// 006687f9  52                   push edx
// 006687fa  e881f7ffff           call 0x667f80
// 006687ff  83c408               add esp, 8
// 00668802  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00668806  751c                 jne 0x668824
// 00668808  85db                 test ebx, ebx
// 0066880a  7618                 jbe 0x668824
// 0066880c  8d642400             lea esp, [esp]
// 00668810  0fbe0f               movsx ecx, byte ptr [edi]
// 00668813  6a01                 push 1
// 00668815  51                   push ecx
// 00668816  e865f7ffff           call 0x667f80
// 0066881b  83c408               add esp, 8
// 0066881e  47                   inc edi
// 0066881f  83eb01               sub ebx, 1
// 00668822  75ec                 jne 0x668810
// 00668824  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00668827  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0066882b  33db                 xor ebx, ebx
// 0066882d  33ed                 xor ebp, ebp
// 0066882f  41                   inc ecx
// 00668830  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00668834  894c2410             mov dword ptr [esp + 0x10], ecx
// 00668838  0f8ec7feffff         jle 0x668705
// 0066883e  85ed                 test ebp, ebp
// 00668840  7f04                 jg 0x668846
// 00668842  85db                 test ebx, ebx
// 00668844  7622                 jbe 0x668868
// 00668846  ff4638               inc dword ptr [esi + 0x38]
// 00668849  8b4638               mov eax, dword ptr [esi + 0x38]
// 0066884c  015e3c               add dword ptr [esi + 0x3c], ebx
// 0066884f  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00668852  3dff7f0000           cmp eax, 0x7fff
// 00668857  7408                 je 0x668861
// 00668859  81f9a9030000         cmp ecx, 0x3a9
// 0066885f  7607                 jbe 0x668868
// 00668861  8bc6                 mov eax, esi
// 00668863  e888f8ffff           call 0x6680f0
// 00668868  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0066886f  8b5018               mov edx, dword ptr [eax + 0x18]
// 00668872  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00668875  890a                 mov dword ptr [edx], ecx
// 00668877  8b5018               mov edx, dword ptr [eax + 0x18]
// 0066887a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0066887d  894a04               mov dword ptr [edx + 4], ecx
// 00668880  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00668886  85c0                 test eax, eax
// 00668888  7416                 je 0x6688a0
// 0066888a  837e4400             cmp dword ptr [esi + 0x44], 0
// 0066888e  750d                 jne 0x66889d
// 00668890  8b5648               mov edx, dword ptr [esi + 0x48]
// 00668893  42                   inc edx
// 00668894  83e207               and edx, 7
// 00668897  894644               mov dword ptr [esi + 0x44], eax
// 0066889a  895648               mov dword ptr [esi + 0x48], edx
// 0066889d  ff4e44               dec dword ptr [esi + 0x44]
// 006688a0  5f                   pop edi
// 006688a1  5e                   pop esi
// 006688a2  5d                   pop ebp
// 006688a3  b001                 mov al, 1
// 006688a5  5b                   pop ebx
// 006688a6  81c414010000         add esp, 0x114
// 006688ac  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
