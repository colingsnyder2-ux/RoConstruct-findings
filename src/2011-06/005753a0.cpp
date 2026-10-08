// from server: 100% by auto
// roc 2011-06 005753a0  unit: seg_00570000  size: 534 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005753a0
//
// 005753a0  83ec2c               sub esp, 0x2c
// 005753a3  53                   push ebx
// 005753a4  55                   push ebp
// 005753a5  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 005753a9  56                   push esi
// 005753aa  57                   push edi
// 005753ab  8bbd88010000         mov edi, dword ptr [ebp + 0x188]
// 005753b1  33f6                 xor esi, esi
// 005753b3  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 005753b9  897c2420             mov dword ptr [esp + 0x20], edi
// 005753bd  7e4d                 jle 0x57540c
// 005753bf  8d8528010000         lea eax, [ebp + 0x128]
// 005753c5  89442410             mov dword ptr [esp + 0x10], eax
// 005753c9  8da42400000000       lea esp, [esp]
// 005753d0  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005753d4  8b01                 mov eax, dword ptr [ecx]
// 005753d6  8b480c               mov ecx, dword ptr [eax + 0xc]
// 005753d9  8b9d80000000         mov ebx, dword ptr [ebp + 0x80]
// 005753df  8b4004               mov eax, dword ptr [eax + 4]
// 005753e2  0fafd9               imul ebx, ecx
// 005753e5  8b5504               mov edx, dword ptr [ebp + 4]
// 005753e8  8b5220               mov edx, dword ptr [edx + 0x20]
// 005753eb  6a01                 push 1
// 005753ed  51                   push ecx
// 005753ee  8b4c8748             mov ecx, dword ptr [edi + eax*4 + 0x48]
// 005753f2  53                   push ebx
// 005753f3  51                   push ecx
// 005753f4  55                   push ebp
// 005753f5  ffd2                 call edx
// 005753f7  8344242404           add dword ptr [esp + 0x24], 4
// 005753fc  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 00575400  46                   inc esi
// 00575401  83c414               add esp, 0x14
// 00575404  3bb524010000         cmp esi, dword ptr [ebp + 0x124]
// 0057540a  7cc4                 jl 0x5753d0
// 0057540c  8b7718               mov esi, dword ptr [edi + 0x18]
// 0057540f  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 00575412  89742424             mov dword ptr [esp + 0x24], esi
// 00575416  0f8d02010000         jge 0x57551e
// 0057541c  8d642400             lea esp, [esp]
// 00575420  8b4714               mov eax, dword ptr [edi + 0x14]
// 00575423  89442410             mov dword ptr [esp + 0x10], eax
// 00575427  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0057542d  0f83d6000000         jae 0x575509
// 00575433  33d2                 xor edx, edx
// 00575435  33db                 xor ebx, ebx
// 00575437  399524010000         cmp dword ptr [ebp + 0x124], edx
// 0057543d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00575441  0f8e96000000         jle 0x5754dd
// 00575447  8d8528010000         lea eax, [ebp + 0x128]
// 0057544d  89442414             mov dword ptr [esp + 0x14], eax
// 00575451  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00575455  8b39                 mov edi, dword ptr [ecx]
// 00575457  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0057545a  8bc1                 mov eax, ecx
// 0057545c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00575461  837f3800             cmp dword ptr [edi + 0x38], 0
// 00575465  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057546d  7e54                 jle 0x5754c3
// 0057546f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 00575473  c1e007               shl eax, 7
// 00575476  89442428             mov dword ptr [esp + 0x28], eax
// 0057547a  8d2cb2               lea ebp, [edx + esi*4]
// 0057547d  8d4900               lea ecx, [ecx]
// 00575480  8b4500               mov eax, dword ptr [ebp]
// 00575483  03442428             add eax, dword ptr [esp + 0x28]
// 00575487  33d2                 xor edx, edx
// 00575489  85c9                 test ecx, ecx
// 0057548b  7e19                 jle 0x5754a6
// 0057548d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00575491  8d749920             lea esi, [ecx + ebx*4 + 0x20]
// 00575495  8906                 mov dword ptr [esi], eax
// 00575497  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0057549a  42                   inc edx
// 0057549b  43                   inc ebx
// 0057549c  83c604               add esi, 4
// 0057549f  83e880               sub eax, -0x80
// 005754a2  3bd1                 cmp edx, ecx
// 005754a4  7cef                 jl 0x575495
// 005754a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 005754aa  40                   inc eax
// 005754ab  83c504               add ebp, 4
// 005754ae  3b4738               cmp eax, dword ptr [edi + 0x38]
// 005754b1  89442418             mov dword ptr [esp + 0x18], eax
// 005754b5  7cc9                 jl 0x575480
// 005754b7  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005754bb  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005754bf  8b742424             mov esi, dword ptr [esp + 0x24]
// 005754c3  8344241404           add dword ptr [esp + 0x14], 4
// 005754c8  42                   inc edx
// 005754c9  3b9524010000         cmp edx, dword ptr [ebp + 0x124]
// 005754cf  8954241c             mov dword ptr [esp + 0x1c], edx
// 005754d3  0f8c78ffffff         jl 0x575451
// 005754d9  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005754dd  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 005754e3  8d4720               lea eax, [edi + 0x20]
// 005754e6  50                   push eax
// 005754e7  8b4204               mov eax, dword ptr [edx + 4]
// 005754ea  55                   push ebp
// 005754eb  ffd0                 call eax
// 005754ed  83c408               add esp, 8
// 005754f0  84c0                 test al, al
// 005754f2  7469                 je 0x57555d
// 005754f4  8b442410             mov eax, dword ptr [esp + 0x10]
// 005754f8  40                   inc eax
// 005754f9  89442410             mov dword ptr [esp + 0x10], eax
// 005754fd  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 00575503  0f822affffff         jb 0x575433
// 00575509  46                   inc esi
// 0057550a  c7471400000000       mov dword ptr [edi + 0x14], 0
// 00575511  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 00575514  89742424             mov dword ptr [esp + 0x24], esi
// 00575518  0f8c02ffffff         jl 0x575420
// 0057551e  8b951c010000         mov edx, dword ptr [ebp + 0x11c]
// 00575524  be01000000           mov esi, 1
// 00575529  01b580000000         add dword ptr [ebp + 0x80], esi
// 0057552f  8b8d80000000         mov ecx, dword ptr [ebp + 0x80]
// 00575535  3bca                 cmp ecx, edx
// 00575537  7361                 jae 0x57559a
// 00575539  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 0057553f  8b8588010000         mov eax, dword ptr [ebp + 0x188]
// 00575545  7e2a                 jle 0x575571
// 00575547  33c9                 xor ecx, ecx
// 00575549  5f                   pop edi
// 0057554a  89701c               mov dword ptr [eax + 0x1c], esi
// 0057554d  894814               mov dword ptr [eax + 0x14], ecx
// 00575550  894818               mov dword ptr [eax + 0x18], ecx
// 00575553  8d4602               lea eax, [esi + 2]
// 00575556  5e                   pop esi
// 00575557  5d                   pop ebp
// 00575558  5b                   pop ebx
// 00575559  83c42c               add esp, 0x2c
// 0057555c  c3                   ret 
// 0057555d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00575561  897718               mov dword ptr [edi + 0x18], esi
// 00575564  894f14               mov dword ptr [edi + 0x14], ecx
// 00575567  5f                   pop edi
// 00575568  5e                   pop esi
// 00575569  5d                   pop ebp
// 0057556a  33c0                 xor eax, eax
// 0057556c  5b                   pop ebx
// 0057556d  83c42c               add esp, 0x2c
// 00575570  c3                   ret 
// 00575571  4a                   dec edx
// 00575572  3bca                 cmp ecx, edx
// 00575574  8b9528010000         mov edx, dword ptr [ebp + 0x128]
// 0057557a  7305                 jae 0x575581
// 0057557c  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0057557f  eb03                 jmp 0x575584
// 00575581  8b4a48               mov ecx, dword ptr [edx + 0x48]
// 00575584  5f                   pop edi
// 00575585  89481c               mov dword ptr [eax + 0x1c], ecx
// 00575588  33c9                 xor ecx, ecx
// 0057558a  5e                   pop esi
// 0057558b  5d                   pop ebp
// 0057558c  894814               mov dword ptr [eax + 0x14], ecx
// 0057558f  894818               mov dword ptr [eax + 0x18], ecx
// 00575592  8d4103               lea eax, [ecx + 3]
// 00575595  5b                   pop ebx
// 00575596  83c42c               add esp, 0x2c
// 00575599  c3                   ret 
// 0057559a  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 005755a0  8b420c               mov eax, dword ptr [edx + 0xc]
// 005755a3  55                   push ebp
// 005755a4  ffd0                 call eax
// 005755a6  83c404               add esp, 4
// 005755a9  5f                   pop edi
// 005755aa  5e                   pop esi
// 005755ab  5d                   pop ebp
// 005755ac  b804000000           mov eax, 4
// 005755b1  5b                   pop ebx
// 005755b2  83c42c               add esp, 0x2c
// 005755b5  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _consume_data)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
