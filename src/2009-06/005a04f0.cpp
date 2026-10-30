// from server: 100% by auto
// roc 2009-06 005a04f0  unit: seg_005a0000  size: 322 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a04f0
//
// 005a04f0  56                   push esi
// 005a04f1  8b742408             mov esi, dword ptr [esp + 8]
// 005a04f5  8b4604               mov eax, dword ptr [esi + 4]
// 005a04f8  8b08                 mov ecx, dword ptr [eax]
// 005a04fa  57                   push edi
// 005a04fb  6a2c                 push 0x2c
// 005a04fd  6a01                 push 1
// 005a04ff  56                   push esi
// 005a0500  ffd1                 call ecx
// 005a0502  8bf8                 mov edi, eax
// 005a0504  89bea8010000         mov dword ptr [esi + 0x1a8], edi
// 005a050a  83c40c               add esp, 0xc
// 005a050d  c707c0035a00         mov dword ptr [edi], 0x5a03c0
// 005a0513  c7470ce0045a00       mov dword ptr [edi + 0xc], 0x5a04e0
// 005a051a  c7472000000000       mov dword ptr [edi + 0x20], 0
// 005a0521  c7472800000000       mov dword ptr [edi + 0x28], 0
// 005a0528  837e6403             cmp dword ptr [esi + 0x64], 3
// 005a052c  7413                 je 0x5a0541
// 005a052e  8b16                 mov edx, dword ptr [esi]
// 005a0530  c742142f000000       mov dword ptr [edx + 0x14], 0x2f
// 005a0537  8b06                 mov eax, dword ptr [esi]
// 005a0539  8b08                 mov ecx, dword ptr [eax]
// 005a053b  56                   push esi
// 005a053c  ffd1                 call ecx
// 005a053e  83c404               add esp, 4
// 005a0541  8b5604               mov edx, dword ptr [esi + 4]
// 005a0544  8b02                 mov eax, dword ptr [edx]
// 005a0546  55                   push ebp
// 005a0547  6880000000           push 0x80
// 005a054c  6a01                 push 1
// 005a054e  56                   push esi
// 005a054f  ffd0                 call eax
// 005a0551  83c40c               add esp, 0xc
// 005a0554  894718               mov dword ptr [edi + 0x18], eax
// 005a0557  33ed                 xor ebp, ebp
// 005a0559  8da42400000000       lea esp, [esp]
// 005a0560  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a0563  8b5104               mov edx, dword ptr [ecx + 4]
// 005a0566  6800100000           push 0x1000
// 005a056b  6a01                 push 1
// 005a056d  56                   push esi
// 005a056e  ffd2                 call edx
// 005a0570  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 005a0573  890429               mov dword ptr [ecx + ebp], eax
// 005a0576  83c504               add ebp, 4
// 005a0579  83c40c               add esp, 0xc
// 005a057c  81fd80000000         cmp ebp, 0x80
// 005a0582  7cdc                 jl 0x5a0560
// 005a0584  c6471c01             mov byte ptr [edi + 0x1c], 1
// 005a0588  807e5a00             cmp byte ptr [esi + 0x5a], 0
// 005a058c  7461                 je 0x5a05ef
// 005a058e  8b6e54               mov ebp, dword ptr [esi + 0x54]
// 005a0591  83fd08               cmp ebp, 8
// 005a0594  7d1c                 jge 0x5a05b2
// 005a0596  8b16                 mov edx, dword ptr [esi]
// 005a0598  c7421438000000       mov dword ptr [edx + 0x14], 0x38
// 005a059f  8b06                 mov eax, dword ptr [esi]
// 005a05a1  c7401808000000       mov dword ptr [eax + 0x18], 8
// 005a05a8  8b0e                 mov ecx, dword ptr [esi]
// 005a05aa  8b11                 mov edx, dword ptr [ecx]
// 005a05ac  56                   push esi
// 005a05ad  ffd2                 call edx
// 005a05af  83c404               add esp, 4
// 005a05b2  81fd00010000         cmp ebp, 0x100
// 005a05b8  7e1c                 jle 0x5a05d6
// 005a05ba  8b06                 mov eax, dword ptr [esi]
// 005a05bc  c7401439000000       mov dword ptr [eax + 0x14], 0x39
// 005a05c3  8b0e                 mov ecx, dword ptr [esi]
// 005a05c5  c7411800010000       mov dword ptr [ecx + 0x18], 0x100
// 005a05cc  8b16                 mov edx, dword ptr [esi]
// 005a05ce  8b02                 mov eax, dword ptr [edx]
// 005a05d0  56                   push esi
// 005a05d1  ffd0                 call eax
// 005a05d3  83c404               add esp, 4
// 005a05d6  8b4e04               mov ecx, dword ptr [esi + 4]
// 005a05d9  8b5108               mov edx, dword ptr [ecx + 8]
// 005a05dc  6a03                 push 3
// 005a05de  55                   push ebp
// 005a05df  6a01                 push 1
// 005a05e1  56                   push esi
// 005a05e2  ffd2                 call edx
// 005a05e4  83c410               add esp, 0x10
// 005a05e7  894710               mov dword ptr [edi + 0x10], eax
// 005a05ea  896f14               mov dword ptr [edi + 0x14], ebp
// 005a05ed  eb07                 jmp 0x5a05f6
// 005a05ef  c7471000000000       mov dword ptr [edi + 0x10], 0
// 005a05f6  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 005a05fa  b902000000           mov ecx, 2
// 005a05ff  5d                   pop ebp
// 005a0600  7403                 je 0x5a0605
// 005a0602  894e4c               mov dword ptr [esi + 0x4c], ecx
// 005a0605  394e4c               cmp dword ptr [esi + 0x4c], ecx
// 005a0608  7525                 jne 0x5a062f
// 005a060a  8b465c               mov eax, dword ptr [esi + 0x5c]
// 005a060d  8b5604               mov edx, dword ptr [esi + 4]
// 005a0610  03c1                 add eax, ecx
// 005a0612  8b4a04               mov ecx, dword ptr [edx + 4]
// 005a0615  8d0440               lea eax, [eax + eax*2]
// 005a0618  03c0                 add eax, eax
// 005a061a  50                   push eax
// 005a061b  6a01                 push 1
// 005a061d  56                   push esi
// 005a061e  ffd1                 call ecx
// 005a0620  83c40c               add esp, 0xc
// 005a0623  894720               mov dword ptr [edi + 0x20], eax
// 005a0626  5f                   pop edi
// 005a0627  8bc6                 mov eax, esi
// 005a0629  5e                   pop esi
// 005a062a  e9c1fcffff           jmp 0x5a02f0
// 005a062f  5f                   pop edi
// 005a0630  5e                   pop esi
// 005a0631  c3                   ret 
// library jpeg-6b/jquant2.c (function _jinit_2pass_quantizer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
