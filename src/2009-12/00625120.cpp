// roc 2009-12 00625120  unit: seg_00620000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00625120
//
// 00625120  81ec14010000         sub esp, 0x114
// 00625126  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 0062512d  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 00625133  8b5018               mov edx, dword ptr [eax + 0x18]
// 00625136  53                   push ebx
// 00625137  8b9830010000         mov ebx, dword ptr [eax + 0x130]
// 0062513d  55                   push ebp
// 0062513e  56                   push esi
// 0062513f  8bb05c010000         mov esi, dword ptr [eax + 0x15c]
// 00625145  894c2410             mov dword ptr [esp + 0x10], ecx
// 00625149  8b0a                 mov ecx, dword ptr [edx]
// 0062514b  894e10               mov dword ptr [esi + 0x10], ecx
// 0062514e  8b5018               mov edx, dword ptr [eax + 0x18]
// 00625151  8b4a04               mov ecx, dword ptr [edx + 4]
// 00625154  894e14               mov dword ptr [esi + 0x14], ecx
// 00625157  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 0062515e  57                   push edi
// 0062515f  895c2418             mov dword ptr [esp + 0x18], ebx
// 00625163  741b                 je 0x625180
// 00625165  837e4400             cmp dword ptr [esi + 0x44], 0
// 00625169  7515                 jne 0x625180
// 0062516b  8b5648               mov edx, dword ptr [esi + 0x48]
// 0062516e  52                   push edx
// 0062516f  8bc6                 mov eax, esi
// 00625171  e8fafaffff           call 0x624c70
// 00625176  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 0062517d  83c404               add esp, 4
// 00625180  8b902c010000         mov edx, dword ptr [eax + 0x12c]
// 00625186  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 0062518d  8b29                 mov ebp, dword ptr [ecx]
// 0062518f  8bc2                 mov eax, edx
// 00625191  3bc3                 cmp eax, ebx
// 00625193  896c2420             mov dword ptr [esp + 0x20], ebp
// 00625197  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0062519f  7f2a                 jg 0x6251cb
// 006251a1  8b0c8598579c00       mov ecx, dword ptr [eax*4 + 0x9c5798]
// 006251a8  0fbf7c4d00           movsx edi, word ptr [ebp + ecx*2]
// 006251ad  85ff                 test edi, edi
// 006251af  7d02                 jge 0x6251b3
// 006251b1  f7df                 neg edi
// 006251b3  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006251b7  d3ff                 sar edi, cl
// 006251b9  897c8424             mov dword ptr [esp + eax*4 + 0x24], edi
// 006251bd  83ff01               cmp edi, 1
// 006251c0  7504                 jne 0x6251c6
// 006251c2  8944241c             mov dword ptr [esp + 0x1c], eax
// 006251c6  40                   inc eax
// 006251c7  3bc3                 cmp eax, ebx
// 006251c9  7ed6                 jle 0x6251a1
// 006251cb  8b7e40               mov edi, dword ptr [esi + 0x40]
// 006251ce  037e3c               add edi, dword ptr [esi + 0x3c]
// 006251d1  8bca                 mov ecx, edx
// 006251d3  33ed                 xor ebp, ebp
// 006251d5  33db                 xor ebx, ebx
// 006251d7  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 006251db  89542410             mov dword ptr [esp + 0x10], edx
// 006251df  0f8f63010000         jg 0x625348
// 006251e5  8b448c24             mov eax, dword ptr [esp + ecx*4 + 0x24]
// 006251e9  89442414             mov dword ptr [esp + 0x14], eax
// 006251ed  85c0                 test eax, eax
// 006251ef  7506                 jne 0x6251f7
// 006251f1  45                   inc ebp
// 006251f2  e918010000           jmp 0x62530f
// 006251f7  83fd0f               cmp ebp, 0xf
// 006251fa  7e7a                 jle 0x625276
// 006251fc  8d642400             lea esp, [esp]
// 00625200  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 00625204  7f70                 jg 0x625276
// 00625206  8bc6                 mov eax, esi
// 00625208  e8c3f9ffff           call 0x624bd0
// 0062520d  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00625211  8b4634               mov eax, dword ptr [esi + 0x34]
// 00625214  740c                 je 0x625222
// 00625216  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 0062521a  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 00625220  eb1b                 jmp 0x62523d
// 00625222  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 00625226  0fbe90f0040000       movsx edx, byte ptr [eax + 0x4f0]
// 0062522d  8b80c0030000         mov eax, dword ptr [eax + 0x3c0]
// 00625233  52                   push edx
// 00625234  50                   push eax
// 00625235  e826f8ffff           call 0x624a60
// 0062523a  83c408               add esp, 8
// 0062523d  83ed10               sub ebp, 0x10
// 00625240  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00625244  751e                 jne 0x625264
// 00625246  85db                 test ebx, ebx
// 00625248  761a                 jbe 0x625264
// 0062524a  8d9b00000000         lea ebx, [ebx]
// 00625250  0fbe0f               movsx ecx, byte ptr [edi]
// 00625253  6a01                 push 1
// 00625255  51                   push ecx
// 00625256  e805f8ffff           call 0x624a60
// 0062525b  83c408               add esp, 8
// 0062525e  47                   inc edi
// 0062525f  83eb01               sub ebx, 1
// 00625262  75ec                 jne 0x625250
// 00625264  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00625267  8b442414             mov eax, dword ptr [esp + 0x14]
// 0062526b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062526f  33db                 xor ebx, ebx
// 00625271  83fd0f               cmp ebp, 0xf
// 00625274  7f8a                 jg 0x625200
// 00625276  83f801               cmp eax, 1
// 00625279  7e0b                 jle 0x625286
// 0062527b  2401                 and al, 1
// 0062527d  88041f               mov byte ptr [edi + ebx], al
// 00625280  43                   inc ebx
// 00625281  e989000000           jmp 0x62530f
// 00625286  8bc6                 mov eax, esi
// 00625288  e843f9ffff           call 0x624bd0
// 0062528d  8b4634               mov eax, dword ptr [esi + 0x34]
// 00625290  c1e504               shl ebp, 4
// 00625293  45                   inc ebp
// 00625294  807e0c00             cmp byte ptr [esi + 0xc], 0
// 00625298  740c                 je 0x6252a6
// 0062529a  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 0062529e  ff04aa               inc dword ptr [edx + ebp*4]
// 006252a1  8d04aa               lea eax, [edx + ebp*4]
// 006252a4  eb19                 jmp 0x6252bf
// 006252a6  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 006252aa  0fbe8c2800040000     movsx ecx, byte ptr [eax + ebp + 0x400]
// 006252b2  8b14a8               mov edx, dword ptr [eax + ebp*4]
// 006252b5  51                   push ecx
// 006252b6  52                   push edx
// 006252b7  e8a4f7ffff           call 0x624a60
// 006252bc  83c408               add esp, 8
// 006252bf  8b442410             mov eax, dword ptr [esp + 0x10]
// 006252c3  8b0c8598579c00       mov ecx, dword ptr [eax*4 + 0x9c5798]
// 006252ca  8b442420             mov eax, dword ptr [esp + 0x20]
// 006252ce  33d2                 xor edx, edx
// 006252d0  66391448             cmp word ptr [eax + ecx*2], dx
// 006252d4  6a01                 push 1
// 006252d6  0f9dc2               setge dl
// 006252d9  52                   push edx
// 006252da  e881f7ffff           call 0x624a60
// 006252df  83c408               add esp, 8
// 006252e2  807e0c00             cmp byte ptr [esi + 0xc], 0
// 006252e6  751c                 jne 0x625304
// 006252e8  85db                 test ebx, ebx
// 006252ea  7618                 jbe 0x625304
// 006252ec  8d642400             lea esp, [esp]
// 006252f0  0fbe0f               movsx ecx, byte ptr [edi]
// 006252f3  6a01                 push 1
// 006252f5  51                   push ecx
// 006252f6  e865f7ffff           call 0x624a60
// 006252fb  83c408               add esp, 8
// 006252fe  47                   inc edi
// 006252ff  83eb01               sub ebx, 1
// 00625302  75ec                 jne 0x6252f0
// 00625304  8b7e40               mov edi, dword ptr [esi + 0x40]
// 00625307  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0062530b  33db                 xor ebx, ebx
// 0062530d  33ed                 xor ebp, ebp
// 0062530f  41                   inc ecx
// 00625310  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 00625314  894c2410             mov dword ptr [esp + 0x10], ecx
// 00625318  0f8ec7feffff         jle 0x6251e5
// 0062531e  85ed                 test ebp, ebp
// 00625320  7f04                 jg 0x625326
// 00625322  85db                 test ebx, ebx
// 00625324  7622                 jbe 0x625348
// 00625326  ff4638               inc dword ptr [esi + 0x38]
// 00625329  8b4638               mov eax, dword ptr [esi + 0x38]
// 0062532c  015e3c               add dword ptr [esi + 0x3c], ebx
// 0062532f  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 00625332  3dff7f0000           cmp eax, 0x7fff
// 00625337  7408                 je 0x625341
// 00625339  81f9a9030000         cmp ecx, 0x3a9
// 0062533f  7607                 jbe 0x625348
// 00625341  8bc6                 mov eax, esi
// 00625343  e888f8ffff           call 0x624bd0
// 00625348  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 0062534f  8b5018               mov edx, dword ptr [eax + 0x18]
// 00625352  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00625355  890a                 mov dword ptr [edx], ecx
// 00625357  8b5018               mov edx, dword ptr [eax + 0x18]
// 0062535a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0062535d  894a04               mov dword ptr [edx + 4], ecx
// 00625360  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 00625366  85c0                 test eax, eax
// 00625368  7416                 je 0x625380
// 0062536a  837e4400             cmp dword ptr [esi + 0x44], 0
// 0062536e  750d                 jne 0x62537d
// 00625370  8b5648               mov edx, dword ptr [esi + 0x48]
// 00625373  42                   inc edx
// 00625374  83e207               and edx, 7
// 00625377  894644               mov dword ptr [esi + 0x44], eax
// 0062537a  895648               mov dword ptr [esi + 0x48], edx
// 0062537d  ff4e44               dec dword ptr [esi + 0x44]
// 00625380  5f                   pop edi
// 00625381  5e                   pop esi
// 00625382  5d                   pop ebp
// 00625383  b001                 mov al, 1
// 00625385  5b                   pop ebx
// 00625386  81c414010000         add esp, 0x114
// 0062538c  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
