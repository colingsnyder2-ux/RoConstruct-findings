// roc 2009-06 0059b780  unit: seg_00590000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059b780
//
// 0059b780  83ec20               sub esp, 0x20
// 0059b783  55                   push ebp
// 0059b784  57                   push edi
// 0059b785  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0059b789  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 0059b78f  8baf88010000         mov ebp, dword ptr [edi + 0x188]
// 0059b795  48                   dec eax
// 0059b796  8944241c             mov dword ptr [esp + 0x1c], eax
// 0059b79a  8d9b00000000         lea ebx, [ebx]
// 0059b7a0  8b477c               mov eax, dword ptr [edi + 0x7c]
// 0059b7a3  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 0059b7a9  3bc1                 cmp eax, ecx
// 0059b7ab  7c10                 jl 0x59b7bd
// 0059b7ad  7526                 jne 0x59b7d5
// 0059b7af  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 0059b7b5  3b8788000000         cmp eax, dword ptr [edi + 0x88]
// 0059b7bb  7718                 ja 0x59b7d5
// 0059b7bd  8b8f90010000         mov ecx, dword ptr [edi + 0x190]
// 0059b7c3  8b11                 mov edx, dword ptr [ecx]
// 0059b7c5  57                   push edi
// 0059b7c6  ffd2                 call edx
// 0059b7c8  83c404               add esp, 4
// 0059b7cb  85c0                 test eax, eax
// 0059b7cd  75d1                 jne 0x59b7a0
// 0059b7cf  5f                   pop edi
// 0059b7d0  5d                   pop ebp
// 0059b7d1  83c420               add esp, 0x20
// 0059b7d4  c3                   ret 
// 0059b7d5  53                   push ebx
// 0059b7d6  33db                 xor ebx, ebx
// 0059b7d8  395f24               cmp dword ptr [edi + 0x24], ebx
// 0059b7db  56                   push esi
// 0059b7dc  8bb7c4000000         mov esi, dword ptr [edi + 0xc4]
// 0059b7e2  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0059b7e6  0f8efa000000         jle 0x59b8e6
// 0059b7ec  83c548               add ebp, 0x48
// 0059b7ef  896c2420             mov dword ptr [esp + 0x20], ebp
// 0059b7f3  807e3000             cmp byte ptr [esi + 0x30], 0
// 0059b7f7  0f84cd000000         je 0x59b8ca
// 0059b7fd  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059b800  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 0059b806  8b4f04               mov ecx, dword ptr [edi + 4]
// 0059b809  0fafd0               imul edx, eax
// 0059b80c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0059b80f  6a00                 push 0
// 0059b811  50                   push eax
// 0059b812  8b4500               mov eax, dword ptr [ebp]
// 0059b815  52                   push edx
// 0059b816  50                   push eax
// 0059b817  57                   push edi
// 0059b818  ffd1                 call ecx
// 0059b81a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0059b81e  83c414               add esp, 0x14
// 0059b821  89442428             mov dword ptr [esp + 0x28], eax
// 0059b825  399788000000         cmp dword ptr [edi + 0x88], edx
// 0059b82b  7309                 jae 0x59b836
// 0059b82d  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059b830  89442410             mov dword ptr [esp + 0x10], eax
// 0059b834  eb16                 jmp 0x59b84c
// 0059b836  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059b839  8b4620               mov eax, dword ptr [esi + 0x20]
// 0059b83c  33d2                 xor edx, edx
// 0059b83e  f7f1                 div ecx
// 0059b840  89542410             mov dword ptr [esp + 0x10], edx
// 0059b844  85d2                 test edx, edx
// 0059b846  7504                 jne 0x59b84c
// 0059b848  894c2410             mov dword ptr [esp + 0x10], ecx
// 0059b84c  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 0059b852  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 0059b856  8b442438             mov eax, dword ptr [esp + 0x38]
// 0059b85a  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 0059b85d  894c2414             mov dword ptr [esp + 0x14], ecx
// 0059b861  33c9                 xor ecx, ecx
// 0059b863  394c2410             cmp dword ptr [esp + 0x10], ecx
// 0059b867  8954242c             mov dword ptr [esp + 0x2c], edx
// 0059b86b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059b86f  7e59                 jle 0x59b8ca
// 0059b871  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0059b874  8b542428             mov edx, dword ptr [esp + 0x28]
// 0059b878  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 0059b87b  33ff                 xor edi, edi
// 0059b87d  33ed                 xor ebp, ebp
// 0059b87f  85c0                 test eax, eax
// 0059b881  7626                 jbe 0x59b8a9
// 0059b883  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059b887  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0059b88b  57                   push edi
// 0059b88c  50                   push eax
// 0059b88d  53                   push ebx
// 0059b88e  56                   push esi
// 0059b88f  51                   push ecx
// 0059b890  ff542440             call dword ptr [esp + 0x40]
// 0059b894  8b461c               mov eax, dword ptr [esi + 0x1c]
// 0059b897  037e24               add edi, dword ptr [esi + 0x24]
// 0059b89a  45                   inc ebp
// 0059b89b  83c414               add esp, 0x14
// 0059b89e  83eb80               sub ebx, -0x80
// 0059b8a1  3be8                 cmp ebp, eax
// 0059b8a3  72de                 jb 0x59b883
// 0059b8a5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059b8a9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0059b8ad  8b5624               mov edx, dword ptr [esi + 0x24]
// 0059b8b0  41                   inc ecx
// 0059b8b1  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 0059b8b5  8d1497               lea edx, [edi + edx*4]
// 0059b8b8  89542414             mov dword ptr [esp + 0x14], edx
// 0059b8bc  894c2418             mov dword ptr [esp + 0x18], ecx
// 0059b8c0  7cb2                 jl 0x59b874
// 0059b8c2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0059b8c6  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0059b8ca  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0059b8ce  43                   inc ebx
// 0059b8cf  83c504               add ebp, 4
// 0059b8d2  83c654               add esi, 0x54
// 0059b8d5  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 0059b8d8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 0059b8dc  896c2420             mov dword ptr [esp + 0x20], ebp
// 0059b8e0  0f8c0dffffff         jl 0x59b7f3
// 0059b8e6  ff8788000000         inc dword ptr [edi + 0x88]
// 0059b8ec  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0059b8f2  3b871c010000         cmp eax, dword ptr [edi + 0x11c]
// 0059b8f8  5e                   pop esi
// 0059b8f9  5b                   pop ebx
// 0059b8fa  1bc0                 sbb eax, eax
// 0059b8fc  5f                   pop edi
// 0059b8fd  83c004               add eax, 4
// 0059b900  5d                   pop ebp
// 0059b901  83c420               add esp, 0x20
// 0059b904  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
