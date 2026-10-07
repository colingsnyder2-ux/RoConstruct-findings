// roc 2007-08 005251c0  unit: G3D::Line  size: 399 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005251c0
//
// 005251c0  83ec20               sub esp, 0x20
// 005251c3  55                   push ebp
// 005251c4  57                   push edi
// 005251c5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005251c9  8b871c010000         mov eax, dword ptr [edi + 0x11c]
// 005251cf  8baf88010000         mov ebp, dword ptr [edi + 0x188]
// 005251d5  83e801               sub eax, 1
// 005251d8  8944241c             mov dword ptr [esp + 0x1c], eax
// 005251dc  8d642400             lea esp, [esp]
// 005251e0  8b477c               mov eax, dword ptr [edi + 0x7c]
// 005251e3  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 005251e9  3bc1                 cmp eax, ecx
// 005251eb  7c10                 jl 0x5251fd
// 005251ed  7526                 jne 0x525215
// 005251ef  8b8780000000         mov eax, dword ptr [edi + 0x80]
// 005251f5  3b8788000000         cmp eax, dword ptr [edi + 0x88]
// 005251fb  7718                 ja 0x525215
// 005251fd  8b8f90010000         mov ecx, dword ptr [edi + 0x190]
// 00525203  8b11                 mov edx, dword ptr [ecx]
// 00525205  57                   push edi
// 00525206  ffd2                 call edx
// 00525208  83c404               add esp, 4
// 0052520b  85c0                 test eax, eax
// 0052520d  75d1                 jne 0x5251e0
// 0052520f  5f                   pop edi
// 00525210  5d                   pop ebp
// 00525211  83c420               add esp, 0x20
// 00525214  c3                   ret 
// 00525215  53                   push ebx
// 00525216  33db                 xor ebx, ebx
// 00525218  395f24               cmp dword ptr [edi + 0x24], ebx
// 0052521b  56                   push esi
// 0052521c  8bb7c4000000         mov esi, dword ptr [edi + 0xc4]
// 00525222  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00525226  0f8e03010000         jle 0x52532f
// 0052522c  83c548               add ebp, 0x48
// 0052522f  896c2420             mov dword ptr [esp + 0x20], ebp
// 00525233  807e3000             cmp byte ptr [esi + 0x30], 0
// 00525237  0f84d4000000         je 0x525311
// 0052523d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00525240  8b9788000000         mov edx, dword ptr [edi + 0x88]
// 00525246  8b4f04               mov ecx, dword ptr [edi + 4]
// 00525249  0fafd0               imul edx, eax
// 0052524c  8b4920               mov ecx, dword ptr [ecx + 0x20]
// 0052524f  6a00                 push 0
// 00525251  50                   push eax
// 00525252  8b4500               mov eax, dword ptr [ebp]
// 00525255  52                   push edx
// 00525256  50                   push eax
// 00525257  57                   push edi
// 00525258  ffd1                 call ecx
// 0052525a  8b542438             mov edx, dword ptr [esp + 0x38]
// 0052525e  83c414               add esp, 0x14
// 00525261  399788000000         cmp dword ptr [edi + 0x88], edx
// 00525267  89442428             mov dword ptr [esp + 0x28], eax
// 0052526b  7309                 jae 0x525276
// 0052526d  8b460c               mov eax, dword ptr [esi + 0xc]
// 00525270  89442410             mov dword ptr [esp + 0x10], eax
// 00525274  eb16                 jmp 0x52528c
// 00525276  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00525279  8b4620               mov eax, dword ptr [esi + 0x20]
// 0052527c  33d2                 xor edx, edx
// 0052527e  f7f1                 div ecx
// 00525280  85d2                 test edx, edx
// 00525282  89542410             mov dword ptr [esp + 0x10], edx
// 00525286  7504                 jne 0x52528c
// 00525288  894c2410             mov dword ptr [esp + 0x10], ecx
// 0052528c  8b8f9c010000         mov ecx, dword ptr [edi + 0x19c]
// 00525292  8b549904             mov edx, dword ptr [ecx + ebx*4 + 4]
// 00525296  8b442438             mov eax, dword ptr [esp + 0x38]
// 0052529a  8b0c98               mov ecx, dword ptr [eax + ebx*4]
// 0052529d  894c2414             mov dword ptr [esp + 0x14], ecx
// 005252a1  33c9                 xor ecx, ecx
// 005252a3  394c2410             cmp dword ptr [esp + 0x10], ecx
// 005252a7  8954242c             mov dword ptr [esp + 0x2c], edx
// 005252ab  894c2418             mov dword ptr [esp + 0x18], ecx
// 005252af  7e60                 jle 0x525311
// 005252b1  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005252b4  8b542428             mov edx, dword ptr [esp + 0x28]
// 005252b8  8b1c8a               mov ebx, dword ptr [edx + ecx*4]
// 005252bb  33ff                 xor edi, edi
// 005252bd  33ed                 xor ebp, ebp
// 005252bf  85c0                 test eax, eax
// 005252c1  762b                 jbe 0x5252ee
// 005252c3  8b442414             mov eax, dword ptr [esp + 0x14]
// 005252c7  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 005252cb  57                   push edi
// 005252cc  50                   push eax
// 005252cd  53                   push ebx
// 005252ce  56                   push esi
// 005252cf  51                   push ecx
// 005252d0  ff542440             call dword ptr [esp + 0x40]
// 005252d4  8b461c               mov eax, dword ptr [esi + 0x1c]
// 005252d7  037e24               add edi, dword ptr [esi + 0x24]
// 005252da  83c501               add ebp, 1
// 005252dd  83c414               add esp, 0x14
// 005252e0  81c380000000         add ebx, 0x80
// 005252e6  3be8                 cmp ebp, eax
// 005252e8  72d9                 jb 0x5252c3
// 005252ea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005252ee  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005252f2  8b5624               mov edx, dword ptr [esi + 0x24]
// 005252f5  83c101               add ecx, 1
// 005252f8  3b4c2410             cmp ecx, dword ptr [esp + 0x10]
// 005252fc  8d1497               lea edx, [edi + edx*4]
// 005252ff  89542414             mov dword ptr [esp + 0x14], edx
// 00525303  894c2418             mov dword ptr [esp + 0x18], ecx
// 00525307  7cab                 jl 0x5252b4
// 00525309  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0052530d  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 00525311  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00525315  83c301               add ebx, 1
// 00525318  83c504               add ebp, 4
// 0052531b  83c654               add esi, 0x54
// 0052531e  3b5f24               cmp ebx, dword ptr [edi + 0x24]
// 00525321  895c241c             mov dword ptr [esp + 0x1c], ebx
// 00525325  896c2420             mov dword ptr [esp + 0x20], ebp
// 00525329  0f8c04ffffff         jl 0x525233
// 0052532f  83878800000001       add dword ptr [edi + 0x88], 1
// 00525336  8b8788000000         mov eax, dword ptr [edi + 0x88]
// 0052533c  3b871c010000         cmp eax, dword ptr [edi + 0x11c]
// 00525342  5e                   pop esi
// 00525343  5b                   pop ebx
// 00525344  1bc0                 sbb eax, eax
// 00525346  5f                   pop edi
// 00525347  83c004               add eax, 4
// 0052534a  5d                   pop ebp
// 0052534b  83c420               add esp, 0x20
// 0052534e  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _decompress_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
