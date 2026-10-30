// roc 2010-06 007b3180  unit: CXTPPaintManager  size: 802 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b3180
//
// 007b3180  6aff                 push -1
// 007b3182  6861ed9a00           push 0x9aed61
// 007b3187  64a100000000         mov eax, dword ptr fs:[0]
// 007b318d  50                   push eax
// 007b318e  83ec34               sub esp, 0x34
// 007b3191  53                   push ebx
// 007b3192  55                   push ebp
// 007b3193  56                   push esi
// 007b3194  57                   push edi
// 007b3195  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007b319a  33c4                 xor eax, esp
// 007b319c  50                   push eax
// 007b319d  8d442448             lea eax, [esp + 0x48]
// 007b31a1  64a300000000         mov dword ptr fs:[0], eax
// 007b31a7  8bf9                 mov edi, ecx
// 007b31a9  897c241c             mov dword ptr [esp + 0x1c], edi
// 007b31ad  8b74246c             mov esi, dword ptr [esp + 0x6c]
// 007b31b1  8bce                 mov ecx, esi
// 007b31b3  e8e8af0100           call 0x7ce1a0
// 007b31b8  8be8                 mov ebp, eax
// 007b31ba  c1ed1a               shr ebp, 0x1a
// 007b31bd  f7d5                 not ebp
// 007b31bf  83e501               and ebp, 1
// 007b31c2  896c2414             mov dword ptr [esp + 0x14], ebp
// 007b31c6  7518                 jne 0x7b31e0
// 007b31c8  8bce                 mov ecx, esi
// 007b31ca  e861b50500           call 0x80e730
// 007b31cf  83b8b800000000       cmp dword ptr [eax + 0xb8], 0
// 007b31d6  c744241800000000     mov dword ptr [esp + 0x18], 0
// 007b31de  7408                 je 0x7b31e8
// 007b31e0  c744241801000000     mov dword ptr [esp + 0x18], 1
// 007b31e8  8bce                 mov ecx, esi
// 007b31ea  e8d1bf0400           call 0x7ff1c0
// 007b31ef  8b5c2458             mov ebx, dword ptr [esp + 0x58]
// 007b31f3  83f8ff               cmp eax, -1
// 007b31f6  7451                 je 0x7b3249
// 007b31f8  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007b31fc  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 007b3200  8b542464             mov edx, dword ptr [esp + 0x64]
// 007b3204  89442428             mov dword ptr [esp + 0x28], eax
// 007b3208  8b442468             mov eax, dword ptr [esp + 0x68]
// 007b320c  894c242c             mov dword ptr [esp + 0x2c], ecx
// 007b3210  8bce                 mov ecx, esi
// 007b3212  89542430             mov dword ptr [esp + 0x30], edx
// 007b3216  89442434             mov dword ptr [esp + 0x34], eax
// 007b321a  e881af0100           call 0x7ce1a0
// 007b321f  a900010000           test eax, 0x100
// 007b3224  750f                 jne 0x7b3235
// 007b3226  6aff                 push -1
// 007b3228  6aff                 push -1
// 007b322a  8d4c2430             lea ecx, [esp + 0x30]
// 007b322e  51                   push ecx
// 007b322f  ff15dcbb9e00         call dword ptr [0x9ebbdc]
// 007b3235  8bce                 mov ecx, esi
// 007b3237  e884bf0400           call 0x7ff1c0
// 007b323c  50                   push eax
// 007b323d  8d54242c             lea edx, [esp + 0x2c]
// 007b3241  52                   push edx
// 007b3242  8bcb                 mov ecx, ebx
// 007b3244  e8f554ffff           call 0x7a873e
// 007b3249  837e7800             cmp dword ptr [esi + 0x78], 0
// 007b324d  742e                 je 0x7b327d
// 007b324f  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 007b3253  8b17                 mov edx, dword ptr [edi]
// 007b3255  8b9298000000         mov edx, dword ptr [edx + 0x98]
// 007b325b  56                   push esi
// 007b325c  83ec10               sub esp, 0x10
// 007b325f  8bc4                 mov eax, esp
// 007b3261  8908                 mov dword ptr [eax], ecx
// 007b3263  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007b3267  894804               mov dword ptr [eax + 4], ecx
// 007b326a  8b4c2478             mov ecx, dword ptr [esp + 0x78]
// 007b326e  894808               mov dword ptr [eax + 8], ecx
// 007b3271  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 007b3275  89480c               mov dword ptr [eax + 0xc], ecx
// 007b3278  53                   push ebx
// 007b3279  8bcf                 mov ecx, edi
// 007b327b  ffd2                 call edx
// 007b327d  8b06                 mov eax, dword ptr [esi]
// 007b327f  8b5058               mov edx, dword ptr [eax + 0x58]
// 007b3282  8bce                 mov ecx, esi
// 007b3284  ffd2                 call edx
// 007b3286  50                   push eax
// 007b3287  53                   push ebx
// 007b3288  8d4c2440             lea ecx, [esp + 0x40]
// 007b328c  e80fc40400           call 0x7ff6a0
// 007b3291  8d442428             lea eax, [esp + 0x28]
// 007b3295  50                   push eax
// 007b3296  8bce                 mov ecx, esi
// 007b3298  c744245400000000     mov dword ptr [esp + 0x54], 0
// 007b32a0  e85bb40500           call 0x80e700
// 007b32a5  8b08                 mov ecx, dword ptr [eax]
// 007b32a7  014c245c             add dword ptr [esp + 0x5c], ecx
// 007b32ab  8b5004               mov edx, dword ptr [eax + 4]
// 007b32ae  01542460             add dword ptr [esp + 0x60], edx
// 007b32b2  8b4808               mov ecx, dword ptr [eax + 8]
// 007b32b5  294c2464             sub dword ptr [esp + 0x64], ecx
// 007b32b9  8b500c               mov edx, dword ptr [eax + 0xc]
// 007b32bc  29542468             sub dword ptr [esp + 0x68], edx
// 007b32c0  8d44246c             lea eax, [esp + 0x6c]
// 007b32c4  50                   push eax
// 007b32c5  8bce                 mov ecx, esi
// 007b32c7  e8e4110700           call 0x8244b0
// 007b32cc  8b16                 mov edx, dword ptr [esi]
// 007b32ce  8b425c               mov eax, dword ptr [edx + 0x5c]
// 007b32d1  8bce                 mov ecx, esi
// 007b32d3  c644245001           mov byte ptr [esp + 0x50], 1
// 007b32d8  ffd0                 call eax
// 007b32da  8bce                 mov ecx, esi
// 007b32dc  8bf8                 mov edi, eax
// 007b32de  e86df20100           call 0x7d2550
// 007b32e3  85c0                 test eax, eax
// 007b32e5  0f848c000000         je 0x7b3377
// 007b32eb  8d4c2420             lea ecx, [esp + 0x20]
// 007b32ef  51                   push ecx
// 007b32f0  8d4c2470             lea ecx, [esp + 0x70]
// 007b32f4  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b32fa  50                   push eax
// 007b32fb  8d4c2474             lea ecx, [esp + 0x74]
// 007b32ff  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b3305  8b5308               mov edx, dword ptr [ebx + 8]
// 007b3308  50                   push eax
// 007b3309  52                   push edx
// 007b330a  ff1594a19e00         call dword ptr [0x9ea194]
// 007b3310  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 007b3314  85ff                 test edi, edi
// 007b3316  7416                 je 0x7b332e
// 007b3318  8bcf                 mov ecx, edi
// 007b331a  e881ae0100           call 0x7ce1a0
// 007b331f  33c9                 xor ecx, ecx
// 007b3321  85ed                 test ebp, ebp
// 007b3323  0f9ec1               setle cl
// 007b3326  49                   dec ecx
// 007b3327  83e102               and ecx, 2
// 007b332a  03c1                 add eax, ecx
// 007b332c  eb02                 jmp 0x7b3330
// 007b332e  33c0                 xor eax, eax
// 007b3330  8b542464             mov edx, dword ptr [esp + 0x64]
// 007b3334  2b54245c             sub edx, dword ptr [esp + 0x5c]
// 007b3338  03e8                 add ebp, eax
// 007b333a  3bd5                 cmp edx, ebp
// 007b333c  7e35                 jle 0x7b3373
// 007b333e  8bce                 mov ecx, esi
// 007b3340  e80bf20100           call 0x7d2550
// 007b3345  83f802               cmp eax, 2
// 007b3348  750a                 jne 0x7b3354
// 007b334a  8b442464             mov eax, dword ptr [esp + 0x64]
// 007b334e  2bc5                 sub eax, ebp
// 007b3350  8944245c             mov dword ptr [esp + 0x5c], eax
// 007b3354  8bce                 mov ecx, esi
// 007b3356  e8f5f10100           call 0x7d2550
// 007b335b  83f801               cmp eax, 1
// 007b335e  7513                 jne 0x7b3373
// 007b3360  8b44245c             mov eax, dword ptr [esp + 0x5c]
// 007b3364  2bc5                 sub eax, ebp
// 007b3366  03442464             add eax, dword ptr [esp + 0x64]
// 007b336a  99                   cdq 
// 007b336b  2bc2                 sub eax, edx
// 007b336d  d1f8                 sar eax, 1
// 007b336f  8944245c             mov dword ptr [esp + 0x5c], eax
// 007b3373  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007b3377  85ff                 test edi, edi
// 007b3379  0f8482000000         je 0x7b3401
// 007b337f  8bcf                 mov ecx, edi
// 007b3381  e81aae0100           call 0x7ce1a0
// 007b3386  0344245c             add eax, dword ptr [esp + 0x5c]
// 007b338a  39442464             cmp dword ptr [esp + 0x64], eax
// 007b338e  7c59                 jl 0x7b33e9
// 007b3390  8bcf                 mov ecx, edi
// 007b3392  85ed                 test ebp, ebp
// 007b3394  7407                 je 0x7b339d
// 007b3396  e8459f0000           call 0x7bd2e0
// 007b339b  eb07                 jmp 0x7b33a4
// 007b339d  6a01                 push 1
// 007b339f  e89c0e0100           call 0x7c4240
// 007b33a4  83ec08               sub esp, 8
// 007b33a7  8be8                 mov ebp, eax
// 007b33a9  8bc4                 mov eax, esp
// 007b33ab  8bcf                 mov ecx, edi
// 007b33ad  89642460             mov dword ptr [esp + 0x60], esp
// 007b33b1  c70000000000         mov dword ptr [eax], 0
// 007b33b7  c7400400000000       mov dword ptr [eax + 4], 0
// 007b33be  e88d570000           call 0x7b8b50
// 007b33c3  8b542470             mov edx, dword ptr [esp + 0x70]
// 007b33c7  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 007b33cb  03ca                 add ecx, edx
// 007b33cd  2bc8                 sub ecx, eax
// 007b33cf  8bc1                 mov eax, ecx
// 007b33d1  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 007b33d5  99                   cdq 
// 007b33d6  2bc2                 sub eax, edx
// 007b33d8  55                   push ebp
// 007b33d9  d1f8                 sar eax, 1
// 007b33db  50                   push eax
// 007b33dc  51                   push ecx
// 007b33dd  53                   push ebx
// 007b33de  8bcf                 mov ecx, edi
// 007b33e0  e86b1b0100           call 0x7c4f50
// 007b33e5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 007b33e9  8bcf                 mov ecx, edi
// 007b33eb  e8b0ad0100           call 0x7ce1a0
// 007b33f0  6a00                 push 0
// 007b33f2  83c002               add eax, 2
// 007b33f5  50                   push eax
// 007b33f6  8d542464             lea edx, [esp + 0x64]
// 007b33fa  52                   push edx
// 007b33fb  ff1540bc9e00         call dword ptr [0x9ebc40]
// 007b3401  837c241800           cmp dword ptr [esp + 0x18], 0
// 007b3406  7469                 je 0x7b3471
// 007b3408  6a01                 push 1
// 007b340a  8bcb                 mov ecx, ebx
// 007b340c  e8a3991c00           call 0x97cdb4
// 007b3411  85ed                 test ebp, ebp
// 007b3413  750d                 jne 0x7b3422
// 007b3415  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007b3419  6a11                 push 0x11
// 007b341b  e8f09cffff           call 0x7ad110
// 007b3420  eb1c                 jmp 0x7b343e
// 007b3422  8bce                 mov ecx, esi
// 007b3424  e8c7ccf0ff           call 0x6c00f0
// 007b3429  83f8ff               cmp eax, -1
// 007b342c  7409                 je 0x7b3437
// 007b342e  8bce                 mov ecx, esi
// 007b3430  e8bbccf0ff           call 0x6c00f0
// 007b3435  eb07                 jmp 0x7b343e
// 007b3437  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007b343b  8b4024               mov eax, dword ptr [eax + 0x24]
// 007b343e  8b13                 mov edx, dword ptr [ebx]
// 007b3440  50                   push eax
// 007b3441  8b4238               mov eax, dword ptr [edx + 0x38]
// 007b3444  8bcb                 mov ecx, ebx
// 007b3446  ffd0                 call eax
// 007b3448  8b33                 mov esi, dword ptr [ebx]
// 007b344a  6864080000           push 0x864
// 007b344f  8d4c2460             lea ecx, [esp + 0x60]
// 007b3453  51                   push ecx
// 007b3454  8d4c2474             lea ecx, [esp + 0x74]
// 007b3458  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007b345e  50                   push eax
// 007b345f  8d4c2478             lea ecx, [esp + 0x78]
// 007b3463  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007b3469  8b5670               mov edx, dword ptr [esi + 0x70]
// 007b346c  50                   push eax
// 007b346d  8bcb                 mov ecx, ebx
// 007b346f  ffd2                 call edx
// 007b3471  8d4c246c             lea ecx, [esp + 0x6c]
// 007b3475  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007b347b  8d4c2438             lea ecx, [esp + 0x38]
// 007b347f  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 007b3487  e894c20400           call 0x7ff720
// 007b348c  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 007b3490  64890d00000000       mov dword ptr fs:[0], ecx
// 007b3497  59                   pop ecx
// 007b3498  5f                   pop edi
// 007b3499  5e                   pop esi
// 007b349a  5d                   pop ebp
// 007b349b  5b                   pop ebx
// 007b349c  83c440               add esp, 0x40
// 007b349f  c21800               ret 0x18
// copied from an identical function in another client (function ?DrawStatusBarPaneEntry@CXTPPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPStatusBarPane@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp