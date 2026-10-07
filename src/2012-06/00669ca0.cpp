// roc 2012-06 00669ca0  unit: seg_00660000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00669ca0
//
// 00669ca0  83ec20               sub esp, 0x20
// 00669ca3  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00669ca6  8b4f04               mov ecx, dword ptr [edi + 4]
// 00669ca9  53                   push ebx
// 00669caa  8b9f44010000         mov ebx, dword ptr [edi + 0x144]
// 00669cb0  56                   push esi
// 00669cb1  8bb7dc000000         mov esi, dword ptr [edi + 0xdc]
// 00669cb7  0fafc6               imul eax, esi
// 00669cba  8d1480               lea edx, [eax + eax*4]
// 00669cbd  8b01                 mov eax, dword ptr [ecx]
// 00669cbf  03d2                 add edx, edx
// 00669cc1  03d2                 add edx, edx
// 00669cc3  52                   push edx
// 00669cc4  6a01                 push 1
// 00669cc6  57                   push edi
// 00669cc7  ffd0                 call eax
// 00669cc9  8b5744               mov edx, dword ptr [edi + 0x44]
// 00669ccc  83c40c               add esp, 0xc
// 00669ccf  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 00669cd3  89442408             mov dword ptr [esp + 8], eax
// 00669cd7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 00669cdf  0f8ed0000000         jle 0x669db5
// 00669ce5  8d0c76               lea ecx, [esi + esi*2]
// 00669ce8  03c9                 add ecx, ecx
// 00669cea  03c9                 add ecx, ecx
// 00669cec  894c2420             mov dword ptr [esp + 0x20], ecx
// 00669cf0  8d0cb6               lea ecx, [esi + esi*4]
// 00669cf3  03c9                 add ecx, ecx
// 00669cf5  03c9                 add ecx, ecx
// 00669cf7  55                   push ebp
// 00669cf8  894c2428             mov dword ptr [esp + 0x28], ecx
// 00669cfc  8d4a08               lea ecx, [edx + 8]
// 00669cff  8d2cb0               lea ebp, [eax + esi*4]
// 00669d02  83c308               add ebx, 8
// 00669d05  894c2410             mov dword ptr [esp + 0x10], ecx
// 00669d09  896c2418             mov dword ptr [esp + 0x18], ebp
// 00669d0d  895c2420             mov dword ptr [esp + 0x20], ebx
// 00669d11  eb04                 jmp 0x669d17
// 00669d13  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00669d17  8d0476               lea eax, [esi + esi*2]
// 00669d1a  50                   push eax
// 00669d1b  8b4114               mov eax, dword ptr [ecx + 0x14]
// 00669d1e  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 00669d25  03c0                 add eax, eax
// 00669d27  03c0                 add eax, eax
// 00669d29  03c0                 add eax, eax
// 00669d2b  99                   cdq 
// 00669d2c  f739                 idiv dword ptr [ecx]
// 00669d2e  8b5f04               mov ebx, dword ptr [edi + 4]
// 00669d31  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00669d34  50                   push eax
// 00669d35  6a01                 push 1
// 00669d37  57                   push edi
// 00669d38  ffd1                 call ecx
// 00669d3a  8b542434             mov edx, dword ptr [esp + 0x34]
// 00669d3e  52                   push edx
// 00669d3f  8bd8                 mov ebx, eax
// 00669d41  53                   push ebx
// 00669d42  55                   push ebp
// 00669d43  e814993100           call 0x98365c
// 00669d48  83c41c               add esp, 0x1c
// 00669d4b  85f6                 test esi, esi
// 00669d4d  7e33                 jle 0x669d82
// 00669d4f  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00669d53  8bc6                 mov eax, esi
// 00669d55  c1e004               shl eax, 4
// 00669d58  03c5                 add eax, ebp
// 00669d5a  8bcb                 mov ecx, ebx
// 00669d5c  8d14f3               lea edx, [ebx + esi*8]
// 00669d5f  2beb                 sub ebp, ebx
// 00669d61  89742414             mov dword ptr [esp + 0x14], esi
// 00669d65  8b1a                 mov ebx, dword ptr [edx]
// 00669d67  891c29               mov dword ptr [ecx + ebp], ebx
// 00669d6a  8b19                 mov ebx, dword ptr [ecx]
// 00669d6c  8918                 mov dword ptr [eax], ebx
// 00669d6e  83c204               add edx, 4
// 00669d71  83c104               add ecx, 4
// 00669d74  83c004               add eax, 4
// 00669d77  836c241401           sub dword ptr [esp + 0x14], 1
// 00669d7c  75e7                 jne 0x669d65
// 00669d7e  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00669d82  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00669d86  8b442428             mov eax, dword ptr [esp + 0x28]
// 00669d8a  0144240c             add dword ptr [esp + 0xc], eax
// 00669d8e  8344241054           add dword ptr [esp + 0x10], 0x54
// 00669d93  8929                 mov dword ptr [ecx], ebp
// 00669d95  03e8                 add ebp, eax
// 00669d97  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00669d9b  40                   inc eax
// 00669d9c  83c104               add ecx, 4
// 00669d9f  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 00669da2  896c2418             mov dword ptr [esp + 0x18], ebp
// 00669da6  8944241c             mov dword ptr [esp + 0x1c], eax
// 00669daa  894c2420             mov dword ptr [esp + 0x20], ecx
// 00669dae  0f8c5fffffff         jl 0x669d13
// 00669db4  5d                   pop ebp
// 00669db5  5e                   pop esi
// 00669db6  5b                   pop ebx
// 00669db7  83c420               add esp, 0x20
// 00669dba  c3                   ret 
// library jpeg-6b/jcprepct.c (function _create_context_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
