// roc 2009-12 00626590  unit: seg_00620000  size: 491 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626590
//
// 00626590  83ec14               sub esp, 0x14
// 00626593  53                   push ebx
// 00626594  56                   push esi
// 00626595  8b742420             mov esi, dword ptr [esp + 0x20]
// 00626599  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0062659f  8b9e44010000         mov ebx, dword ptr [esi + 0x144]
// 006265a5  57                   push edi
// 006265a6  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 006265aa  8b0f                 mov ecx, dword ptr [edi]
// 006265ac  8d0440               lea eax, [eax + eax*2]
// 006265af  8944241c             mov dword ptr [esp + 0x1c], eax
// 006265b3  3b4c243c             cmp ecx, dword ptr [esp + 0x3c]
// 006265b7  0f83b7010000         jae 0x626774
// 006265bd  55                   push ebp
// 006265be  8bff                 mov edi, edi
// 006265c0  8b542430             mov edx, dword ptr [esp + 0x30]
// 006265c4  8b12                 mov edx, dword ptr [edx]
// 006265c6  8b442434             mov eax, dword ptr [esp + 0x34]
// 006265ca  3bd0                 cmp edx, eax
// 006265cc  0f83b2000000         jae 0x626684
// 006265d2  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 006265d5  8b6b3c               mov ebp, dword ptr [ebx + 0x3c]
// 006265d8  2be9                 sub ebp, ecx
// 006265da  2bc2                 sub eax, edx
// 006265dc  896c2410             mov dword ptr [esp + 0x10], ebp
// 006265e0  3be8                 cmp ebp, eax
// 006265e2  7206                 jb 0x6265ea
// 006265e4  89442410             mov dword ptr [esp + 0x10], eax
// 006265e8  8be8                 mov ebp, eax
// 006265ea  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 006265f0  8b4004               mov eax, dword ptr [eax + 4]
// 006265f3  55                   push ebp
// 006265f4  51                   push ecx
// 006265f5  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 006265f9  8d7b08               lea edi, [ebx + 8]
// 006265fc  57                   push edi
// 006265fd  8d1491               lea edx, [ecx + edx*4]
// 00626600  52                   push edx
// 00626601  56                   push esi
// 00626602  ffd0                 call eax
// 00626604  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00626607  83c414               add esp, 0x14
// 0062660a  3b4e20               cmp ecx, dword ptr [esi + 0x20]
// 0062660d  7560                 jne 0x62666f
// 0062660f  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 00626613  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0062661b  7e52                 jle 0x62666f
// 0062661d  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00626623  897c2414             mov dword ptr [esp + 0x14], edi
// 00626627  bf01000000           mov edi, 1
// 0062662c  3bc7                 cmp eax, edi
// 0062662e  7c2c                 jl 0x62665c
// 00626630  83cdff               or ebp, 0xffffffff
// 00626633  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00626636  8b542414             mov edx, dword ptr [esp + 0x14]
// 0062663a  8b02                 mov eax, dword ptr [edx]
// 0062663c  51                   push ecx
// 0062663d  6a01                 push 1
// 0062663f  55                   push ebp
// 00626640  50                   push eax
// 00626641  6a00                 push 0
// 00626643  50                   push eax
// 00626644  e84756feff           call 0x60bc90
// 00626649  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0062664f  47                   inc edi
// 00626650  83c418               add esp, 0x18
// 00626653  4d                   dec ebp
// 00626654  3bf8                 cmp edi, eax
// 00626656  7edb                 jle 0x626633
// 00626658  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0062665c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00626660  8344241404           add dword ptr [esp + 0x14], 4
// 00626665  41                   inc ecx
// 00626666  3b4e3c               cmp ecx, dword ptr [esi + 0x3c]
// 00626669  894c2428             mov dword ptr [esp + 0x28], ecx
// 0062666d  7cb8                 jl 0x626627
// 0062666f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00626673  0128                 add dword ptr [eax], ebp
// 00626675  016b34               add dword ptr [ebx + 0x34], ebp
// 00626678  296b30               sub dword ptr [ebx + 0x30], ebp
// 0062667b  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 0062667f  e989000000           jmp 0x62670d
// 00626684  837b3000             cmp dword ptr [ebx + 0x30], 0
// 00626688  0f85e5000000         jne 0x626773
// 0062668e  8b5334               mov edx, dword ptr [ebx + 0x34]
// 00626691  3b533c               cmp edx, dword ptr [ebx + 0x3c]
// 00626694  7d77                 jge 0x62670d
// 00626696  837e3c00             cmp dword ptr [esi + 0x3c], 0
// 0062669a  c744242800000000     mov dword ptr [esp + 0x28], 0
// 006266a2  7e63                 jle 0x626707
// 006266a4  8d4308               lea eax, [ebx + 8]
// 006266a7  89442414             mov dword ptr [esp + 0x14], eax
// 006266ab  eb03                 jmp 0x6266b0
// 006266ad  8d4900               lea ecx, [ecx]
// 006266b0  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 006266b3  8b7b34               mov edi, dword ptr [ebx + 0x34]
// 006266b6  3bf8                 cmp edi, eax
// 006266b8  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 006266bb  8b542414             mov edx, dword ptr [esp + 0x14]
// 006266bf  8b2a                 mov ebp, dword ptr [edx]
// 006266c1  8944241c             mov dword ptr [esp + 0x1c], eax
// 006266c5  894c2410             mov dword ptr [esp + 0x10], ecx
// 006266c9  7d25                 jge 0x6266f0
// 006266cb  8d47ff               lea eax, [edi - 1]
// 006266ce  89442418             mov dword ptr [esp + 0x18], eax
// 006266d2  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006266d6  8b542418             mov edx, dword ptr [esp + 0x18]
// 006266da  51                   push ecx
// 006266db  6a01                 push 1
// 006266dd  57                   push edi
// 006266de  55                   push ebp
// 006266df  52                   push edx
// 006266e0  55                   push ebp
// 006266e1  e8aa55feff           call 0x60bc90
// 006266e6  47                   inc edi
// 006266e7  83c418               add esp, 0x18
// 006266ea  3b7c241c             cmp edi, dword ptr [esp + 0x1c]
// 006266ee  7ce2                 jl 0x6266d2
// 006266f0  8b442428             mov eax, dword ptr [esp + 0x28]
// 006266f4  8344241404           add dword ptr [esp + 0x14], 4
// 006266f9  40                   inc eax
// 006266fa  3b463c               cmp eax, dword ptr [esi + 0x3c]
// 006266fd  89442428             mov dword ptr [esp + 0x28], eax
// 00626701  7cad                 jl 0x6266b0
// 00626703  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 00626707  8b433c               mov eax, dword ptr [ebx + 0x3c]
// 0062670a  894334               mov dword ptr [ebx + 0x34], eax
// 0062670d  8b4b34               mov ecx, dword ptr [ebx + 0x34]
// 00626710  3b4b3c               cmp ecx, dword ptr [ebx + 0x3c]
// 00626713  7552                 jne 0x626767
// 00626715  8b07                 mov eax, dword ptr [edi]
// 00626717  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 0062671b  8b9654010000         mov edx, dword ptr [esi + 0x154]
// 00626721  8b5204               mov edx, dword ptr [edx + 4]
// 00626724  50                   push eax
// 00626725  8b4338               mov eax, dword ptr [ebx + 0x38]
// 00626728  51                   push ecx
// 00626729  50                   push eax
// 0062672a  8d4b08               lea ecx, [ebx + 8]
// 0062672d  51                   push ecx
// 0062672e  56                   push esi
// 0062672f  ffd2                 call edx
// 00626731  ff07                 inc dword ptr [edi]
// 00626733  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00626739  014338               add dword ptr [ebx + 0x38], eax
// 0062673c  8b442434             mov eax, dword ptr [esp + 0x34]
// 00626740  83c414               add esp, 0x14
// 00626743  394338               cmp dword ptr [ebx + 0x38], eax
// 00626746  7c07                 jl 0x62674f
// 00626748  c7433800000000       mov dword ptr [ebx + 0x38], 0
// 0062674f  394334               cmp dword ptr [ebx + 0x34], eax
// 00626752  7c07                 jl 0x62675b
// 00626754  c7433400000000       mov dword ptr [ebx + 0x34], 0
// 0062675b  8b8edc000000         mov ecx, dword ptr [esi + 0xdc]
// 00626761  034b34               add ecx, dword ptr [ebx + 0x34]
// 00626764  894b3c               mov dword ptr [ebx + 0x3c], ecx
// 00626767  8b542440             mov edx, dword ptr [esp + 0x40]
// 0062676b  3917                 cmp dword ptr [edi], edx
// 0062676d  0f824dfeffff         jb 0x6265c0
// 00626773  5d                   pop ebp
// 00626774  5f                   pop edi
// 00626775  5e                   pop esi
// 00626776  5b                   pop ebx
// 00626777  83c414               add esp, 0x14
// 0062677a  c3                   ret 
// library jpeg-6b/jcprepct.c (function _pre_process_context)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
