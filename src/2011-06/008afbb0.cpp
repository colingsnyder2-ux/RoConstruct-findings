// roc 2011-06 008afbb0  unit: CXTPReportPaintManager  size: 971 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008afbb0
//
// 008afbb0  6aff                 push -1
// 008afbb2  68dbafa000           push 0xa0afdb
// 008afbb7  64a100000000         mov eax, dword ptr fs:[0]
// 008afbbd  50                   push eax
// 008afbbe  83ec2c               sub esp, 0x2c
// 008afbc1  53                   push ebx
// 008afbc2  55                   push ebp
// 008afbc3  56                   push esi
// 008afbc4  57                   push edi
// 008afbc5  a12058c900           mov eax, dword ptr [0xc95820]
// 008afbca  33c4                 xor eax, esp
// 008afbcc  50                   push eax
// 008afbcd  8d442440             lea eax, [esp + 0x40]
// 008afbd1  64a300000000         mov dword ptr fs:[0], eax
// 008afbd7  8be9                 mov ebp, ecx
// 008afbd9  8b442450             mov eax, dword ptr [esp + 0x50]
// 008afbdd  8b4824               mov ecx, dword ptr [eax + 0x24]
// 008afbe0  8b5810               mov ebx, dword ptr [eax + 0x10]
// 008afbe3  8b542470             mov edx, dword ptr [esp + 0x70]
// 008afbe7  8b02                 mov eax, dword ptr [edx]
// 008afbe9  8b13                 mov edx, dword ptr [ebx]
// 008afbeb  894c2418             mov dword ptr [esp + 0x18], ecx
// 008afbef  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 008afbf3  8b31                 mov esi, dword ptr [ecx]
// 008afbf5  8944241c             mov dword ptr [esp + 0x1c], eax
// 008afbf9  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 008afbff  8bcb                 mov ecx, ebx
// 008afc01  895c2428             mov dword ptr [esp + 0x28], ebx
// 008afc05  ffd0                 call eax
// 008afc07  8d4c2458             lea ecx, [esp + 0x58]
// 008afc0b  51                   push ecx
// 008afc0c  8d542434             lea edx, [esp + 0x34]
// 008afc10  52                   push edx
// 008afc11  89442428             mov dword ptr [esp + 0x28], eax
// 008afc15  8bfe                 mov edi, esi
// 008afc17  ff15681ca400         call dword ptr [0xa41c68]
// 008afc1d  837c242000           cmp dword ptr [esp + 0x20], 0
// 008afc22  8d4c2430             lea ecx, [esp + 0x30]
// 008afc26  753c                 jne 0x8afc64
// 008afc28  8b442450             mov eax, dword ptr [esp + 0x50]
// 008afc2c  8b4028               mov eax, dword ptr [eax + 0x28]
// 008afc2f  0b442468             or eax, dword ptr [esp + 0x68]
// 008afc33  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008afc37  8b33                 mov esi, dword ptr [ebx]
// 008afc39  8b7c2454             mov edi, dword ptr [esp + 0x54]
// 008afc3d  0d20080000           or eax, 0x820
// 008afc42  50                   push eax
// 008afc43  51                   push ecx
// 008afc44  8bcf                 mov ecx, edi
// 008afc46  83c670               add esi, 0x70
// 008afc49  ff15a826a400         call dword ptr [0xa426a8]
// 008afc4f  50                   push eax
// 008afc50  8bcf                 mov ecx, edi
// 008afc52  ff15c82da400         call dword ptr [0xa42dc8]
// 008afc58  8b16                 mov edx, dword ptr [esi]
// 008afc5a  50                   push eax
// 008afc5b  8bcb                 mov ecx, ebx
// 008afc5d  ffd2                 call edx
// 008afc5f  e901030000           jmp 0x8aff65
// 008afc64  8b442418             mov eax, dword ptr [esp + 0x18]
// 008afc68  8b00                 mov eax, dword ptr [eax]
// 008afc6a  68200c0000           push 0xc20
// 008afc6f  83c070               add eax, 0x70
// 008afc72  51                   push ecx
// 008afc73  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008afc77  8944242c             mov dword ptr [esp + 0x2c], eax
// 008afc7b  ff15a826a400         call dword ptr [0xa426a8]
// 008afc81  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 008afc85  50                   push eax
// 008afc86  ff15c82da400         call dword ptr [0xa42dc8]
// 008afc8c  8b542430             mov edx, dword ptr [esp + 0x30]
// 008afc90  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008afc94  50                   push eax
// 008afc95  8b02                 mov eax, dword ptr [edx]
// 008afc97  ffd0                 call eax
// 008afc99  8b542438             mov edx, dword ptr [esp + 0x38]
// 008afc9d  8b442460             mov eax, dword ptr [esp + 0x60]
// 008afca1  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008afca5  2b542430             sub edx, dword ptr [esp + 0x30]
// 008afca9  2bc1                 sub eax, ecx
// 008afcab  3bd0                 cmp edx, eax
// 008afcad  7d3b                 jge 0x8afcea
// 008afcaf  8b542450             mov edx, dword ptr [esp + 0x50]
// 008afcb3  8b4228               mov eax, dword ptr [edx + 0x28]
// 008afcb6  83e003               and eax, 3
// 008afcb9  83e801               sub eax, 1
// 008afcbc  7413                 je 0x8afcd1
// 008afcbe  83e801               sub eax, 1
// 008afcc1  7527                 jne 0x8afcea
// 008afcc3  8b442460             mov eax, dword ptr [esp + 0x60]
// 008afcc7  2b442438             sub eax, dword ptr [esp + 0x38]
// 008afccb  01442430             add dword ptr [esp + 0x30], eax
// 008afccf  eb19                 jmp 0x8afcea
// 008afcd1  8b442430             mov eax, dword ptr [esp + 0x30]
// 008afcd5  2b442438             sub eax, dword ptr [esp + 0x38]
// 008afcd9  2bc1                 sub eax, ecx
// 008afcdb  03442460             add eax, dword ptr [esp + 0x60]
// 008afcdf  99                   cdq 
// 008afce0  2bc2                 sub eax, edx
// 008afce2  d1f8                 sar eax, 1
// 008afce4  03c1                 add eax, ecx
// 008afce6  89442430             mov dword ptr [esp + 0x30], eax
// 008afcea  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008afcee  8b542430             mov edx, dword ptr [esp + 0x30]
// 008afcf2  894c2438             mov dword ptr [esp + 0x38], ecx
// 008afcf6  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008afcfa  89542414             mov dword ptr [esp + 0x14], edx
// 008afcfe  ff15a826a400         call dword ptr [0xa426a8]
// 008afd04  3bc6                 cmp eax, esi
// 008afd06  0f8e48020000         jle 0x8aff54
// 008afd0c  eb06                 jmp 0x8afd14
// 008afd0e  8bff                 mov edi, edi
// 008afd10  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008afd14  8b442414             mov eax, dword ptr [esp + 0x14]
// 008afd18  3b442438             cmp eax, dword ptr [esp + 0x38]
// 008afd1c  0f8d32020000         jge 0x8aff54
// 008afd22  8d4c2470             lea ecx, [esp + 0x70]
// 008afd26  ff15b42da400         call dword ptr [0xa42db4]
// 008afd2c  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008afd30  39442420             cmp dword ptr [esp + 0x20], eax
// 008afd34  c744244800000000     mov dword ptr [esp + 0x48], 0
// 008afd3c  0f8e7c010000         jle 0x8afebe
// 008afd42  8b13                 mov edx, dword ptr [ebx]
// 008afd44  50                   push eax
// 008afd45  8b82bc000000         mov eax, dword ptr [edx + 0xbc]
// 008afd4b  8bcb                 mov ecx, ebx
// 008afd4d  ffd0                 call eax
// 008afd4f  8bd8                 mov ebx, eax
// 008afd51  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 008afd54  2bcf                 sub ecx, edi
// 008afd56  51                   push ecx
// 008afd57  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008afd5b  57                   push edi
// 008afd5c  8d54242c             lea edx, [esp + 0x2c]
// 008afd60  52                   push edx
// 008afd61  ff15e028a400         call dword ptr [0xa428e0]
// 008afd67  50                   push eax
// 008afd68  8d4c2474             lea ecx, [esp + 0x74]
// 008afd6c  c644244c01           mov byte ptr [esp + 0x4c], 1
// 008afd71  ff156425a400         call dword ptr [0xa42564]
// 008afd77  8d4c2424             lea ecx, [esp + 0x24]
// 008afd7b  c644244800           mov byte ptr [esp + 0x48], 0
// 008afd80  ff15082ea400         call dword ptr [0xa42e08]
// 008afd86  8d4c2470             lea ecx, [esp + 0x70]
// 008afd8a  ff15a826a400         call dword ptr [0xa426a8]
// 008afd90  85c0                 test eax, eax
// 008afd92  0f8e84000000         jle 0x8afe1c
// 008afd98  6a0a                 push 0xa
// 008afd9a  8d4c2474             lea ecx, [esp + 0x74]
// 008afd9e  ff159c2ca400         call dword ptr [0xa42c9c]
// 008afda4  6a0d                 push 0xd
// 008afda6  8d4c2474             lea ecx, [esp + 0x74]
// 008afdaa  ff159c2ca400         call dword ptr [0xa42c9c]
// 008afdb0  8b442468             mov eax, dword ptr [esp + 0x68]
// 008afdb4  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008afdb8  8b5500               mov edx, dword ptr [ebp]
// 008afdbb  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 008afdc1  50                   push eax
// 008afdc2  83ec10               sub esp, 0x10
// 008afdc5  8bc4                 mov eax, esp
// 008afdc7  8908                 mov dword ptr [eax], ecx
// 008afdc9  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008afdcd  894804               mov dword ptr [eax + 4], ecx
// 008afdd0  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008afdd4  894808               mov dword ptr [eax + 8], ecx
// 008afdd7  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008afddb  89480c               mov dword ptr [eax + 0xc], ecx
// 008afdde  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008afde2  8d842484000000       lea eax, [esp + 0x84]
// 008afde9  50                   push eax
// 008afdea  51                   push ecx
// 008afdeb  8d442430             lea eax, [esp + 0x30]
// 008afdef  50                   push eax
// 008afdf0  8bcd                 mov ecx, ebp
// 008afdf2  ffd2                 call edx
// 008afdf4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008afdf8  8bf0                 mov esi, eax
// 008afdfa  8b442414             mov eax, dword ptr [esp + 0x14]
// 008afdfe  3bc1                 cmp eax, ecx
// 008afe00  894c2430             mov dword ptr [esp + 0x30], ecx
// 008afe04  7f04                 jg 0x8afe0a
// 008afe06  89442430             mov dword ptr [esp + 0x30], eax
// 008afe0a  8d4c2470             lea ecx, [esp + 0x70]
// 008afe0e  ff15a826a400         call dword ptr [0xa426a8]
// 008afe14  3bf0                 cmp esi, eax
// 008afe16  0f8c24010000         jl 0x8aff40
// 008afe1c  8b442468             mov eax, dword ptr [esp + 0x68]
// 008afe20  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008afe24  8b542434             mov edx, dword ptr [esp + 0x34]
// 008afe28  50                   push eax
// 008afe29  83ec10               sub esp, 0x10
// 008afe2c  8bc4                 mov eax, esp
// 008afe2e  8908                 mov dword ptr [eax], ecx
// 008afe30  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008afe34  895004               mov dword ptr [eax + 4], edx
// 008afe37  8b542450             mov edx, dword ptr [esp + 0x50]
// 008afe3b  894808               mov dword ptr [eax + 8], ecx
// 008afe3e  51                   push ecx
// 008afe3f  89500c               mov dword ptr [eax + 0xc], edx
// 008afe42  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008afe46  8bcc                 mov ecx, esp
// 008afe48  89642444             mov dword ptr [esp + 0x44], esp
// 008afe4c  50                   push eax
// 008afe4d  ff15e42da400         call dword ptr [0xa42de4]
// 008afe53  8b442468             mov eax, dword ptr [esp + 0x68]
// 008afe57  8b5500               mov edx, dword ptr [ebp]
// 008afe5a  8b92cc000000         mov edx, dword ptr [edx + 0xcc]
// 008afe60  53                   push ebx
// 008afe61  50                   push eax
// 008afe62  8d4c2434             lea ecx, [esp + 0x34]
// 008afe66  51                   push ecx
// 008afe67  8bcd                 mov ecx, ebp
// 008afe69  ffd2                 call edx
// 008afe6b  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 008afe6f  8bf0                 mov esi, eax
// 008afe71  8b442414             mov eax, dword ptr [esp + 0x14]
// 008afe75  3bc1                 cmp eax, ecx
// 008afe77  894c2430             mov dword ptr [esp + 0x30], ecx
// 008afe7b  7f04                 jg 0x8afe81
// 008afe7d  89442430             mov dword ptr [esp + 0x30], eax
// 008afe81  8b4334               mov eax, dword ptr [ebx + 0x34]
// 008afe84  8b7b30               mov edi, dword ptr [ebx + 0x30]
// 008afe87  ff44241c             inc dword ptr [esp + 0x1c]
// 008afe8b  03f8                 add edi, eax
// 008afe8d  3bf0                 cmp esi, eax
// 008afe8f  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008afe97  8d4c2470             lea ecx, [esp + 0x70]
// 008afe9b  0f8cab000000         jl 0x8aff4c
// 008afea1  ff15082ea400         call dword ptr [0xa42e08]
// 008afea7  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008afeab  ff15a826a400         call dword ptr [0xa426a8]
// 008afeb1  3bc7                 cmp eax, edi
// 008afeb3  0f8f57feffff         jg 0x8afd10
// 008afeb9  e996000000           jmp 0x8aff54
// 008afebe  8b742454             mov esi, dword ptr [esp + 0x54]
// 008afec2  8bce                 mov ecx, esi
// 008afec4  ff15a826a400         call dword ptr [0xa426a8]
// 008afeca  2bc7                 sub eax, edi
// 008afecc  50                   push eax
// 008afecd  57                   push edi
// 008afece  8d44245c             lea eax, [esp + 0x5c]
// 008afed2  50                   push eax
// 008afed3  8bce                 mov ecx, esi
// 008afed5  ff15e028a400         call dword ptr [0xa428e0]
// 008afedb  50                   push eax
// 008afedc  8d4c2474             lea ecx, [esp + 0x74]
// 008afee0  c644244c02           mov byte ptr [esp + 0x4c], 2
// 008afee5  ff156425a400         call dword ptr [0xa42564]
// 008afeeb  8d4c2454             lea ecx, [esp + 0x54]
// 008afeef  c644244800           mov byte ptr [esp + 0x48], 0
// 008afef4  ff15082ea400         call dword ptr [0xa42e08]
// 008afefa  8b442468             mov eax, dword ptr [esp + 0x68]
// 008afefe  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008aff02  8b5500               mov edx, dword ptr [ebp]
// 008aff05  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 008aff0b  50                   push eax
// 008aff0c  83ec10               sub esp, 0x10
// 008aff0f  8bc4                 mov eax, esp
// 008aff11  8908                 mov dword ptr [eax], ecx
// 008aff13  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008aff17  894804               mov dword ptr [eax + 4], ecx
// 008aff1a  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 008aff1e  894808               mov dword ptr [eax + 8], ecx
// 008aff21  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 008aff25  89480c               mov dword ptr [eax + 0xc], ecx
// 008aff28  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008aff2c  8d842484000000       lea eax, [esp + 0x84]
// 008aff33  50                   push eax
// 008aff34  51                   push ecx
// 008aff35  8d442430             lea eax, [esp + 0x30]
// 008aff39  50                   push eax
// 008aff3a  8bcd                 mov ecx, ebp
// 008aff3c  ffd2                 call edx
// 008aff3e  8bf0                 mov esi, eax
// 008aff40  c7442448ffffffff     mov dword ptr [esp + 0x48], 0xffffffff
// 008aff48  8d4c2470             lea ecx, [esp + 0x70]
// 008aff4c  03f7                 add esi, edi
// 008aff4e  ff15082ea400         call dword ptr [0xa42e08]
// 008aff54  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008aff58  6a00                 push 0
// 008aff5a  e817b0f5ff           call 0x80af76
// 008aff5f  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 008aff63  8930                 mov dword ptr [eax], esi
// 008aff65  8b4c2440             mov ecx, dword ptr [esp + 0x40]
// 008aff69  64890d00000000       mov dword ptr fs:[0], ecx
// 008aff70  59                   pop ecx
// 008aff71  5f                   pop edi
// 008aff72  5e                   pop esi
// 008aff73  5d                   pop ebp
// 008aff74  5b                   pop ebx
// 008aff75  83c438               add esp, 0x38
// 008aff78  c22400               ret 0x24
// copied from an identical function in another client (function ?DrawTextLine@CXTPReportPaintManager@@MAEXPAUXTP_REPORTRECORDITEM_DRAWARGS@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HAAH3@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp