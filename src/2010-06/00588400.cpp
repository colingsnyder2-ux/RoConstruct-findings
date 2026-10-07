// roc 2010-06 00588400  unit: seg_00580000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00588400
//
// 00588400  807c240800           cmp byte ptr [esp + 8], 0
// 00588405  57                   push edi
// 00588406  8b7c2408             mov edi, dword ptr [esp + 8]
// 0058840a  7413                 je 0x58841f
// 0058840c  8b07                 mov eax, dword ptr [edi]
// 0058840e  c7401404000000       mov dword ptr [eax + 0x14], 4
// 00588415  8b0f                 mov ecx, dword ptr [edi]
// 00588417  8b11                 mov edx, dword ptr [ecx]
// 00588419  57                   push edi
// 0058841a  ffd2                 call edx
// 0058841c  83c404               add esp, 4
// 0058841f  8b4704               mov eax, dword ptr [edi + 4]
// 00588422  8b08                 mov ecx, dword ptr [eax]
// 00588424  6a40                 push 0x40
// 00588426  6a01                 push 1
// 00588428  57                   push edi
// 00588429  ffd1                 call ecx
// 0058842b  898744010000         mov dword ptr [edi + 0x144], eax
// 00588431  c700a07e5800         mov dword ptr [eax], 0x587ea0
// 00588437  8b9754010000         mov edx, dword ptr [edi + 0x154]
// 0058843d  83c40c               add esp, 0xc
// 00588440  807a0800             cmp byte ptr [edx + 8], 0
// 00588444  740e                 je 0x588454
// 00588446  c74004f0805800       mov dword ptr [eax + 4], 0x5880f0
// 0058844d  e88efeffff           call 0x5882e0
// 00588452  5f                   pop edi
// 00588453  c3                   ret 
// 00588454  55                   push ebp
// 00588455  c74004f07e5800       mov dword ptr [eax + 4], 0x587ef0
// 0058845c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0058845f  33ed                 xor ebp, ebp
// 00588461  396f3c               cmp dword ptr [edi + 0x3c], ebp
// 00588464  7e43                 jle 0x5884a9
// 00588466  53                   push ebx
// 00588467  56                   push esi
// 00588468  8d7108               lea esi, [ecx + 8]
// 0058846b  8d5808               lea ebx, [eax + 8]
// 0058846e  8bff                 mov edi, edi
// 00588470  8b4614               mov eax, dword ptr [esi + 0x14]
// 00588473  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 0058847a  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 00588480  03c0                 add eax, eax
// 00588482  03c0                 add eax, eax
// 00588484  52                   push edx
// 00588485  03c0                 add eax, eax
// 00588487  99                   cdq 
// 00588488  f73e                 idiv dword ptr [esi]
// 0058848a  8b4f04               mov ecx, dword ptr [edi + 4]
// 0058848d  50                   push eax
// 0058848e  8b4108               mov eax, dword ptr [ecx + 8]
// 00588491  6a01                 push 1
// 00588493  57                   push edi
// 00588494  ffd0                 call eax
// 00588496  8903                 mov dword ptr [ebx], eax
// 00588498  45                   inc ebp
// 00588499  83c410               add esp, 0x10
// 0058849c  83c304               add ebx, 4
// 0058849f  83c654               add esi, 0x54
// 005884a2  3b6f3c               cmp ebp, dword ptr [edi + 0x3c]
// 005884a5  7cc9                 jl 0x588470
// 005884a7  5e                   pop esi
// 005884a8  5b                   pop ebx
// 005884a9  5d                   pop ebp
// 005884aa  5f                   pop edi
// 005884ab  c3                   ret 
// library jpeg-6b/jcprepct.c (function _jinit_c_prep_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
