// roc 2010-06 005882e0  unit: seg_00580000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005882e0
//
// 005882e0  83ec20               sub esp, 0x20
// 005882e3  8b473c               mov eax, dword ptr [edi + 0x3c]
// 005882e6  8b4f04               mov ecx, dword ptr [edi + 4]
// 005882e9  53                   push ebx
// 005882ea  8b9f44010000         mov ebx, dword ptr [edi + 0x144]
// 005882f0  56                   push esi
// 005882f1  8bb7dc000000         mov esi, dword ptr [edi + 0xdc]
// 005882f7  0fafc6               imul eax, esi
// 005882fa  8d1480               lea edx, [eax + eax*4]
// 005882fd  8b01                 mov eax, dword ptr [ecx]
// 005882ff  03d2                 add edx, edx
// 00588301  03d2                 add edx, edx
// 00588303  52                   push edx
// 00588304  6a01                 push 1
// 00588306  57                   push edi
// 00588307  ffd0                 call eax
// 00588309  8b5744               mov edx, dword ptr [edi + 0x44]
// 0058830c  83c40c               add esp, 0xc
// 0058830f  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 00588313  89442408             mov dword ptr [esp + 8], eax
// 00588317  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0058831f  0f8ed0000000         jle 0x5883f5
// 00588325  8d0c76               lea ecx, [esi + esi*2]
// 00588328  03c9                 add ecx, ecx
// 0058832a  03c9                 add ecx, ecx
// 0058832c  894c2420             mov dword ptr [esp + 0x20], ecx
// 00588330  8d0cb6               lea ecx, [esi + esi*4]
// 00588333  03c9                 add ecx, ecx
// 00588335  03c9                 add ecx, ecx
// 00588337  55                   push ebp
// 00588338  894c2428             mov dword ptr [esp + 0x28], ecx
// 0058833c  8d4a08               lea ecx, [edx + 8]
// 0058833f  8d2cb0               lea ebp, [eax + esi*4]
// 00588342  83c308               add ebx, 8
// 00588345  894c2410             mov dword ptr [esp + 0x10], ecx
// 00588349  896c2418             mov dword ptr [esp + 0x18], ebp
// 0058834d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00588351  eb04                 jmp 0x588357
// 00588353  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00588357  8d0476               lea eax, [esi + esi*2]
// 0058835a  50                   push eax
// 0058835b  8b4114               mov eax, dword ptr [ecx + 0x14]
// 0058835e  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 00588365  03c0                 add eax, eax
// 00588367  03c0                 add eax, eax
// 00588369  03c0                 add eax, eax
// 0058836b  99                   cdq 
// 0058836c  f739                 idiv dword ptr [ecx]
// 0058836e  8b5f04               mov ebx, dword ptr [edi + 4]
// 00588371  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00588374  50                   push eax
// 00588375  6a01                 push 1
// 00588377  57                   push edi
// 00588378  ffd1                 call ecx
// 0058837a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0058837e  52                   push edx
// 0058837f  8bd8                 mov ebx, eax
// 00588381  53                   push ebx
// 00588382  55                   push ebp
// 00588383  e89e0a2200           call 0x7a8e26
// 00588388  83c41c               add esp, 0x1c
// 0058838b  85f6                 test esi, esi
// 0058838d  7e33                 jle 0x5883c2
// 0058838f  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00588393  8bc6                 mov eax, esi
// 00588395  c1e004               shl eax, 4
// 00588398  03c5                 add eax, ebp
// 0058839a  8bcb                 mov ecx, ebx
// 0058839c  8d14f3               lea edx, [ebx + esi*8]
// 0058839f  2beb                 sub ebp, ebx
// 005883a1  89742414             mov dword ptr [esp + 0x14], esi
// 005883a5  8b1a                 mov ebx, dword ptr [edx]
// 005883a7  891c29               mov dword ptr [ecx + ebp], ebx
// 005883aa  8b19                 mov ebx, dword ptr [ecx]
// 005883ac  8918                 mov dword ptr [eax], ebx
// 005883ae  83c204               add edx, 4
// 005883b1  83c104               add ecx, 4
// 005883b4  83c004               add eax, 4
// 005883b7  836c241401           sub dword ptr [esp + 0x14], 1
// 005883bc  75e7                 jne 0x5883a5
// 005883be  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005883c2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005883c6  8b442428             mov eax, dword ptr [esp + 0x28]
// 005883ca  0144240c             add dword ptr [esp + 0xc], eax
// 005883ce  8344241054           add dword ptr [esp + 0x10], 0x54
// 005883d3  8929                 mov dword ptr [ecx], ebp
// 005883d5  03e8                 add ebp, eax
// 005883d7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005883db  40                   inc eax
// 005883dc  83c104               add ecx, 4
// 005883df  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 005883e2  896c2418             mov dword ptr [esp + 0x18], ebp
// 005883e6  8944241c             mov dword ptr [esp + 0x1c], eax
// 005883ea  894c2420             mov dword ptr [esp + 0x20], ecx
// 005883ee  0f8c5fffffff         jl 0x588353
// 005883f4  5d                   pop ebp
// 005883f5  5e                   pop esi
// 005883f6  5b                   pop ebx
// 005883f7  83c420               add esp, 0x20
// 005883fa  c3                   ret 
// library jpeg-6b/jcprepct.c (function _create_context_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
