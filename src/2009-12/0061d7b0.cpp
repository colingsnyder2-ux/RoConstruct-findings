// roc 2009-12 0061d7b0  unit: seg_00610000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061d7b0
//
// 0061d7b0  83ec20               sub esp, 0x20
// 0061d7b3  55                   push ebp
// 0061d7b4  57                   push edi
// 0061d7b5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0061d7b9  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 0061d7bf  8baf88010000         mov ebp, dword ptr [edi + 0x188]
// 0061d7c5  48                   dec eax
// 0061d7c6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0061d7ca  8d9b00000000         lea ebx, [ebx]
// 0061d7d0  8b477c               mov eax, dword ptr [edi + 0x7c]
// 0061d7d3  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 0061d7d9  3bc1                 cmp eax, ecx
// 0061d7db  7c10                 jl 0x61d7ed
// 0061d7dd  7526                 jne 0x61d805
// 0061d7df  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 0061d7e5  3b8788000000         cmp eax, dword ptr [edi + 0x88]
// 0061d7eb  7718                 ja 0x61d805
// 0061d7ed  8b8f90010000         mov ecx, dword ptr [edi + 0x190]
// 0061d7f3  8b11                 mov edx, dword ptr [ecx]
// 0061d7f5  57                   push edi
// 0061d7f6  ffd2                 call edx
// 0061d7f8  83c404               add esp, 4
// 0061d7fb  85c0                 test eax, eax
// 0061d7fd  75d1                 jne 0x61d7d0
// 0061d7ff  5f                   pop edi
// 0061d800  5d                   pop ebp
// 0061d801  83c420               add esp, 0x20
// 0061d804  c3                   ret 
// 0061d805  53                   push ebx
// 0061d806  33db                 xor ebx, ebx
// 0061d808  395f24               cmp dword ptr [edi + 0x24], ebx
// 0061d80b  56                   push esi
// 0061d80c  8bb7c4000000         mov esi, dword ptr [edi + 0xc4]
// 0061d812  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0061d816  0f8efa000000         jle 0x61d916
// 0061d81c  83c548               add ebp, 0x48
// 0061d81f  896c2420             mov dword ptr [esp + 0x20], ebp
// 0061d823  807e3000             cmp byte ptr [esi + 0x30], 0
// 0061d827  0f84cd000000         je 0x61d8fa
// 0061d82d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0061d830  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 0061d836  8b4f04               mov ecx, dword ptr [edi + 4]
// 0061d839  0fafd0               imul edx, eax
// 0061d83c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0061d83f  6a00                 push 0
// 0061d841  50                   push eax
// 0061d842  8b4500               mov eax, dword ptr [ebp]
// 0061d845  52                   push edx
// 0061d846  50                   push eax
// 0061d847  57                   push edi
// 0061d848  ffd1                 call ecx
// 0061d84a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0061d84e  83c414               add esp, 0x14
// 0061d851  89442428             mov dword ptr [esp + 0x28], eax
// 0061d855  399788000000         cmp dword ptr [edi + 0x88], edx
// 0061d85b  7309                 jae 0x61d866
// 0061d85d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0061d860  89442410             mov dword ptr [esp + 0x10], eax
// 0061d864  eb16                 jmp 0x61d87c
// 0061d866  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0061d869  8b4620               mov eax, dword ptr [esi + 0x20]
// 0061d86c  33d2                 xor edx, edx
// 0061d86e  f7f1                 div ecx
// 0061d870  89542410             mov dword ptr [esp + 0x10], edx
// 0061d874  85d2                 test edx, edx
// 0061d876  7504                 jne 0x61d87c
// 0061d878  894c2410             mov dword ptr [esp + 0x10], ecx
// 0061d87c  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0061d882  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 0061d886  8b442438             mov eax, dword ptr [esp + 0x38]
// 0061d88a  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 0061d88d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0061d891  33c9                 xor ecx, ecx
// 0061d893  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0061d897  8954242c             mov dword ptr [esp + 0x2c], edx
// 0061d89b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061d89f  7e59                 jle 0x61d8fa
// 0061d8a1  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0061d8a4  8b542428             mov edx, dword ptr [esp + 0x28]
// 0061d8a8  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 0061d8ab  33ff                 xor edi, edi
// 0061d8ad  33ed                 xor ebp, ebp
// 0061d8af  85c0                 test eax, eax
// 0061d8b1  7626                 jbe 0x61d8d9
// 0061d8b3  8b442414             mov eax, dword ptr [esp + 0x14]
// 0061d8b7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0061d8bb  57                   push edi
// 0061d8bc  50                   push eax
// 0061d8bd  53                   push ebx
// 0061d8be  56                   push esi
// 0061d8bf  51                   push ecx
// 0061d8c0  ff542440             call dword ptr [esp + 0x40]
// 0061d8c4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0061d8c7  037e24               add edi, dword ptr [esi + 0x24]
// 0061d8ca  45                   inc ebp
// 0061d8cb  83c414               add esp, 0x14
// 0061d8ce  83eb80               sub ebx, -0x80
// 0061d8d1  3be8                 cmp ebp, eax
// 0061d8d3  72de                 jb 0x61d8b3
// 0061d8d5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0061d8d9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061d8dd  8b5624               mov edx, dword ptr [esi + 0x24]
// 0061d8e0  41                   inc ecx
// 0061d8e1  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 0061d8e5  8d1497               lea edx, [edi + edx*4]
// 0061d8e8  89542414             mov dword ptr [esp + 0x14], edx
// 0061d8ec  894c2418             mov dword ptr [esp + 0x18], ecx
// 0061d8f0  7cb2                 jl 0x61d8a4
// 0061d8f2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0061d8f6  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0061d8fa  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0061d8fe  43                   inc ebx
// 0061d8ff  83c504               add ebp, 4
// 0061d902  83c654               add esi, 0x54
// 0061d905  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 0061d908  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0061d90c  896c2420             mov dword ptr [esp + 0x20], ebp
// 0061d910  0f8c0dffffff         jl 0x61d823
// 0061d916  ff8788000000         inc dword ptr [edi + 0x88]
// 0061d91c  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0061d922  3b871c010000         cmp eax, dword ptr [edi + 0x11c]
// 0061d928  5e                   pop esi
// 0061d929  5b                   pop ebx
// 0061d92a  1bc0                 sbb eax, eax
// 0061d92c  5f                   pop edi
// 0061d92d  83c004               add eax, 4
// 0061d930  5d                   pop ebp
// 0061d931  83c420               add esp, 0x20
// 0061d934  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
