// roc 2009-12 00626780  unit: seg_00620000  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00626780
//
// 00626780  83ec20               sub esp, 0x20
// 00626783  8b473c               mov eax, dword ptr [edi + 0x3c]
// 00626786  8b4f04               mov ecx, dword ptr [edi + 4]
// 00626789  53                   push ebx
// 0062678a  8b9f44010000         mov ebx, dword ptr [edi + 0x144]
// 00626790  56                   push esi
// 00626791  8bb7dc000000         mov esi, dword ptr [edi + 0xdc]
// 00626797  0fafc6               imul eax, esi
// 0062679a  8d1480               lea edx, [eax + eax*4]
// 0062679d  8b01                 mov eax, dword ptr [ecx]
// 0062679f  03d2                 add edx, edx
// 006267a1  03d2                 add edx, edx
// 006267a3  52                   push edx
// 006267a4  6a01                 push 1
// 006267a6  57                   push edi
// 006267a7  ffd0                 call eax
// 006267a9  8b5744               mov edx, dword ptr [edi + 0x44]
// 006267ac  83c40c               add esp, 0xc
// 006267af  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 006267b3  89442408             mov dword ptr [esp + 8], eax
// 006267b7  c744241800000000     mov dword ptr [esp + 0x18], 0
// 006267bf  0f8ed0000000         jle 0x626895
// 006267c5  8d0c76               lea ecx, [esi + esi*2]
// 006267c8  03c9                 add ecx, ecx
// 006267ca  03c9                 add ecx, ecx
// 006267cc  894c2420             mov dword ptr [esp + 0x20], ecx
// 006267d0  8d0cb6               lea ecx, [esi + esi*4]
// 006267d3  03c9                 add ecx, ecx
// 006267d5  03c9                 add ecx, ecx
// 006267d7  55                   push ebp
// 006267d8  894c2428             mov dword ptr [esp + 0x28], ecx
// 006267dc  8d4a08               lea ecx, [edx + 8]
// 006267df  8d2cb0               lea ebp, [eax + esi*4]
// 006267e2  83c308               add ebx, 8
// 006267e5  894c2410             mov dword ptr [esp + 0x10], ecx
// 006267e9  896c2418             mov dword ptr [esp + 0x18], ebp
// 006267ed  895c2420             mov dword ptr [esp + 0x20], ebx
// 006267f1  eb04                 jmp 0x6267f7
// 006267f3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006267f7  8d0476               lea eax, [esi + esi*2]
// 006267fa  50                   push eax
// 006267fb  8b4114               mov eax, dword ptr [ecx + 0x14]
// 006267fe  0faf87d8000000       imul eax, dword ptr [edi + 0xd8]
// 00626805  03c0                 add eax, eax
// 00626807  03c0                 add eax, eax
// 00626809  03c0                 add eax, eax
// 0062680b  99                   cdq 
// 0062680c  f739                 idiv dword ptr [ecx]
// 0062680e  8b5f04               mov ebx, dword ptr [edi + 4]
// 00626811  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00626814  50                   push eax
// 00626815  6a01                 push 1
// 00626817  57                   push edi
// 00626818  ffd1                 call ecx
// 0062681a  8b542434             mov edx, dword ptr [esp + 0x34]
// 0062681e  52                   push edx
// 0062681f  8bd8                 mov ebx, eax
// 00626821  53                   push ebx
// 00626822  55                   push ebp
// 00626823  e8bee41c00           call 0x7f4ce6
// 00626828  83c41c               add esp, 0x1c
// 0062682b  85f6                 test esi, esi
// 0062682d  7e33                 jle 0x626862
// 0062682f  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00626833  8bc6                 mov eax, esi
// 00626835  c1e004               shl eax, 4
// 00626838  03c5                 add eax, ebp
// 0062683a  8bcb                 mov ecx, ebx
// 0062683c  8d14f3               lea edx, [ebx + esi*8]
// 0062683f  2beb                 sub ebp, ebx
// 00626841  89742414             mov dword ptr [esp + 0x14], esi
// 00626845  8b1a                 mov ebx, dword ptr [edx]
// 00626847  891c29               mov dword ptr [ecx + ebp], ebx
// 0062684a  8b19                 mov ebx, dword ptr [ecx]
// 0062684c  8918                 mov dword ptr [eax], ebx
// 0062684e  83c204               add edx, 4
// 00626851  83c104               add ecx, 4
// 00626854  83c004               add eax, 4
// 00626857  836c241401           sub dword ptr [esp + 0x14], 1
// 0062685c  75e7                 jne 0x626845
// 0062685e  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 00626862  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00626866  8b442428             mov eax, dword ptr [esp + 0x28]
// 0062686a  0144240c             add dword ptr [esp + 0xc], eax
// 0062686e  8344241054           add dword ptr [esp + 0x10], 0x54
// 00626873  8929                 mov dword ptr [ecx], ebp
// 00626875  03e8                 add ebp, eax
// 00626877  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0062687b  40                   inc eax
// 0062687c  83c104               add ecx, 4
// 0062687f  3b473c               cmp eax, dword ptr [edi + 0x3c]
// 00626882  896c2418             mov dword ptr [esp + 0x18], ebp
// 00626886  8944241c             mov dword ptr [esp + 0x1c], eax
// 0062688a  894c2420             mov dword ptr [esp + 0x20], ecx
// 0062688e  0f8c5fffffff         jl 0x6267f3
// 00626894  5d                   pop ebp
// 00626895  5e                   pop esi
// 00626896  5b                   pop ebx
// 00626897  83c420               add esp, 0x20
// 0062689a  c3                   ret 
// library jpeg-6b/jcprepct.c (function _create_context_buffer)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcprepct.c
