// roc 2012-06 00a27080  unit: CXTPReportPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a27080
//
// 00a27080  83ec1c               sub esp, 0x1c
// 00a27083  53                   push ebx
// 00a27084  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 00a27088  8b4308               mov eax, dword ptr [ebx + 8]
// 00a2708b  2b03                 sub eax, dword ptr [ebx]
// 00a2708d  894c2404             mov dword ptr [esp + 4], ecx
// 00a27091  83f801               cmp eax, 1
// 00a27094  7d09                 jge 0xa2709f
// 00a27096  33c0                 xor eax, eax
// 00a27098  5b                   pop ebx
// 00a27099  83c41c               add esp, 0x1c
// 00a2709c  c20c00               ret 0xc
// 00a2709f  55                   push ebp
// 00a270a0  56                   push esi
// 00a270a1  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00a270a5  57                   push edi
// 00a270a6  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 00a270aa  8d4c2414             lea ecx, [esp + 0x14]
// 00a270ae  51                   push ecx
// 00a270af  8bcf                 mov ecx, edi
// 00a270b1  ff155846b200         call dword ptr [0xb24658]
// 00a270b7  50                   push eax
// 00a270b8  8bcf                 mov ecx, edi
// 00a270ba  ff159847b200         call dword ptr [0xb24798]
// 00a270c0  8b5608               mov edx, dword ptr [esi + 8]
// 00a270c3  50                   push eax
// 00a270c4  52                   push edx
// 00a270c5  ff154021b200         call dword ptr [0xb22140]
// 00a270cb  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00a270ce  8b442414             mov eax, dword ptr [esp + 0x14]
// 00a270d2  8b1b                 mov ebx, dword ptr [ebx]
// 00a270d4  8be9                 mov ebp, ecx
// 00a270d6  2beb                 sub ebp, ebx
// 00a270d8  99                   cdq 
// 00a270d9  f7fd                 idiv ebp
// 00a270db  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00a270df  8b9580020000         mov edx, dword ptr [ebp + 0x280]
// 00a270e5  3bc2                 cmp eax, edx
// 00a270e7  7e0c                 jle 0xa270f5
// 00a270e9  5f                   pop edi
// 00a270ea  5e                   pop esi
// 00a270eb  5d                   pop ebp
// 00a270ec  8bc2                 mov eax, edx
// 00a270ee  5b                   pop ebx
// 00a270ef  83c41c               add esp, 0x1c
// 00a270f2  c20c00               ret 0xc
// 00a270f5  33c0                 xor eax, eax
// 00a270f7  89442420             mov dword ptr [esp + 0x20], eax
// 00a270fb  89442428             mov dword ptr [esp + 0x28], eax
// 00a270ff  68100c0000           push 0xc10
// 00a27104  8d442420             lea eax, [esp + 0x20]
// 00a27108  894c2428             mov dword ptr [esp + 0x28], ecx
// 00a2710c  895c2420             mov dword ptr [esp + 0x20], ebx
// 00a27110  8b1e                 mov ebx, dword ptr [esi]
// 00a27112  50                   push eax
// 00a27113  8bcf                 mov ecx, edi
// 00a27115  ff155846b200         call dword ptr [0xb24658]
// 00a2711b  50                   push eax
// 00a2711c  8bcf                 mov ecx, edi
// 00a2711e  ff159847b200         call dword ptr [0xb24798]
// 00a27124  8b5370               mov edx, dword ptr [ebx + 0x70]
// 00a27127  50                   push eax
// 00a27128  8bce                 mov ecx, esi
// 00a2712a  ffd2                 call edx
// 00a2712c  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a2712f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a27133  8b1d4021b200         mov ebx, dword ptr [0xb22140]
// 00a27139  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 00a2713d  8d442414             lea eax, [esp + 0x14]
// 00a27141  50                   push eax
// 00a27142  6a01                 push 1
// 00a27144  68ecf3b400           push 0xb4f3ec
// 00a27149  51                   push ecx
// 00a2714a  ffd3                 call ebx
// 00a2714c  8bc7                 mov eax, edi
// 00a2714e  99                   cdq 
// 00a2714f  f77c2418             idiv dword ptr [esp + 0x18]
// 00a27153  8b8d80020000         mov ecx, dword ptr [ebp + 0x280]
// 00a27159  3bc1                 cmp eax, ecx
// 00a2715b  7d2b                 jge 0xa27188
// 00a2715d  8b4608               mov eax, dword ptr [esi + 8]
// 00a27160  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00a27164  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 00a27168  8d542414             lea edx, [esp + 0x14]
// 00a2716c  52                   push edx
// 00a2716d  6a01                 push 1
// 00a2716f  68ecf3b400           push 0xb4f3ec
// 00a27174  50                   push eax
// 00a27175  ffd3                 call ebx
// 00a27177  8bc7                 mov eax, edi
// 00a27179  5f                   pop edi
// 00a2717a  5e                   pop esi
// 00a2717b  99                   cdq 
// 00a2717c  f77c2410             idiv dword ptr [esp + 0x10]
// 00a27180  5d                   pop ebp
// 00a27181  5b                   pop ebx
// 00a27182  83c41c               add esp, 0x1c
// 00a27185  c20c00               ret 0xc
// 00a27188  5f                   pop edi
// 00a27189  5e                   pop esi
// 00a2718a  5d                   pop ebp
// 00a2718b  8bc1                 mov eax, ecx
// 00a2718d  5b                   pop ebx
// 00a2718e  83c41c               add esp, 0x1c
// 00a27191  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPreviewLinesCount@CXTPReportPaintManager@@QAEHPAVCDC@@AAVCRect@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp