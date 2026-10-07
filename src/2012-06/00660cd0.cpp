// roc 2012-06 00660cd0  unit: seg_00660000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00660cd0
//
// 00660cd0  83ec20               sub esp, 0x20
// 00660cd3  55                   push ebp
// 00660cd4  57                   push edi
// 00660cd5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00660cd9  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 00660cdf  8baf88010000         mov ebp, dword ptr [edi + 0x188]
// 00660ce5  48                   dec eax
// 00660ce6  8944241c             mov dword ptr [esp + 0x1c], eax
// 00660cea  8d9b00000000         lea ebx, [ebx]
// 00660cf0  8b477c               mov eax, dword ptr [edi + 0x7c]
// 00660cf3  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 00660cf9  3bc1                 cmp eax, ecx
// 00660cfb  7c10                 jl 0x660d0d
// 00660cfd  7526                 jne 0x660d25
// 00660cff  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 00660d05  3b8788000000         cmp eax, dword ptr [edi + 0x88]
// 00660d0b  7718                 ja 0x660d25
// 00660d0d  8b8f90010000         mov ecx, dword ptr [edi + 0x190]
// 00660d13  8b11                 mov edx, dword ptr [ecx]
// 00660d15  57                   push edi
// 00660d16  ffd2                 call edx
// 00660d18  83c404               add esp, 4
// 00660d1b  85c0                 test eax, eax
// 00660d1d  75d1                 jne 0x660cf0
// 00660d1f  5f                   pop edi
// 00660d20  5d                   pop ebp
// 00660d21  83c420               add esp, 0x20
// 00660d24  c3                   ret 
// 00660d25  53                   push ebx
// 00660d26  33db                 xor ebx, ebx
// 00660d28  395f24               cmp dword ptr [edi + 0x24], ebx
// 00660d2b  56                   push esi
// 00660d2c  8bb7c4000000         mov esi, dword ptr [edi + 0xc4]
// 00660d32  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00660d36  0f8efa000000         jle 0x660e36
// 00660d3c  83c548               add ebp, 0x48
// 00660d3f  896c2420             mov dword ptr [esp + 0x20], ebp
// 00660d43  807e3000             cmp byte ptr [esi + 0x30], 0
// 00660d47  0f84cd000000         je 0x660e1a
// 00660d4d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00660d50  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 00660d56  8b4f04               mov ecx, dword ptr [edi + 4]
// 00660d59  0fafd0               imul edx, eax
// 00660d5c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 00660d5f  6a00                 push 0
// 00660d61  50                   push eax
// 00660d62  8b4500               mov eax, dword ptr [ebp]
// 00660d65  52                   push edx
// 00660d66  50                   push eax
// 00660d67  57                   push edi
// 00660d68  ffd1                 call ecx
// 00660d6a  8b542438             mov edx, dword ptr [esp + 0x38]
// 00660d6e  83c414               add esp, 0x14
// 00660d71  89442428             mov dword ptr [esp + 0x28], eax
// 00660d75  399788000000         cmp dword ptr [edi + 0x88], edx
// 00660d7b  7309                 jae 0x660d86
// 00660d7d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00660d80  89442410             mov dword ptr [esp + 0x10], eax
// 00660d84  eb16                 jmp 0x660d9c
// 00660d86  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00660d89  8b4620               mov eax, dword ptr [esi + 0x20]
// 00660d8c  33d2                 xor edx, edx
// 00660d8e  f7f1                 div ecx
// 00660d90  89542410             mov dword ptr [esp + 0x10], edx
// 00660d94  85d2                 test edx, edx
// 00660d96  7504                 jne 0x660d9c
// 00660d98  894c2410             mov dword ptr [esp + 0x10], ecx
// 00660d9c  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 00660da2  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 00660da6  8b442438             mov eax, dword ptr [esp + 0x38]
// 00660daa  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 00660dad  894c2414             mov dword ptr [esp + 0x14], ecx
// 00660db1  33c9                 xor ecx, ecx
// 00660db3  394c2410             cmp dword ptr [esp + 0x10], ecx
// 00660db7  8954242c             mov dword ptr [esp + 0x2c], edx
// 00660dbb  894c2418             mov dword ptr [esp + 0x18], ecx
// 00660dbf  7e59                 jle 0x660e1a
// 00660dc1  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00660dc4  8b542428             mov edx, dword ptr [esp + 0x28]
// 00660dc8  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 00660dcb  33ff                 xor edi, edi
// 00660dcd  33ed                 xor ebp, ebp
// 00660dcf  85c0                 test eax, eax
// 00660dd1  7626                 jbe 0x660df9
// 00660dd3  8b442414             mov eax, dword ptr [esp + 0x14]
// 00660dd7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00660ddb  57                   push edi
// 00660ddc  50                   push eax
// 00660ddd  53                   push ebx
// 00660dde  56                   push esi
// 00660ddf  51                   push ecx
// 00660de0  ff542440             call dword ptr [esp + 0x40]
// 00660de4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00660de7  037e24               add edi, dword ptr [esi + 0x24]
// 00660dea  45                   inc ebp
// 00660deb  83c414               add esp, 0x14
// 00660dee  83eb80               sub ebx, -0x80
// 00660df1  3be8                 cmp ebp, eax
// 00660df3  72de                 jb 0x660dd3
// 00660df5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00660df9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 00660dfd  8b5624               mov edx, dword ptr [esi + 0x24]
// 00660e00  41                   inc ecx
// 00660e01  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 00660e05  8d1497               lea edx, [edi + edx*4]
// 00660e08  89542414             mov dword ptr [esp + 0x14], edx
// 00660e0c  894c2418             mov dword ptr [esp + 0x18], ecx
// 00660e10  7cb2                 jl 0x660dc4
// 00660e12  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 00660e16  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00660e1a  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00660e1e  43                   inc ebx
// 00660e1f  83c504               add ebp, 4
// 00660e22  83c654               add esi, 0x54
// 00660e25  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 00660e28  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00660e2c  896c2420             mov dword ptr [esp + 0x20], ebp
// 00660e30  0f8c0dffffff         jl 0x660d43
// 00660e36  ff8788000000         inc dword ptr [edi + 0x88]
// 00660e3c  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 00660e42  3b871c010000         cmp eax, dword ptr [edi + 0x11c]
// 00660e48  5e                   pop esi
// 00660e49  5b                   pop ebx
// 00660e4a  1bc0                 sbb eax, eax
// 00660e4c  5f                   pop edi
// 00660e4d  83c004               add eax, 4
// 00660e50  5d                   pop ebp
// 00660e51  83c420               add esp, 0x20
// 00660e54  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
