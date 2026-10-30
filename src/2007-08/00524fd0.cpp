// from server: 100% by auto
// roc 2007-08 00524fd0  unit: G3D::Line  size: 485 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00524fd0
//
// 00524fd0  83ec2c               sub esp, 0x2c
// 00524fd3  53                   push ebx
// 00524fd4  55                   push ebp
// 00524fd5  8b6c2438             mov ebp, dword ptr [esp + 0x38]
// 00524fd9  56                   push esi
// 00524fda  57                   push edi
// 00524fdb  8bbd88010000         mov edi, dword ptr [ebp + 0x188]
// 00524fe1  33f6                 xor esi, esi
// 00524fe3  39b524010000         cmp dword ptr [ebp + 0x124], esi
// 00524fe9  897c2420             mov dword ptr [esp + 0x20], edi
// 00524fed  7e4f                 jle 0x52503e
// 00524fef  8d8528010000         lea eax, [ebp + 0x128]
// 00524ff5  89442410             mov dword ptr [esp + 0x10], eax
// 00524ff9  8da42400000000       lea esp, [esp]
// 00525000  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00525004  8b01                 mov eax, dword ptr [ecx]
// 00525006  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00525009  8b9d80000000         mov ebx, dword ptr [ebp + 0x80]
// 0052500f  8b4004               mov eax, dword ptr [eax + 4]
// 00525012  0fafd9               imul ebx, ecx
// 00525015  8b5504               mov edx, dword ptr [ebp + 4]
// 00525018  8b5220               mov edx, dword ptr [edx + 0x20]
// 0052501b  6a01                 push 1
// 0052501d  51                   push ecx
// 0052501e  8b4c8748             mov ecx, dword ptr [edi + eax*4 + 0x48]
// 00525022  53                   push ebx
// 00525023  51                   push ecx
// 00525024  55                   push ebp
// 00525025  ffd2                 call edx
// 00525027  8344242404           add dword ptr [esp + 0x24], 4
// 0052502c  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 00525030  83c601               add esi, 1
// 00525033  83c414               add esp, 0x14
// 00525036  3bb524010000         cmp esi, dword ptr [ebp + 0x124]
// 0052503c  7cc2                 jl 0x525000
// 0052503e  8b7718               mov esi, dword ptr [edi + 0x18]
// 00525041  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 00525044  89742424             mov dword ptr [esp + 0x24], esi
// 00525048  0f8d0e010000         jge 0x52515c
// 0052504e  8bff                 mov edi, edi
// 00525050  8b4714               mov eax, dword ptr [edi + 0x14]
// 00525053  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 00525059  89442410             mov dword ptr [esp + 0x10], eax
// 0052505d  0f83e2000000         jae 0x525145
// 00525063  33d2                 xor edx, edx
// 00525065  33db                 xor ebx, ebx
// 00525067  399524010000         cmp dword ptr [ebp + 0x124], edx
// 0052506d  8954241c             mov dword ptr [esp + 0x1c], edx
// 00525071  0f8ea0000000         jle 0x525117
// 00525077  8d8528010000         lea eax, [ebp + 0x128]
// 0052507d  89442414             mov dword ptr [esp + 0x14], eax
// 00525081  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00525085  8b39                 mov edi, dword ptr [ecx]
// 00525087  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 0052508a  8bc1                 mov eax, ecx
// 0052508c  0faf442410           imul eax, dword ptr [esp + 0x10]
// 00525091  837f3800             cmp dword ptr [edi + 0x38], 0
// 00525095  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0052509d  7e5c                 jle 0x5250fb
// 0052509f  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 005250a3  c1e007               shl eax, 7
// 005250a6  89442428             mov dword ptr [esp + 0x28], eax
// 005250aa  8d2cb2               lea ebp, [edx + esi*4]
// 005250ad  8d4900               lea ecx, [ecx]
// 005250b0  8b4500               mov eax, dword ptr [ebp]
// 005250b3  03442428             add eax, dword ptr [esp + 0x28]
// 005250b7  33d2                 xor edx, edx
// 005250b9  85c9                 test ecx, ecx
// 005250bb  7e1f                 jle 0x5250dc
// 005250bd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005250c1  8d749920             lea esi, [ecx + ebx*4 + 0x20]
// 005250c5  8906                 mov dword ptr [esi], eax
// 005250c7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 005250ca  83c201               add edx, 1
// 005250cd  83c301               add ebx, 1
// 005250d0  83c604               add esi, 4
// 005250d3  0580000000           add eax, 0x80
// 005250d8  3bd1                 cmp edx, ecx
// 005250da  7ce9                 jl 0x5250c5
// 005250dc  8b442418             mov eax, dword ptr [esp + 0x18]
// 005250e0  83c001               add eax, 1
// 005250e3  83c504               add ebp, 4
// 005250e6  3b4738               cmp eax, dword ptr [edi + 0x38]
// 005250e9  89442418             mov dword ptr [esp + 0x18], eax
// 005250ed  7cc1                 jl 0x5250b0
// 005250ef  8b6c2440             mov ebp, dword ptr [esp + 0x40]
// 005250f3  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 005250f7  8b742424             mov esi, dword ptr [esp + 0x24]
// 005250fb  8344241404           add dword ptr [esp + 0x14], 4
// 00525100  83c201               add edx, 1
// 00525103  3b9524010000         cmp edx, dword ptr [ebp + 0x124]
// 00525109  8954241c             mov dword ptr [esp + 0x1c], edx
// 0052510d  0f8c6effffff         jl 0x525081
// 00525113  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00525117  8b9598010000         mov edx, dword ptr [ebp + 0x198]
// 0052511d  8d4720               lea eax, [edi + 0x20]
// 00525120  50                   push eax
// 00525121  8b4204               mov eax, dword ptr [edx + 4]
// 00525124  55                   push ebp
// 00525125  ffd0                 call eax
// 00525127  83c408               add esp, 8
// 0052512a  84c0                 test al, al
// 0052512c  7457                 je 0x525185
// 0052512e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00525132  83c001               add eax, 1
// 00525135  3b8538010000         cmp eax, dword ptr [ebp + 0x138]
// 0052513b  89442410             mov dword ptr [esp + 0x10], eax
// 0052513f  0f821effffff         jb 0x525063
// 00525145  83c601               add esi, 1
// 00525148  c7471400000000       mov dword ptr [edi + 0x14], 0
// 0052514f  3b771c               cmp esi, dword ptr [edi + 0x1c]
// 00525152  89742424             mov dword ptr [esp + 0x24], esi
// 00525156  0f8cf4feffff         jl 0x525050
// 0052515c  83858000000001       add dword ptr [ebp + 0x80], 1
// 00525163  8b8580000000         mov eax, dword ptr [ebp + 0x80]
// 00525169  3b851c010000         cmp eax, dword ptr [ebp + 0x11c]
// 0052516f  7328                 jae 0x525199
// 00525171  8bcd                 mov ecx, ebp
// 00525173  e8a8fbffff           call 0x524d20
// 00525178  5f                   pop edi
// 00525179  5e                   pop esi
// 0052517a  5d                   pop ebp
// 0052517b  b803000000           mov eax, 3
// 00525180  5b                   pop ebx
// 00525181  83c42c               add esp, 0x2c
// 00525184  c3                   ret 
// 00525185  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00525189  897718               mov dword ptr [edi + 0x18], esi
// 0052518c  894f14               mov dword ptr [edi + 0x14], ecx
// 0052518f  5f                   pop edi
// 00525190  5e                   pop esi
// 00525191  5d                   pop ebp
// 00525192  33c0                 xor eax, eax
// 00525194  5b                   pop ebx
// 00525195  83c42c               add esp, 0x2c
// 00525198  c3                   ret 
// 00525199  8b9590010000         mov edx, dword ptr [ebp + 0x190]
// 0052519f  8b420c               mov eax, dword ptr [edx + 0xc]
// 005251a2  55                   push ebp
// 005251a3  ffd0                 call eax
// 005251a5  83c404               add esp, 4
// 005251a8  5f                   pop edi
// 005251a9  5e                   pop esi
// 005251aa  5d                   pop ebp
// 005251ab  b804000000           mov eax, 4
// 005251b0  5b                   pop ebx
// 005251b1  83c42c               add esp, 0x2c
// 005251b4  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _consume_data)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
