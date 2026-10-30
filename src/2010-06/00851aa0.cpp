// roc 2010-06 00851aa0  unit: CXTPReportPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00851aa0
//
// 00851aa0  83ec1c               sub esp, 0x1c
// 00851aa3  53                   push ebx
// 00851aa4  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00851aa8  8b4308               mov eax, dword ptr [ebx + 8]
// 00851aab  2b03                 sub eax, dword ptr [ebx]
// 00851aad  894c2404             mov dword ptr [esp + 4], ecx
// 00851ab1  83f801               cmp eax, 1
// 00851ab4  7d09                 jge 0x851abf
// 00851ab6  33c0                 xor eax, eax
// 00851ab8  5b                   pop ebx
// 00851ab9  83c41c               add esp, 0x1c
// 00851abc  c20c00               ret 0xc
// 00851abf  55                   push ebp
// 00851ac0  56                   push esi
// 00851ac1  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00851ac5  57                   push edi
// 00851ac6  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00851aca  8d4c2414             lea ecx, [esp + 0x14]
// 00851ace  51                   push ecx
// 00851acf  8bcf                 mov ecx, edi
// 00851ad1  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00851ad7  50                   push eax
// 00851ad8  8bcf                 mov ecx, edi
// 00851ada  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00851ae0  8b5608               mov edx, dword ptr [esi + 8]
// 00851ae3  50                   push eax
// 00851ae4  52                   push edx
// 00851ae5  ff1594a19e00         call dword ptr [0x9ea194]
// 00851aeb  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00851aee  8b442414             mov eax, dword ptr [esp + 0x14]
// 00851af2  8b1b                 mov ebx, dword ptr [ebx]
// 00851af4  8be9                 mov ebp, ecx
// 00851af6  2beb                 sub ebp, ebx
// 00851af8  99                   cdq 
// 00851af9  f7fd                 idiv ebp
// 00851afb  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00851aff  8b9580020000         mov edx, dword ptr [ebp + 0x280]
// 00851b05  3bc2                 cmp eax, edx
// 00851b07  7e0c                 jle 0x851b15
// 00851b09  5f                   pop edi
// 00851b0a  5e                   pop esi
// 00851b0b  5d                   pop ebp
// 00851b0c  8bc2                 mov eax, edx
// 00851b0e  5b                   pop ebx
// 00851b0f  83c41c               add esp, 0x1c
// 00851b12  c20c00               ret 0xc
// 00851b15  33c0                 xor eax, eax
// 00851b17  89442420             mov dword ptr [esp + 0x20], eax
// 00851b1b  89442428             mov dword ptr [esp + 0x28], eax
// 00851b1f  68100c0000           push 0xc10
// 00851b24  8d442420             lea eax, [esp + 0x20]
// 00851b28  894c2428             mov dword ptr [esp + 0x28], ecx
// 00851b2c  895c2420             mov dword ptr [esp + 0x20], ebx
// 00851b30  8b1e                 mov ebx, dword ptr [esi]
// 00851b32  50                   push eax
// 00851b33  8bcf                 mov ecx, edi
// 00851b35  ff15e4cd9e00         call dword ptr [0x9ecde4]
// 00851b3b  50                   push eax
// 00851b3c  8bcf                 mov ecx, edi
// 00851b3e  ff15b0ce9e00         call dword ptr [0x9eceb0]
// 00851b44  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00851b47  50                   push eax
// 00851b48  8bce                 mov ecx, esi
// 00851b4a  ffd2                 call edx
// 00851b4c  8b4e08               mov ecx, dword ptr [esi + 8]
// 00851b4f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00851b53  8b1d94a19e00         mov ebx, dword ptr [0x9ea194]
// 00851b59  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 00851b5d  8d442414             lea eax, [esp + 0x14]
// 00851b61  50                   push eax
// 00851b62  6a01                 push 1
// 00851b64  68e86ea000           push 0xa06ee8
// 00851b69  51                   push ecx
// 00851b6a  ffd3                 call ebx
// 00851b6c  8bc7                 mov eax, edi
// 00851b6e  99                   cdq 
// 00851b6f  f77c2418             idiv dword ptr [esp + 0x18]
// 00851b73  8b8d80020000         mov ecx, dword ptr [ebp + 0x280]
// 00851b79  3bc1                 cmp eax, ecx
// 00851b7b  7d2b                 jge 0x851ba8
// 00851b7d  8b4608               mov eax, dword ptr [esi + 8]
// 00851b80  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00851b84  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 00851b88  8d542414             lea edx, [esp + 0x14]
// 00851b8c  52                   push edx
// 00851b8d  6a01                 push 1
// 00851b8f  68e86ea000           push 0xa06ee8
// 00851b94  50                   push eax
// 00851b95  ffd3                 call ebx
// 00851b97  8bc7                 mov eax, edi
// 00851b99  5f                   pop edi
// 00851b9a  5e                   pop esi
// 00851b9b  99                   cdq 
// 00851b9c  f77c2410             idiv dword ptr [esp + 0x10]
// 00851ba0  5d                   pop ebp
// 00851ba1  5b                   pop ebx
// 00851ba2  83c41c               add esp, 0x1c
// 00851ba5  c20c00               ret 0xc
// 00851ba8  5f                   pop edi
// 00851ba9  5e                   pop esi
// 00851baa  5d                   pop ebp
// 00851bab  8bc1                 mov eax, ecx
// 00851bad  5b                   pop ebx
// 00851bae  83c41c               add esp, 0x1c
// 00851bb1  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPreviewLinesCount@CXTPReportPaintManager@@QAEHPAVCDC@@AAVCRect@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp