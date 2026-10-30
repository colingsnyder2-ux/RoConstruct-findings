// roc 2009-06 007c4c60  unit: CXTPReportPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c4c60
//
// 007c4c60  6aff                 push -1
// 007c4c62  6832de8700           push 0x87de32
// 007c4c67  64a100000000         mov eax, dword ptr fs:[0]
// 007c4c6d  50                   push eax
// 007c4c6e  83ec40               sub esp, 0x40
// 007c4c71  53                   push ebx
// 007c4c72  55                   push ebp
// 007c4c73  56                   push esi
// 007c4c74  57                   push edi
// 007c4c75  a1304fa200           mov eax, dword ptr [0xa24f30]
// 007c4c7a  33c4                 xor eax, esp
// 007c4c7c  50                   push eax
// 007c4c7d  8d442454             lea eax, [esp + 0x54]
// 007c4c81  64a300000000         mov dword ptr fs:[0], eax
// 007c4c87  894c2414             mov dword ptr [esp + 0x14], ecx
// 007c4c8b  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 007c4c8f  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 007c4c92  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 007c4c95  8d4c2470             lea ecx, [esp + 0x70]
// 007c4c99  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 007c4ca1  8bf5                 mov esi, ebp
// 007c4ca3  ff1554fb8900         call dword ptr [0x89fb54]
// 007c4ca9  8d0c33               lea ecx, [ebx + esi]
// 007c4cac  2bc8                 sub ecx, eax
// 007c4cae  85c9                 test ecx, ecx
// 007c4cb0  7e0f                 jle 0x7c4cc1
// 007c4cb2  2bf1                 sub esi, ecx
// 007c4cb4  b800000000           mov eax, 0
// 007c4cb9  0f98c0               sets al
// 007c4cbc  48                   dec eax
// 007c4cbd  23c6                 and eax, esi
// 007c4cbf  8be8                 mov ebp, eax
// 007c4cc1  85db                 test ebx, ebx
// 007c4cc3  0f8c72010000         jl 0x7c4e3b
// 007c4cc9  8b7730               mov esi, dword ptr [edi + 0x30]
// 007c4ccc  8d4c2470             lea ecx, [esp + 0x70]
// 007c4cd0  89742418             mov dword ptr [esp + 0x18], esi
// 007c4cd4  ff1554fb8900         call dword ptr [0x89fb54]
// 007c4cda  3bf0                 cmp esi, eax
// 007c4cdc  0f8d59010000         jge 0x7c4e3b
// 007c4ce2  85ed                 test ebp, ebp
// 007c4ce4  0f8e51010000         jle 0x7c4e3b
// 007c4cea  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007c4cee  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 007c4cf2  8b7324               mov esi, dword ptr [ebx + 0x24]
// 007c4cf5  55                   push ebp
// 007c4cf6  51                   push ecx
// 007c4cf7  8d542474             lea edx, [esp + 0x74]
// 007c4cfb  52                   push edx
// 007c4cfc  8d4c247c             lea ecx, [esp + 0x7c]
// 007c4d00  ff157cfe8900         call dword ptr [0x89fe7c]
// 007c4d06  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 007c4d0e  c644245c01           mov byte ptr [esp + 0x5c], 1
// 007c4d13  7414                 je 0x7c4d29
// 007c4d15  8d4c246c             lea ecx, [esp + 0x6c]
// 007c4d19  ff1588f98900         call dword ptr [0x89f988]
// 007c4d1f  8d4c246c             lea ecx, [esp + 0x6c]
// 007c4d23  ff1548f78900         call dword ptr [0x89f748]
// 007c4d29  6a20                 push 0x20
// 007c4d2b  6a01                 push 1
// 007c4d2d  8d4c2474             lea ecx, [esp + 0x74]
// 007c4d31  ff1550f78900         call dword ptr [0x89f750]
// 007c4d37  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007c4d3a  8b01                 mov eax, dword ptr [ecx]
// 007c4d3c  8b5074               mov edx, dword ptr [eax + 0x74]
// 007c4d3f  ffd2                 call edx
// 007c4d41  85c0                 test eax, eax
// 007c4d43  7433                 je 0x7c4d78
// 007c4d45  8b4308               mov eax, dword ptr [ebx + 8]
// 007c4d48  8b4824               mov ecx, dword ptr [eax + 0x24]
// 007c4d4b  e8e038f8ff           call 0x748630
// 007c4d50  85c0                 test eax, eax
// 007c4d52  7424                 je 0x7c4d78
// 007c4d54  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 007c4d57  85c9                 test ecx, ecx
// 007c4d59  7414                 je 0x7c4d6f
// 007c4d5b  8b5308               mov edx, dword ptr [ebx + 8]
// 007c4d5e  8b4224               mov eax, dword ptr [edx + 0x24]
// 007c4d61  8b8018020000         mov eax, dword ptr [eax + 0x218]
// 007c4d67  85c0                 test eax, eax
// 007c4d69  7404                 je 0x7c4d6f
// 007c4d6b  3bc8                 cmp ecx, eax
// 007c4d6d  7409                 je 0x7c4d78
// 007c4d6f  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c4d73  83c164               add ecx, 0x64
// 007c4d76  eb0a                 jmp 0x7c4d82
// 007c4d78  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c4d7c  81c1f4000000         add ecx, 0xf4
// 007c4d82  8b4108               mov eax, dword ptr [ecx + 8]
// 007c4d85  83f8ff               cmp eax, -1
// 007c4d88  7503                 jne 0x7c4d8d
// 007c4d8a  8b4104               mov eax, dword ptr [ecx + 4]
// 007c4d8d  8b16                 mov edx, dword ptr [esi]
// 007c4d8f  50                   push eax
// 007c4d90  8b4238               mov eax, dword ptr [edx + 0x38]
// 007c4d93  8bce                 mov ecx, esi
// 007c4d95  ffd0                 call eax
// 007c4d97  8b5608               mov edx, dword ptr [esi + 8]
// 007c4d9a  8d4c241c             lea ecx, [esp + 0x1c]
// 007c4d9e  51                   push ecx
// 007c4d9f  52                   push edx
// 007c4da0  8be8                 mov ebp, eax
// 007c4da2  ff1598e08900         call dword ptr [0x89e098]
// 007c4da8  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 007c4dac  8b03                 mov eax, dword ptr [ebx]
// 007c4dae  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007c4db2  894720               mov dword ptr [edi + 0x20], eax
// 007c4db5  8b11                 mov edx, dword ptr [ecx]
// 007c4db7  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 007c4dbe  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 007c4dc2  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 007c4dc8  50                   push eax
// 007c4dc9  83ec10               sub esp, 0x10
// 007c4dcc  8bc4                 mov eax, esp
// 007c4dce  8908                 mov dword ptr [eax], ecx
// 007c4dd0  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 007c4dd7  894804               mov dword ptr [eax + 4], ecx
// 007c4dda  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 007c4de1  894808               mov dword ptr [eax + 8], ecx
// 007c4de4  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 007c4deb  89480c               mov dword ptr [eax + 0xc], ecx
// 007c4dee  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 007c4df2  8d842480000000       lea eax, [esp + 0x80]
// 007c4df9  50                   push eax
// 007c4dfa  56                   push esi
// 007c4dfb  53                   push ebx
// 007c4dfc  ffd2                 call edx
// 007c4dfe  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 007c4e02  89442468             mov dword ptr [esp + 0x68], eax
// 007c4e06  8b442478             mov eax, dword ptr [esp + 0x78]
// 007c4e0a  894724               mov dword ptr [edi + 0x24], eax
// 007c4e0d  8b0b                 mov ecx, dword ptr [ebx]
// 007c4e0f  03d0                 add edx, eax
// 007c4e11  894f28               mov dword ptr [edi + 0x28], ecx
// 007c4e14  89572c               mov dword ptr [edi + 0x2c], edx
// 007c4e17  8b06                 mov eax, dword ptr [esi]
// 007c4e19  8b5038               mov edx, dword ptr [eax + 0x38]
// 007c4e1c  55                   push ebp
// 007c4e1d  8bce                 mov ecx, esi
// 007c4e1f  ffd2                 call edx
// 007c4e21  8d4c246c             lea ecx, [esp + 0x6c]
// 007c4e25  ff1510fd8900         call dword ptr [0x89fd10]
// 007c4e2b  8d4c2470             lea ecx, [esp + 0x70]
// 007c4e2f  ff1510fd8900         call dword ptr [0x89fd10]
// 007c4e35  8b442468             mov eax, dword ptr [esp + 0x68]
// 007c4e39  eb0c                 jmp 0x7c4e47
// 007c4e3b  8d4c2470             lea ecx, [esp + 0x70]
// 007c4e3f  ff1510fd8900         call dword ptr [0x89fd10]
// 007c4e45  33c0                 xor eax, eax
// 007c4e47  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 007c4e4b  64890d00000000       mov dword ptr fs:[0], ecx
// 007c4e52  59                   pop ecx
// 007c4e53  5f                   pop edi
// 007c4e54  5e                   pop esi
// 007c4e55  5d                   pop ebp
// 007c4e56  5b                   pop ebx
// 007c4e57  83c44c               add esp, 0x4c
// 007c4e5a  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawLink2@CXTPReportPaintManager@@MAEHPAHPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAVCXTPReportHyperlink@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp