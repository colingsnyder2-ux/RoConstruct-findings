// roc 2011-06 00833700  unit: CXTPReportControl  size: 636 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00833700
//
// 00833700  6aff                 push -1
// 00833702  68f441a000           push 0xa041f4
// 00833707  64a100000000         mov eax, dword ptr fs:[0]
// 0083370d  50                   push eax
// 0083370e  83ec20               sub esp, 0x20
// 00833711  53                   push ebx
// 00833712  55                   push ebp
// 00833713  56                   push esi
// 00833714  57                   push edi
// 00833715  a12058c900           mov eax, dword ptr [0xc95820]
// 0083371a  33c4                 xor eax, esp
// 0083371c  50                   push eax
// 0083371d  8d442434             lea eax, [esp + 0x34]
// 00833721  64a300000000         mov dword ptr fs:[0], eax
// 00833727  8bf9                 mov edi, ecx
// 00833729  897c2424             mov dword ptr [esp + 0x24], edi
// 0083372d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00833731  33db                 xor ebx, ebx
// 00833733  895c243c             mov dword ptr [esp + 0x3c], ebx
// 00833737  3bcb                 cmp ecx, ebx
// 00833739  7475                 je 0x8337b0
// 0083373b  8b01                 mov eax, dword ptr [ecx]
// 0083373d  8b505c               mov edx, dword ptr [eax + 0x5c]
// 00833740  ffd2                 call edx
// 00833742  8d4c2448             lea ecx, [esp + 0x48]
// 00833746  85c0                 test eax, eax
// 00833748  0f851e020000         jne 0x83396c
// 0083374e  ff15b026a400         call dword ptr [0xa426b0]
// 00833754  84c0                 test al, al
// 00833756  7558                 jne 0x8337b0
// 00833758  8b07                 mov eax, dword ptr [edi]
// 0083375a  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 00833760  8bcf                 mov ecx, edi
// 00833762  ffd2                 call edx
// 00833764  8a0d324cac00         mov cl, byte ptr [0xac4c32]
// 0083376a  8944242c             mov dword ptr [esp + 0x2c], eax
// 0083376e  66a1304cac00         mov ax, word ptr [0xac4c30]
// 00833774  884c2416             mov byte ptr [esp + 0x16], cl
// 00833778  8d4c2448             lea ecx, [esp + 0x48]
// 0083377c  6689442414           mov word ptr [esp + 0x14], ax
// 00833781  895c2428             mov dword ptr [esp + 0x28], ebx
// 00833785  ff15a826a400         call dword ptr [0xa426a8]
// 0083378b  50                   push eax
// 0083378c  8d4c244c             lea ecx, [esp + 0x4c]
// 00833790  ff15e023a400         call dword ptr [0xa423e0]
// 00833796  8d542428             lea edx, [esp + 0x28]
// 0083379a  52                   push edx
// 0083379b  8d4c2418             lea ecx, [esp + 0x18]
// 0083379f  51                   push ecx
// 008337a0  50                   push eax
// 008337a1  ff156c07a400         call dword ptr [0xa4076c]
// 008337a7  8bf0                 mov esi, eax
// 008337a9  83c40c               add esp, 0xc
// 008337ac  3bf3                 cmp esi, ebx
// 008337ae  7526                 jne 0x8337d6
// 008337b0  8d4c2448             lea ecx, [esp + 0x48]
// 008337b4  ff15082ea400         call dword ptr [0xa42e08]
// 008337ba  33c0                 xor eax, eax
// 008337bc  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 008337c0  64890d00000000       mov dword ptr fs:[0], ecx
// 008337c7  59                   pop ecx
// 008337c8  5f                   pop edi
// 008337c9  5e                   pop esi
// 008337ca  5d                   pop ebp
// 008337cb  5b                   pop ebx
// 008337cc  83c42c               add esp, 0x2c
// 008337cf  c20c00               ret 0xc
// 008337d2  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008337d6  56                   push esi
// 008337d7  8d4c241c             lea ecx, [esp + 0x1c]
// 008337db  ff15002ea400         call dword ptr [0xa42e00]
// 008337e1  8d4c2418             lea ecx, [esp + 0x18]
// 008337e5  c644243c01           mov byte ptr [esp + 0x3c], 1
// 008337ea  ff15e428a400         call dword ptr [0xa428e4]
// 008337f0  8b97ec000000         mov edx, dword ptr [edi + 0xec]
// 008337f6  8b4230               mov eax, dword ptr [edx + 0x30]
// 008337f9  33ed                 xor ebp, ebp
// 008337fb  33ff                 xor edi, edi
// 008337fd  3bc3                 cmp eax, ebx
// 008337ff  89442430             mov dword ptr [esp + 0x30], eax
// 00833803  0f8eaf000000         jle 0x8338b8
// 00833809  8da42400000000       lea esp, [esp]
// 00833810  3bfb                 cmp edi, ebx
// 00833812  8b442424             mov eax, dword ptr [esp + 0x24]
// 00833816  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 0083381c  0f8c8b000000         jl 0x8338ad
// 00833822  3b7830               cmp edi, dword ptr [eax + 0x30]
// 00833825  0f8d82000000         jge 0x8338ad
// 0083382b  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 0083382e  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 00833831  8d04b9               lea eax, [ecx + edi*4]
// 00833834  3bf3                 cmp esi, ebx
// 00833836  7475                 je 0x8338ad
// 00833838  8bce                 mov ecx, esi
// 0083383a  e831c4ffff           call 0x82fc70
// 0083383f  85c0                 test eax, eax
// 00833841  7506                 jne 0x833849
// 00833843  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 00833847  7464                 je 0x8338ad
// 00833849  395e64               cmp dword ptr [esi + 0x64], ebx
// 0083384c  745f                 je 0x8338ad
// 0083384e  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00833852  56                   push esi
// 00833853  e808d10000           call 0x840960
// 00833858  3bc3                 cmp eax, ebx
// 0083385a  7451                 je 0x8338ad
// 0083385c  8b10                 mov edx, dword ptr [eax]
// 0083385e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 00833861  56                   push esi
// 00833862  8d4c2420             lea ecx, [esp + 0x20]
// 00833866  51                   push ecx
// 00833867  8bc8                 mov ecx, eax
// 00833869  ffd2                 call edx
// 0083386b  8d4c241c             lea ecx, [esp + 0x1c]
// 0083386f  c644243c02           mov byte ptr [esp + 0x3c], 2
// 00833874  ff15e428a400         call dword ptr [0xa428e4]
// 0083387a  53                   push ebx
// 0083387b  8d4c241c             lea ecx, [esp + 0x1c]
// 0083387f  ff15c82da400         call dword ptr [0xa42dc8]
// 00833885  50                   push eax
// 00833886  8d4c2424             lea ecx, [esp + 0x24]
// 0083388a  ff15a428a400         call dword ptr [0xa428a4]
// 00833890  33c9                 xor ecx, ecx
// 00833892  83f8ff               cmp eax, -1
// 00833895  0f95c1               setne cl
// 00833898  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0083389d  8be9                 mov ebp, ecx
// 0083389f  8d4c241c             lea ecx, [esp + 0x1c]
// 008338a3  ff15082ea400         call dword ptr [0xa42e08]
// 008338a9  3beb                 cmp ebp, ebx
// 008338ab  750b                 jne 0x8338b8
// 008338ad  47                   inc edi
// 008338ae  3b7c2430             cmp edi, dword ptr [esp + 0x30]
// 008338b2  0f8c58ffffff         jl 0x833810
// 008338b8  395c244c             cmp dword ptr [esp + 0x4c], ebx
// 008338bc  746b                 je 0x833929
// 008338be  3beb                 cmp ebp, ebx
// 008338c0  756b                 jne 0x83392d
// 008338c2  8b742444             mov esi, dword ptr [esp + 0x44]
// 008338c6  8bce                 mov ecx, esi
// 008338c8  e873930200           call 0x85cc40
// 008338cd  85c0                 test eax, eax
// 008338cf  0f8489000000         je 0x83395e
// 008338d5  8bce                 mov ecx, esi
// 008338d7  e864930200           call 0x85cc40
// 008338dc  8b10                 mov edx, dword ptr [eax]
// 008338de  8b526c               mov edx, dword ptr [edx + 0x6c]
// 008338e1  53                   push ebx
// 008338e2  8d4c2424             lea ecx, [esp + 0x24]
// 008338e6  51                   push ecx
// 008338e7  8bc8                 mov ecx, eax
// 008338e9  ffd2                 call edx
// 008338eb  8d4c2420             lea ecx, [esp + 0x20]
// 008338ef  c644243c03           mov byte ptr [esp + 0x3c], 3
// 008338f4  ff15e428a400         call dword ptr [0xa428e4]
// 008338fa  53                   push ebx
// 008338fb  8d4c241c             lea ecx, [esp + 0x1c]
// 008338ff  ff15c82da400         call dword ptr [0xa42dc8]
// 00833905  50                   push eax
// 00833906  8d4c2428             lea ecx, [esp + 0x28]
// 0083390a  ff15a428a400         call dword ptr [0xa428a4]
// 00833910  33c9                 xor ecx, ecx
// 00833912  83f8ff               cmp eax, -1
// 00833915  0f95c1               setne cl
// 00833918  c644243c01           mov byte ptr [esp + 0x3c], 1
// 0083391d  8be9                 mov ebp, ecx
// 0083391f  8d4c2420             lea ecx, [esp + 0x20]
// 00833923  ff15082ea400         call dword ptr [0xa42e08]
// 00833929  3beb                 cmp ebp, ebx
// 0083392b  7431                 je 0x83395e
// 0083392d  8d542428             lea edx, [esp + 0x28]
// 00833931  52                   push edx
// 00833932  8d442418             lea eax, [esp + 0x18]
// 00833936  50                   push eax
// 00833937  53                   push ebx
// 00833938  ff156c07a400         call dword ptr [0xa4076c]
// 0083393e  83c40c               add esp, 0xc
// 00833941  8d4c2418             lea ecx, [esp + 0x18]
// 00833945  8bf0                 mov esi, eax
// 00833947  885c243c             mov byte ptr [esp + 0x3c], bl
// 0083394b  ff15082ea400         call dword ptr [0xa42e08]
// 00833951  3bf3                 cmp esi, ebx
// 00833953  0f8579feffff         jne 0x8337d2
// 00833959  e952feffff           jmp 0x8337b0
// 0083395e  8d4c2418             lea ecx, [esp + 0x18]
// 00833962  ff15082ea400         call dword ptr [0xa42e08]
// 00833968  8d4c2448             lea ecx, [esp + 0x48]
// 0083396c  ff15082ea400         call dword ptr [0xa42e08]
// 00833972  b801000000           mov eax, 1
// 00833977  e940feffff           jmp 0x8337bc
// copied from an identical function in another client (function ?ApplyFilter@CXTPReportControl@@MAEHPAVCXTPReportRecord@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp