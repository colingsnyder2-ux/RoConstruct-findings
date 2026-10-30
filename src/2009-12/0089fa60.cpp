// roc 2009-12 0089fa60  unit: CXTPReportPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089fa60
//
// 0089fa60  6aff                 push -1
// 0089fa62  68a21f9600           push 0x961fa2
// 0089fa67  64a100000000         mov eax, dword ptr fs:[0]
// 0089fa6d  50                   push eax
// 0089fa6e  83ec40               sub esp, 0x40
// 0089fa71  53                   push ebx
// 0089fa72  55                   push ebp
// 0089fa73  56                   push esi
// 0089fa74  57                   push edi
// 0089fa75  a10052b600           mov eax, dword ptr [0xb65200]
// 0089fa7a  33c4                 xor eax, esp
// 0089fa7c  50                   push eax
// 0089fa7d  8d442454             lea eax, [esp + 0x54]
// 0089fa81  64a300000000         mov dword ptr fs:[0], eax
// 0089fa87  894c2414             mov dword ptr [esp + 0x14], ecx
// 0089fa8b  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 0089fa8f  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 0089fa92  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 0089fa95  8d4c2470             lea ecx, [esp + 0x70]
// 0089fa99  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 0089faa1  8bf5                 mov esi, ebp
// 0089faa3  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089faa9  8d0c33               lea ecx, [ebx + esi]
// 0089faac  2bc8                 sub ecx, eax
// 0089faae  85c9                 test ecx, ecx
// 0089fab0  7e0f                 jle 0x89fac1
// 0089fab2  2bf1                 sub esi, ecx
// 0089fab4  b800000000           mov eax, 0
// 0089fab9  0f98c0               sets al
// 0089fabc  48                   dec eax
// 0089fabd  23c6                 and eax, esi
// 0089fabf  8be8                 mov ebp, eax
// 0089fac1  85db                 test ebx, ebx
// 0089fac3  0f8c72010000         jl 0x89fc3b
// 0089fac9  8b7730               mov esi, dword ptr [edi + 0x30]
// 0089facc  8d4c2470             lea ecx, [esp + 0x70]
// 0089fad0  89742418             mov dword ptr [esp + 0x18], esi
// 0089fad4  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089fada  3bf0                 cmp esi, eax
// 0089fadc  0f8d59010000         jge 0x89fc3b
// 0089fae2  85ed                 test ebp, ebp
// 0089fae4  0f8e51010000         jle 0x89fc3b
// 0089faea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0089faee  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 0089faf2  8b7324               mov esi, dword ptr [ebx + 0x24]
// 0089faf5  55                   push ebp
// 0089faf6  51                   push ecx
// 0089faf7  8d542474             lea edx, [esp + 0x74]
// 0089fafb  52                   push edx
// 0089fafc  8d4c247c             lea ecx, [esp + 0x7c]
// 0089fb00  ff1540d89800         call dword ptr [0x98d840]
// 0089fb06  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 0089fb0e  c644245c01           mov byte ptr [esp + 0x5c], 1
// 0089fb13  7414                 je 0x89fb29
// 0089fb15  8d4c246c             lea ecx, [esp + 0x6c]
// 0089fb19  ff1544da9800         call dword ptr [0x98da44]
// 0089fb1f  8d4c246c             lea ecx, [esp + 0x6c]
// 0089fb23  ff1584dc9800         call dword ptr [0x98dc84]
// 0089fb29  6a20                 push 0x20
// 0089fb2b  6a01                 push 1
// 0089fb2d  8d4c2474             lea ecx, [esp + 0x74]
// 0089fb31  ff157cdc9800         call dword ptr [0x98dc7c]
// 0089fb37  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0089fb3a  8b01                 mov eax, dword ptr [ecx]
// 0089fb3c  8b5074               mov edx, dword ptr [eax + 0x74]
// 0089fb3f  ffd2                 call edx
// 0089fb41  85c0                 test eax, eax
// 0089fb43  7433                 je 0x89fb78
// 0089fb45  8b4308               mov eax, dword ptr [ebx + 8]
// 0089fb48  8b4824               mov ecx, dword ptr [eax + 0x24]
// 0089fb4b  e8f038f8ff           call 0x823440
// 0089fb50  85c0                 test eax, eax
// 0089fb52  7424                 je 0x89fb78
// 0089fb54  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 0089fb57  85c9                 test ecx, ecx
// 0089fb59  7414                 je 0x89fb6f
// 0089fb5b  8b5308               mov edx, dword ptr [ebx + 8]
// 0089fb5e  8b4224               mov eax, dword ptr [edx + 0x24]
// 0089fb61  8b8018020000         mov eax, dword ptr [eax + 0x218]
// 0089fb67  85c0                 test eax, eax
// 0089fb69  7404                 je 0x89fb6f
// 0089fb6b  3bc8                 cmp ecx, eax
// 0089fb6d  7409                 je 0x89fb78
// 0089fb6f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089fb73  83c164               add ecx, 0x64
// 0089fb76  eb0a                 jmp 0x89fb82
// 0089fb78  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089fb7c  81c1f4000000         add ecx, 0xf4
// 0089fb82  8b4108               mov eax, dword ptr [ecx + 8]
// 0089fb85  83f8ff               cmp eax, -1
// 0089fb88  7503                 jne 0x89fb8d
// 0089fb8a  8b4104               mov eax, dword ptr [ecx + 4]
// 0089fb8d  8b16                 mov edx, dword ptr [esi]
// 0089fb8f  50                   push eax
// 0089fb90  8b4238               mov eax, dword ptr [edx + 0x38]
// 0089fb93  8bce                 mov ecx, esi
// 0089fb95  ffd0                 call eax
// 0089fb97  8b5608               mov edx, dword ptr [esi + 8]
// 0089fb9a  8d4c241c             lea ecx, [esp + 0x1c]
// 0089fb9e  51                   push ecx
// 0089fb9f  52                   push edx
// 0089fba0  8be8                 mov ebp, eax
// 0089fba2  ff15dcb09800         call dword ptr [0x98b0dc]
// 0089fba8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 0089fbac  8b03                 mov eax, dword ptr [ebx]
// 0089fbae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089fbb2  894720               mov dword ptr [edi + 0x20], eax
// 0089fbb5  8b11                 mov edx, dword ptr [ecx]
// 0089fbb7  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 0089fbbe  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 0089fbc2  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 0089fbc8  50                   push eax
// 0089fbc9  83ec10               sub esp, 0x10
// 0089fbcc  8bc4                 mov eax, esp
// 0089fbce  8908                 mov dword ptr [eax], ecx
// 0089fbd0  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0089fbd7  894804               mov dword ptr [eax + 4], ecx
// 0089fbda  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 0089fbe1  894808               mov dword ptr [eax + 8], ecx
// 0089fbe4  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 0089fbeb  89480c               mov dword ptr [eax + 0xc], ecx
// 0089fbee  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0089fbf2  8d842480000000       lea eax, [esp + 0x80]
// 0089fbf9  50                   push eax
// 0089fbfa  56                   push esi
// 0089fbfb  53                   push ebx
// 0089fbfc  ffd2                 call edx
// 0089fbfe  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0089fc02  89442468             mov dword ptr [esp + 0x68], eax
// 0089fc06  8b442478             mov eax, dword ptr [esp + 0x78]
// 0089fc0a  894724               mov dword ptr [edi + 0x24], eax
// 0089fc0d  8b0b                 mov ecx, dword ptr [ebx]
// 0089fc0f  03d0                 add edx, eax
// 0089fc11  894f28               mov dword ptr [edi + 0x28], ecx
// 0089fc14  89572c               mov dword ptr [edi + 0x2c], edx
// 0089fc17  8b06                 mov eax, dword ptr [esi]
// 0089fc19  8b5038               mov edx, dword ptr [eax + 0x38]
// 0089fc1c  55                   push ebp
// 0089fc1d  8bce                 mov ecx, esi
// 0089fc1f  ffd2                 call edx
// 0089fc21  8d4c246c             lea ecx, [esp + 0x6c]
// 0089fc25  ff15c0de9800         call dword ptr [0x98dec0]
// 0089fc2b  8d4c2470             lea ecx, [esp + 0x70]
// 0089fc2f  ff15c0de9800         call dword ptr [0x98dec0]
// 0089fc35  8b442468             mov eax, dword ptr [esp + 0x68]
// 0089fc39  eb0c                 jmp 0x89fc47
// 0089fc3b  8d4c2470             lea ecx, [esp + 0x70]
// 0089fc3f  ff15c0de9800         call dword ptr [0x98dec0]
// 0089fc45  33c0                 xor eax, eax
// 0089fc47  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0089fc4b  64890d00000000       mov dword ptr fs:[0], ecx
// 0089fc52  59                   pop ecx
// 0089fc53  5f                   pop edi
// 0089fc54  5e                   pop esi
// 0089fc55  5d                   pop ebp
// 0089fc56  5b                   pop ebx
// 0089fc57  83c44c               add esp, 0x4c
// 0089fc5a  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawLink2@CXTPReportPaintManager@@MAEHPAHPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAVCXTPReportHyperlink@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp