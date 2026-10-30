// roc 2010-06 007d3570  unit: CXTPReportControl  size: 636 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007d3570
//
// 007d3570  6aff                 push -1
// 007d3572  68d40b9b00           push 0x9b0bd4
// 007d3577  64a100000000         mov eax, dword ptr fs:[0]
// 007d357d  50                   push eax
// 007d357e  83ec20               sub esp, 0x20
// 007d3581  53                   push ebx
// 007d3582  55                   push ebp
// 007d3583  56                   push esi
// 007d3584  57                   push edi
// 007d3585  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 007d358a  33c4                 xor eax, esp
// 007d358c  50                   push eax
// 007d358d  8d442434             lea eax, [esp + 0x34]
// 007d3591  64a300000000         mov dword ptr fs:[0], eax
// 007d3597  8bf9                 mov edi, ecx
// 007d3599  897c2424             mov dword ptr [esp + 0x24], edi
// 007d359d  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007d35a1  33db                 xor ebx, ebx
// 007d35a3  895c243c             mov dword ptr [esp + 0x3c], ebx
// 007d35a7  3bcb                 cmp ecx, ebx
// 007d35a9  7475                 je 0x7d3620
// 007d35ab  8b01                 mov eax, dword ptr [ecx]
// 007d35ad  8b505c               mov edx, dword ptr [eax + 0x5c]
// 007d35b0  ffd2                 call edx
// 007d35b2  8d4c2448             lea ecx, [esp + 0x48]
// 007d35b6  85c0                 test eax, eax
// 007d35b8  0f851e020000         jne 0x7d37dc
// 007d35be  ff15eccd9e00         call dword ptr [0x9ecdec]
// 007d35c4  84c0                 test al, al
// 007d35c6  7558                 jne 0x7d3620
// 007d35c8  8b07                 mov eax, dword ptr [edi]
// 007d35ca  8b9070010000         mov edx, dword ptr [eax + 0x170]
// 007d35d0  8bcf                 mov ecx, edi
// 007d35d2  ffd2                 call edx
// 007d35d4  8a0d4692a500         mov cl, byte ptr [0xa59246]
// 007d35da  8944242c             mov dword ptr [esp + 0x2c], eax
// 007d35de  66a14492a500         mov ax, word ptr [0xa59244]
// 007d35e4  884c2416             mov byte ptr [esp + 0x16], cl
// 007d35e8  8d4c2448             lea ecx, [esp + 0x48]
// 007d35ec  6689442414           mov word ptr [esp + 0x14], ax
// 007d35f1  895c2428             mov dword ptr [esp + 0x28], ebx
// 007d35f5  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 007d35fb  50                   push eax
// 007d35fc  8d4c244c             lea ecx, [esp + 0x4c]
// 007d3600  ff15fcc39e00         call dword ptr [0x9ec3fc]
// 007d3606  8d542428             lea edx, [esp + 0x28]
// 007d360a  52                   push edx
// 007d360b  8d4c2418             lea ecx, [esp + 0x18]
// 007d360f  51                   push ecx
// 007d3610  50                   push eax
// 007d3611  ff1564a99e00         call dword ptr [0x9ea964]
// 007d3617  8bf0                 mov esi, eax
// 007d3619  83c40c               add esp, 0xc
// 007d361c  3bf3                 cmp esi, ebx
// 007d361e  7526                 jne 0x7d3646
// 007d3620  8d4c2448             lea ecx, [esp + 0x48]
// 007d3624  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007d362a  33c0                 xor eax, eax
// 007d362c  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 007d3630  64890d00000000       mov dword ptr fs:[0], ecx
// 007d3637  59                   pop ecx
// 007d3638  5f                   pop edi
// 007d3639  5e                   pop esi
// 007d363a  5d                   pop ebp
// 007d363b  5b                   pop ebx
// 007d363c  83c42c               add esp, 0x2c
// 007d363f  c20c00               ret 0xc
// 007d3642  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007d3646  56                   push esi
// 007d3647  8d4c241c             lea ecx, [esp + 0x1c]
// 007d364b  ff15e8ce9e00         call dword ptr [0x9ecee8]
// 007d3651  8d4c2418             lea ecx, [esp + 0x18]
// 007d3655  c644243c01           mov byte ptr [esp + 0x3c], 1
// 007d365a  ff1540c89e00         call dword ptr [0x9ec840]
// 007d3660  8b97ec000000         mov edx, dword ptr [edi + 0xec]
// 007d3666  8b4230               mov eax, dword ptr [edx + 0x30]
// 007d3669  33ed                 xor ebp, ebp
// 007d366b  33ff                 xor edi, edi
// 007d366d  3bc3                 cmp eax, ebx
// 007d366f  89442430             mov dword ptr [esp + 0x30], eax
// 007d3673  0f8eaf000000         jle 0x7d3728
// 007d3679  8da42400000000       lea esp, [esp]
// 007d3680  3bfb                 cmp edi, ebx
// 007d3682  8b442424             mov eax, dword ptr [esp + 0x24]
// 007d3686  8b80ec000000         mov eax, dword ptr [eax + 0xec]
// 007d368c  0f8c8b000000         jl 0x7d371d
// 007d3692  3b7830               cmp edi, dword ptr [eax + 0x30]
// 007d3695  0f8d82000000         jge 0x7d371d
// 007d369b  8b482c               mov ecx, dword ptr [eax + 0x2c]
// 007d369e  8b34b9               mov esi, dword ptr [ecx + edi*4]
// 007d36a1  8d04b9               lea eax, [ecx + edi*4]
// 007d36a4  3bf3                 cmp esi, ebx
// 007d36a6  7475                 je 0x7d371d
// 007d36a8  8bce                 mov ecx, esi
// 007d36aa  e8f1840000           call 0x7dbba0
// 007d36af  85c0                 test eax, eax
// 007d36b1  7506                 jne 0x7d36b9
// 007d36b3  395c242c             cmp dword ptr [esp + 0x2c], ebx
// 007d36b7  7464                 je 0x7d371d
// 007d36b9  395e64               cmp dword ptr [esi + 0x64], ebx
// 007d36bc  745f                 je 0x7d371d
// 007d36be  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 007d36c2  56                   push esi
// 007d36c3  e8e8b60000           call 0x7dedb0
// 007d36c8  3bc3                 cmp eax, ebx
// 007d36ca  7451                 je 0x7d371d
// 007d36cc  8b10                 mov edx, dword ptr [eax]
// 007d36ce  8b526c               mov edx, dword ptr [edx + 0x6c]
// 007d36d1  56                   push esi
// 007d36d2  8d4c2420             lea ecx, [esp + 0x20]
// 007d36d6  51                   push ecx
// 007d36d7  8bc8                 mov ecx, eax
// 007d36d9  ffd2                 call edx
// 007d36db  8d4c241c             lea ecx, [esp + 0x1c]
// 007d36df  c644243c02           mov byte ptr [esp + 0x3c], 2
// 007d36e4  ff1540c89e00         call dword ptr [0x9ec840]
// 007d36ea  53                   push ebx
// 007d36eb  8d4c241c             lea ecx, [esp + 0x1c]
// 007d36ef  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007d36f5  50                   push eax
// 007d36f6  8d4c2424             lea ecx, [esp + 0x24]
// 007d36fa  ff15fcc79e00         call dword ptr [0x9ec7fc]
// 007d3700  33c9                 xor ecx, ecx
// 007d3702  83f8ff               cmp eax, -1
// 007d3705  0f95c1               setne cl
// 007d3708  c644243c01           mov byte ptr [esp + 0x3c], 1
// 007d370d  8be9                 mov ebp, ecx
// 007d370f  8d4c241c             lea ecx, [esp + 0x1c]
// 007d3713  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007d3719  3beb                 cmp ebp, ebx
// 007d371b  750b                 jne 0x7d3728
// 007d371d  47                   inc edi
// 007d371e  3b7c2430             cmp edi, dword ptr [esp + 0x30]
// 007d3722  0f8c58ffffff         jl 0x7d3680
// 007d3728  395c244c             cmp dword ptr [esp + 0x4c], ebx
// 007d372c  746b                 je 0x7d3799
// 007d372e  3beb                 cmp ebp, ebx
// 007d3730  756b                 jne 0x7d379d
// 007d3732  8b742444             mov esi, dword ptr [esp + 0x44]
// 007d3736  8bce                 mov ecx, esi
// 007d3738  e883ba0200           call 0x7ff1c0
// 007d373d  85c0                 test eax, eax
// 007d373f  0f8489000000         je 0x7d37ce
// 007d3745  8bce                 mov ecx, esi
// 007d3747  e874ba0200           call 0x7ff1c0
// 007d374c  8b10                 mov edx, dword ptr [eax]
// 007d374e  8b526c               mov edx, dword ptr [edx + 0x6c]
// 007d3751  53                   push ebx
// 007d3752  8d4c2424             lea ecx, [esp + 0x24]
// 007d3756  51                   push ecx
// 007d3757  8bc8                 mov ecx, eax
// 007d3759  ffd2                 call edx
// 007d375b  8d4c2420             lea ecx, [esp + 0x20]
// 007d375f  c644243c03           mov byte ptr [esp + 0x3c], 3
// 007d3764  ff1540c89e00         call dword ptr [0x9ec840]
// 007d376a  53                   push ebx
// 007d376b  8d4c241c             lea ecx, [esp + 0x1c]
// 007d376f  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 007d3775  50                   push eax
// 007d3776  8d4c2428             lea ecx, [esp + 0x28]
// 007d377a  ff15fcc79e00         call dword ptr [0x9ec7fc]
// 007d3780  33c9                 xor ecx, ecx
// 007d3782  83f8ff               cmp eax, -1
// 007d3785  0f95c1               setne cl
// 007d3788  c644243c01           mov byte ptr [esp + 0x3c], 1
// 007d378d  8be9                 mov ebp, ecx
// 007d378f  8d4c2420             lea ecx, [esp + 0x20]
// 007d3793  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007d3799  3beb                 cmp ebp, ebx
// 007d379b  7431                 je 0x7d37ce
// 007d379d  8d542428             lea edx, [esp + 0x28]
// 007d37a1  52                   push edx
// 007d37a2  8d442418             lea eax, [esp + 0x18]
// 007d37a6  50                   push eax
// 007d37a7  53                   push ebx
// 007d37a8  ff1564a99e00         call dword ptr [0x9ea964]
// 007d37ae  83c40c               add esp, 0xc
// 007d37b1  8d4c2418             lea ecx, [esp + 0x18]
// 007d37b5  8bf0                 mov esi, eax
// 007d37b7  885c243c             mov byte ptr [esp + 0x3c], bl
// 007d37bb  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007d37c1  3bf3                 cmp esi, ebx
// 007d37c3  0f8579feffff         jne 0x7d3642
// 007d37c9  e952feffff           jmp 0x7d3620
// 007d37ce  8d4c2418             lea ecx, [esp + 0x18]
// 007d37d2  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007d37d8  8d4c2448             lea ecx, [esp + 0x48]
// 007d37dc  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 007d37e2  b801000000           mov eax, 1
// 007d37e7  e940feffff           jmp 0x7d362c
// copied from an identical function in another client (function ?ApplyFilter@CXTPReportControl@@MAEHPAVCXTPReportRecord@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportControl.cpp