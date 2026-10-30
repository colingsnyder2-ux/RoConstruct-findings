// from server: 100% by auto
// roc 2010-06 0057fc50  unit: seg_00570000  size: 327 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0057fc50
//
// 0057fc50  53                   push ebx
// 0057fc51  55                   push ebp
// 0057fc52  56                   push esi
// 0057fc53  8b742410             mov esi, dword ptr [esp + 0x10]
// 0057fc57  8b4604               mov eax, dword ptr [esi + 4]
// 0057fc5a  8b08                 mov ecx, dword ptr [eax]
// 0057fc5c  6a74                 push 0x74
// 0057fc5e  6a01                 push 1
// 0057fc60  56                   push esi
// 0057fc61  ffd1                 call ecx
// 0057fc63  8be8                 mov ebp, eax
// 0057fc65  33db                 xor ebx, ebx
// 0057fc67  89ae88010000         mov dword ptr [esi + 0x188], ebp
// 0057fc6d  83c40c               add esp, 0xc
// 0057fc70  c7450010ee5700       mov dword ptr [ebp], 0x57ee10
// 0057fc77  c7450800fc5700       mov dword ptr [ebp + 8], 0x57fc00
// 0057fc7e  895d70               mov dword ptr [ebp + 0x70], ebx
// 0057fc81  385c2414             cmp byte ptr [esp + 0x14], bl
// 0057fc85  0f8491000000         je 0x57fd1c
// 0057fc8b  395e24               cmp dword ptr [esi + 0x24], ebx
// 0057fc8e  57                   push edi
// 0057fc8f  8bbec4000000         mov edi, dword ptr [esi + 0xc4]
// 0057fc95  895c2418             mov dword ptr [esp + 0x18], ebx
// 0057fc99  7e68                 jle 0x57fd03
// 0057fc9b  8d5548               lea edx, [ebp + 0x48]
// 0057fc9e  83c70c               add edi, 0xc
// 0057fca1  89542414             mov dword ptr [esp + 0x14], edx
// 0057fca5  80bec800000000       cmp byte ptr [esi + 0xc8], 0
// 0057fcac  8b07                 mov eax, dword ptr [edi]
// 0057fcae  8bc8                 mov ecx, eax
// 0057fcb0  7403                 je 0x57fcb5
// 0057fcb2  8d0c49               lea ecx, [ecx + ecx*2]
// 0057fcb5  8b5e04               mov ebx, dword ptr [esi + 4]
// 0057fcb8  51                   push ecx
// 0057fcb9  50                   push eax
// 0057fcba  8b4714               mov eax, dword ptr [edi + 0x14]
// 0057fcbd  50                   push eax
// 0057fcbe  e88dd6feff           call 0x56d350
// 0057fcc3  8b4ffc               mov ecx, dword ptr [edi - 4]
// 0057fcc6  8b5710               mov edx, dword ptr [edi + 0x10]
// 0057fcc9  83c408               add esp, 8
// 0057fccc  50                   push eax
// 0057fccd  51                   push ecx
// 0057fcce  52                   push edx
// 0057fccf  e87cd6feff           call 0x56d350
// 0057fcd4  83c408               add esp, 8
// 0057fcd7  50                   push eax
// 0057fcd8  8b4314               mov eax, dword ptr [ebx + 0x14]
// 0057fcdb  6a01                 push 1
// 0057fcdd  6a01                 push 1
// 0057fcdf  56                   push esi
// 0057fce0  ffd0                 call eax
// 0057fce2  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057fce6  8901                 mov dword ptr [ecx], eax
// 0057fce8  8b442430             mov eax, dword ptr [esp + 0x30]
// 0057fcec  40                   inc eax
// 0057fced  83c104               add ecx, 4
// 0057fcf0  83c418               add esp, 0x18
// 0057fcf3  83c754               add edi, 0x54
// 0057fcf6  3b4624               cmp eax, dword ptr [esi + 0x24]
// 0057fcf9  89442418             mov dword ptr [esp + 0x18], eax
// 0057fcfd  894c2414             mov dword ptr [esp + 0x14], ecx
// 0057fd01  7ca2                 jl 0x57fca5
// 0057fd03  5f                   pop edi
// 0057fd04  8d4d48               lea ecx, [ebp + 0x48]
// 0057fd07  5e                   pop esi
// 0057fd08  c74504f0f05700       mov dword ptr [ebp + 4], 0x57f0f0
// 0057fd0f  c7450c10f35700       mov dword ptr [ebp + 0xc], 0x57f310
// 0057fd16  894d10               mov dword ptr [ebp + 0x10], ecx
// 0057fd19  5d                   pop ebp
// 0057fd1a  5b                   pop ebx
// 0057fd1b  c3                   ret 
// 0057fd1c  8b5604               mov edx, dword ptr [esi + 4]
// 0057fd1f  8b4204               mov eax, dword ptr [edx + 4]
// 0057fd22  6800050000           push 0x500
// 0057fd27  6a01                 push 1
// 0057fd29  56                   push esi
// 0057fd2a  ffd0                 call eax
// 0057fd2c  8d8880000000         lea ecx, [eax + 0x80]
// 0057fd32  894d24               mov dword ptr [ebp + 0x24], ecx
// 0057fd35  8d9000010000         lea edx, [eax + 0x100]
// 0057fd3b  895528               mov dword ptr [ebp + 0x28], edx
// 0057fd3e  8d8880010000         lea ecx, [eax + 0x180]
// 0057fd44  894d2c               mov dword ptr [ebp + 0x2c], ecx
// 0057fd47  8d9000020000         lea edx, [eax + 0x200]
// 0057fd4d  895530               mov dword ptr [ebp + 0x30], edx
// 0057fd50  8d8880020000         lea ecx, [eax + 0x280]
// 0057fd56  894d34               mov dword ptr [ebp + 0x34], ecx
// 0057fd59  8d9000030000         lea edx, [eax + 0x300]
// 0057fd5f  895538               mov dword ptr [ebp + 0x38], edx
// 0057fd62  894520               mov dword ptr [ebp + 0x20], eax
// 0057fd65  83c40c               add esp, 0xc
// 0057fd68  8d8880030000         lea ecx, [eax + 0x380]
// 0057fd6e  8d9000040000         lea edx, [eax + 0x400]
// 0057fd74  894d3c               mov dword ptr [ebp + 0x3c], ecx
// 0057fd77  895540               mov dword ptr [ebp + 0x40], edx
// 0057fd7a  0580040000           add eax, 0x480
// 0057fd7f  894544               mov dword ptr [ebp + 0x44], eax
// 0057fd82  5e                   pop esi
// 0057fd83  895d10               mov dword ptr [ebp + 0x10], ebx
// 0057fd86  c7450430884200       mov dword ptr [ebp + 4], 0x428830
// 0057fd8d  c7450c70ee5700       mov dword ptr [ebp + 0xc], 0x57ee70
// 0057fd94  5d                   pop ebp
// 0057fd95  5b                   pop ebx
// 0057fd96  c3                   ret 
// library jpeg-6b/jdcoefct.c (function _jinit_d_coef_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdcoefct.c
