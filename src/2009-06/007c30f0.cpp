// roc 2009-06 007c30f0  unit: CXTPReportPaintManager  size: 746 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c30f0
//
// 007c30f0  6aff                 push -1
// 007c30f2  6848dc8700           push 0x87dc48
// 007c30f7  64a100000000         mov eax, dword ptr fs:[0]
// 007c30fd  50                   push eax
// 007c30fe  83ec50               sub esp, 0x50
// 007c3101  53                   push ebx
// 007c3102  55                   push ebp
// 007c3103  56                   push esi
// 007c3104  57                   push edi
// 007c3105  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c310a  33c4                 xor eax, esp
// 007c310c  50                   push eax
// 007c310d  8d442464             lea eax, [esp + 0x64]
// 007c3111  64a300000000         mov dword ptr fs:[0], eax
// 007c3117  8bf9                 mov edi, ecx
// 007c3119  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 007c311d  53                   push ebx
// 007c311e  8d4c2418             lea ecx, [esp + 0x18]
// 007c3122  e8a9d3faff           call 0x7704d0
// 007c3127  83bf5c02000000       cmp dword ptr [edi + 0x25c], 0
// 007c312e  0f8452010000         je 0x7c3286
// 007c3134  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 007c3138  7559                 jne 0x7c3193
// 007c313a  8db7d8020000         lea esi, [edi + 0x2d8]
// 007c3140  8bce                 mov ecx, esi
// 007c3142  e859dafcff           call 0x790ba0
// 007c3147  85c0                 test eax, eax
// 007c3149  7448                 je 0x7c3193
// 007c314b  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 007c3152  7410                 je 0x7c3164
// 007c3154  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 007c315b  7407                 je 0x7c3164
// 007c315d  b901000000           mov ecx, 1
// 007c3162  eb02                 jmp 0x7c3166
// 007c3164  33c9                 xor ecx, ecx
// 007c3166  8b442474             mov eax, dword ptr [esp + 0x74]
// 007c316a  85c0                 test eax, eax
// 007c316c  7403                 je 0x7c3171
// 007c316e  8b4004               mov eax, dword ptr [eax + 4]
// 007c3171  6a00                 push 0
// 007c3173  8d542418             lea edx, [esp + 0x18]
// 007c3177  52                   push edx
// 007c3178  33d2                 xor edx, edx
// 007c317a  85c9                 test ecx, ecx
// 007c317c  0f95c2               setne dl
// 007c317f  8bce                 mov ecx, esi
// 007c3181  8d541201             lea edx, [edx + edx + 1]
// 007c3185  52                   push edx
// 007c3186  6a01                 push 1
// 007c3188  50                   push eax
// 007c3189  e892d6fcff           call 0x790820
// 007c318e  e931020000           jmp 0x7c33c4
// 007c3193  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 007c3197  0f85e9000000         jne 0x7c3286
// 007c319d  8dafcc020000         lea ebp, [edi + 0x2cc]
// 007c31a3  8bcd                 mov ecx, ebp
// 007c31a5  e8f6d9fcff           call 0x790ba0
// 007c31aa  85c0                 test eax, eax
// 007c31ac  0f84d4000000         je 0x7c3286
// 007c31b2  e86919f9ff           call 0x754b20
// 007c31b7  6a0f                 push 0xf
// 007c31b9  8bc8                 mov ecx, eax
// 007c31bb  e8e010f9ff           call 0x7542a0
// 007c31c0  8b742474             mov esi, dword ptr [esp + 0x74]
// 007c31c4  50                   push eax
// 007c31c5  8d442418             lea eax, [esp + 0x18]
// 007c31c9  50                   push eax
// 007c31ca  8bce                 mov ecx, esi
// 007c31cc  e8ff65f5ff           call 0x7197d0
// 007c31d1  83bb8800000000       cmp dword ptr [ebx + 0x88], 0
// 007c31d8  7410                 je 0x7c31ea
// 007c31da  83bb8c00000000       cmp dword ptr [ebx + 0x8c], 0
// 007c31e1  7407                 je 0x7c31ea
// 007c31e3  b903000000           mov ecx, 3
// 007c31e8  eb1a                 jmp 0x7c3204
// 007c31ea  ff1578ee8900         call dword ptr [0x89ee78]
// 007c31f0  50                   push eax
// 007c31f1  e80c5bf5ff           call 0x718d02
// 007c31f6  33c9                 xor ecx, ecx
// 007c31f8  3bc3                 cmp eax, ebx
// 007c31fa  0f94c1               sete cl
// 007c31fd  8d0c8d01000000       lea ecx, [ecx*4 + 1]
// 007c3204  85f6                 test esi, esi
// 007c3206  7504                 jne 0x7c320c
// 007c3208  33c0                 xor eax, eax
// 007c320a  eb03                 jmp 0x7c320f
// 007c320c  8b4604               mov eax, dword ptr [esi + 4]
// 007c320f  6a00                 push 0
// 007c3211  8d542418             lea edx, [esp + 0x18]
// 007c3215  52                   push edx
// 007c3216  51                   push ecx
// 007c3217  6a01                 push 1
// 007c3219  50                   push eax
// 007c321a  8bcd                 mov ecx, ebp
// 007c321c  e8ffd5fcff           call 0x790820
// 007c3221  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c3225  8b3d6ce18900         mov edi, dword ptr [0x89e16c]
// 007c322b  8d48fd               lea ecx, [eax - 3]
// 007c322e  51                   push ecx
// 007c322f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c3233  8d5105               lea edx, [ecx + 5]
// 007c3236  52                   push edx
// 007c3237  83c0fb               add eax, -5
// 007c323a  50                   push eax
// 007c323b  8b4604               mov eax, dword ptr [esi + 4]
// 007c323e  83c103               add ecx, 3
// 007c3241  51                   push ecx
// 007c3242  50                   push eax
// 007c3243  ffd7                 call edi
// 007c3245  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c3249  8d48fd               lea ecx, [eax - 3]
// 007c324c  51                   push ecx
// 007c324d  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c3251  8d5109               lea edx, [ecx + 9]
// 007c3254  52                   push edx
// 007c3255  83c0fb               add eax, -5
// 007c3258  50                   push eax
// 007c3259  8b4604               mov eax, dword ptr [esi + 4]
// 007c325c  83c107               add ecx, 7
// 007c325f  51                   push ecx
// 007c3260  50                   push eax
// 007c3261  ffd7                 call edi
// 007c3263  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c3267  8d48fd               lea ecx, [eax - 3]
// 007c326a  51                   push ecx
// 007c326b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c326f  8d510d               lea edx, [ecx + 0xd]
// 007c3272  52                   push edx
// 007c3273  83c0fb               add eax, -5
// 007c3276  50                   push eax
// 007c3277  8b4604               mov eax, dword ptr [esi + 4]
// 007c327a  83c10b               add ecx, 0xb
// 007c327d  51                   push ecx
// 007c327e  50                   push eax
// 007c327f  ffd7                 call edi
// 007c3281  e93e010000           jmp 0x7c33c4
// 007c3286  8b17                 mov edx, dword ptr [edi]
// 007c3288  8b742474             mov esi, dword ptr [esp + 0x74]
// 007c328c  8b82e0000000         mov eax, dword ptr [edx + 0xe0]
// 007c3292  53                   push ebx
// 007c3293  56                   push esi
// 007c3294  8bcf                 mov ecx, edi
// 007c3296  ffd0                 call eax
// 007c3298  e88318f9ff           call 0x754b20
// 007c329d  6a12                 push 0x12
// 007c329f  8bc8                 mov ecx, eax
// 007c32a1  e8fa0ff9ff           call 0x7542a0
// 007c32a6  85f6                 test esi, esi
// 007c32a8  7504                 jne 0x7c32ae
// 007c32aa  33c9                 xor ecx, ecx
// 007c32ac  eb03                 jmp 0x7c32b1
// 007c32ae  8b4e04               mov ecx, dword ptr [esi + 4]
// 007c32b1  50                   push eax
// 007c32b2  51                   push ecx
// 007c32b3  8d4c2440             lea ecx, [esp + 0x40]
// 007c32b7  e844d6faff           call 0x770900
// 007c32bc  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 007c32c4  e85718f9ff           call 0x754b20
// 007c32c9  6a12                 push 0x12
// 007c32cb  8bc8                 mov ecx, eax
// 007c32cd  e8ce0ff9ff           call 0x7542a0
// 007c32d2  85f6                 test esi, esi
// 007c32d4  7504                 jne 0x7c32da
// 007c32d6  33c9                 xor ecx, ecx
// 007c32d8  eb03                 jmp 0x7c32dd
// 007c32da  8b4e04               mov ecx, dword ptr [esi + 4]
// 007c32dd  50                   push eax
// 007c32de  51                   push ecx
// 007c32df  8d4c242c             lea ecx, [esp + 0x2c]
// 007c32e3  e8d8d6faff           call 0x7709c0
// 007c32e8  837b7865             cmp dword ptr [ebx + 0x78], 0x65
// 007c32ec  7556                 jne 0x7c3344
// 007c32ee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 007c32f2  8b542418             mov edx, dword ptr [esp + 0x18]
// 007c32f6  8d040a               lea eax, [edx + ecx]
// 007c32f9  99                   cdq 
// 007c32fa  2bc2                 sub eax, edx
// 007c32fc  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007c3300  8bc8                 mov ecx, eax
// 007c3302  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c3306  03c2                 add eax, edx
// 007c3308  99                   cdq 
// 007c3309  2bc2                 sub eax, edx
// 007c330b  d1f8                 sar eax, 1
// 007c330d  d1f9                 sar ecx, 1
// 007c330f  8d78fd               lea edi, [eax - 3]
// 007c3312  8d51ff               lea edx, [ecx - 1]
// 007c3315  897c244c             mov dword ptr [esp + 0x4c], edi
// 007c3319  8d7803               lea edi, [eax + 3]
// 007c331c  83c102               add ecx, 2
// 007c331f  8944245c             mov dword ptr [esp + 0x5c], eax
// 007c3323  6a03                 push 3
// 007c3325  8d442450             lea eax, [esp + 0x50]
// 007c3329  894c2464             mov dword ptr [esp + 0x64], ecx
// 007c332d  8b4e04               mov ecx, dword ptr [esi + 4]
// 007c3330  50                   push eax
// 007c3331  51                   push ecx
// 007c3332  8954245c             mov dword ptr [esp + 0x5c], edx
// 007c3336  897c2460             mov dword ptr [esp + 0x60], edi
// 007c333a  89542464             mov dword ptr [esp + 0x64], edx
// 007c333e  ff15e4e08900         call dword ptr [0x89e0e4]
// 007c3344  837b7864             cmp dword ptr [ebx + 0x78], 0x64
// 007c3348  7560                 jne 0x7c33aa
// 007c334a  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c334e  8b542414             mov edx, dword ptr [esp + 0x14]
// 007c3352  8d48fd               lea ecx, [eax - 3]
// 007c3355  8d7a05               lea edi, [edx + 5]
// 007c3358  51                   push ecx
// 007c3359  57                   push edi
// 007c335a  8b3d6ce18900         mov edi, dword ptr [0x89e16c]
// 007c3360  83c0fb               add eax, -5
// 007c3363  83c203               add edx, 3
// 007c3366  50                   push eax
// 007c3367  52                   push edx
// 007c3368  8b5604               mov edx, dword ptr [esi + 4]
// 007c336b  52                   push edx
// 007c336c  ffd7                 call edi
// 007c336e  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c3372  8b542414             mov edx, dword ptr [esp + 0x14]
// 007c3376  8d48fd               lea ecx, [eax - 3]
// 007c3379  51                   push ecx
// 007c337a  8d5a09               lea ebx, [edx + 9]
// 007c337d  53                   push ebx
// 007c337e  83c0fb               add eax, -5
// 007c3381  50                   push eax
// 007c3382  8b4604               mov eax, dword ptr [esi + 4]
// 007c3385  83c207               add edx, 7
// 007c3388  52                   push edx
// 007c3389  50                   push eax
// 007c338a  ffd7                 call edi
// 007c338c  8b442420             mov eax, dword ptr [esp + 0x20]
// 007c3390  8b542414             mov edx, dword ptr [esp + 0x14]
// 007c3394  8d48fd               lea ecx, [eax - 3]
// 007c3397  51                   push ecx
// 007c3398  8b4e04               mov ecx, dword ptr [esi + 4]
// 007c339b  8d5a0d               lea ebx, [edx + 0xd]
// 007c339e  53                   push ebx
// 007c339f  83c0fb               add eax, -5
// 007c33a2  50                   push eax
// 007c33a3  83c20b               add edx, 0xb
// 007c33a6  52                   push edx
// 007c33a7  51                   push ecx
// 007c33a8  ffd7                 call edi
// 007c33aa  8d4c2424             lea ecx, [esp + 0x24]
// 007c33ae  e89dd6faff           call 0x770a50
// 007c33b3  8d4c2438             lea ecx, [esp + 0x38]
// 007c33b7  c744246cffffffff     mov dword ptr [esp + 0x6c], 0xffffffff
// 007c33bf  e8ccd5faff           call 0x770990
// 007c33c4  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007c33c8  64890d00000000       mov dword ptr fs:[0], ecx
// 007c33cf  59                   pop ecx
// 007c33d0  5f                   pop edi
// 007c33d1  5e                   pop esi
// 007c33d2  5d                   pop ebp
// 007c33d3  5b                   pop ebx
// 007c33d4  83c45c               add esp, 0x5c
// 007c33d7  c20800               ret 8
// copied from an identical function in another client (function ?DrawInplaceButton@CXTPReportPaintManager@@UAEXPAVCDC@@PAVCXTPReportInplaceButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp