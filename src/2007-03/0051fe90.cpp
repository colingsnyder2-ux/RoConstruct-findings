// roc 2007-03 0051fe90  unit: seg_00510000  size: 399 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0051fe90
//
// 0051fe90  83ec20               sub esp, 0x20
// 0051fe93  55                   push ebp
// 0051fe94  57                   push edi
// 0051fe95  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0051fe99  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 0051fe9f  8baf88010000         mov ebp, dword ptr [edi + 0x188]
// 0051fea5  83e801               sub eax, 1
// 0051fea8  8944241c             mov dword ptr [esp + 0x1c], eax
// 0051feac  8d642400             lea esp, [esp]
// 0051feb0  8b477c               mov eax, dword ptr [edi + 0x7c]
// 0051feb3  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 0051feb9  3bc1                 cmp eax, ecx
// 0051febb  7c10                 jl 0x51fecd
// 0051febd  7526                 jne 0x51fee5
// 0051febf  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 0051fec5  3b8788000000         cmp eax, dword ptr [edi + 0x88]
// 0051fecb  7718                 ja 0x51fee5
// 0051fecd  8b8f90010000         mov ecx, dword ptr [edi + 0x190]
// 0051fed3  8b11                 mov edx, dword ptr [ecx]
// 0051fed5  57                   push edi
// 0051fed6  ffd2                 call edx
// 0051fed8  83c404               add esp, 4
// 0051fedb  85c0                 test eax, eax
// 0051fedd  75d1                 jne 0x51feb0
// 0051fedf  5f                   pop edi
// 0051fee0  5d                   pop ebp
// 0051fee1  83c420               add esp, 0x20
// 0051fee4  c3                   ret 
// 0051fee5  53                   push ebx
// 0051fee6  33db                 xor ebx, ebx
// 0051fee8  395f24               cmp dword ptr [edi + 0x24], ebx
// 0051feeb  56                   push esi
// 0051feec  8bb7c4000000         mov esi, dword ptr [edi + 0xc4]
// 0051fef2  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0051fef6  0f8e03010000         jle 0x51ffff
// 0051fefc  83c548               add ebp, 0x48
// 0051feff  896c2420             mov dword ptr [esp + 0x20], ebp
// 0051ff03  807e3000             cmp byte ptr [esi + 0x30], 0
// 0051ff07  0f84d4000000         je 0x51ffe1
// 0051ff0d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051ff10  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 0051ff16  8b4f04               mov ecx, dword ptr [edi + 4]
// 0051ff19  0fafd0               imul edx, eax
// 0051ff1c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0051ff1f  6a00                 push 0
// 0051ff21  50                   push eax
// 0051ff22  8b4500               mov eax, dword ptr [ebp]
// 0051ff25  52                   push edx
// 0051ff26  50                   push eax
// 0051ff27  57                   push edi
// 0051ff28  ffd1                 call ecx
// 0051ff2a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0051ff2e  83c414               add esp, 0x14
// 0051ff31  399788000000         cmp dword ptr [edi + 0x88], edx
// 0051ff37  89442428             mov dword ptr [esp + 0x28], eax
// 0051ff3b  7309                 jae 0x51ff46
// 0051ff3d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0051ff40  89442410             mov dword ptr [esp + 0x10], eax
// 0051ff44  eb16                 jmp 0x51ff5c
// 0051ff46  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0051ff49  8b4620               mov eax, dword ptr [esi + 0x20]
// 0051ff4c  33d2                 xor edx, edx
// 0051ff4e  f7f1                 div ecx
// 0051ff50  85d2                 test edx, edx
// 0051ff52  89542410             mov dword ptr [esp + 0x10], edx
// 0051ff56  7504                 jne 0x51ff5c
// 0051ff58  894c2410             mov dword ptr [esp + 0x10], ecx
// 0051ff5c  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0051ff62  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 0051ff66  8b442438             mov eax, dword ptr [esp + 0x38]
// 0051ff6a  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 0051ff6d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0051ff71  33c9                 xor ecx, ecx
// 0051ff73  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0051ff77  8954242c             mov dword ptr [esp + 0x2c], edx
// 0051ff7b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0051ff7f  7e60                 jle 0x51ffe1
// 0051ff81  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0051ff84  8b542428             mov edx, dword ptr [esp + 0x28]
// 0051ff88  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 0051ff8b  33ff                 xor edi, edi
// 0051ff8d  33ed                 xor ebp, ebp
// 0051ff8f  85c0                 test eax, eax
// 0051ff91  762b                 jbe 0x51ffbe
// 0051ff93  8b442414             mov eax, dword ptr [esp + 0x14]
// 0051ff97  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0051ff9b  57                   push edi
// 0051ff9c  50                   push eax
// 0051ff9d  53                   push ebx
// 0051ff9e  56                   push esi
// 0051ff9f  51                   push ecx
// 0051ffa0  ff542440             call dword ptr [esp + 0x40]
// 0051ffa4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0051ffa7  037e24               add edi, dword ptr [esi + 0x24]
// 0051ffaa  83c501               add ebp, 1
// 0051ffad  83c414               add esp, 0x14
// 0051ffb0  81c380000000         add ebx, 0x80
// 0051ffb6  3be8                 cmp ebp, eax
// 0051ffb8  72d9                 jb 0x51ff93
// 0051ffba  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0051ffbe  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0051ffc2  8b5624               mov edx, dword ptr [esi + 0x24]
// 0051ffc5  83c101               add ecx, 1
// 0051ffc8  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 0051ffcc  8d1497               lea edx, [edi + edx*4]
// 0051ffcf  89542414             mov dword ptr [esp + 0x14], edx
// 0051ffd3  894c2418             mov dword ptr [esp + 0x18], ecx
// 0051ffd7  7cab                 jl 0x51ff84
// 0051ffd9  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0051ffdd  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0051ffe1  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0051ffe5  83c301               add ebx, 1
// 0051ffe8  83c504               add ebp, 4
// 0051ffeb  83c654               add esi, 0x54
// 0051ffee  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 0051fff1  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0051fff5  896c2420             mov dword ptr [esp + 0x20], ebp
// 0051fff9  0f8c04ffffff         jl 0x51ff03
// 0051ffff  83878800000001       add dword ptr [edi + 0x88], 1
// 00520006  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0052000c  3b871c010000         cmp eax, dword ptr [edi + 0x11c]
// 00520012  5e                   pop esi
// 00520013  5b                   pop ebx
// 00520014  1bc0                 sbb eax, eax
// 00520016  5f                   pop edi
// 00520017  83c004               add eax, 4
// 0052001a  5d                   pop ebp
// 0052001b  83c420               add esp, 0x20
// 0052001e  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
