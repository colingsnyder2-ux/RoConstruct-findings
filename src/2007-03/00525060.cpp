// roc 2007-03 00525060  unit: seg_00520000  size: 365 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00525060
//
// 00525060  83ec20               sub esp, 0x20
// 00525063  53                   push ebx
// 00525064  55                   push ebp
// 00525065  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00525069  8b9da8010000         mov ebx, dword ptr [ebp + 0x1a8]
// 0052506f  56                   push esi
// 00525070  57                   push edi
// 00525071  8d7320               lea esi, [ebx + 0x20]
// 00525074  56                   push esi
// 00525075  55                   push ebp
// 00525076  895c2434             mov dword ptr [esp + 0x34], ebx
// 0052507a  e8b1feffff           call 0x524f30
// 0052507f  83c408               add esp, 8
// 00525082  837d6403             cmp dword ptr [ebp + 0x64], 3
// 00525086  8bf8                 mov edi, eax
// 00525088  6a01                 push 1
// 0052508a  897c2420             mov dword ptr [esp + 0x20], edi
// 0052508e  55                   push ebp
// 0052508f  752d                 jne 0x5250be
// 00525091  8b4500               mov eax, dword ptr [ebp]
// 00525094  83c018               add eax, 0x18
// 00525097  8938                 mov dword ptr [eax], edi
// 00525099  8b0e                 mov ecx, dword ptr [esi]
// 0052509b  894804               mov dword ptr [eax + 4], ecx
// 0052509e  8b5324               mov edx, dword ptr [ebx + 0x24]
// 005250a1  895008               mov dword ptr [eax + 8], edx
// 005250a4  8b4b28               mov ecx, dword ptr [ebx + 0x28]
// 005250a7  89480c               mov dword ptr [eax + 0xc], ecx
// 005250aa  8b5500               mov edx, dword ptr [ebp]
// 005250ad  c742145e000000       mov dword ptr [edx + 0x14], 0x5e
// 005250b4  8b4500               mov eax, dword ptr [ebp]
// 005250b7  8b4804               mov ecx, dword ptr [eax + 4]
// 005250ba  ffd1                 call ecx
// 005250bc  eb18                 jmp 0x5250d6
// 005250be  8b5500               mov edx, dword ptr [ebp]
// 005250c1  c742145f000000       mov dword ptr [edx + 0x14], 0x5f
// 005250c8  8b4500               mov eax, dword ptr [ebp]
// 005250cb  897818               mov dword ptr [eax + 0x18], edi
// 005250ce  8b4d00               mov ecx, dword ptr [ebp]
// 005250d1  8b5104               mov edx, dword ptr [ecx + 4]
// 005250d4  ffd2                 call edx
// 005250d6  8b4d64               mov ecx, dword ptr [ebp + 0x64]
// 005250d9  8b4504               mov eax, dword ptr [ebp + 4]
// 005250dc  8b5008               mov edx, dword ptr [eax + 8]
// 005250df  83c408               add esp, 8
// 005250e2  51                   push ecx
// 005250e3  57                   push edi
// 005250e4  6a01                 push 1
// 005250e6  55                   push ebp
// 005250e7  ffd2                 call edx
// 005250e9  83c410               add esp, 0x10
// 005250ec  837d6400             cmp dword ptr [ebp + 0x64], 0
// 005250f0  8bc8                 mov ecx, eax
// 005250f2  894c2428             mov dword ptr [esp + 0x28], ecx
// 005250f6  897c2414             mov dword ptr [esp + 0x14], edi
// 005250fa  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00525102  0f8eb7000000         jle 0x5251bf
// 00525108  8bd9                 mov ebx, ecx
// 0052510a  89742418             mov dword ptr [esp + 0x18], esi
// 0052510e  8bff                 mov edi, edi
// 00525110  8b442418             mov eax, dword ptr [esp + 0x18]
// 00525114  8b30                 mov esi, dword ptr [eax]
// 00525116  8b442414             mov eax, dword ptr [esp + 0x14]
// 0052511a  99                   cdq 
// 0052511b  f7fe                 idiv esi
// 0052511d  85f6                 test esi, esi
// 0052511f  89742420             mov dword ptr [esp + 0x20], esi
// 00525123  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0052512b  8bf8                 mov edi, eax
// 0052512d  7e5a                 jle 0x525189
// 0052512f  33ed                 xor ebp, ebp
// 00525131  eb04                 jmp 0x525137
// 00525133  8b742420             mov esi, dword ptr [esp + 0x20]
// 00525137  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0052513b  83c6ff               add esi, -1
// 0052513e  e8ddfeffff           call 0x525020
// 00525143  3b6c241c             cmp ebp, dword ptr [esp + 0x1c]
// 00525147  8bd5                 mov edx, ebp
// 00525149  7d23                 jge 0x52516e
// 0052514b  eb03                 jmp 0x525150
// 0052514d  8d4900               lea ecx, [ecx]
// 00525150  33c9                 xor ecx, ecx
// 00525152  85ff                 test edi, edi
// 00525154  7e0e                 jle 0x525164
// 00525156  8b33                 mov esi, dword ptr [ebx]
// 00525158  03f1                 add esi, ecx
// 0052515a  83c101               add ecx, 1
// 0052515d  3bcf                 cmp ecx, edi
// 0052515f  880416               mov byte ptr [esi + edx], al
// 00525162  7cf2                 jl 0x525156
// 00525164  03542414             add edx, dword ptr [esp + 0x14]
// 00525168  3b54241c             cmp edx, dword ptr [esp + 0x1c]
// 0052516c  7ce2                 jl 0x525150
// 0052516e  8b442410             mov eax, dword ptr [esp + 0x10]
// 00525172  83c001               add eax, 1
// 00525175  03ef                 add ebp, edi
// 00525177  3b442420             cmp eax, dword ptr [esp + 0x20]
// 0052517b  89442410             mov dword ptr [esp + 0x10], eax
// 0052517f  7cb2                 jl 0x525133
// 00525181  8b6c2434             mov ebp, dword ptr [esp + 0x34]
// 00525185  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00525189  8b442424             mov eax, dword ptr [esp + 0x24]
// 0052518d  8344241804           add dword ptr [esp + 0x18], 4
// 00525192  83c001               add eax, 1
// 00525195  83c304               add ebx, 4
// 00525198  3b4564               cmp eax, dword ptr [ebp + 0x64]
// 0052519b  897c2414             mov dword ptr [esp + 0x14], edi
// 0052519f  89442424             mov dword ptr [esp + 0x24], eax
// 005251a3  0f8c67ffffff         jl 0x525110
// 005251a9  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005251ad  5f                   pop edi
// 005251ae  5e                   pop esi
// 005251af  894810               mov dword ptr [eax + 0x10], ecx
// 005251b2  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005251b6  5d                   pop ebp
// 005251b7  894814               mov dword ptr [eax + 0x14], ecx
// 005251ba  5b                   pop ebx
// 005251bb  83c420               add esp, 0x20
// 005251be  c3                   ret 
// 005251bf  897b14               mov dword ptr [ebx + 0x14], edi
// 005251c2  5f                   pop edi
// 005251c3  5e                   pop esi
// 005251c4  5d                   pop ebp
// 005251c5  894b10               mov dword ptr [ebx + 0x10], ecx
// 005251c8  5b                   pop ebx
// 005251c9  83c420               add esp, 0x20
// 005251cc  c3                   ret 
// library jpeg-6b/jquant1.c (function _create_colormap)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /Ob1 /GS- /MD
// roc-lib: jpeg-6b jquant1.c
