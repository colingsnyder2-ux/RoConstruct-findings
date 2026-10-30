// from server: 100% by auto
// roc 2008-06 005314a0  unit: seg_00530000  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005314a0
//
// 005314a0  83ec20               sub esp, 0x20
// 005314a3  55                   push ebp
// 005314a4  57                   push edi
// 005314a5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005314a9  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 005314af  8baf88010000         mov ebp, dword ptr [edi + 0x188]
// 005314b5  48                   dec eax
// 005314b6  8944241c             mov dword ptr [esp + 0x1c], eax
// 005314ba  8d9b00000000         lea ebx, [ebx]
// 005314c0  8b477c               mov eax, dword ptr [edi + 0x7c]
// 005314c3  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 005314c9  3bc1                 cmp eax, ecx
// 005314cb  7c10                 jl 0x5314dd
// 005314cd  7526                 jne 0x5314f5
// 005314cf  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 005314d5  3b8788000000         cmp eax, dword ptr [edi + 0x88]
// 005314db  7718                 ja 0x5314f5
// 005314dd  8b8f90010000         mov ecx, dword ptr [edi + 0x190]
// 005314e3  8b11                 mov edx, dword ptr [ecx]
// 005314e5  57                   push edi
// 005314e6  ffd2                 call edx
// 005314e8  83c404               add esp, 4
// 005314eb  85c0                 test eax, eax
// 005314ed  75d1                 jne 0x5314c0
// 005314ef  5f                   pop edi
// 005314f0  5d                   pop ebp
// 005314f1  83c420               add esp, 0x20
// 005314f4  c3                   ret 
// 005314f5  53                   push ebx
// 005314f6  33db                 xor ebx, ebx
// 005314f8  395f24               cmp dword ptr [edi + 0x24], ebx
// 005314fb  56                   push esi
// 005314fc  8bb7c4000000         mov esi, dword ptr [edi + 0xc4]
// 00531502  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00531506  0f8efa000000         jle 0x531606
// 0053150c  83c548               add ebp, 0x48
// 0053150f  896c2420             mov dword ptr [esp + 0x20], ebp
// 00531513  807e3000             cmp byte ptr [esi + 0x30], 0
// 00531517  0f84cd000000         je 0x5315ea
// 0053151d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00531520  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 00531526  8b4f04               mov ecx, dword ptr [edi + 4]
// 00531529  0fafd0               imul edx, eax
// 0053152c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0053152f  6a00                 push 0
// 00531531  50                   push eax
// 00531532  8b4500               mov eax, dword ptr [ebp]
// 00531535  52                   push edx
// 00531536  50                   push eax
// 00531537  57                   push edi
// 00531538  ffd1                 call ecx
// 0053153a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0053153e  83c414               add esp, 0x14
// 00531541  89442428             mov dword ptr [esp + 0x28], eax
// 00531545  399788000000         cmp dword ptr [edi + 0x88], edx
// 0053154b  7309                 jae 0x531556
// 0053154d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00531550  89442410             mov dword ptr [esp + 0x10], eax
// 00531554  eb16                 jmp 0x53156c
// 00531556  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00531559  8b4620               mov eax, dword ptr [esi + 0x20]
// 0053155c  33d2                 xor edx, edx
// 0053155e  f7f1                 div ecx
// 00531560  89542410             mov dword ptr [esp + 0x10], edx
// 00531564  85d2                 test edx, edx
// 00531566  7504                 jne 0x53156c
// 00531568  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053156c  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 00531572  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 00531576  8b442438             mov eax, dword ptr [esp + 0x38]
// 0053157a  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 0053157d  894c2414             mov dword ptr [esp + 0x14], ecx
// 00531581  33c9                 xor ecx, ecx
// 00531583  394c2410             cmp dword ptr [esp + 0x10], ecx
// 00531587  8954242c             mov dword ptr [esp + 0x2c], edx
// 0053158b  894c2418             mov dword ptr [esp + 0x18], ecx
// 0053158f  7e59                 jle 0x5315ea
// 00531591  8b461c               mov eax, dword ptr [esi + 0x1c]
// 00531594  8b542428             mov edx, dword ptr [esp + 0x28]
// 00531598  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 0053159b  33ff                 xor edi, edi
// 0053159d  33ed                 xor ebp, ebp
// 0053159f  85c0                 test eax, eax
// 005315a1  7626                 jbe 0x5315c9
// 005315a3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005315a7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005315ab  57                   push edi
// 005315ac  50                   push eax
// 005315ad  53                   push ebx
// 005315ae  56                   push esi
// 005315af  51                   push ecx
// 005315b0  ff542440             call dword ptr [esp + 0x40]
// 005315b4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005315b7  037e24               add edi, dword ptr [esi + 0x24]
// 005315ba  45                   inc ebp
// 005315bb  83c414               add esp, 0x14
// 005315be  83eb80               sub ebx, -0x80
// 005315c1  3be8                 cmp ebp, eax
// 005315c3  72de                 jb 0x5315a3
// 005315c5  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005315c9  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005315cd  8b5624               mov edx, dword ptr [esi + 0x24]
// 005315d0  41                   inc ecx
// 005315d1  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 005315d5  8d1497               lea edx, [edi + edx*4]
// 005315d8  89542414             mov dword ptr [esp + 0x14], edx
// 005315dc  894c2418             mov dword ptr [esp + 0x18], ecx
// 005315e0  7cb2                 jl 0x531594
// 005315e2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 005315e6  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 005315ea  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 005315ee  43                   inc ebx
// 005315ef  83c504               add ebp, 4
// 005315f2  83c654               add esi, 0x54
// 005315f5  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 005315f8  895c241c             mov dword ptr [esp + 0x1c], ebx
// 005315fc  896c2420             mov dword ptr [esp + 0x20], ebp
// 00531600  0f8c0dffffff         jl 0x531513
// 00531606  ff8788000000         inc dword ptr [edi + 0x88]
// 0053160c  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 00531612  3b871c010000         cmp eax, dword ptr [edi + 0x11c]
// 00531618  5e                   pop esi
// 00531619  5b                   pop ebx
// 0053161a  1bc0                 sbb eax, eax
// 0053161c  5f                   pop edi
// 0053161d  83c004               add eax, 4
// 00531620  5d                   pop ebp
// 00531621  83c420               add esp, 0x20
// 00531624  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
