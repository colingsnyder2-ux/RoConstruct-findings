// from server: 100% by auto
// roc 2011-06 0057e6b0  unit: seg_00570000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057e6b0
//
// 0057e6b0  807c240800           cmp byte ptr [esp + 8], 0
// 0057e6b5  57                   push edi
// 0057e6b6  8b7c2408             mov edi, dword ptr [esp + 8]
// 0057e6ba  7413                 je 0x57e6cf
// 0057e6bc  8b07                 mov eax, dword ptr [edi]
// 0057e6be  c7401404000000       mov dword ptr [eax + 0x14], 4
// 0057e6c5  8b0f                 mov ecx, dword ptr [edi]
// 0057e6c7  8b11                 mov edx, dword ptr [ecx]
// 0057e6c9  57                   push edi
// 0057e6ca  ffd2                 call edx
// 0057e6cc  83c404               add esp, 4
// 0057e6cf  8b4704               mov eax, dword ptr [edi + 4]
// 0057e6d2  8b08                 mov ecx, dword ptr [eax]
// 0057e6d4  6a40                 push 0x40
// 0057e6d6  6a01                 push 1
// 0057e6d8  57                   push edi
// 0057e6d9  ffd1                 call ecx
// 0057e6db  898744010000         mov dword ptr [edi + 0x144], eax
// 0057e6e1  c70050e15700         mov dword ptr [eax], 0x57e150
// 0057e6e7  8b9754010000         mov edx, dword ptr [edi + 0x154]
// 0057e6ed  83c40c               add esp, 0xc
// 0057e6f0  807a0800             cmp byte ptr [edx + 8], 0
// 0057e6f4  740e                 je 0x57e704
// 0057e6f6  c74004a0e35700       mov dword ptr [eax + 4], 0x57e3a0
// 0057e6fd  e88efeffff           call 0x57e590
// 0057e702  5f                   pop edi
// 0057e703  c3                   ret 
// 0057e704  55                   push ebp
// 0057e705  c74004a0e15700       mov dword ptr [eax + 4], 0x57e1a0
// 0057e70c  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 0057e70f  33ed                 xor ebp, ebp
// 0057e711  396f3c               cmp dword ptr [edi + 0x3c], ebp
// 0057e714  7e43                 jle 0x57e759
// 0057e716  53                   push ebx
// 0057e717  56                   push esi
// 0057e718  8d7108               lea esi, [ecx + 8]
// 0057e71b  8d5808               lea ebx, [eax + 8]
// 0057e71e  8bff                 mov edi, edi
// 0057e720  8b4614               mov eax, dword ptr [esi + 0x14]
// 0057e723  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 0057e72a  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 0057e730  03c0                 add eax, eax
// 0057e732  03c0                 add eax, eax
// 0057e734  52                   push edx
// 0057e735  03c0                 add eax, eax
// 0057e737  99                   cdq 
// 0057e738  f73e                 idiv dword ptr [esi]
// 0057e73a  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057e73d  50                   push eax
// 0057e73e  8b4108               mov eax, dword ptr [ecx + 8]
// 0057e741  6a01                 push 1
// 0057e743  57                   push edi
// 0057e744  ffd0                 call eax
// 0057e746  8903                 mov dword ptr [ebx], eax
// 0057e748  45                   inc ebp
// 0057e749  83c410               add esp, 0x10
// 0057e74c  83c304               add ebx, 4
// 0057e74f  83c654               add esi, 0x54
// 0057e752  3b6f3c               cmp ebp, dword ptr [edi + 0x3c]
// 0057e755  7cc9                 jl 0x57e720
// 0057e757  5e                   pop esi
// 0057e758  5b                   pop ebx
// 0057e759  5d                   pop ebp
// 0057e75a  5f                   pop edi
// 0057e75b  c3                   ret 
// library jpeg-6b/jcprepct.c (function _jinit_c_prep_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
