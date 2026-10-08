// from server: 100% by auto
// roc 2008-06 00537320  unit: seg_00530000  size: 492 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00537320
//
// 00537320  83ec2c               sub esp, 0x2c
// 00537323  53                   push ebx
// 00537324  8b5c2434             mov ebx, dword ptr [esp + 0x34]
// 00537328  55                   push ebp
// 00537329  56                   push esi
// 0053732a  57                   push edi
// 0053732b  8bbb48010000         mov edi, dword ptr [ebx + 0x148]
// 00537331  33f6                 xor esi, esi
// 00537333  39b3e4000000         cmp dword ptr [ebx + 0xe4], esi
// 00537339  897c2420             mov dword ptr [esp + 0x20], edi
// 0053733d  7e4a                 jle 0x537389
// 0053733f  8d83e8000000         lea eax, [ebx + 0xe8]
// 00537345  89442410             mov dword ptr [esp + 0x10], eax
// 00537349  8da42400000000       lea esp, [esp]
// 00537350  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00537354  8b01                 mov eax, dword ptr [ecx]
// 00537356  8b480c               mov ecx, dword ptr [eax + 0xc]
// 00537359  8b6f08               mov ebp, dword ptr [edi + 8]
// 0053735c  8b4004               mov eax, dword ptr [eax + 4]
// 0053735f  0fafe9               imul ebp, ecx
// 00537362  8b5304               mov edx, dword ptr [ebx + 4]
// 00537365  8b5220               mov edx, dword ptr [edx + 0x20]
// 00537368  6a00                 push 0
// 0053736a  51                   push ecx
// 0053736b  8b4c8740             mov ecx, dword ptr [edi + eax*4 + 0x40]
// 0053736f  55                   push ebp
// 00537370  51                   push ecx
// 00537371  53                   push ebx
// 00537372  ffd2                 call edx
// 00537374  8344242404           add dword ptr [esp + 0x24], 4
// 00537379  8944b440             mov dword ptr [esp + esi*4 + 0x40], eax
// 0053737d  46                   inc esi
// 0053737e  83c414               add esp, 0x14
// 00537381  3bb3e4000000         cmp esi, dword ptr [ebx + 0xe4]
// 00537387  7cc7                 jl 0x537350
// 00537389  8b7710               mov esi, dword ptr [edi + 0x10]
// 0053738c  3b7714               cmp esi, dword ptr [edi + 0x14]
// 0053738f  89742424             mov dword ptr [esp + 0x24], esi
// 00537393  0f8d04010000         jge 0x53749d
// 00537399  8da42400000000       lea esp, [esp]
// 005373a0  8b470c               mov eax, dword ptr [edi + 0xc]
// 005373a3  89442410             mov dword ptr [esp + 0x10], eax
// 005373a7  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 005373ad  0f83d5000000         jae 0x537488
// 005373b3  33d2                 xor edx, edx
// 005373b5  33ed                 xor ebp, ebp
// 005373b7  3993e4000000         cmp dword ptr [ebx + 0xe4], edx
// 005373bd  8954241c             mov dword ptr [esp + 0x1c], edx
// 005373c1  0f8e95000000         jle 0x53745c
// 005373c7  8d83e8000000         lea eax, [ebx + 0xe8]
// 005373cd  89442414             mov dword ptr [esp + 0x14], eax
// 005373d1  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005373d5  8b39                 mov edi, dword ptr [ecx]
// 005373d7  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 005373da  8bc1                 mov eax, ecx
// 005373dc  0faf442410           imul eax, dword ptr [esp + 0x10]
// 005373e1  837f3800             cmp dword ptr [edi + 0x38], 0
// 005373e5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005373ed  7e53                 jle 0x537442
// 005373ef  8b54942c             mov edx, dword ptr [esp + edx*4 + 0x2c]
// 005373f3  c1e007               shl eax, 7
// 005373f6  89442428             mov dword ptr [esp + 0x28], eax
// 005373fa  8d1cb2               lea ebx, [edx + esi*4]
// 005373fd  8d4900               lea ecx, [ecx]
// 00537400  8b03                 mov eax, dword ptr [ebx]
// 00537402  03442428             add eax, dword ptr [esp + 0x28]
// 00537406  33d2                 xor edx, edx
// 00537408  85c9                 test ecx, ecx
// 0053740a  7e19                 jle 0x537425
// 0053740c  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00537410  8d74a918             lea esi, [ecx + ebp*4 + 0x18]
// 00537414  8906                 mov dword ptr [esi], eax
// 00537416  8b4f34               mov ecx, dword ptr [edi + 0x34]
// 00537419  42                   inc edx
// 0053741a  45                   inc ebp
// 0053741b  83c604               add esi, 4
// 0053741e  83e880               sub eax, -0x80
// 00537421  3bd1                 cmp edx, ecx
// 00537423  7cef                 jl 0x537414
// 00537425  8b442418             mov eax, dword ptr [esp + 0x18]
// 00537429  40                   inc eax
// 0053742a  83c304               add ebx, 4
// 0053742d  3b4738               cmp eax, dword ptr [edi + 0x38]
// 00537430  89442418             mov dword ptr [esp + 0x18], eax
// 00537434  7cca                 jl 0x537400
// 00537436  8b5c2440             mov ebx, dword ptr [esp + 0x40]
// 0053743a  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0053743e  8b742424             mov esi, dword ptr [esp + 0x24]
// 00537442  8344241404           add dword ptr [esp + 0x14], 4
// 00537447  42                   inc edx
// 00537448  3b93e4000000         cmp edx, dword ptr [ebx + 0xe4]
// 0053744e  8954241c             mov dword ptr [esp + 0x1c], edx
// 00537452  0f8c79ffffff         jl 0x5373d1
// 00537458  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0053745c  8b935c010000         mov edx, dword ptr [ebx + 0x15c]
// 00537462  8d4718               lea eax, [edi + 0x18]
// 00537465  50                   push eax
// 00537466  8b4204               mov eax, dword ptr [edx + 4]
// 00537469  53                   push ebx
// 0053746a  ffd0                 call eax
// 0053746c  83c408               add esp, 8
// 0053746f  84c0                 test al, al
// 00537471  7455                 je 0x5374c8
// 00537473  8b442410             mov eax, dword ptr [esp + 0x10]
// 00537477  40                   inc eax
// 00537478  89442410             mov dword ptr [esp + 0x10], eax
// 0053747c  3b83f8000000         cmp eax, dword ptr [ebx + 0xf8]
// 00537482  0f822bffffff         jb 0x5373b3
// 00537488  46                   inc esi
// 00537489  c7470c00000000       mov dword ptr [edi + 0xc], 0
// 00537490  3b7714               cmp esi, dword ptr [edi + 0x14]
// 00537493  89742424             mov dword ptr [esp + 0x24], esi
// 00537497  0f8c03ffffff         jl 0x5373a0
// 0053749d  b901000000           mov ecx, 1
// 005374a2  014f08               add dword ptr [edi + 8], ecx
// 005374a5  398be4000000         cmp dword ptr [ebx + 0xe4], ecx
// 005374ab  8b8348010000         mov eax, dword ptr [ebx + 0x148]
// 005374b1  7e29                 jle 0x5374dc
// 005374b3  5f                   pop edi
// 005374b4  894814               mov dword ptr [eax + 0x14], ecx
// 005374b7  5e                   pop esi
// 005374b8  33c9                 xor ecx, ecx
// 005374ba  5d                   pop ebp
// 005374bb  89480c               mov dword ptr [eax + 0xc], ecx
// 005374be  894810               mov dword ptr [eax + 0x10], ecx
// 005374c1  b001                 mov al, 1
// 005374c3  5b                   pop ebx
// 005374c4  83c42c               add esp, 0x2c
// 005374c7  c3                   ret 
// 005374c8  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005374cc  897710               mov dword ptr [edi + 0x10], esi
// 005374cf  894f0c               mov dword ptr [edi + 0xc], ecx
// 005374d2  5f                   pop edi
// 005374d3  5e                   pop esi
// 005374d4  5d                   pop ebp
// 005374d5  32c0                 xor al, al
// 005374d7  5b                   pop ebx
// 005374d8  83c42c               add esp, 0x2c
// 005374db  c3                   ret 
// 005374dc  8b93e0000000         mov edx, dword ptr [ebx + 0xe0]
// 005374e2  2bd1                 sub edx, ecx
// 005374e4  8b8be8000000         mov ecx, dword ptr [ebx + 0xe8]
// 005374ea  395008               cmp dword ptr [eax + 8], edx
// 005374ed  7305                 jae 0x5374f4
// 005374ef  8b510c               mov edx, dword ptr [ecx + 0xc]
// 005374f2  eb03                 jmp 0x5374f7
// 005374f4  8b5148               mov edx, dword ptr [ecx + 0x48]
// 005374f7  5f                   pop edi
// 005374f8  5e                   pop esi
// 005374f9  33c9                 xor ecx, ecx
// 005374fb  5d                   pop ebp
// 005374fc  895014               mov dword ptr [eax + 0x14], edx
// 005374ff  89480c               mov dword ptr [eax + 0xc], ecx
// 00537502  894810               mov dword ptr [eax + 0x10], ecx
// 00537505  b001                 mov al, 1
// 00537507  5b                   pop ebx
// 00537508  83c42c               add esp, 0x2c
// 0053750b  c3                   ret 
// library jpeg-6b/jccoefct.c (function _compress_output)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jccoefct.c
