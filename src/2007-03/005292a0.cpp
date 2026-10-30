// roc 2007-03 005292a0  unit: seg_00520000  size: 285 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005292a0
//
// 005292a0  83ec20               sub esp, 0x20
// 005292a3  8b473c               mov eax, dword ptr [edi + 0x3c]
// 005292a6  8b4f04               mov ecx, dword ptr [edi + 4]
// 005292a9  53                   push ebx
// 005292aa  8b9f44010000         mov ebx, dword ptr [edi + 0x144]
// 005292b0  56                   push esi
// 005292b1  8bb7dc000000         mov esi, dword ptr [edi + 0xdc]
// 005292b7  0fafc6               imul eax, esi
// 005292ba  8d1480               lea edx, [eax + eax*4]
// 005292bd  8b01                 mov eax, dword ptr [ecx]
// 005292bf  03d2                 add edx, edx
// 005292c1  03d2                 add edx, edx
// 005292c3  52                   push edx
// 005292c4  6a01                 push 1
// 005292c6  57                   push edi
// 005292c7  ffd0                 call eax
// 005292c9  8b5744               mov edx, dword ptr [edi + 0x44]
// 005292cc  83c40c               add esp, 0xc
// 005292cf  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 005292d3  89442408             mov dword ptr [esp + 8], eax
// 005292d7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005292df  0f8ed2000000         jle 0x5293b7
// 005292e5  8d0c76               lea ecx, [esi + esi*2]
// 005292e8  03c9                 add ecx, ecx
// 005292ea  03c9                 add ecx, ecx
// 005292ec  894c2420             mov dword ptr [esp + 0x20], ecx
// 005292f0  8d0cb6               lea ecx, [esi + esi*4]
// 005292f3  03c9                 add ecx, ecx
// 005292f5  03c9                 add ecx, ecx
// 005292f7  55                   push ebp
// 005292f8  894c2428             mov dword ptr [esp + 0x28], ecx
// 005292fc  8d4a08               lea ecx, [edx + 8]
// 005292ff  8d2cb0               lea ebp, [eax + esi*4]
// 00529302  83c308               add ebx, 8
// 00529305  894c2410             mov dword ptr [esp + 0x10], ecx
// 00529309  896c2418             mov dword ptr [esp + 0x18], ebp
// 0052930d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00529311  eb04                 jmp 0x529317
// 00529313  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00529317  8d0476               lea eax, [esi + esi*2]
// 0052931a  50                   push eax
// 0052931b  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0052931e  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 00529325  03c0                 add eax, eax
// 00529327  03c0                 add eax, eax
// 00529329  03c0                 add eax, eax
// 0052932b  99                   cdq 
// 0052932c  f739                 idiv dword ptr [ecx]
// 0052932e  8b5f04               mov ebx, dword ptr [edi + 4]
// 00529331  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00529334  50                   push eax
// 00529335  6a01                 push 1
// 00529337  57                   push edi
// 00529338  ffd1                 call ecx
// 0052933a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0052933e  52                   push edx
// 0052933f  8bd8                 mov ebx, eax
// 00529341  53                   push ebx
// 00529342  55                   push ebp
// 00529343  e89a5e0f00           call 0x61f1e2
// 00529348  83c41c               add esp, 0x1c
// 0052934b  85f6                 test esi, esi
// 0052934d  7e33                 jle 0x529382
// 0052934f  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00529353  8bc6                 mov eax, esi
// 00529355  c1e004               shl eax, 4
// 00529358  03c5                 add eax, ebp
// 0052935a  8bcb                 mov ecx, ebx
// 0052935c  8d14f3               lea edx, [ebx + esi*8]
// 0052935f  2beb                 sub ebp, ebx
// 00529361  89742414             mov dword ptr [esp + 0x14], esi
// 00529365  8b1a                 mov ebx, dword ptr [edx]
// 00529367  891c29               mov dword ptr [ecx + ebp], ebx
// 0052936a  8b19                 mov ebx, dword ptr [ecx]
// 0052936c  8918                 mov dword ptr [eax], ebx
// 0052936e  83c204               add edx, 4
// 00529371  83c104               add ecx, 4
// 00529374  83c004               add eax, 4
// 00529377  836c241401           sub dword ptr [esp + 0x14], 1
// 0052937c  75e7                 jne 0x529365
// 0052937e  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00529382  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00529386  8b442428             mov eax, dword ptr [esp + 0x28]
// 0052938a  0144240c             add dword ptr [esp + 0xc], eax
// 0052938e  8344241054           add dword ptr [esp + 0x10], 0x54
// 00529393  8929                 mov dword ptr [ecx], ebp
// 00529395  03e8                 add ebp, eax
// 00529397  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0052939b  83c001               add eax, 1
// 0052939e  83c104               add ecx, 4
// 005293a1  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 005293a4  896c2418             mov dword ptr [esp + 0x18], ebp
// 005293a8  8944241c             mov dword ptr [esp + 0x1c], eax
// 005293ac  894c2420             mov dword ptr [esp + 0x20], ecx
// 005293b0  0f8c5dffffff         jl 0x529313
// 005293b6  5d                   pop ebp
// 005293b7  5e                   pop esi
// 005293b8  5b                   pop ebx
// 005293b9  83c420               add esp, 0x20
// 005293bc  c3                   ret 
// library jpeg-6b/jcprepct.c (function _create_context_buffer)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
