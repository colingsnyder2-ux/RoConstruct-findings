// roc 2009-06 005a47d0  unit: seg_005a0000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005a47d0
//
// 005a47d0  83ec20               sub esp, 0x20
// 005a47d3  8b473c               mov eax, dword ptr [edi + 0x3c]
// 005a47d6  8b4f04               mov ecx, dword ptr [edi + 4]
// 005a47d9  53                   push ebx
// 005a47da  8b9f44010000         mov ebx, dword ptr [edi + 0x144]
// 005a47e0  56                   push esi
// 005a47e1  8bb7dc000000         mov esi, dword ptr [edi + 0xdc]
// 005a47e7  0fafc6               imul eax, esi
// 005a47ea  8d1480               lea edx, [eax + eax*4]
// 005a47ed  8b01                 mov eax, dword ptr [ecx]
// 005a47ef  03d2                 add edx, edx
// 005a47f1  03d2                 add edx, edx
// 005a47f3  52                   push edx
// 005a47f4  6a01                 push 1
// 005a47f6  57                   push edi
// 005a47f7  ffd0                 call eax
// 005a47f9  8b5744               mov edx, dword ptr [edi + 0x44]
// 005a47fc  83c40c               add esp, 0xc
// 005a47ff  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 005a4803  89442408             mov dword ptr [esp + 8], eax
// 005a4807  c744241800000000     mov dword ptr [esp + 0x18], 0
// 005a480f  0f8ed0000000         jle 0x5a48e5
// 005a4815  8d0c76               lea ecx, [esi + esi*2]
// 005a4818  03c9                 add ecx, ecx
// 005a481a  03c9                 add ecx, ecx
// 005a481c  894c2420             mov dword ptr [esp + 0x20], ecx
// 005a4820  8d0cb6               lea ecx, [esi + esi*4]
// 005a4823  03c9                 add ecx, ecx
// 005a4825  03c9                 add ecx, ecx
// 005a4827  55                   push ebp
// 005a4828  894c2428             mov dword ptr [esp + 0x28], ecx
// 005a482c  8d4a08               lea ecx, [edx + 8]
// 005a482f  8d2cb0               lea ebp, [eax + esi*4]
// 005a4832  83c308               add ebx, 8
// 005a4835  894c2410             mov dword ptr [esp + 0x10], ecx
// 005a4839  896c2418             mov dword ptr [esp + 0x18], ebp
// 005a483d  895c2420             mov dword ptr [esp + 0x20], ebx
// 005a4841  eb04                 jmp 0x5a4847
// 005a4843  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005a4847  8d0476               lea eax, [esi + esi*2]
// 005a484a  50                   push eax
// 005a484b  8b4114               mov eax, dword ptr [ecx + 0x14]
// 005a484e  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 005a4855  03c0                 add eax, eax
// 005a4857  03c0                 add eax, eax
// 005a4859  03c0                 add eax, eax
// 005a485b  99                   cdq 
// 005a485c  f739                 idiv dword ptr [ecx]
// 005a485e  8b5f04               mov ebx, dword ptr [edi + 4]
// 005a4861  8b4b08               mov ecx, dword ptr [ebx + 8]
// 005a4864  50                   push eax
// 005a4865  6a01                 push 1
// 005a4867  57                   push edi
// 005a4868  ffd1                 call ecx
// 005a486a  8b542434             mov edx, dword ptr [esp + 0x34]
// 005a486e  52                   push edx
// 005a486f  8bd8                 mov ebx, eax
// 005a4871  53                   push ebx
// 005a4872  55                   push ebp
// 005a4873  e83e561700           call 0x719eb6
// 005a4878  83c41c               add esp, 0x1c
// 005a487b  85f6                 test esi, esi
// 005a487d  7e33                 jle 0x5a48b2
// 005a487f  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 005a4883  8bc6                 mov eax, esi
// 005a4885  c1e004               shl eax, 4
// 005a4888  03c5                 add eax, ebp
// 005a488a  8bcb                 mov ecx, ebx
// 005a488c  8d14f3               lea edx, [ebx + esi*8]
// 005a488f  2beb                 sub ebp, ebx
// 005a4891  89742414             mov dword ptr [esp + 0x14], esi
// 005a4895  8b1a                 mov ebx, dword ptr [edx]
// 005a4897  891c29               mov dword ptr [ecx + ebp], ebx
// 005a489a  8b19                 mov ebx, dword ptr [ecx]
// 005a489c  8918                 mov dword ptr [eax], ebx
// 005a489e  83c204               add edx, 4
// 005a48a1  83c104               add ecx, 4
// 005a48a4  83c004               add eax, 4
// 005a48a7  836c241401           sub dword ptr [esp + 0x14], 1
// 005a48ac  75e7                 jne 0x5a4895
// 005a48ae  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005a48b2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005a48b6  8b442428             mov eax, dword ptr [esp + 0x28]
// 005a48ba  0144240c             add dword ptr [esp + 0xc], eax
// 005a48be  8344241054           add dword ptr [esp + 0x10], 0x54
// 005a48c3  8929                 mov dword ptr [ecx], ebp
// 005a48c5  03e8                 add ebp, eax
// 005a48c7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005a48cb  40                   inc eax
// 005a48cc  83c104               add ecx, 4
// 005a48cf  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 005a48d2  896c2418             mov dword ptr [esp + 0x18], ebp
// 005a48d6  8944241c             mov dword ptr [esp + 0x1c], eax
// 005a48da  894c2420             mov dword ptr [esp + 0x20], ecx
// 005a48de  0f8c5fffffff         jl 0x5a4843
// 005a48e4  5d                   pop ebp
// 005a48e5  5e                   pop esi
// 005a48e6  5b                   pop ebx
// 005a48e7  83c420               add esp, 0x20
// 005a48ea  c3                   ret 
// library jpeg-6b/jcprepct.c (function _create_context_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
