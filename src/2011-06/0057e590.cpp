// roc 2011-06 0057e590  unit: seg_00570000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057e590
//
// 0057e590  83ec20               sub esp, 0x20
// 0057e593  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0057e596  8b4f04               mov ecx, dword ptr [edi + 4]
// 0057e599  53                   push ebx
// 0057e59a  8b9f44010000         mov ebx, dword ptr [edi + 0x144]
// 0057e5a0  56                   push esi
// 0057e5a1  8bb7dc000000         mov esi, dword ptr [edi + 0xdc]
// 0057e5a7  0fafc6               imul eax, esi
// 0057e5aa  8d1480               lea edx, [eax + eax*4]
// 0057e5ad  8b01                 mov eax, dword ptr [ecx]
// 0057e5af  03d2                 add edx, edx
// 0057e5b1  03d2                 add edx, edx
// 0057e5b3  52                   push edx
// 0057e5b4  6a01                 push 1
// 0057e5b6  57                   push edi
// 0057e5b7  ffd0                 call eax
// 0057e5b9  8b5744               mov edx, dword ptr [edi + 0x44]
// 0057e5bc  83c40c               add esp, 0xc
// 0057e5bf  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 0057e5c3  89442408             mov dword ptr [esp + 8], eax
// 0057e5c7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0057e5cf  0f8ed0000000         jle 0x57e6a5
// 0057e5d5  8d0c76               lea ecx, [esi + esi*2]
// 0057e5d8  03c9                 add ecx, ecx
// 0057e5da  03c9                 add ecx, ecx
// 0057e5dc  894c2420             mov dword ptr [esp + 0x20], ecx
// 0057e5e0  8d0cb6               lea ecx, [esi + esi*4]
// 0057e5e3  03c9                 add ecx, ecx
// 0057e5e5  03c9                 add ecx, ecx
// 0057e5e7  55                   push ebp
// 0057e5e8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0057e5ec  8d4a08               lea ecx, [edx + 8]
// 0057e5ef  8d2cb0               lea ebp, [eax + esi*4]
// 0057e5f2  83c308               add ebx, 8
// 0057e5f5  894c2410             mov dword ptr [esp + 0x10], ecx
// 0057e5f9  896c2418             mov dword ptr [esp + 0x18], ebp
// 0057e5fd  895c2420             mov dword ptr [esp + 0x20], ebx
// 0057e601  eb04                 jmp 0x57e607
// 0057e603  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0057e607  8d0476               lea eax, [esi + esi*2]
// 0057e60a  50                   push eax
// 0057e60b  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0057e60e  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 0057e615  03c0                 add eax, eax
// 0057e617  03c0                 add eax, eax
// 0057e619  03c0                 add eax, eax
// 0057e61b  99                   cdq 
// 0057e61c  f739                 idiv dword ptr [ecx]
// 0057e61e  8b5f04               mov ebx, dword ptr [edi + 4]
// 0057e621  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0057e624  50                   push eax
// 0057e625  6a01                 push 1
// 0057e627  57                   push edi
// 0057e628  ffd1                 call ecx
// 0057e62a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0057e62e  52                   push edx
// 0057e62f  8bd8                 mov ebx, eax
// 0057e631  53                   push ebx
// 0057e632  55                   push ebp
// 0057e633  e8a4cf2800           call 0x80b5dc
// 0057e638  83c41c               add esp, 0x1c
// 0057e63b  85f6                 test esi, esi
// 0057e63d  7e33                 jle 0x57e672
// 0057e63f  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0057e643  8bc6                 mov eax, esi
// 0057e645  c1e004               shl eax, 4
// 0057e648  03c5                 add eax, ebp
// 0057e64a  8bcb                 mov ecx, ebx
// 0057e64c  8d14f3               lea edx, [ebx + esi*8]
// 0057e64f  2beb                 sub ebp, ebx
// 0057e651  89742414             mov dword ptr [esp + 0x14], esi
// 0057e655  8b1a                 mov ebx, dword ptr [edx]
// 0057e657  891c29               mov dword ptr [ecx + ebp], ebx
// 0057e65a  8b19                 mov ebx, dword ptr [ecx]
// 0057e65c  8918                 mov dword ptr [eax], ebx
// 0057e65e  83c204               add edx, 4
// 0057e661  83c104               add ecx, 4
// 0057e664  83c004               add eax, 4
// 0057e667  836c241401           sub dword ptr [esp + 0x14], 1
// 0057e66c  75e7                 jne 0x57e655
// 0057e66e  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0057e672  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0057e676  8b442428             mov eax, dword ptr [esp + 0x28]
// 0057e67a  0144240c             add dword ptr [esp + 0xc], eax
// 0057e67e  8344241054           add dword ptr [esp + 0x10], 0x54
// 0057e683  8929                 mov dword ptr [ecx], ebp
// 0057e685  03e8                 add ebp, eax
// 0057e687  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0057e68b  40                   inc eax
// 0057e68c  83c104               add ecx, 4
// 0057e68f  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 0057e692  896c2418             mov dword ptr [esp + 0x18], ebp
// 0057e696  8944241c             mov dword ptr [esp + 0x1c], eax
// 0057e69a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0057e69e  0f8c5fffffff         jl 0x57e603
// 0057e6a4  5d                   pop ebp
// 0057e6a5  5e                   pop esi
// 0057e6a6  5b                   pop ebx
// 0057e6a7  83c420               add esp, 0x20
// 0057e6aa  c3                   ret 
// library jpeg-6b/jcprepct.c (function _create_context_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
