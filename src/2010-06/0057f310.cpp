// roc 2010-06 0057f310  unit: seg_00570000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057f310
//
// 0057f310  83ec20               sub esp, 0x20
// 0057f313  55                   push ebp
// 0057f314  57                   push edi
// 0057f315  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0057f319  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 0057f31f  8baf88010000         mov ebp, dword ptr [edi + 0x188]
// 0057f325  48                   dec eax
// 0057f326  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057f32a  8d9b00000000         lea ebx, [ebx]
// 0057f330  8b477c               mov eax, dword ptr [edi + 0x7c]
// 0057f333  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 0057f339  3bc1                 cmp eax, ecx
// 0057f33b  7c10                 jl 0x57f34d
// 0057f33d  7526                 jne 0x57f365
// 0057f33f  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 0057f345  3b8788000000         cmp eax, dword ptr [edi + 0x88]
// 0057f34b  7718                 ja 0x57f365
// 0057f34d  8b8f90010000         mov ecx, dword ptr [edi + 0x190]
// 0057f353  8b11                 mov edx, dword ptr [ecx]
// 0057f355  57                   push edi
// 0057f356  ffd2                 call edx
// 0057f358  83c404               add esp, 4
// 0057f35b  85c0                 test eax, eax
// 0057f35d  75d1                 jne 0x57f330
// 0057f35f  5f                   pop edi
// 0057f360  5d                   pop ebp
// 0057f361  83c420               add esp, 0x20
// 0057f364  c3                   ret 
// 0057f365  53                   push ebx
// 0057f366  33db                 xor ebx, ebx
// 0057f368  395f24               cmp dword ptr [edi + 0x24], ebx
// 0057f36b  56                   push esi
// 0057f36c  8bb7c4000000         mov esi, dword ptr [edi + 0xc4]
// 0057f372  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057f376  0f8efa000000         jle 0x57f476
// 0057f37c  83c548               add ebp, 0x48
// 0057f37f  896c2420             mov dword ptr [esp + 0x20], ebp
// 0057f383  807e3000             cmp byte ptr [esi + 0x30], 0
// 0057f387  0f84cd000000         je 0x57f45a
// 0057f38d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057f390  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 0057f396  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057f399  0fafd0               imul edx, eax
// 0057f39c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0057f39f  6a00                 push 0
// 0057f3a1  50                   push eax
// 0057f3a2  8b4500               mov eax, dword ptr [ebp]
// 0057f3a5  52                   push edx
// 0057f3a6  50                   push eax
// 0057f3a7  57                   push edi
// 0057f3a8  ffd1                 call ecx
// 0057f3aa  8b542438             mov edx, dword ptr [esp + 0x38]
// 0057f3ae  83c414               add esp, 0x14
// 0057f3b1  89442428             mov dword ptr [esp + 0x28], eax
// 0057f3b5  399788000000         cmp dword ptr [edi + 0x88], edx
// 0057f3bb  7309                 jae 0x57f3c6
// 0057f3bd  8b460c               mov eax, dword ptr [esi + 0xc]
// 0057f3c0  89442410             mov dword ptr [esp + 0x10], eax
// 0057f3c4  eb16                 jmp 0x57f3dc
// 0057f3c6  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0057f3c9  8b4620               mov eax, dword ptr [esi + 0x20]
// 0057f3cc  33d2                 xor edx, edx
// 0057f3ce  f7f1                 div ecx
// 0057f3d0  89542410             mov dword ptr [esp + 0x10], edx
// 0057f3d4  85d2                 test edx, edx
// 0057f3d6  7504                 jne 0x57f3dc
// 0057f3d8  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057f3dc  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0057f3e2  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 0057f3e6  8b442438             mov eax, dword ptr [esp + 0x38]
// 0057f3ea  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 0057f3ed  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057f3f1  33c9                 xor ecx, ecx
// 0057f3f3  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0057f3f7  8954242c             mov dword ptr [esp + 0x2c], edx
// 0057f3fb  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057f3ff  7e59                 jle 0x57f45a
// 0057f401  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0057f404  8b542428             mov edx, dword ptr [esp + 0x28]
// 0057f408  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 0057f40b  33ff                 xor edi, edi
// 0057f40d  33ed                 xor ebp, ebp
// 0057f40f  85c0                 test eax, eax
// 0057f411  7626                 jbe 0x57f439
// 0057f413  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057f417  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0057f41b  57                   push edi
// 0057f41c  50                   push eax
// 0057f41d  53                   push ebx
// 0057f41e  56                   push esi
// 0057f41f  51                   push ecx
// 0057f420  ff542440             call dword ptr [esp + 0x40]
// 0057f424  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0057f427  037e24               add edi, dword ptr [esi + 0x24]
// 0057f42a  45                   inc ebp
// 0057f42b  83c414               add esp, 0x14
// 0057f42e  83eb80               sub ebx, -0x80
// 0057f431  3be8                 cmp ebp, eax
// 0057f433  72de                 jb 0x57f413
// 0057f435  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057f439  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0057f43d  8b5624               mov edx, dword ptr [esi + 0x24]
// 0057f440  41                   inc ecx
// 0057f441  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 0057f445  8d1497               lea edx, [edi + edx*4]
// 0057f448  89542414             mov dword ptr [esp + 0x14], edx
// 0057f44c  894c2418             mov dword ptr [esp + 0x18], ecx
// 0057f450  7cb2                 jl 0x57f404
// 0057f452  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0057f456  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0057f45a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0057f45e  43                   inc ebx
// 0057f45f  83c504               add ebp, 4
// 0057f462  83c654               add esi, 0x54
// 0057f465  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 0057f468  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0057f46c  896c2420             mov dword ptr [esp + 0x20], ebp
// 0057f470  0f8c0dffffff         jl 0x57f383
// 0057f476  ff8788000000         inc dword ptr [edi + 0x88]
// 0057f47c  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0057f482  3b871c010000         cmp eax, dword ptr [edi + 0x11c]
// 0057f488  5e                   pop esi
// 0057f489  5b                   pop ebx
// 0057f48a  1bc0                 sbb eax, eax
// 0057f48c  5f                   pop edi
// 0057f48d  83c004               add eax, 4
// 0057f490  5d                   pop ebp
// 0057f491  83c420               add esp, 0x20
// 0057f494  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
