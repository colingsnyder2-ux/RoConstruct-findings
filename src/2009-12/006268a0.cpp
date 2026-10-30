// roc 2009-12 006268a0  unit: seg_00620000  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006268a0
//
// 006268a0  807c240800           cmp byte ptr [esp + 8], 0
// 006268a5  57                   push edi
// 006268a6  8b7c2408             mov edi, dword ptr [esp + 8]
// 006268aa  7413                 je 0x6268bf
// 006268ac  8b07                 mov eax, dword ptr [edi]
// 006268ae  c7401404000000       mov dword ptr [eax + 0x14], 4
// 006268b5  8b0f                 mov ecx, dword ptr [edi]
// 006268b7  8b11                 mov edx, dword ptr [ecx]
// 006268b9  57                   push edi
// 006268ba  ffd2                 call edx
// 006268bc  83c404               add esp, 4
// 006268bf  8b4704               mov eax, dword ptr [edi + 4]
// 006268c2  8b08                 mov ecx, dword ptr [eax]
// 006268c4  6a40                 push 0x40
// 006268c6  6a01                 push 1
// 006268c8  57                   push edi
// 006268c9  ffd1                 call ecx
// 006268cb  898744010000         mov dword ptr [edi + 0x144], eax
// 006268d1  c70040636200         mov dword ptr [eax], 0x626340
// 006268d7  8b9754010000         mov edx, dword ptr [edi + 0x154]
// 006268dd  83c40c               add esp, 0xc
// 006268e0  807a0800             cmp byte ptr [edx + 8], 0
// 006268e4  740e                 je 0x6268f4
// 006268e6  c7400490656200       mov dword ptr [eax + 4], 0x626590
// 006268ed  e88efeffff           call 0x626780
// 006268f2  5f                   pop edi
// 006268f3  c3                   ret 
// 006268f4  55                   push ebp
// 006268f5  c7400490636200       mov dword ptr [eax + 4], 0x626390
// 006268fc  8b4f44               mov ecx, dword ptr [edi + 0x44]
// 006268ff  33ed                 xor ebp, ebp
// 00626901  396f3c               cmp dword ptr [edi + 0x3c], ebp
// 00626904  7e43                 jle 0x626949
// 00626906  53                   push ebx
// 00626907  56                   push esi
// 00626908  8d7108               lea esi, [ecx + 8]
// 0062690b  8d5808               lea ebx, [eax + 8]
// 0062690e  8bff                 mov edi, edi
// 00626910  8b4614               mov eax, dword ptr [esi + 0x14]
// 00626913  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 0062691a  8b97dc000000         mov edx, dword ptr [edi + 0xdc]
// 00626920  03c0                 add eax, eax
// 00626922  03c0                 add eax, eax
// 00626924  52                   push edx
// 00626925  03c0                 add eax, eax
// 00626927  99                   cdq 
// 00626928  f73e                 idiv dword ptr [esi]
// 0062692a  8b4f04               mov ecx, dword ptr [edi + 4]
// 0062692d  50                   push eax
// 0062692e  8b4108               mov eax, dword ptr [ecx + 8]
// 00626931  6a01                 push 1
// 00626933  57                   push edi
// 00626934  ffd0                 call eax
// 00626936  8903                 mov dword ptr [ebx], eax
// 00626938  45                   inc ebp
// 00626939  83c410               add esp, 0x10
// 0062693c  83c304               add ebx, 4
// 0062693f  83c654               add esi, 0x54
// 00626942  3b6f3c               cmp ebp, dword ptr [edi + 0x3c]
// 00626945  7cc9                 jl 0x626910
// 00626947  5e                   pop esi
// 00626948  5b                   pop ebx
// 00626949  5d                   pop ebp
// 0062694a  5f                   pop edi
// 0062694b  c3                   ret 
// library jpeg-6b/jcprepct.c (function _jinit_c_prep_controller)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
