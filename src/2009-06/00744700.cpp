// roc 2009-06 00744700  unit: CXTPReportControl  size: 636 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00744700
//
// 00744700  6aff                 push -1
// 00744702  68546b8700           push 0x876b54
// 00744707  64a100000000         mov eax, dword ptr fs:[0]
// 0074470d  50                   push eax
// 0074470e  83ec20               sub esp, 0x20
// 00744711  53                   push ebx
// 00744712  55                   push ebp
// 00744713  56                   push esi
// 00744714  57                   push edi
// 00744715  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0074471a  33c4                 xor eax, esp
// 0074471c  50                   push eax
// 0074471d  8d442434             lea eax, [esp + 0x34]
// 00744721  64a300000000         mov dword ptr fs:[0], eax
// 00744727  8bf9                 mov edi, ecx
// 00744729  897c2424             mov dword ptr [esp + 0x24], edi
// 0074472d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00744731  33db                 xor ebx, ebx
// 00744733  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00744737  3bcb                 cmp ecx, ebx
// 00744739  7475                 je 0x7447b0
// 0074473b  8b01                 mov eax, dword ptr [ecx]
// 0074473d  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00744740  ffd2                 call edx
// 00744742  8d4c2448             lea ecx, [esp + 0x48]
// 00744746  85c0                 test eax, eax
// 00744748  0f851e020000         jne 0x74496c
// 0074474e  ff155cfb8900         call dword ptr [0x89fb5c]
// 00744754  84c0                 test al, al
// 00744756  7558                 jne 0x7447b0
// 00744758  8b07                 mov eax, dword ptr [edi]
// 0074475a  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 00744760  8bcf                 mov ecx, edi
// 00744762  ffd2                 call edx
// 00744764  8a0dae4a8f00         mov cl, byte ptr [0x8f4aae]
// 0074476a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0074476e  66a1ac4a8f00         mov ax, word ptr [0x8f4aac]
// 00744774  884c2416             mov byte ptr [esp + 0x16], cl
// 00744778  8d4c2448             lea ecx, [esp + 0x48]
// 0074477c  6689442414           mov word ptr [esp + 0x14], ax
// 00744781  895c2428             mov dword ptr [esp + 0x28], ebx
// 00744785  ff1554fb8900         call dword ptr [0x89fb54]
// 0074478b  50                   push eax
// 0074478c  8d4c244c             lea ecx, [esp + 0x4c]
// 00744790  ff1508f18900         call dword ptr [0x89f108]
// 00744796  8d542428             lea edx, [esp + 0x28]
// 0074479a  52                   push edx
// 0074479b  8d4c2418             lea ecx, [esp + 0x18]
// 0074479f  51                   push ecx
// 007447a0  50                   push eax
// 007447a1  ff15d0e68900         call dword ptr [0x89e6d0]
// 007447a7  8bf0                 mov esi, eax
// 007447a9  83c40c               add esp, 0xc
// 007447ac  3bf3                 cmp esi, ebx
// 007447ae  7526                 jne 0x7447d6
// 007447b0  8d4c2448             lea ecx, [esp + 0x48]
// 007447b4  ff1510fd8900         call dword ptr [0x89fd10]
// 007447ba  33c0                 xor eax, eax
// 007447bc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007447c0  64890d00000000       mov dword ptr fs:[0], ecx
// 007447c7  59                   pop ecx
// 007447c8  5f                   pop edi
// 007447c9  5e                   pop esi
// 007447ca  5d                   pop ebp
// 007447cb  5b                   pop ebx
// 007447cc  83c42c               add esp, 0x2c
// 007447cf  c20c00               ret 0xc
// 007447d2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007447d6  56                   push esi
// 007447d7  8d4c241c             lea ecx, [esp + 0x1c]
// 007447db  ff1508fd8900         call dword ptr [0x89fd08]
// 007447e1  8d4c2418             lea ecx, [esp + 0x18]
// 007447e5  c644243c01           mov byte ptr [esp + 0x3c], 1
// 007447ea  ff1578fe8900         call dword ptr [0x89fe78]
// 007447f0  8b97ec000000         mov edx, dword ptr [edi + 0xec]
// 007447f6  8b4230               mov eax, dword ptr [edx + 0x30]
// 007447f9  33ed                 xor ebp, ebp
// 007447fb  33ff                 xor edi, edi
// 007447fd  3bc3                 cmp eax, ebx
// 007447ff  89442430             mov dword ptr [esp + 0x30], eax
// 00744803  0f8eaf000000         jle 0x7448b8
// 00744809  8da42400000000       lea esp, [esp]
// 00744810  3bfb                 cmp edi, ebx
// 00744812  8b442424             mov eax, dword ptr [esp + 0x24]
// 00744816  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 0074481c  0f8c8b000000         jl 0x7448ad
// 00744822  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00744825  0f8d82000000         jge 0x7448ad
// 0074482b  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0074482e  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00744831  8d04b9               lea eax, [ecx + edi*4]
// 00744834  3bf3                 cmp esi, ebx
// 00744836  7475                 je 0x7448ad
// 00744838  8bce                 mov ecx, esi
// 0074483a  e811850000           call 0x74cd50
// 0074483f  85c0                 test eax, eax
// 00744841  7506                 jne 0x744849
// 00744843  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00744847  7464                 je 0x7448ad
// 00744849  395e64               cmp dword ptr [esi + 0x64], ebx
// 0074484c  745f                 je 0x7448ad
// 0074484e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00744852  56                   push esi
// 00744853  e818b70000           call 0x74ff70
// 00744858  3bc3                 cmp eax, ebx
// 0074485a  7451                 je 0x7448ad
// 0074485c  8b10                 mov edx, dword ptr [eax]
// 0074485e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 00744861  56                   push esi
// 00744862  8d4c2420             lea ecx, [esp + 0x20]
// 00744866  51                   push ecx
// 00744867  8bc8                 mov ecx, eax
// 00744869  ffd2                 call edx
// 0074486b  8d4c241c             lea ecx, [esp + 0x1c]
// 0074486f  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00744874  ff1578fe8900         call dword ptr [0x89fe78]
// 0074487a  53                   push ebx
// 0074487b  8d4c241c             lea ecx, [esp + 0x1c]
// 0074487f  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00744885  50                   push eax
// 00744886  8d4c2424             lea ecx, [esp + 0x24]
// 0074488a  ff15bcfe8900         call dword ptr [0x89febc]
// 00744890  33c9                 xor ecx, ecx
// 00744892  83f8ff               cmp eax, -1
// 00744895  0f95c1               setne cl
// 00744898  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0074489d  8be9                 mov ebp, ecx
// 0074489f  8d4c241c             lea ecx, [esp + 0x1c]
// 007448a3  ff1510fd8900         call dword ptr [0x89fd10]
// 007448a9  3beb                 cmp ebp, ebx
// 007448ab  750b                 jne 0x7448b8
// 007448ad  47                   inc edi
// 007448ae  3b7c2430             cmp edi, dword ptr [esp + 0x30]
// 007448b2  0f8c58ffffff         jl 0x744810
// 007448b8  395c244c             cmp dword ptr [esp + 0x4c], ebx
// 007448bc  746b                 je 0x744929
// 007448be  3beb                 cmp ebp, ebx
// 007448c0  756b                 jne 0x74492d
// 007448c2  8b742444             mov esi, dword ptr [esp + 0x44]
// 007448c6  8bce                 mov ecx, esi
// 007448c8  e8d3080400           call 0x7851a0
// 007448cd  85c0                 test eax, eax
// 007448cf  0f8489000000         je 0x74495e
// 007448d5  8bce                 mov ecx, esi
// 007448d7  e8c4080400           call 0x7851a0
// 007448dc  8b10                 mov edx, dword ptr [eax]
// 007448de  8b526c               mov edx, dword ptr [edx + 0x6c]
// 007448e1  53                   push ebx
// 007448e2  8d4c2424             lea ecx, [esp + 0x24]
// 007448e6  51                   push ecx
// 007448e7  8bc8                 mov ecx, eax
// 007448e9  ffd2                 call edx
// 007448eb  8d4c2420             lea ecx, [esp + 0x20]
// 007448ef  c644243c03           mov byte ptr [esp + 0x3c], 3
// 007448f4  ff1578fe8900         call dword ptr [0x89fe78]
// 007448fa  53                   push ebx
// 007448fb  8d4c241c             lea ecx, [esp + 0x1c]
// 007448ff  ff15d0fc8900         call dword ptr [0x89fcd0]
// 00744905  50                   push eax
// 00744906  8d4c2428             lea ecx, [esp + 0x28]
// 0074490a  ff15bcfe8900         call dword ptr [0x89febc]
// 00744910  33c9                 xor ecx, ecx
// 00744912  83f8ff               cmp eax, -1
// 00744915  0f95c1               setne cl
// 00744918  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0074491d  8be9                 mov ebp, ecx
// 0074491f  8d4c2420             lea ecx, [esp + 0x20]
// 00744923  ff1510fd8900         call dword ptr [0x89fd10]
// 00744929  3beb                 cmp ebp, ebx
// 0074492b  7431                 je 0x74495e
// 0074492d  8d542428             lea edx, [esp + 0x28]
// 00744931  52                   push edx
// 00744932  8d442418             lea eax, [esp + 0x18]
// 00744936  50                   push eax
// 00744937  53                   push ebx
// 00744938  ff15d0e68900         call dword ptr [0x89e6d0]
// 0074493e  83c40c               add esp, 0xc
// 00744941  8d4c2418             lea ecx, [esp + 0x18]
// 00744945  8bf0                 mov esi, eax
// 00744947  885c243c             mov byte ptr [esp + 0x3c], bl
// 0074494b  ff1510fd8900         call dword ptr [0x89fd10]
// 00744951  3bf3                 cmp esi, ebx
// 00744953  0f8579feffff         jne 0x7447d2
// 00744959  e952feffff           jmp 0x7447b0
// 0074495e  8d4c2418             lea ecx, [esp + 0x18]
// 00744962  ff1510fd8900         call dword ptr [0x89fd10]
// 00744968  8d4c2448             lea ecx, [esp + 0x48]
// 0074496c  ff1510fd8900         call dword ptr [0x89fd10]
// 00744972  b801000000           mov eax, 1
// 00744977  e940feffff           jmp 0x7447bc
// copied from an identical function in another client (function ?ApplyFilter@CXTPReportControl@@MAEHPAVCXTPReportRecord@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp