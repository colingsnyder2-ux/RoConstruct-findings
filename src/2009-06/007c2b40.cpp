// roc 2009-06 007c2b40  unit: CXTPReportPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007c2b40
//
// 007c2b40  83ec1c               sub esp, 0x1c
// 007c2b43  53                   push ebx
// 007c2b44  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 007c2b48  8b4308               mov eax, dword ptr [ebx + 8]
// 007c2b4b  2b03                 sub eax, dword ptr [ebx]
// 007c2b4d  894c2404             mov dword ptr [esp + 4], ecx
// 007c2b51  83f801               cmp eax, 1
// 007c2b54  7d09                 jge 0x7c2b5f
// 007c2b56  33c0                 xor eax, eax
// 007c2b58  5b                   pop ebx
// 007c2b59  83c41c               add esp, 0x1c
// 007c2b5c  c20c00               ret 0xc
// 007c2b5f  55                   push ebp
// 007c2b60  56                   push esi
// 007c2b61  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 007c2b65  57                   push edi
// 007c2b66  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 007c2b6a  8d4c2414             lea ecx, [esp + 0x14]
// 007c2b6e  51                   push ecx
// 007c2b6f  8bcf                 mov ecx, edi
// 007c2b71  ff1554fb8900         call dword ptr [0x89fb54]
// 007c2b77  50                   push eax
// 007c2b78  8bcf                 mov ecx, edi
// 007c2b7a  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c2b80  8b5608               mov edx, dword ptr [esi + 8]
// 007c2b83  50                   push eax
// 007c2b84  52                   push edx
// 007c2b85  ff1550e18900         call dword ptr [0x89e150]
// 007c2b8b  8b4b08               mov ecx, dword ptr [ebx + 8]
// 007c2b8e  8b442414             mov eax, dword ptr [esp + 0x14]
// 007c2b92  8b1b                 mov ebx, dword ptr [ebx]
// 007c2b94  8be9                 mov ebp, ecx
// 007c2b96  2beb                 sub ebp, ebx
// 007c2b98  99                   cdq 
// 007c2b99  f7fd                 idiv ebp
// 007c2b9b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 007c2b9f  8b9580020000         mov edx, dword ptr [ebp + 0x280]
// 007c2ba5  3bc2                 cmp eax, edx
// 007c2ba7  7e0c                 jle 0x7c2bb5
// 007c2ba9  5f                   pop edi
// 007c2baa  5e                   pop esi
// 007c2bab  5d                   pop ebp
// 007c2bac  8bc2                 mov eax, edx
// 007c2bae  5b                   pop ebx
// 007c2baf  83c41c               add esp, 0x1c
// 007c2bb2  c20c00               ret 0xc
// 007c2bb5  33c0                 xor eax, eax
// 007c2bb7  89442420             mov dword ptr [esp + 0x20], eax
// 007c2bbb  89442428             mov dword ptr [esp + 0x28], eax
// 007c2bbf  68100c0000           push 0xc10
// 007c2bc4  8d442420             lea eax, [esp + 0x20]
// 007c2bc8  894c2428             mov dword ptr [esp + 0x28], ecx
// 007c2bcc  895c2420             mov dword ptr [esp + 0x20], ebx
// 007c2bd0  8b1e                 mov ebx, dword ptr [esi]
// 007c2bd2  50                   push eax
// 007c2bd3  8bcf                 mov ecx, edi
// 007c2bd5  ff1554fb8900         call dword ptr [0x89fb54]
// 007c2bdb  50                   push eax
// 007c2bdc  8bcf                 mov ecx, edi
// 007c2bde  ff15d0fc8900         call dword ptr [0x89fcd0]
// 007c2be4  8b5370               mov edx, dword ptr [ebx + 0x70]
// 007c2be7  50                   push eax
// 007c2be8  8bce                 mov ecx, esi
// 007c2bea  ffd2                 call edx
// 007c2bec  8b4e08               mov ecx, dword ptr [esi + 8]
// 007c2bef  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007c2bf3  8b1d50e18900         mov ebx, dword ptr [0x89e150]
// 007c2bf9  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 007c2bfd  8d442414             lea eax, [esp + 0x14]
// 007c2c01  50                   push eax
// 007c2c02  6a01                 push 1
// 007c2c04  68f8338b00           push 0x8b33f8
// 007c2c09  51                   push ecx
// 007c2c0a  ffd3                 call ebx
// 007c2c0c  8bc7                 mov eax, edi
// 007c2c0e  99                   cdq 
// 007c2c0f  f77c2418             idiv dword ptr [esp + 0x18]
// 007c2c13  8b8d80020000         mov ecx, dword ptr [ebp + 0x280]
// 007c2c19  3bc1                 cmp eax, ecx
// 007c2c1b  7d2b                 jge 0x7c2c48
// 007c2c1d  8b4608               mov eax, dword ptr [esi + 8]
// 007c2c20  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 007c2c24  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 007c2c28  8d542414             lea edx, [esp + 0x14]
// 007c2c2c  52                   push edx
// 007c2c2d  6a01                 push 1
// 007c2c2f  68f8338b00           push 0x8b33f8
// 007c2c34  50                   push eax
// 007c2c35  ffd3                 call ebx
// 007c2c37  8bc7                 mov eax, edi
// 007c2c39  5f                   pop edi
// 007c2c3a  5e                   pop esi
// 007c2c3b  99                   cdq 
// 007c2c3c  f77c2410             idiv dword ptr [esp + 0x10]
// 007c2c40  5d                   pop ebp
// 007c2c41  5b                   pop ebx
// 007c2c42  83c41c               add esp, 0x1c
// 007c2c45  c20c00               ret 0xc
// 007c2c48  5f                   pop edi
// 007c2c49  5e                   pop esi
// 007c2c4a  5d                   pop ebp
// 007c2c4b  8bc1                 mov eax, ecx
// 007c2c4d  5b                   pop ebx
// 007c2c4e  83c41c               add esp, 0x1c
// 007c2c51  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPreviewLinesCount@CXTPReportPaintManager@@QAEHPAVCDC@@AAVCRect@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp