// from server: 100% by auto
// roc 2009-06 005a30f0  unit: seg_005a0000  size: 621 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a30f0
//
// 005a30f0  81ec14010000         sub esp, 0x114
// 005a30f6  8b842418010000       mov eax, dword ptr [esp + 0x118]
// 005a30fd  8b8838010000         mov ecx, dword ptr [eax + 0x138]
// 005a3103  8b5018               mov edx, dword ptr [eax + 0x18]
// 005a3106  53                   push ebx
// 005a3107  8b9830010000         mov ebx, dword ptr [eax + 0x130]
// 005a310d  55                   push ebp
// 005a310e  56                   push esi
// 005a310f  8bb05c010000         mov esi, dword ptr [eax + 0x15c]
// 005a3115  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a3119  8b0a                 mov ecx, dword ptr [edx]
// 005a311b  894e10               mov dword ptr [esi + 0x10], ecx
// 005a311e  8b5018               mov edx, dword ptr [eax + 0x18]
// 005a3121  8b4a04               mov ecx, dword ptr [edx + 4]
// 005a3124  894e14               mov dword ptr [esi + 0x14], ecx
// 005a3127  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 005a312e  57                   push edi
// 005a312f  895c2418             mov dword ptr [esp + 0x18], ebx
// 005a3133  741b                 je 0x5a3150
// 005a3135  837e4400             cmp dword ptr [esi + 0x44], 0
// 005a3139  7515                 jne 0x5a3150
// 005a313b  8b5648               mov edx, dword ptr [esi + 0x48]
// 005a313e  52                   push edx
// 005a313f  8bc6                 mov eax, esi
// 005a3141  e8fafaffff           call 0x5a2c40
// 005a3146  8b84242c010000       mov eax, dword ptr [esp + 0x12c]
// 005a314d  83c404               add esp, 4
// 005a3150  8b902c010000         mov edx, dword ptr [eax + 0x12c]
// 005a3156  8b8c242c010000       mov ecx, dword ptr [esp + 0x12c]
// 005a315d  8b29                 mov ebp, dword ptr [ecx]
// 005a315f  8bc2                 mov eax, edx
// 005a3161  3bc3                 cmp eax, ebx
// 005a3163  896c2420             mov dword ptr [esp + 0x20], ebp
// 005a3167  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005a316f  7f2a                 jg 0x5a319b
// 005a3171  8b0c85f8e88c00       mov ecx, dword ptr [eax*4 + 0x8ce8f8]
// 005a3178  0fbf7c4d00           movsx edi, word ptr [ebp + ecx*2]
// 005a317d  85ff                 test edi, edi
// 005a317f  7d02                 jge 0x5a3183
// 005a3181  f7df                 neg edi
// 005a3183  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005a3187  d3ff                 sar edi, cl
// 005a3189  897c8424             mov dword ptr [esp + eax*4 + 0x24], edi
// 005a318d  83ff01               cmp edi, 1
// 005a3190  7504                 jne 0x5a3196
// 005a3192  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a3196  40                   inc eax
// 005a3197  3bc3                 cmp eax, ebx
// 005a3199  7ed6                 jle 0x5a3171
// 005a319b  8b7e40               mov edi, dword ptr [esi + 0x40]
// 005a319e  037e3c               add edi, dword ptr [esi + 0x3c]
// 005a31a1  8bca                 mov ecx, edx
// 005a31a3  33ed                 xor ebp, ebp
// 005a31a5  33db                 xor ebx, ebx
// 005a31a7  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 005a31ab  89542410             mov dword ptr [esp + 0x10], edx
// 005a31af  0f8f63010000         jg 0x5a3318
// 005a31b5  8b448c24             mov eax, dword ptr [esp + ecx*4 + 0x24]
// 005a31b9  89442414             mov dword ptr [esp + 0x14], eax
// 005a31bd  85c0                 test eax, eax
// 005a31bf  7506                 jne 0x5a31c7
// 005a31c1  45                   inc ebp
// 005a31c2  e918010000           jmp 0x5a32df
// 005a31c7  83fd0f               cmp ebp, 0xf
// 005a31ca  7e7a                 jle 0x5a3246
// 005a31cc  8d642400             lea esp, [esp]
// 005a31d0  3b4c241c             cmp ecx, dword ptr [esp + 0x1c]
// 005a31d4  7f70                 jg 0x5a3246
// 005a31d6  8bc6                 mov eax, esi
// 005a31d8  e8c3f9ffff           call 0x5a2ba0
// 005a31dd  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a31e1  8b4634               mov eax, dword ptr [esi + 0x34]
// 005a31e4  740c                 je 0x5a31f2
// 005a31e6  8b44865c             mov eax, dword ptr [esi + eax*4 + 0x5c]
// 005a31ea  ff80c0030000         inc dword ptr [eax + 0x3c0]
// 005a31f0  eb1b                 jmp 0x5a320d
// 005a31f2  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 005a31f6  0fbe90f0040000       movsx edx, byte ptr [eax + 0x4f0]
// 005a31fd  8b80c0030000         mov eax, dword ptr [eax + 0x3c0]
// 005a3203  52                   push edx
// 005a3204  50                   push eax
// 005a3205  e826f8ffff           call 0x5a2a30
// 005a320a  83c408               add esp, 8
// 005a320d  83ed10               sub ebp, 0x10
// 005a3210  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a3214  751e                 jne 0x5a3234
// 005a3216  85db                 test ebx, ebx
// 005a3218  761a                 jbe 0x5a3234
// 005a321a  8d9b00000000         lea ebx, [ebx]
// 005a3220  0fbe0f               movsx ecx, byte ptr [edi]
// 005a3223  6a01                 push 1
// 005a3225  51                   push ecx
// 005a3226  e805f8ffff           call 0x5a2a30
// 005a322b  83c408               add esp, 8
// 005a322e  47                   inc edi
// 005a322f  83eb01               sub ebx, 1
// 005a3232  75ec                 jne 0x5a3220
// 005a3234  8b7e40               mov edi, dword ptr [esi + 0x40]
// 005a3237  8b442414             mov eax, dword ptr [esp + 0x14]
// 005a323b  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a323f  33db                 xor ebx, ebx
// 005a3241  83fd0f               cmp ebp, 0xf
// 005a3244  7f8a                 jg 0x5a31d0
// 005a3246  83f801               cmp eax, 1
// 005a3249  7e0b                 jle 0x5a3256
// 005a324b  2401                 and al, 1
// 005a324d  88041f               mov byte ptr [edi + ebx], al
// 005a3250  43                   inc ebx
// 005a3251  e989000000           jmp 0x5a32df
// 005a3256  8bc6                 mov eax, esi
// 005a3258  e843f9ffff           call 0x5a2ba0
// 005a325d  8b4634               mov eax, dword ptr [esi + 0x34]
// 005a3260  c1e504               shl ebp, 4
// 005a3263  45                   inc ebp
// 005a3264  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a3268  740c                 je 0x5a3276
// 005a326a  8b54865c             mov edx, dword ptr [esi + eax*4 + 0x5c]
// 005a326e  ff04aa               inc dword ptr [edx + ebp*4]
// 005a3271  8d04aa               lea eax, [edx + ebp*4]
// 005a3274  eb19                 jmp 0x5a328f
// 005a3276  8b44864c             mov eax, dword ptr [esi + eax*4 + 0x4c]
// 005a327a  0fbe8c2800040000     movsx ecx, byte ptr [eax + ebp + 0x400]
// 005a3282  8b14a8               mov edx, dword ptr [eax + ebp*4]
// 005a3285  51                   push ecx
// 005a3286  52                   push edx
// 005a3287  e8a4f7ffff           call 0x5a2a30
// 005a328c  83c408               add esp, 8
// 005a328f  8b442410             mov eax, dword ptr [esp + 0x10]
// 005a3293  8b0c85f8e88c00       mov ecx, dword ptr [eax*4 + 0x8ce8f8]
// 005a329a  8b442420             mov eax, dword ptr [esp + 0x20]
// 005a329e  33d2                 xor edx, edx
// 005a32a0  66391448             cmp word ptr [eax + ecx*2], dx
// 005a32a4  6a01                 push 1
// 005a32a6  0f9dc2               setge dl
// 005a32a9  52                   push edx
// 005a32aa  e881f7ffff           call 0x5a2a30
// 005a32af  83c408               add esp, 8
// 005a32b2  807e0c00             cmp byte ptr [esi + 0xc], 0
// 005a32b6  751c                 jne 0x5a32d4
// 005a32b8  85db                 test ebx, ebx
// 005a32ba  7618                 jbe 0x5a32d4
// 005a32bc  8d642400             lea esp, [esp]
// 005a32c0  0fbe0f               movsx ecx, byte ptr [edi]
// 005a32c3  6a01                 push 1
// 005a32c5  51                   push ecx
// 005a32c6  e865f7ffff           call 0x5a2a30
// 005a32cb  83c408               add esp, 8
// 005a32ce  47                   inc edi
// 005a32cf  83eb01               sub ebx, 1
// 005a32d2  75ec                 jne 0x5a32c0
// 005a32d4  8b7e40               mov edi, dword ptr [esi + 0x40]
// 005a32d7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a32db  33db                 xor ebx, ebx
// 005a32dd  33ed                 xor ebp, ebp
// 005a32df  41                   inc ecx
// 005a32e0  3b4c2418             cmp ecx, dword ptr [esp + 0x18]
// 005a32e4  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a32e8  0f8ec7feffff         jle 0x5a31b5
// 005a32ee  85ed                 test ebp, ebp
// 005a32f0  7f04                 jg 0x5a32f6
// 005a32f2  85db                 test ebx, ebx
// 005a32f4  7622                 jbe 0x5a3318
// 005a32f6  ff4638               inc dword ptr [esi + 0x38]
// 005a32f9  8b4638               mov eax, dword ptr [esi + 0x38]
// 005a32fc  015e3c               add dword ptr [esi + 0x3c], ebx
// 005a32ff  8b4e3c               mov ecx, dword ptr [esi + 0x3c]
// 005a3302  3dff7f0000           cmp eax, 0x7fff
// 005a3307  7408                 je 0x5a3311
// 005a3309  81f9a9030000         cmp ecx, 0x3a9
// 005a330f  7607                 jbe 0x5a3318
// 005a3311  8bc6                 mov eax, esi
// 005a3313  e888f8ffff           call 0x5a2ba0
// 005a3318  8b842428010000       mov eax, dword ptr [esp + 0x128]
// 005a331f  8b5018               mov edx, dword ptr [eax + 0x18]
// 005a3322  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 005a3325  890a                 mov dword ptr [edx], ecx
// 005a3327  8b5018               mov edx, dword ptr [eax + 0x18]
// 005a332a  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005a332d  894a04               mov dword ptr [edx + 4], ecx
// 005a3330  8b80bc000000         mov eax, dword ptr [eax + 0xbc]
// 005a3336  85c0                 test eax, eax
// 005a3338  7416                 je 0x5a3350
// 005a333a  837e4400             cmp dword ptr [esi + 0x44], 0
// 005a333e  750d                 jne 0x5a334d
// 005a3340  8b5648               mov edx, dword ptr [esi + 0x48]
// 005a3343  42                   inc edx
// 005a3344  83e207               and edx, 7
// 005a3347  894644               mov dword ptr [esi + 0x44], eax
// 005a334a  895648               mov dword ptr [esi + 0x48], edx
// 005a334d  ff4e44               dec dword ptr [esi + 0x44]
// 005a3350  5f                   pop edi
// 005a3351  5e                   pop esi
// 005a3352  5d                   pop ebp
// 005a3353  b001                 mov al, 1
// 005a3355  5b                   pop ebx
// 005a3356  81c414010000         add esp, 0x114
// 005a335c  c3                   ret 
// library jpeg-6b/jcphuff.c (function _encode_mcu_AC_refine)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcphuff.c
