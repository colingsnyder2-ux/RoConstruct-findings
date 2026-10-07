// roc 2008-06 0053a610  unit: seg_00530000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a610
//
// 0053a610  807c240800           cmp byte ptr [esp + 8], 0
// 0053a615  57                   push edi
// 0053a616  8b7c2408             mov edi, dword ptr [esp + 8]
// 0053a61a  7413                 je 0x53a62f
// 0053a61c  8b07                 mov eax, dword ptr [edi]
// 0053a61e  c7401404000000       mov dword ptr [eax + 0x14], 4
// 0053a625  8b0f                 mov ecx, dword ptr [edi]
// 0053a627  8b11                 mov edx, dword ptr [ecx]
// 0053a629  57                   push edi
// 0053a62a  ffd2                 call edx
// 0053a62c  83c404               add esp, 4
// 0053a62f  8b4704               mov eax, dword ptr [edi + 4]
// 0053a632  8b08                 mov ecx, dword ptr [eax]
// 0053a634  6a40                 push 0x40
// 0053a636  6a01                 push 1
// 0053a638  57                   push edi
// 0053a639  ffd1                 call ecx
// 0053a63b  898744010000         mov dword ptr [edi + 0x144], eax
// 0053a641  c700b0a05300         mov dword ptr [eax], 0x53a0b0
// 0053a647  8b9754010000         mov edx, dword ptr [edi + 0x154]
// 0053a64d  83c40c               add esp, 0xc
// 0053a650  807a0800             cmp byte ptr [edx + 8], 0
// 0053a654  740e                 je 0x53a664
// 0053a656  c7400400a35300       mov dword ptr [eax + 4], 0x53a300
// 0053a65d  e88efeffff           call 0x53a4f0
// 0053a662  5f                   pop edi
// 0053a663  c3                   ret 
// 0053a664  55                   push ebp
// 0053a665  c7400400a15300       mov dword ptr [eax + 4], 0x53a100
// 0053a66c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0053a66f  33ed                 xor ebp, ebp
// 0053a671  396f3c               cmp dword ptr [edi + 0x3c], ebp
// 0053a674  7e43                 jle 0x53a6b9
// 0053a676  53                   push ebx
// 0053a677  56                   push esi
// 0053a678  8d7108               lea esi, [ecx + 8]
// 0053a67b  8d5808               lea ebx, [eax + 8]
// 0053a67e  8bff                 mov edi, edi
// 0053a680  8b4614               mov eax, dword ptr [esi + 0x14]
// 0053a683  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 0053a68a  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 0053a690  03c0                 add eax, eax
// 0053a692  03c0                 add eax, eax
// 0053a694  52                   push edx
// 0053a695  03c0                 add eax, eax
// 0053a697  99                   cdq 
// 0053a698  f73e                 idiv dword ptr [esi]
// 0053a69a  8b4f04               mov ecx, dword ptr [edi + 4]
// 0053a69d  50                   push eax
// 0053a69e  8b4108               mov eax, dword ptr [ecx + 8]
// 0053a6a1  6a01                 push 1
// 0053a6a3  57                   push edi
// 0053a6a4  ffd0                 call eax
// 0053a6a6  8903                 mov dword ptr [ebx], eax
// 0053a6a8  45                   inc ebp
// 0053a6a9  83c410               add esp, 0x10
// 0053a6ac  83c304               add ebx, 4
// 0053a6af  83c654               add esi, 0x54
// 0053a6b2  3b6f3c               cmp ebp, dword ptr [edi + 0x3c]
// 0053a6b5  7cc9                 jl 0x53a680
// 0053a6b7  5e                   pop esi
// 0053a6b8  5b                   pop ebx
// 0053a6b9  5d                   pop ebp
// 0053a6ba  5f                   pop edi
// 0053a6bb  c3                   ret 
// library jpeg-6b/jcprepct.c (function _jinit_c_prep_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
