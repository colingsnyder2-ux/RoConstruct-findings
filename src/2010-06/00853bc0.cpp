// roc 2010-06 00853bc0  unit: CXTPReportPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00853bc0
//
// 00853bc0  6aff                 push -1
// 00853bc2  68527f9b00           push 0x9b7f52
// 00853bc7  64a100000000         mov eax, dword ptr fs:[0]
// 00853bcd  50                   push eax
// 00853bce  83ec40               sub esp, 0x40
// 00853bd1  53                   push ebx
// 00853bd2  55                   push ebp
// 00853bd3  56                   push esi
// 00853bd4  57                   push edi
// 00853bd5  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00853bda  33c4                 xor eax, esp
// 00853bdc  50                   push eax
// 00853bdd  8d442454             lea eax, [esp + 0x54]
// 00853be1  64a300000000         mov dword ptr fs:[0], eax
// 00853be7  894c2414             mov dword ptr [esp + 0x14], ecx
// 00853beb  8b7c246c             mov edi, dword ptr [esp + 0x6c]
// 00853bef  8b6f34               mov ebp, dword ptr [edi + 0x34]
// 00853bf2  8b5f30               mov ebx, dword ptr [edi + 0x30]
// 00853bf5  8d4c2470             lea ecx, [esp + 0x70]
// 00853bf9  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 00853c01  8bf5                 mov esi, ebp
// 00853c03  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00853c09  8d0c33               lea ecx, [ebx + esi]
// 00853c0c  2bc8                 sub ecx, eax
// 00853c0e  85c9                 test ecx, ecx
// 00853c10  7e0f                 jle 0x853c21
// 00853c12  2bf1                 sub esi, ecx
// 00853c14  b800000000           mov eax, 0
// 00853c19  0f98c0               sets al
// 00853c1c  48                   dec eax
// 00853c1d  23c6                 and eax, esi
// 00853c1f  8be8                 mov ebp, eax
// 00853c21  85db                 test ebx, ebx
// 00853c23  0f8c72010000         jl 0x853d9b
// 00853c29  8b7730               mov esi, dword ptr [edi + 0x30]
// 00853c2c  8d4c2470             lea ecx, [esp + 0x70]
// 00853c30  89742418             mov dword ptr [esp + 0x18], esi
// 00853c34  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00853c3a  3bf0                 cmp esi, eax
// 00853c3c  0f8d59010000         jge 0x853d9b
// 00853c42  85ed                 test ebp, ebp
// 00853c44  0f8e51010000         jle 0x853d9b
// 00853c4a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00853c4e  8b5c2468             mov ebx, dword ptr [esp + 0x68]
// 00853c52  8b7324               mov esi, dword ptr [ebx + 0x24]
// 00853c55  55                   push ebp
// 00853c56  51                   push ecx
// 00853c57  8d542474             lea edx, [esp + 0x74]
// 00853c5b  52                   push edx
// 00853c5c  8d4c247c             lea ecx, [esp + 0x7c]
// 00853c60  ff153cc89e00         call dword ptr [0x9ec83c]
// 00853c66  83bc248800000000     cmp dword ptr [esp + 0x88], 0
// 00853c6e  c644245c01           mov byte ptr [esp + 0x5c], 1
// 00853c73  7414                 je 0x853c89
// 00853c75  8d4c246c             lea ecx, [esp + 0x6c]
// 00853c79  ff1544ca9e00         call dword ptr [0x9eca44]
// 00853c7f  8d4c246c             lea ecx, [esp + 0x6c]
// 00853c83  ff1584cc9e00         call dword ptr [0x9ecc84]
// 00853c89  6a20                 push 0x20
// 00853c8b  6a01                 push 1
// 00853c8d  8d4c2474             lea ecx, [esp + 0x74]
// 00853c91  ff157ccc9e00         call dword ptr [0x9ecc7c]
// 00853c97  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00853c9a  8b01                 mov eax, dword ptr [ecx]
// 00853c9c  8b5074               mov edx, dword ptr [eax + 0x74]
// 00853c9f  ffd2                 call edx
// 00853ca1  85c0                 test eax, eax
// 00853ca3  7433                 je 0x853cd8
// 00853ca5  8b4308               mov eax, dword ptr [ebx + 8]
// 00853ca8  8b4824               mov ecx, dword ptr [eax + 0x24]
// 00853cab  e8f037f8ff           call 0x7d74a0
// 00853cb0  85c0                 test eax, eax
// 00853cb2  7424                 je 0x853cd8
// 00853cb4  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 00853cb7  85c9                 test ecx, ecx
// 00853cb9  7414                 je 0x853ccf
// 00853cbb  8b5308               mov edx, dword ptr [ebx + 8]
// 00853cbe  8b4224               mov eax, dword ptr [edx + 0x24]
// 00853cc1  8b8018020000         mov eax, dword ptr [eax + 0x218]
// 00853cc7  85c0                 test eax, eax
// 00853cc9  7404                 je 0x853ccf
// 00853ccb  3bc8                 cmp ecx, eax
// 00853ccd  7409                 je 0x853cd8
// 00853ccf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00853cd3  83c164               add ecx, 0x64
// 00853cd6  eb0a                 jmp 0x853ce2
// 00853cd8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00853cdc  81c1f4000000         add ecx, 0xf4
// 00853ce2  8b4108               mov eax, dword ptr [ecx + 8]
// 00853ce5  83f8ff               cmp eax, -1
// 00853ce8  7503                 jne 0x853ced
// 00853cea  8b4104               mov eax, dword ptr [ecx + 4]
// 00853ced  8b16                 mov edx, dword ptr [esi]
// 00853cef  50                   push eax
// 00853cf0  8b4238               mov eax, dword ptr [edx + 0x38]
// 00853cf3  8bce                 mov ecx, esi
// 00853cf5  ffd0                 call eax
// 00853cf7  8b5608               mov edx, dword ptr [esi + 8]
// 00853cfa  8d4c241c             lea ecx, [esp + 0x1c]
// 00853cfe  51                   push ecx
// 00853cff  52                   push edx
// 00853d00  8be8                 mov ebp, eax
// 00853d02  ff1524a19e00         call dword ptr [0x9ea124]
// 00853d08  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 00853d0c  8b03                 mov eax, dword ptr [ebx]
// 00853d0e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00853d12  894720               mov dword ptr [edi + 0x20], eax
// 00853d15  8b11                 mov edx, dword ptr [ecx]
// 00853d17  8b842484000000       mov eax, dword ptr [esp + 0x84]
// 00853d1e  8b4c2474             mov ecx, dword ptr [esp + 0x74]
// 00853d22  8b92d4000000         mov edx, dword ptr [edx + 0xd4]
// 00853d28  50                   push eax
// 00853d29  83ec10               sub esp, 0x10
// 00853d2c  8bc4                 mov eax, esp
// 00853d2e  8908                 mov dword ptr [eax], ecx
// 00853d30  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 00853d37  894804               mov dword ptr [eax + 4], ecx
// 00853d3a  8b8c2490000000       mov ecx, dword ptr [esp + 0x90]
// 00853d41  894808               mov dword ptr [eax + 8], ecx
// 00853d44  8b8c2494000000       mov ecx, dword ptr [esp + 0x94]
// 00853d4b  89480c               mov dword ptr [eax + 0xc], ecx
// 00853d4e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 00853d52  8d842480000000       lea eax, [esp + 0x80]
// 00853d59  50                   push eax
// 00853d5a  56                   push esi
// 00853d5b  53                   push ebx
// 00853d5c  ffd2                 call edx
// 00853d5e  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00853d62  89442468             mov dword ptr [esp + 0x68], eax
// 00853d66  8b442478             mov eax, dword ptr [esp + 0x78]
// 00853d6a  894724               mov dword ptr [edi + 0x24], eax
// 00853d6d  8b0b                 mov ecx, dword ptr [ebx]
// 00853d6f  03d0                 add edx, eax
// 00853d71  894f28               mov dword ptr [edi + 0x28], ecx
// 00853d74  89572c               mov dword ptr [edi + 0x2c], edx
// 00853d77  8b06                 mov eax, dword ptr [esi]
// 00853d79  8b5038               mov edx, dword ptr [eax + 0x38]
// 00853d7c  55                   push ebp
// 00853d7d  8bce                 mov ecx, esi
// 00853d7f  ffd2                 call edx
// 00853d81  8d4c246c             lea ecx, [esp + 0x6c]
// 00853d85  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00853d8b  8d4c2470             lea ecx, [esp + 0x70]
// 00853d8f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00853d95  8b442468             mov eax, dword ptr [esp + 0x68]
// 00853d99  eb0c                 jmp 0x853da7
// 00853d9b  8d4c2470             lea ecx, [esp + 0x70]
// 00853d9f  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 00853da5  33c0                 xor eax, eax
// 00853da7  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 00853dab  64890d00000000       mov dword ptr fs:[0], ecx
// 00853db2  59                   pop ecx
// 00853db3  5f                   pop edi
// 00853db4  5e                   pop esi
// 00853db5  5d                   pop ebp
// 00853db6  5b                   pop ebx
// 00853db7  83c44c               add esp, 0x4c
// 00853dba  c22800               ret 0x28
// copied from an identical function in another client (function ?DrawLink2@CXTPReportPaintManager@@MAEHPAHPAUXTP_REPORTRECORDITEM_DRAWARGS@@PAVCXTPReportHyperlink@@V?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@VCRect@@HH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp