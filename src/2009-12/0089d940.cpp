// roc 2009-12 0089d940  unit: CXTPReportPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0089d940
//
// 0089d940  83ec1c               sub esp, 0x1c
// 0089d943  53                   push ebx
// 0089d944  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 0089d948  8b4308               mov eax, dword ptr [ebx + 8]
// 0089d94b  2b03                 sub eax, dword ptr [ebx]
// 0089d94d  894c2404             mov dword ptr [esp + 4], ecx
// 0089d951  83f801               cmp eax, 1
// 0089d954  7d09                 jge 0x89d95f
// 0089d956  33c0                 xor eax, eax
// 0089d958  5b                   pop ebx
// 0089d959  83c41c               add esp, 0x1c
// 0089d95c  c20c00               ret 0xc
// 0089d95f  55                   push ebp
// 0089d960  56                   push esi
// 0089d961  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0089d965  57                   push edi
// 0089d966  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 0089d96a  8d4c2414             lea ecx, [esp + 0x14]
// 0089d96e  51                   push ecx
// 0089d96f  8bcf                 mov ecx, edi
// 0089d971  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089d977  50                   push eax
// 0089d978  8bcf                 mov ecx, edi
// 0089d97a  ff1580de9800         call dword ptr [0x98de80]
// 0089d980  8b5608               mov edx, dword ptr [esi + 8]
// 0089d983  50                   push eax
// 0089d984  52                   push edx
// 0089d985  ff156cb19800         call dword ptr [0x98b16c]
// 0089d98b  8b4b08               mov ecx, dword ptr [ebx + 8]
// 0089d98e  8b442414             mov eax, dword ptr [esp + 0x14]
// 0089d992  8b1b                 mov ebx, dword ptr [ebx]
// 0089d994  8be9                 mov ebp, ecx
// 0089d996  2beb                 sub ebp, ebx
// 0089d998  99                   cdq 
// 0089d999  f7fd                 idiv ebp
// 0089d99b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0089d99f  8b9580020000         mov edx, dword ptr [ebp + 0x280]
// 0089d9a5  3bc2                 cmp eax, edx
// 0089d9a7  7e0c                 jle 0x89d9b5
// 0089d9a9  5f                   pop edi
// 0089d9aa  5e                   pop esi
// 0089d9ab  5d                   pop ebp
// 0089d9ac  8bc2                 mov eax, edx
// 0089d9ae  5b                   pop ebx
// 0089d9af  83c41c               add esp, 0x1c
// 0089d9b2  c20c00               ret 0xc
// 0089d9b5  33c0                 xor eax, eax
// 0089d9b7  89442420             mov dword ptr [esp + 0x20], eax
// 0089d9bb  89442428             mov dword ptr [esp + 0x28], eax
// 0089d9bf  68100c0000           push 0xc10
// 0089d9c4  8d442420             lea eax, [esp + 0x20]
// 0089d9c8  894c2428             mov dword ptr [esp + 0x28], ecx
// 0089d9cc  895c2420             mov dword ptr [esp + 0x20], ebx
// 0089d9d0  8b1e                 mov ebx, dword ptr [esi]
// 0089d9d2  50                   push eax
// 0089d9d3  8bcf                 mov ecx, edi
// 0089d9d5  ff15b4dd9800         call dword ptr [0x98ddb4]
// 0089d9db  50                   push eax
// 0089d9dc  8bcf                 mov ecx, edi
// 0089d9de  ff1580de9800         call dword ptr [0x98de80]
// 0089d9e4  8b5370               mov edx, dword ptr [ebx + 0x70]
// 0089d9e7  50                   push eax
// 0089d9e8  8bce                 mov ecx, esi
// 0089d9ea  ffd2                 call edx
// 0089d9ec  8b4e08               mov ecx, dword ptr [esi + 8]
// 0089d9ef  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0089d9f3  8b1d6cb19800         mov ebx, dword ptr [0x98b16c]
// 0089d9f9  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 0089d9fd  8d442414             lea eax, [esp + 0x14]
// 0089da01  50                   push eax
// 0089da02  6a01                 push 1
// 0089da04  6868619a00           push 0x9a6168
// 0089da09  51                   push ecx
// 0089da0a  ffd3                 call ebx
// 0089da0c  8bc7                 mov eax, edi
// 0089da0e  99                   cdq 
// 0089da0f  f77c2418             idiv dword ptr [esp + 0x18]
// 0089da13  8b8d80020000         mov ecx, dword ptr [ebp + 0x280]
// 0089da19  3bc1                 cmp eax, ecx
// 0089da1b  7d2b                 jge 0x89da48
// 0089da1d  8b4608               mov eax, dword ptr [esi + 8]
// 0089da20  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0089da24  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 0089da28  8d542414             lea edx, [esp + 0x14]
// 0089da2c  52                   push edx
// 0089da2d  6a01                 push 1
// 0089da2f  6868619a00           push 0x9a6168
// 0089da34  50                   push eax
// 0089da35  ffd3                 call ebx
// 0089da37  8bc7                 mov eax, edi
// 0089da39  5f                   pop edi
// 0089da3a  5e                   pop esi
// 0089da3b  99                   cdq 
// 0089da3c  f77c2410             idiv dword ptr [esp + 0x10]
// 0089da40  5d                   pop ebp
// 0089da41  5b                   pop ebx
// 0089da42  83c41c               add esp, 0x1c
// 0089da45  c20c00               ret 0xc
// 0089da48  5f                   pop edi
// 0089da49  5e                   pop esi
// 0089da4a  5d                   pop ebp
// 0089da4b  8bc1                 mov eax, ecx
// 0089da4d  5b                   pop ebx
// 0089da4e  83c41c               add esp, 0x1c
// 0089da51  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPreviewLinesCount@CXTPReportPaintManager@@QAEHPAVCDC@@AAVCRect@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/ReportControl/XTPReportPaintManager.cpp