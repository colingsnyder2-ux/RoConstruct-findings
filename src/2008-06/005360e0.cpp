// from server: 100% by auto
// roc 2008-06 005360e0  unit: seg_00530000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005360e0
//
// 005360e0  56                   push esi
// 005360e1  8b742408             mov esi, dword ptr [esp + 8]
// 005360e5  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 005360e9  57                   push edi
// 005360ea  8bbea8010000         mov edi, dword ptr [esi + 0x1a8]
// 005360f0  8b4718               mov eax, dword ptr [edi + 0x18]
// 005360f3  8944240c             mov dword ptr [esp + 0xc], eax
// 005360f7  7407                 je 0x536100
// 005360f9  c7464c02000000       mov dword ptr [esi + 0x4c], 2
// 00536100  807c241000           cmp byte ptr [esp + 0x10], 0
// 00536105  7417                 je 0x53611e
// 00536107  c7470430505300       mov dword ptr [edi + 4], 0x535030
// 0053610e  c74708b0605300       mov dword ptr [edi + 8], 0x5360b0
// 00536115  c6471c01             mov byte ptr [edi + 0x1c], 1
// 00536119  e9ae000000           jmp 0x5361cc
// 0053611e  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00536122  7509                 jne 0x53612d
// 00536124  c74704505d5300       mov dword ptr [edi + 4], 0x535d50
// 0053612b  eb07                 jmp 0x536134
// 0053612d  c74704905c5300       mov dword ptr [edi + 4], 0x535c90
// 00536134  55                   push ebp
// 00536135  c7470810d44700       mov dword ptr [edi + 8], 0x47d410
// 0053613c  8b6e70               mov ebp, dword ptr [esi + 0x70]
// 0053613f  83fd01               cmp ebp, 1
// 00536142  7d1c                 jge 0x536160
// 00536144  8b0e                 mov ecx, dword ptr [esi]
// 00536146  c7411438000000       mov dword ptr [ecx + 0x14], 0x38
// 0053614d  8b16                 mov edx, dword ptr [esi]
// 0053614f  c7421801000000       mov dword ptr [edx + 0x18], 1
// 00536156  8b06                 mov eax, dword ptr [esi]
// 00536158  8b08                 mov ecx, dword ptr [eax]
// 0053615a  56                   push esi
// 0053615b  ffd1                 call ecx
// 0053615d  83c404               add esp, 4
// 00536160  81fd00010000         cmp ebp, 0x100
// 00536166  7e1c                 jle 0x536184
// 00536168  8b16                 mov edx, dword ptr [esi]
// 0053616a  c7421439000000       mov dword ptr [edx + 0x14], 0x39
// 00536171  8b06                 mov eax, dword ptr [esi]
// 00536173  c7401800010000       mov dword ptr [eax + 0x18], 0x100
// 0053617a  8b0e                 mov ecx, dword ptr [esi]
// 0053617c  8b11                 mov edx, dword ptr [ecx]
// 0053617e  56                   push esi
// 0053617f  ffd2                 call edx
// 00536181  83c404               add esp, 4
// 00536184  837e4c02             cmp dword ptr [esi + 0x4c], 2
// 00536188  7541                 jne 0x5361cb
// 0053618a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 0053618d  83c002               add eax, 2
// 00536190  8d2c40               lea ebp, [eax + eax*2]
// 00536193  03ed                 add ebp, ebp
// 00536195  837f2000             cmp dword ptr [edi + 0x20], 0
// 00536199  7512                 jne 0x5361ad
// 0053619b  8b4604               mov eax, dword ptr [esi + 4]
// 0053619e  8b4804               mov ecx, dword ptr [eax + 4]
// 005361a1  55                   push ebp
// 005361a2  6a01                 push 1
// 005361a4  56                   push esi
// 005361a5  ffd1                 call ecx
// 005361a7  83c40c               add esp, 0xc
// 005361aa  894720               mov dword ptr [edi + 0x20], eax
// 005361ad  8b5720               mov edx, dword ptr [edi + 0x20]
// 005361b0  55                   push ebp
// 005361b1  52                   push edx
// 005361b2  e8e9f9feff           call 0x525ba0
// 005361b7  83c408               add esp, 8
// 005361ba  837f2800             cmp dword ptr [edi + 0x28], 0
// 005361be  7507                 jne 0x5361c7
// 005361c0  8bc6                 mov eax, esi
// 005361c2  e849feffff           call 0x536010
// 005361c7  c6472400             mov byte ptr [edi + 0x24], 0
// 005361cb  5d                   pop ebp
// 005361cc  807f1c00             cmp byte ptr [edi + 0x1c], 0
// 005361d0  7421                 je 0x5361f3
// 005361d2  33f6                 xor esi, esi
// 005361d4  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005361d8  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005361db  6800100000           push 0x1000
// 005361e0  51                   push ecx
// 005361e1  e8baf9feff           call 0x525ba0
// 005361e6  46                   inc esi
// 005361e7  83c408               add esp, 8
// 005361ea  83fe20               cmp esi, 0x20
// 005361ed  7ce5                 jl 0x5361d4
// 005361ef  c6471c00             mov byte ptr [edi + 0x1c], 0
// 005361f3  5f                   pop edi
// 005361f4  5e                   pop esi
// 005361f5  c3                   ret 
// library jpeg-6b/jquant2.c (function _start_pass_2_quant)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
