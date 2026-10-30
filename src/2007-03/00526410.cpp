// roc 2007-03 00526410  unit: seg_00520000  size: 258 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00526410
//
// 00526410  53                   push ebx
// 00526411  57                   push edi
// 00526412  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00526416  8b4704               mov eax, dword ptr [edi + 4]
// 00526419  8b08                 mov ecx, dword ptr [eax]
// 0052641b  6a68                 push 0x68
// 0052641d  6a01                 push 1
// 0052641f  57                   push edi
// 00526420  ffd1                 call ecx
// 00526422  8bd8                 mov ebx, eax
// 00526424  83c40c               add esp, 0xc
// 00526427  807c241000           cmp byte ptr [esp + 0x10], 0
// 0052642c  899f48010000         mov dword ptr [edi + 0x148], ebx
// 00526432  c70360635200         mov dword ptr [ebx], 0x526360
// 00526438  7468                 je 0x5264a2
// 0052643a  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 0052643e  56                   push esi
// 0052643f  8b7744               mov esi, dword ptr [edi + 0x44]
// 00526442  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0052644a  7e52                 jle 0x52649e
// 0052644c  83c60c               add esi, 0xc
// 0052644f  83c340               add ebx, 0x40
// 00526452  55                   push ebp
// 00526453  8b06                 mov eax, dword ptr [esi]
// 00526455  8b5614               mov edx, dword ptr [esi + 0x14]
// 00526458  8b6f04               mov ebp, dword ptr [edi + 4]
// 0052645b  50                   push eax
// 0052645c  50                   push eax
// 0052645d  52                   push edx
// 0052645e  e8bde1feff           call 0x514620
// 00526463  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00526466  83c408               add esp, 8
// 00526469  50                   push eax
// 0052646a  8b46fc               mov eax, dword ptr [esi - 4]
// 0052646d  50                   push eax
// 0052646e  51                   push ecx
// 0052646f  e8ace1feff           call 0x514620
// 00526474  8b5514               mov edx, dword ptr [ebp + 0x14]
// 00526477  83c408               add esp, 8
// 0052647a  50                   push eax
// 0052647b  6a00                 push 0
// 0052647d  6a01                 push 1
// 0052647f  57                   push edi
// 00526480  ffd2                 call edx
// 00526482  8903                 mov dword ptr [ebx], eax
// 00526484  8b442430             mov eax, dword ptr [esp + 0x30]
// 00526488  83c001               add eax, 1
// 0052648b  83c418               add esp, 0x18
// 0052648e  83c304               add ebx, 4
// 00526491  83c654               add esi, 0x54
// 00526494  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 00526497  89442418             mov dword ptr [esp + 0x18], eax
// 0052649b  7cb6                 jl 0x526453
// 0052649d  5d                   pop ebp
// 0052649e  5e                   pop esi
// 0052649f  5f                   pop edi
// 005264a0  5b                   pop ebx
// 005264a1  c3                   ret 
// 005264a2  8b4704               mov eax, dword ptr [edi + 4]
// 005264a5  8b4804               mov ecx, dword ptr [eax + 4]
// 005264a8  6800050000           push 0x500
// 005264ad  6a01                 push 1
// 005264af  57                   push edi
// 005264b0  ffd1                 call ecx
// 005264b2  8d9080000000         lea edx, [eax + 0x80]
// 005264b8  89531c               mov dword ptr [ebx + 0x1c], edx
// 005264bb  8d8800010000         lea ecx, [eax + 0x100]
// 005264c1  894b20               mov dword ptr [ebx + 0x20], ecx
// 005264c4  8d9080010000         lea edx, [eax + 0x180]
// 005264ca  8d8800020000         lea ecx, [eax + 0x200]
// 005264d0  895324               mov dword ptr [ebx + 0x24], edx
// 005264d3  894b28               mov dword ptr [ebx + 0x28], ecx
// 005264d6  8d9080020000         lea edx, [eax + 0x280]
// 005264dc  8d8800030000         lea ecx, [eax + 0x300]
// 005264e2  89532c               mov dword ptr [ebx + 0x2c], edx
// 005264e5  894b30               mov dword ptr [ebx + 0x30], ecx
// 005264e8  894318               mov dword ptr [ebx + 0x18], eax
// 005264eb  8d9080030000         lea edx, [eax + 0x380]
// 005264f1  8d8800040000         lea ecx, [eax + 0x400]
// 005264f7  83c40c               add esp, 0xc
// 005264fa  0580040000           add eax, 0x480
// 005264ff  895334               mov dword ptr [ebx + 0x34], edx
// 00526502  894b38               mov dword ptr [ebx + 0x38], ecx
// 00526505  89433c               mov dword ptr [ebx + 0x3c], eax
// 00526508  5f                   pop edi
// 00526509  c7434000000000       mov dword ptr [ebx + 0x40], 0
// 00526510  5b                   pop ebx
// 00526511  c3                   ret 
// library jpeg-6b/jccoefct.c (function _jinit_c_coef_controller)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
