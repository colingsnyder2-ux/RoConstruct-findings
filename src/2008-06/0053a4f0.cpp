// from server: 100% by auto
// roc 2008-06 0053a4f0  unit: seg_00530000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0053a4f0
//
// 0053a4f0  83ec20               sub esp, 0x20
// 0053a4f3  8b473c               mov eax, dword ptr [edi + 0x3c]
// 0053a4f6  8b4f04               mov ecx, dword ptr [edi + 4]
// 0053a4f9  53                   push ebx
// 0053a4fa  8b9f44010000         mov ebx, dword ptr [edi + 0x144]
// 0053a500  56                   push esi
// 0053a501  8bb7dc000000         mov esi, dword ptr [edi + 0xdc]
// 0053a507  0fafc6               imul eax, esi
// 0053a50a  8d1480               lea edx, [eax + eax*4]
// 0053a50d  8b01                 mov eax, dword ptr [ecx]
// 0053a50f  03d2                 add edx, edx
// 0053a511  03d2                 add edx, edx
// 0053a513  52                   push edx
// 0053a514  6a01                 push 1
// 0053a516  57                   push edi
// 0053a517  ffd0                 call eax
// 0053a519  8b5744               mov edx, dword ptr [edi + 0x44]
// 0053a51c  83c40c               add esp, 0xc
// 0053a51f  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 0053a523  89442408             mov dword ptr [esp + 8], eax
// 0053a527  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0053a52f  0f8ed0000000         jle 0x53a605
// 0053a535  8d0c76               lea ecx, [esi + esi*2]
// 0053a538  03c9                 add ecx, ecx
// 0053a53a  03c9                 add ecx, ecx
// 0053a53c  894c2420             mov dword ptr [esp + 0x20], ecx
// 0053a540  8d0cb6               lea ecx, [esi + esi*4]
// 0053a543  03c9                 add ecx, ecx
// 0053a545  03c9                 add ecx, ecx
// 0053a547  55                   push ebp
// 0053a548  894c2428             mov dword ptr [esp + 0x28], ecx
// 0053a54c  8d4a08               lea ecx, [edx + 8]
// 0053a54f  8d2cb0               lea ebp, [eax + esi*4]
// 0053a552  83c308               add ebx, 8
// 0053a555  894c2410             mov dword ptr [esp + 0x10], ecx
// 0053a559  896c2418             mov dword ptr [esp + 0x18], ebp
// 0053a55d  895c2420             mov dword ptr [esp + 0x20], ebx
// 0053a561  eb04                 jmp 0x53a567
// 0053a563  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0053a567  8d0476               lea eax, [esi + esi*2]
// 0053a56a  50                   push eax
// 0053a56b  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0053a56e  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 0053a575  03c0                 add eax, eax
// 0053a577  03c0                 add eax, eax
// 0053a579  03c0                 add eax, eax
// 0053a57b  99                   cdq 
// 0053a57c  f739                 idiv dword ptr [ecx]
// 0053a57e  8b5f04               mov ebx, dword ptr [edi + 4]
// 0053a581  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0053a584  50                   push eax
// 0053a585  6a01                 push 1
// 0053a587  57                   push edi
// 0053a588  ffd1                 call ecx
// 0053a58a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0053a58e  52                   push edx
// 0053a58f  8bd8                 mov ebx, eax
// 0053a591  53                   push ebx
// 0053a592  55                   push ebp
// 0053a593  e848721600           call 0x6a17e0
// 0053a598  83c41c               add esp, 0x1c
// 0053a59b  85f6                 test esi, esi
// 0053a59d  7e33                 jle 0x53a5d2
// 0053a59f  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0053a5a3  8bc6                 mov eax, esi
// 0053a5a5  c1e004               shl eax, 4
// 0053a5a8  03c5                 add eax, ebp
// 0053a5aa  8bcb                 mov ecx, ebx
// 0053a5ac  8d14f3               lea edx, [ebx + esi*8]
// 0053a5af  2beb                 sub ebp, ebx
// 0053a5b1  89742414             mov dword ptr [esp + 0x14], esi
// 0053a5b5  8b1a                 mov ebx, dword ptr [edx]
// 0053a5b7  891c29               mov dword ptr [ecx + ebp], ebx
// 0053a5ba  8b19                 mov ebx, dword ptr [ecx]
// 0053a5bc  8918                 mov dword ptr [eax], ebx
// 0053a5be  83c204               add edx, 4
// 0053a5c1  83c104               add ecx, 4
// 0053a5c4  83c004               add eax, 4
// 0053a5c7  836c241401           sub dword ptr [esp + 0x14], 1
// 0053a5cc  75e7                 jne 0x53a5b5
// 0053a5ce  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0053a5d2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0053a5d6  8b442428             mov eax, dword ptr [esp + 0x28]
// 0053a5da  0144240c             add dword ptr [esp + 0xc], eax
// 0053a5de  8344241054           add dword ptr [esp + 0x10], 0x54
// 0053a5e3  8929                 mov dword ptr [ecx], ebp
// 0053a5e5  03e8                 add ebp, eax
// 0053a5e7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0053a5eb  40                   inc eax
// 0053a5ec  83c104               add ecx, 4
// 0053a5ef  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 0053a5f2  896c2418             mov dword ptr [esp + 0x18], ebp
// 0053a5f6  8944241c             mov dword ptr [esp + 0x1c], eax
// 0053a5fa  894c2420             mov dword ptr [esp + 0x20], ecx
// 0053a5fe  0f8c5fffffff         jl 0x53a563
// 0053a604  5d                   pop ebp
// 0053a605  5e                   pop esi
// 0053a606  5b                   pop ebx
// 0053a607  83c420               add esp, 0x20
// 0053a60a  c3                   ret 
// library jpeg-6b/jcprepct.c (function _create_context_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
