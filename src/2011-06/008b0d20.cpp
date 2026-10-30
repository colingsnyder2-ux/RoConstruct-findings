// roc 2011-06 008b0d20  unit: CXTPReportPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b0d20
//
// 008b0d20  6aff                 push -1
// 008b0d22  6822b1a000           push 0xa0b122
// 008b0d27  64a100000000         mov eax, dword ptr fs:[0]
// 008b0d2d  50                   push eax
// 008b0d2e  83ec40               sub esp, 0x40
// 008b0d31  53                   push ebx
// 008b0d32  55                   push ebp
// 008b0d33  56                   push esi
// 008b0d34  57                   push edi
// 008b0d35  a12058c900           mov eax, dword ptr [0xc95820]
// 008b0d3a  33c4                 xor eax, esp
// 008b0d3c  50                   push eax
// 008b0d3d  8d442454             lea eax, [esp + 0x54]
// 008b0d41  64a300000000         mov dword ptr fs:[0], eax
// 008b0d47  894c2414             mov dword ptr [esp + 0x14], ecx
// 008b0d4b  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 008b0d4f  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 008b0d52  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 008b0d55  8d4c2470             lea ecx, [esp + 0x70]
// 008b0d59  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008b0d61  8bf5                 mov esi, ebp
// 008b0d63  ff15a826a400         call dword ptr [0xa426a8]
// 008b0d69  8d0c33               lea ecx, [ebx + esi]
// 008b0d6c  2bc8                 sub ecx, eax
// 008b0d6e  85c9                 test ecx, ecx
// 008b0d70  7e0f                 jle 0x8b0d81
// 008b0d72  2bf1                 sub esi, ecx
// 008b0d74  b800000000           mov eax, 0
// 008b0d79  0f98c0               sets al
// 008b0d7c  48                   dec eax
// 008b0d7d  23c6                 and eax, esi
// 008b0d7f  8be8                 mov ebp, eax
// 008b0d81  85db                 test ebx, ebx
// 008b0d83  0f8c72010000         jl 0x8b0efb
// 008b0d89  8b7730               mov esi, dword ptr [edi + 0x30]
// 008b0d8c  8d4c2470             lea ecx, [esp + 0x70]
// 008b0d90  89742418             mov dword ptr [esp + 0x18], esi
// 008b0d94  ff15a826a400         call dword ptr [0xa426a8]
// 008b0d9a  3bf0                 cmp esi, eax
// 008b0d9c  0f8d59010000         jge 0x8b0efb
// 008b0da2  85ed                 test ebp, ebp
// 008b0da4  0f8e51010000         jle 0x8b0efb
// 008b0daa  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008b0dae  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 008b0db2  8b7324               mov esi, dword ptr [ebx + 0x24]
// 008b0db5  55                   push ebp
// 008b0db6  51                   push ecx
// 008b0db7  8d542474             lea edx, [esp + 0x74]
// 008b0dbb  52                   push edx
// 008b0dbc  8d4c247c             lea ecx, [esp + 0x7c]
// 008b0dc0  ff15e028a400         call dword ptr [0xa428e0]
// 008b0dc6  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 008b0dce  c644245c01           mov byte ptr [esp + 0x5c], 1
// 008b0dd3  7414                 je 0x8b0de9
// 008b0dd5  8d4c246c             lea ecx, [esp + 0x6c]
// 008b0dd9  ff15f029a400         call dword ptr [0xa429f0]
// 008b0ddf  8d4c246c             lea ecx, [esp + 0x6c]
// 008b0de3  ff15a02ca400         call dword ptr [0xa42ca0]
// 008b0de9  6a20                 push 0x20
// 008b0deb  6a01                 push 1
// 008b0ded  8d4c2474             lea ecx, [esp + 0x74]
// 008b0df1  ff15982ca400         call dword ptr [0xa42c98]
// 008b0df7  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008b0dfa  8b01                 mov eax, dword ptr [ecx]
// 008b0dfc  8b5074               mov edx, dword ptr [eax + 0x74]
// 008b0dff  ffd2                 call edx
// 008b0e01  85c0                 test eax, eax
// 008b0e03  7433                 je 0x8b0e38
// 008b0e05  8b4308               mov eax, dword ptr [ebx + 8]
// 008b0e08  8b4824               mov ecx, dword ptr [eax + 0x24]
// 008b0e0b  e82068f8ff           call 0x837630
// 008b0e10  85c0                 test eax, eax
// 008b0e12  7424                 je 0x8b0e38
// 008b0e14  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 008b0e17  85c9                 test ecx, ecx
// 008b0e19  7414                 je 0x8b0e2f
// 008b0e1b  8b5308               mov edx, dword ptr [ebx + 8]
// 008b0e1e  8b4224               mov eax, dword ptr [edx + 0x24]
// 008b0e21  8b8018020000         mov eax, dword ptr [eax + 0x218]
// 008b0e27  85c0                 test eax, eax
// 008b0e29  7404                 je 0x8b0e2f
// 008b0e2b  3bc8                 cmp ecx, eax
// 008b0e2d  7409                 je 0x8b0e38
// 008b0e2f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b0e33  83c164               add ecx, 0x64
// 008b0e36  eb0a                 jmp 0x8b0e42
// 008b0e38  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b0e3c  81c1f4000000         add ecx, 0xf4
// 008b0e42  8b4108               mov eax, dword ptr [ecx + 8]
// 008b0e45  83f8ff               cmp eax, -1
// 008b0e48  7503                 jne 0x8b0e4d
// 008b0e4a  8b4104               mov eax, dword ptr [ecx + 4]
// 008b0e4d  8b16                 mov edx, dword ptr [esi]
// 008b0e4f  50                   push eax
// 008b0e50  8b4238               mov eax, dword ptr [edx + 0x38]
// 008b0e53  8bce                 mov ecx, esi
// 008b0e55  ffd0                 call eax
// 008b0e57  8b5608               mov edx, dword ptr [esi + 8]
// 008b0e5a  8d4c241c             lea ecx, [esp + 0x1c]
// 008b0e5e  51                   push ecx
// 008b0e5f  52                   push edx
// 008b0e60  8be8                 mov ebp, eax
// 008b0e62  ff15d800a400         call dword ptr [0xa400d8]
// 008b0e68  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 008b0e6c  8b03                 mov eax, dword ptr [ebx]
// 008b0e6e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008b0e72  894720               mov dword ptr [edi + 0x20], eax
// 008b0e75  8b11                 mov edx, dword ptr [ecx]
// 008b0e77  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 008b0e7e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 008b0e82  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 008b0e88  50                   push eax
// 008b0e89  83ec10               sub esp, 0x10
// 008b0e8c  8bc4                 mov eax, esp
// 008b0e8e  8908                 mov dword ptr [eax], ecx
// 008b0e90  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 008b0e97  894804               mov dword ptr [eax + 4], ecx
// 008b0e9a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 008b0ea1  894808               mov dword ptr [eax + 8], ecx
// 008b0ea4  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 008b0eab  89480c               mov dword ptr [eax + 0xc], ecx
// 008b0eae  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 008b0eb2  8d842480000000       lea eax, [esp + 0x80]
// 008b0eb9  50                   push eax
// 008b0eba  56                   push esi
// 008b0ebb  53                   push ebx
// 008b0ebc  ffd2                 call edx
// 008b0ebe  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 008b0ec2  89442468             mov dword ptr [esp + 0x68], eax
// 008b0ec6  8b442478             mov eax, dword ptr [esp + 0x78]
// 008b0eca  894724               mov dword ptr [edi + 0x24], eax
// 008b0ecd  8b0b                 mov ecx, dword ptr [ebx]
// 008b0ecf  03d0                 add edx, eax
// 008b0ed1  894f28               mov dword ptr [edi + 0x28], ecx
// 008b0ed4  89572c               mov dword ptr [edi + 0x2c], edx
// 008b0ed7  8b06                 mov eax, dword ptr [esi]
// 008b0ed9  8b5038               mov edx, dword ptr [eax + 0x38]
// 008b0edc  55                   push ebp
// 008b0edd  8bce                 mov ecx, esi
// 008b0edf  ffd2                 call edx
// 008b0ee1  8d4c246c             lea ecx, [esp + 0x6c]
// 008b0ee5  ff15082ea400         call dword ptr [0xa42e08]
// 008b0eeb  8d4c2470             lea ecx, [esp + 0x70]
// 008b0eef  ff15082ea400         call dword ptr [0xa42e08]
// 008b0ef5  8b442468             mov eax, dword ptr [esp + 0x68]
// 008b0ef9  eb0c                 jmp 0x8b0f07
// 008b0efb  8d4c2470             lea ecx, [esp + 0x70]
// 008b0eff  ff15082ea400         call dword ptr [0xa42e08]
// 008b0f05  33c0                 xor eax, eax
// 008b0f07  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 008b0f0b  64890d00000000       mov dword ptr fs:[0], ecx
// 008b0f12  59                   pop ecx
// 008b0f13  5f                   pop edi
// 008b0f14  5e                   pop esi
// 008b0f15  5d                   pop ebp
// 008b0f16  5b                   pop ebx
// 008b0f17  83c44c               add esp, 0x4c
// 008b0f1a  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawLink2@CXTPReportPaintManager@@MAEHPAHPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAVCXTPReportHyperlink@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp