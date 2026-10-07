// roc 2009-06 005a48f0  unit: seg_005a0000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a48f0
//
// 005a48f0  807c240800           cmp byte ptr [esp + 8], 0
// 005a48f5  57                   push edi
// 005a48f6  8b7c2408             mov edi, dword ptr [esp + 8]
// 005a48fa  7413                 je 0x5a490f
// 005a48fc  8b07                 mov eax, dword ptr [edi]
// 005a48fe  c7401404000000       mov dword ptr [eax + 0x14], 4
// 005a4905  8b0f                 mov ecx, dword ptr [edi]
// 005a4907  8b11                 mov edx, dword ptr [ecx]
// 005a4909  57                   push edi
// 005a490a  ffd2                 call edx
// 005a490c  83c404               add esp, 4
// 005a490f  8b4704               mov eax, dword ptr [edi + 4]
// 005a4912  8b08                 mov ecx, dword ptr [eax]
// 005a4914  6a40                 push 0x40
// 005a4916  6a01                 push 1
// 005a4918  57                   push edi
// 005a4919  ffd1                 call ecx
// 005a491b  898744010000         mov dword ptr [edi + 0x144], eax
// 005a4921  c70090435a00         mov dword ptr [eax], 0x5a4390
// 005a4927  8b9754010000         mov edx, dword ptr [edi + 0x154]
// 005a492d  83c40c               add esp, 0xc
// 005a4930  807a0800             cmp byte ptr [edx + 8], 0
// 005a4934  740e                 je 0x5a4944
// 005a4936  c74004e0455a00       mov dword ptr [eax + 4], 0x5a45e0
// 005a493d  e88efeffff           call 0x5a47d0
// 005a4942  5f                   pop edi
// 005a4943  c3                   ret 
// 005a4944  55                   push ebp
// 005a4945  c74004e0435a00       mov dword ptr [eax + 4], 0x5a43e0
// 005a494c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 005a494f  33ed                 xor ebp, ebp
// 005a4951  396f3c               cmp dword ptr [edi + 0x3c], ebp
// 005a4954  7e43                 jle 0x5a4999
// 005a4956  53                   push ebx
// 005a4957  56                   push esi
// 005a4958  8d7108               lea esi, [ecx + 8]
// 005a495b  8d5808               lea ebx, [eax + 8]
// 005a495e  8bff                 mov edi, edi
// 005a4960  8b4614               mov eax, dword ptr [esi + 0x14]
// 005a4963  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 005a496a  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 005a4970  03c0                 add eax, eax
// 005a4972  03c0                 add eax, eax
// 005a4974  52                   push edx
// 005a4975  03c0                 add eax, eax
// 005a4977  99                   cdq 
// 005a4978  f73e                 idiv dword ptr [esi]
// 005a497a  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a497d  50                   push eax
// 005a497e  8b4108               mov eax, dword ptr [ecx + 8]
// 005a4981  6a01                 push 1
// 005a4983  57                   push edi
// 005a4984  ffd0                 call eax
// 005a4986  8903                 mov dword ptr [ebx], eax
// 005a4988  45                   inc ebp
// 005a4989  83c410               add esp, 0x10
// 005a498c  83c304               add ebx, 4
// 005a498f  83c654               add esi, 0x54
// 005a4992  3b6f3c               cmp ebp, dword ptr [edi + 0x3c]
// 005a4995  7cc9                 jl 0x5a4960
// 005a4997  5e                   pop esi
// 005a4998  5b                   pop ebx
// 005a4999  5d                   pop ebp
// 005a499a  5f                   pop edi
// 005a499b  c3                   ret 
// library jpeg-6b/jcprepct.c (function _jinit_c_prep_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
