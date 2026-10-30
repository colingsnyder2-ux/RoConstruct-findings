// roc 2009-12 0082de80  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 573 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082de80
//
// 0082de80  51                   push ecx
// 0082de81  53                   push ebx
// 0082de82  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0082de86  8b0b                 mov ecx, dword ptr [ebx]
// 0082de88  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0082de8b  8b11                 mov edx, dword ptr [ecx]
// 0082de8d  55                   push ebp
// 0082de8e  8ba8ec000000         mov ebp, dword ptr [eax + 0xec]
// 0082de94  8b4260               mov eax, dword ptr [edx + 0x60]
// 0082de97  56                   push esi
// 0082de98  57                   push edi
// 0082de99  ffd0                 call eax
// 0082de9b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082de9f  8b09                 mov ecx, dword ptr [ecx]
// 0082dea1  8b11                 mov edx, dword ptr [ecx]
// 0082dea3  8bf8                 mov edi, eax
// 0082dea5  8b4260               mov eax, dword ptr [edx + 0x60]
// 0082dea8  897c2410             mov dword ptr [esp + 0x10], edi
// 0082deac  ffd0                 call eax
// 0082deae  8bf0                 mov esi, eax
// 0082deb0  89742418             mov dword ptr [esp + 0x18], esi
// 0082deb4  3bfe                 cmp edi, esi
// 0082deb6  750c                 jne 0x82dec4
// 0082deb8  85ff                 test edi, edi
// 0082deba  7410                 je 0x82decc
// 0082debc  5f                   pop edi
// 0082debd  5e                   pop esi
// 0082debe  5d                   pop ebp
// 0082debf  33c0                 xor eax, eax
// 0082dec1  5b                   pop ebx
// 0082dec2  59                   pop ecx
// 0082dec3  c3                   ret 
// 0082dec4  85ff                 test edi, edi
// 0082dec6  0f85e8000000         jne 0x82dfb4
// 0082decc  85f6                 test esi, esi
// 0082dece  0f85d8000000         jne 0x82dfac
// 0082ded4  8b0b                 mov ecx, dword ptr [ebx]
// 0082ded6  8b11                 mov edx, dword ptr [ecx]
// 0082ded8  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0082dede  ffd0                 call eax
// 0082dee0  85c0                 test eax, eax
// 0082dee2  0f84c4000000         je 0x82dfac
// 0082dee8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082deec  8b09                 mov ecx, dword ptr [ecx]
// 0082deee  8b11                 mov edx, dword ptr [ecx]
// 0082def0  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 0082def6  ffd0                 call eax
// 0082def8  85c0                 test eax, eax
// 0082defa  0f84ac000000         je 0x82dfac
// 0082df00  8b33                 mov esi, dword ptr [ebx]
// 0082df02  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0082df06  8b16                 mov edx, dword ptr [esi]
// 0082df08  8b19                 mov ebx, dword ptr [ecx]
// 0082df0a  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082df10  8bce                 mov ecx, esi
// 0082df12  ffd0                 call eax
// 0082df14  85c0                 test eax, eax
// 0082df16  0f848c000000         je 0x82dfa8
// 0082df1c  8b16                 mov edx, dword ptr [esi]
// 0082df1e  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082df24  8bce                 mov ecx, esi
// 0082df26  ffd0                 call eax
// 0082df28  8bc8                 mov ecx, eax
// 0082df2a  e8f1ecffff           call 0x82cc20
// 0082df2f  85c0                 test eax, eax
// 0082df31  7475                 je 0x82dfa8
// 0082df33  8b13                 mov edx, dword ptr [ebx]
// 0082df35  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082df3b  8bcb                 mov ecx, ebx
// 0082df3d  ffd0                 call eax
// 0082df3f  85c0                 test eax, eax
// 0082df41  7465                 je 0x82dfa8
// 0082df43  8b13                 mov edx, dword ptr [ebx]
// 0082df45  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082df4b  8bcb                 mov ecx, ebx
// 0082df4d  ffd0                 call eax
// 0082df4f  8bc8                 mov ecx, eax
// 0082df51  e8caecffff           call 0x82cc20
// 0082df56  85c0                 test eax, eax
// 0082df58  744e                 je 0x82dfa8
// 0082df5a  8b16                 mov edx, dword ptr [esi]
// 0082df5c  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082df62  8bce                 mov ecx, esi
// 0082df64  ffd0                 call eax
// 0082df66  8b10                 mov edx, dword ptr [eax]
// 0082df68  8bc8                 mov ecx, eax
// 0082df6a  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0082df6d  6a00                 push 0
// 0082df6f  ffd0                 call eax
// 0082df71  8b13                 mov edx, dword ptr [ebx]
// 0082df73  89442418             mov dword ptr [esp + 0x18], eax
// 0082df77  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 0082df7d  8bcb                 mov ecx, ebx
// 0082df7f  ffd0                 call eax
// 0082df81  8b10                 mov edx, dword ptr [eax]
// 0082df83  8bc8                 mov ecx, eax
// 0082df85  8b425c               mov eax, dword ptr [edx + 0x5c]
// 0082df88  6a00                 push 0
// 0082df8a  ffd0                 call eax
// 0082df8c  8d4c241c             lea ecx, [esp + 0x1c]
// 0082df90  51                   push ecx
// 0082df91  8d54241c             lea edx, [esp + 0x1c]
// 0082df95  52                   push edx
// 0082df96  89442424             mov dword ptr [esp + 0x24], eax
// 0082df9a  e871fcffff           call 0x82dc10
// 0082df9f  83c408               add esp, 8
// 0082dfa2  5f                   pop edi
// 0082dfa3  5e                   pop esi
// 0082dfa4  5d                   pop ebp
// 0082dfa5  5b                   pop ebx
// 0082dfa6  59                   pop ecx
// 0082dfa7  c3                   ret 
// 0082dfa8  8b742418             mov esi, dword ptr [esp + 0x18]
// 0082dfac  85ff                 test edi, edi
// 0082dfae  0f8401010000         je 0x82e0b5
// 0082dfb4  85f6                 test esi, esi
// 0082dfb6  0f84f9000000         je 0x82e0b5
// 0082dfbc  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0082dfbf  33db                 xor ebx, ebx
// 0082dfc1  e8aa78caff           call 0x4d5870
// 0082dfc6  85c0                 test eax, eax
// 0082dfc8  7e5a                 jle 0x82e024
// 0082dfca  8d9b00000000         lea ebx, [ebx]
// 0082dfd0  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0082dfd3  53                   push ebx
// 0082dfd4  e8d7f50300           call 0x86d5b0
// 0082dfd9  8bf0                 mov esi, eax
// 0082dfdb  837e4c00             cmp dword ptr [esi + 0x4c], 0
// 0082dfdf  7436                 je 0x82e017
// 0082dfe1  8b4640               mov eax, dword ptr [esi + 0x40]
// 0082dfe4  56                   push esi
// 0082dfe5  8bcf                 mov ecx, edi
// 0082dfe7  89442420             mov dword ptr [esp + 0x20], eax
// 0082dfeb  e850cdffff           call 0x82ad40
// 0082dff0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082dff4  56                   push esi
// 0082dff5  8bf8                 mov edi, eax
// 0082dff7  e844cdffff           call 0x82ad40
// 0082dffc  85ff                 test edi, edi
// 0082dffe  7413                 je 0x82e013
// 0082e000  85c0                 test eax, eax
// 0082e002  740f                 je 0x82e013
// 0082e004  8b17                 mov edx, dword ptr [edi]
// 0082e006  50                   push eax
// 0082e007  8b427c               mov eax, dword ptr [edx + 0x7c]
// 0082e00a  56                   push esi
// 0082e00b  8bcf                 mov ecx, edi
// 0082e00d  ffd0                 call eax
// 0082e00f  85c0                 test eax, eax
// 0082e011  7525                 jne 0x82e038
// 0082e013  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0082e017  8b4d20               mov ecx, dword ptr [ebp + 0x20]
// 0082e01a  43                   inc ebx
// 0082e01b  e85078caff           call 0x4d5870
// 0082e020  3bd8                 cmp ebx, eax
// 0082e022  7cac                 jl 0x82dfd0
// 0082e024  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0082e027  33db                 xor ebx, ebx
// 0082e029  e84278caff           call 0x4d5870
// 0082e02e  85c0                 test eax, eax
// 0082e030  0f8e7f000000         jle 0x82e0b5
// 0082e036  eb2c                 jmp 0x82e064
// 0082e038  85db                 test ebx, ebx
// 0082e03a  7e0d                 jle 0x82e049
// 0082e03c  33c0                 xor eax, eax
// 0082e03e  3944241c             cmp dword ptr [esp + 0x1c], eax
// 0082e042  0f94c0               sete al
// 0082e045  8d4400ff             lea eax, [eax + eax - 1]
// 0082e049  33c9                 xor ecx, ecx
// 0082e04b  394c241c             cmp dword ptr [esp + 0x1c], ecx
// 0082e04f  5f                   pop edi
// 0082e050  0f95c1               setne cl
// 0082e053  5e                   pop esi
// 0082e054  5d                   pop ebp
// 0082e055  5b                   pop ebx
// 0082e056  8d4c09ff             lea ecx, [ecx + ecx - 1]
// 0082e05a  0fafc1               imul eax, ecx
// 0082e05d  59                   pop ecx
// 0082e05e  c3                   ret 
// 0082e05f  90                   nop 
// 0082e060  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0082e064  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0082e067  53                   push ebx
// 0082e068  e843f50300           call 0x86d5b0
// 0082e06d  8bf0                 mov esi, eax
// 0082e06f  8bce                 mov ecx, esi
// 0082e071  e82a30edff           call 0x7010a0
// 0082e076  56                   push esi
// 0082e077  8bcf                 mov ecx, edi
// 0082e079  89442420             mov dword ptr [esp + 0x20], eax
// 0082e07d  e8beccffff           call 0x82ad40
// 0082e082  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082e086  56                   push esi
// 0082e087  8bf8                 mov edi, eax
// 0082e089  e8b2ccffff           call 0x82ad40
// 0082e08e  85ff                 test edi, edi
// 0082e090  7416                 je 0x82e0a8
// 0082e092  85c0                 test eax, eax
// 0082e094  7412                 je 0x82e0a8
// 0082e096  8b17                 mov edx, dword ptr [edi]
// 0082e098  50                   push eax
// 0082e099  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 0082e09f  56                   push esi
// 0082e0a0  8bcf                 mov ecx, edi
// 0082e0a2  ffd0                 call eax
// 0082e0a4  85c0                 test eax, eax
// 0082e0a6  75a1                 jne 0x82e049
// 0082e0a8  8b4d24               mov ecx, dword ptr [ebp + 0x24]
// 0082e0ab  43                   inc ebx
// 0082e0ac  e8bf77caff           call 0x4d5870
// 0082e0b1  3bd8                 cmp ebx, eax
// 0082e0b3  7cab                 jl 0x82e060
// 0082e0b5  5f                   pop edi
// 0082e0b6  5e                   pop esi
// 0082e0b7  5d                   pop ebp
// 0082e0b8  33c0                 xor eax, eax
// 0082e0ba  5b                   pop ebx
// 0082e0bb  59                   pop ecx
// 0082e0bc  c3                   ret 
// copied from an identical function in another client (function ?CompareRows2@CXTPReportRows@@SAHPAPBVCXTPReportRow@@0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp