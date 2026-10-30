// from server: 100% by auto
// roc 2007-03 004b3220  unit: seg_004b0000  size: 647 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004b3220
//
// 004b3220  55                   push ebp
// 004b3221  8d6c2494             lea ebp, [esp - 0x6c]
// 004b3225  81ecc8000000         sub esp, 0xc8
// 004b322b  33c0                 xor eax, eax
// 004b322d  53                   push ebx
// 004b322e  8b5d74               mov ebx, dword ptr [ebp + 0x74]
// 004b3231  56                   push esi
// 004b3232  8b7578               mov esi, dword ptr [ebp + 0x78]
// 004b3235  57                   push edi
// 004b3236  894550               mov dword ptr [ebp + 0x50], eax
// 004b3239  894554               mov dword ptr [ebp + 0x54], eax
// 004b323c  894558               mov dword ptr [ebp + 0x58], eax
// 004b323f  89455c               mov dword ptr [ebp + 0x5c], eax
// 004b3242  894560               mov dword ptr [ebp + 0x60], eax
// 004b3245  894564               mov dword ptr [ebp + 0x64], eax
// 004b3248  894568               mov dword ptr [ebp + 0x68], eax
// 004b324b  8d45e4               lea eax, [ebp - 0x1c]
// 004b324e  50                   push eax
// 004b324f  8d4d2c               lea ecx, [ebp + 0x2c]
// 004b3252  51                   push ecx
// 004b3253  53                   push ebx
// 004b3254  56                   push esi
// 004b3255  c7454c01000000       mov dword ptr [ebp + 0x4c], 1
// 004b325c  e85fdcffff           call 0x4b0ec0
// 004b3261  b908000000           mov ecx, 8
// 004b3266  8d7dc4               lea edi, [ebp - 0x3c]
// 004b3269  8d552c               lea edx, [ebp + 0x2c]
// 004b326c  8d45c4               lea eax, [ebp - 0x3c]
// 004b326f  83c410               add esp, 0x10
// 004b3272  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b3274  895528               mov dword ptr [ebp + 0x28], edx
// 004b3277  894524               mov dword ptr [ebp + 0x24], eax
// 004b327a  c7457401000000       mov dword ptr [ebp + 0x74], 1
// 004b3281  8b7528               mov esi, dword ptr [ebp + 0x28]
// 004b3284  8b7d24               mov edi, dword ptr [ebp + 0x24]
// 004b3287  8b4d74               mov ecx, dword ptr [ebp + 0x74]
// 004b328a  8b06                 mov eax, dword ptr [esi]
// 004b328c  33d2                 xor edx, edx
// 004b328e  2907                 sub dword ptr [edi], eax
// 004b3290  8b4604               mov eax, dword ptr [esi + 4]
// 004b3293  194704               sbb dword ptr [edi + 4], eax
// 004b3296  8b4608               mov eax, dword ptr [esi + 8]
// 004b3299  194708               sbb dword ptr [edi + 8], eax
// 004b329c  8b460c               mov eax, dword ptr [esi + 0xc]
// 004b329f  19470c               sbb dword ptr [edi + 0xc], eax
// 004b32a2  e322                 jecxz 0x4b32c6
// 004b32a4  42                   inc edx
// 004b32a5  42                   inc edx
// 004b32a6  8b04d6               mov eax, dword ptr [esi + edx*8]
// 004b32a9  1904d7               sbb dword ptr [edi + edx*8], eax
// 004b32ac  8b44d604             mov eax, dword ptr [esi + edx*8 + 4]
// 004b32b0  1944d704             sbb dword ptr [edi + edx*8 + 4], eax
// 004b32b4  8b44d608             mov eax, dword ptr [esi + edx*8 + 8]
// 004b32b8  1944d708             sbb dword ptr [edi + edx*8 + 8], eax
// 004b32bc  8b44d60c             mov eax, dword ptr [esi + edx*8 + 0xc]
// 004b32c0  1944d70c             sbb dword ptr [edi + edx*8 + 0xc], eax
// 004b32c4  e2de                 loop 0x4b32a4
// 004b32c6  b908000000           mov ecx, 8
// 004b32cb  8bf3                 mov esi, ebx
// 004b32cd  8d7d04               lea edi, [ebp + 4]
// 004b32d0  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b32d2  8d4d04               lea ecx, [ebp + 4]
// 004b32d5  51                   push ecx
// 004b32d6  8d552c               lea edx, [ebp + 0x2c]
// 004b32d9  52                   push edx
// 004b32da  8d45e4               lea eax, [ebp - 0x1c]
// 004b32dd  50                   push eax
// 004b32de  51                   push ecx
// 004b32df  e8dcdbffff           call 0x4b0ec0
// 004b32e4  83c410               add esp, 0x10
// 004b32e7  33c0                 xor eax, eax
// 004b32e9  8da42400000000       lea esp, [esp]
// 004b32f0  837c850400           cmp dword ptr [ebp + eax*4 + 4], 0
// 004b32f5  751f                 jne 0x4b3316
// 004b32f7  83c001               add eax, 1
// 004b32fa  83f808               cmp eax, 8
// 004b32fd  72f1                 jb 0x4b32f0
// 004b32ff  8b7d7c               mov edi, dword ptr [ebp + 0x7c]
// 004b3302  8d75c4               lea esi, [ebp - 0x3c]
// 004b3305  b908000000           mov ecx, 8
// 004b330a  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b330c  5f                   pop edi
// 004b330d  5e                   pop esi
// 004b330e  5b                   pop ebx
// 004b330f  83c56c               add ebp, 0x6c
// 004b3312  8be5                 mov esp, ebp
// 004b3314  5d                   pop ebp
// 004b3315  c3                   ret 
// 004b3316  8b7578               mov esi, dword ptr [ebp + 0x78]
// 004b3319  8d55a4               lea edx, [ebp - 0x5c]
// 004b331c  52                   push edx
// 004b331d  56                   push esi
// 004b331e  8d454c               lea eax, [ebp + 0x4c]
// 004b3321  50                   push eax
// 004b3322  8d4d2c               lea ecx, [ebp + 0x2c]
// 004b3325  51                   push ecx
// 004b3326  8d55c4               lea edx, [ebp - 0x3c]
// 004b3329  52                   push edx
// 004b332a  e891e1ffff           call 0x4b14c0
// 004b332f  8d45e4               lea eax, [ebp - 0x1c]
// 004b3332  50                   push eax
// 004b3333  8d4d2c               lea ecx, [ebp + 0x2c]
// 004b3336  51                   push ecx
// 004b3337  8d5504               lea edx, [ebp + 4]
// 004b333a  52                   push edx
// 004b333b  50                   push eax
// 004b333c  e87fdbffff           call 0x4b0ec0
// 004b3341  83c424               add esp, 0x24
// 004b3344  33c0                 xor eax, eax
// 004b3346  837c85e400           cmp dword ptr [ebp + eax*4 - 0x1c], 0
// 004b334b  751f                 jne 0x4b336c
// 004b334d  83c001               add eax, 1
// 004b3350  83f808               cmp eax, 8
// 004b3353  72f1                 jb 0x4b3346
// 004b3355  8b7d7c               mov edi, dword ptr [ebp + 0x7c]
// 004b3358  8d75a4               lea esi, [ebp - 0x5c]
// 004b335b  b908000000           mov ecx, 8
// 004b3360  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b3362  5f                   pop edi
// 004b3363  5e                   pop esi
// 004b3364  5b                   pop ebx
// 004b3365  83c56c               add ebp, 0x6c
// 004b3368  8be5                 mov esp, ebp
// 004b336a  5d                   pop ebp
// 004b336b  c3                   ret 
// 004b336c  8d4d4c               lea ecx, [ebp + 0x4c]
// 004b336f  51                   push ecx
// 004b3370  56                   push esi
// 004b3371  8d55c4               lea edx, [ebp - 0x3c]
// 004b3374  52                   push edx
// 004b3375  8d452c               lea eax, [ebp + 0x2c]
// 004b3378  50                   push eax
// 004b3379  8d4da4               lea ecx, [ebp - 0x5c]
// 004b337c  51                   push ecx
// 004b337d  e83ee1ffff           call 0x4b14c0
// 004b3382  8d5504               lea edx, [ebp + 4]
// 004b3385  52                   push edx
// 004b3386  8d452c               lea eax, [ebp + 0x2c]
// 004b3389  50                   push eax
// 004b338a  8d4de4               lea ecx, [ebp - 0x1c]
// 004b338d  51                   push ecx
// 004b338e  52                   push edx
// 004b338f  e82cdbffff           call 0x4b0ec0
// 004b3394  83c424               add esp, 0x24
// 004b3397  33c0                 xor eax, eax
// 004b3399  8da42400000000       lea esp, [esp]
// 004b33a0  837c850400           cmp dword ptr [ebp + eax*4 + 4], 0
// 004b33a5  751f                 jne 0x4b33c6
// 004b33a7  83c001               add eax, 1
// 004b33aa  83f808               cmp eax, 8
// 004b33ad  72f1                 jb 0x4b33a0
// 004b33af  8b7d7c               mov edi, dword ptr [ebp + 0x7c]
// 004b33b2  8d754c               lea esi, [ebp + 0x4c]
// 004b33b5  b908000000           mov ecx, 8
// 004b33ba  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 004b33bc  5f                   pop edi
// 004b33bd  5e                   pop esi
// 004b33be  5b                   pop ebx
// 004b33bf  83c56c               add ebp, 0x6c
// 004b33c2  8be5                 mov esp, ebp
// 004b33c4  5d                   pop ebp
// 004b33c5  c3                   ret 
// 004b33c6  8d45c4               lea eax, [ebp - 0x3c]
// 004b33c9  50                   push eax
// 004b33ca  56                   push esi
// 004b33cb  8d4da4               lea ecx, [ebp - 0x5c]
// 004b33ce  51                   push ecx
// 004b33cf  8d552c               lea edx, [ebp + 0x2c]
// 004b33d2  52                   push edx
// 004b33d3  8d454c               lea eax, [ebp + 0x4c]
// 004b33d6  50                   push eax
// 004b33d7  e8e4e0ffff           call 0x4b14c0
// 004b33dc  8d4de4               lea ecx, [ebp - 0x1c]
// 004b33df  51                   push ecx
// 004b33e0  8d552c               lea edx, [ebp + 0x2c]
// 004b33e3  52                   push edx
// 004b33e4  8d4504               lea eax, [ebp + 4]
// 004b33e7  50                   push eax
// 004b33e8  51                   push ecx
// 004b33e9  e8d2daffff           call 0x4b0ec0
// 004b33ee  83c424               add esp, 0x24
// 004b33f1  33c0                 xor eax, eax
// 004b33f3  837c85e400           cmp dword ptr [ebp + eax*4 - 0x1c], 0
// 004b33f8  750d                 jne 0x4b3407
// 004b33fa  83c001               add eax, 1
// 004b33fd  83f808               cmp eax, 8
// 004b3400  72f1                 jb 0x4b33f3
// 004b3402  e9f8feffff           jmp 0x4b32ff
// 004b3407  8d55a4               lea edx, [ebp - 0x5c]
// 004b340a  52                   push edx
// 004b340b  56                   push esi
// 004b340c  8d454c               lea eax, [ebp + 0x4c]
// 004b340f  50                   push eax
// 004b3410  8d4d2c               lea ecx, [ebp + 0x2c]
// 004b3413  51                   push ecx
// 004b3414  8d55c4               lea edx, [ebp - 0x3c]
// 004b3417  52                   push edx
// 004b3418  e8a3e0ffff           call 0x4b14c0
// 004b341d  8d4504               lea eax, [ebp + 4]
// 004b3420  50                   push eax
// 004b3421  8d4d2c               lea ecx, [ebp + 0x2c]
// 004b3424  51                   push ecx
// 004b3425  8d55e4               lea edx, [ebp - 0x1c]
// 004b3428  52                   push edx
// 004b3429  50                   push eax
// 004b342a  e891daffff           call 0x4b0ec0
// 004b342f  83c424               add esp, 0x24
// 004b3432  33c0                 xor eax, eax
// 004b3434  837c850400           cmp dword ptr [ebp + eax*4 + 4], 0
// 004b3439  750d                 jne 0x4b3448
// 004b343b  83c001               add eax, 1
// 004b343e  83f808               cmp eax, 8
// 004b3441  72f1                 jb 0x4b3434
// 004b3443  e90dffffff           jmp 0x4b3355
// 004b3448  8d4d4c               lea ecx, [ebp + 0x4c]
// 004b344b  51                   push ecx
// 004b344c  56                   push esi
// 004b344d  8d55c4               lea edx, [ebp - 0x3c]
// 004b3450  52                   push edx
// 004b3451  8d452c               lea eax, [ebp + 0x2c]
// 004b3454  50                   push eax
// 004b3455  8d4da4               lea ecx, [ebp - 0x5c]
// 004b3458  51                   push ecx
// 004b3459  e862e0ffff           call 0x4b14c0
// 004b345e  8d55e4               lea edx, [ebp - 0x1c]
// 004b3461  52                   push edx
// 004b3462  8d452c               lea eax, [ebp + 0x2c]
// 004b3465  50                   push eax
// 004b3466  8d4d04               lea ecx, [ebp + 4]
// 004b3469  51                   push ecx
// 004b346a  52                   push edx
// 004b346b  e850daffff           call 0x4b0ec0
// 004b3470  83c424               add esp, 0x24
// 004b3473  33c0                 xor eax, eax
// 004b3475  837c85e400           cmp dword ptr [ebp + eax*4 - 0x1c], 0
// 004b347a  750d                 jne 0x4b3489
// 004b347c  83c001               add eax, 1
// 004b347f  83f808               cmp eax, 8
// 004b3482  72f1                 jb 0x4b3475
// 004b3484  e926ffffff           jmp 0x4b33af
// 004b3489  8d45c4               lea eax, [ebp - 0x3c]
// 004b348c  50                   push eax
// 004b348d  56                   push esi
// 004b348e  8d4da4               lea ecx, [ebp - 0x5c]
// 004b3491  51                   push ecx
// 004b3492  8d552c               lea edx, [ebp + 0x2c]
// 004b3495  52                   push edx
// 004b3496  8d454c               lea eax, [ebp + 0x4c]
// 004b3499  50                   push eax
// 004b349a  e821e0ffff           call 0x4b14c0
// 004b349f  83c414               add esp, 0x14
// 004b34a2  e92bfeffff           jmp 0x4b32d2

// from server: 23% by colin
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oi /Ot /Oy /GF /GS- /EHsc /MT
// roc-lib: ogre-1.6.4 OgreResourceGroupManager.cpp