// roc 2011-06 008aec00  unit: CXTPReportPaintManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008aec00
//
// 008aec00  83ec1c               sub esp, 0x1c
// 008aec03  53                   push ebx
// 008aec04  8b5c2428             mov ebx, dword ptr [esp + 0x28]
// 008aec08  8b4308               mov eax, dword ptr [ebx + 8]
// 008aec0b  2b03                 sub eax, dword ptr [ebx]
// 008aec0d  894c2404             mov dword ptr [esp + 4], ecx
// 008aec11  83f801               cmp eax, 1
// 008aec14  7d09                 jge 0x8aec1f
// 008aec16  33c0                 xor eax, eax
// 008aec18  5b                   pop ebx
// 008aec19  83c41c               add esp, 0x1c
// 008aec1c  c20c00               ret 0xc
// 008aec1f  55                   push ebp
// 008aec20  56                   push esi
// 008aec21  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008aec25  57                   push edi
// 008aec26  8b7c2438             mov edi, dword ptr [esp + 0x38]
// 008aec2a  8d4c2414             lea ecx, [esp + 0x14]
// 008aec2e  51                   push ecx
// 008aec2f  8bcf                 mov ecx, edi
// 008aec31  ff15a826a400         call dword ptr [0xa426a8]
// 008aec37  50                   push eax
// 008aec38  8bcf                 mov ecx, edi
// 008aec3a  ff15c82da400         call dword ptr [0xa42dc8]
// 008aec40  8b5608               mov edx, dword ptr [esi + 8]
// 008aec43  50                   push eax
// 008aec44  52                   push edx
// 008aec45  ff153801a400         call dword ptr [0xa40138]
// 008aec4b  8b4b08               mov ecx, dword ptr [ebx + 8]
// 008aec4e  8b442414             mov eax, dword ptr [esp + 0x14]
// 008aec52  8b1b                 mov ebx, dword ptr [ebx]
// 008aec54  8be9                 mov ebp, ecx
// 008aec56  2beb                 sub ebp, ebx
// 008aec58  99                   cdq 
// 008aec59  f7fd                 idiv ebp
// 008aec5b  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 008aec5f  8b9580020000         mov edx, dword ptr [ebp + 0x280]
// 008aec65  3bc2                 cmp eax, edx
// 008aec67  7e0c                 jle 0x8aec75
// 008aec69  5f                   pop edi
// 008aec6a  5e                   pop esi
// 008aec6b  5d                   pop ebp
// 008aec6c  8bc2                 mov eax, edx
// 008aec6e  5b                   pop ebx
// 008aec6f  83c41c               add esp, 0x1c
// 008aec72  c20c00               ret 0xc
// 008aec75  33c0                 xor eax, eax
// 008aec77  89442420             mov dword ptr [esp + 0x20], eax
// 008aec7b  89442428             mov dword ptr [esp + 0x28], eax
// 008aec7f  68100c0000           push 0xc10
// 008aec84  8d442420             lea eax, [esp + 0x20]
// 008aec88  894c2428             mov dword ptr [esp + 0x28], ecx
// 008aec8c  895c2420             mov dword ptr [esp + 0x20], ebx
// 008aec90  8b1e                 mov ebx, dword ptr [esi]
// 008aec92  50                   push eax
// 008aec93  8bcf                 mov ecx, edi
// 008aec95  ff15a826a400         call dword ptr [0xa426a8]
// 008aec9b  50                   push eax
// 008aec9c  8bcf                 mov ecx, edi
// 008aec9e  ff15c82da400         call dword ptr [0xa42dc8]
// 008aeca4  8b5370               mov edx, dword ptr [ebx + 0x70]
// 008aeca7  50                   push eax
// 008aeca8  8bce                 mov ecx, esi
// 008aecaa  ffd2                 call edx
// 008aecac  8b4e08               mov ecx, dword ptr [esi + 8]
// 008aecaf  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008aecb3  8b1d3801a400         mov ebx, dword ptr [0xa40138]
// 008aecb9  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 008aecbd  8d442414             lea eax, [esp + 0x14]
// 008aecc1  50                   push eax
// 008aecc2  6a01                 push 1
// 008aecc4  686056a600           push 0xa65660
// 008aecc9  51                   push ecx
// 008aecca  ffd3                 call ebx
// 008aeccc  8bc7                 mov eax, edi
// 008aecce  99                   cdq 
// 008aeccf  f77c2418             idiv dword ptr [esp + 0x18]
// 008aecd3  8b8d80020000         mov ecx, dword ptr [ebp + 0x280]
// 008aecd9  3bc1                 cmp eax, ecx
// 008aecdb  7d2b                 jge 0x8aed08
// 008aecdd  8b4608               mov eax, dword ptr [esi + 8]
// 008aece0  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008aece4  2b7c2420             sub edi, dword ptr [esp + 0x20]
// 008aece8  8d542414             lea edx, [esp + 0x14]
// 008aecec  52                   push edx
// 008aeced  6a01                 push 1
// 008aecef  686056a600           push 0xa65660
// 008aecf4  50                   push eax
// 008aecf5  ffd3                 call ebx
// 008aecf7  8bc7                 mov eax, edi
// 008aecf9  5f                   pop edi
// 008aecfa  5e                   pop esi
// 008aecfb  99                   cdq 
// 008aecfc  f77c2410             idiv dword ptr [esp + 0x10]
// 008aed00  5d                   pop ebp
// 008aed01  5b                   pop ebx
// 008aed02  83c41c               add esp, 0x1c
// 008aed05  c20c00               ret 0xc
// 008aed08  5f                   pop edi
// 008aed09  5e                   pop esi
// 008aed0a  5d                   pop ebp
// 008aed0b  8bc1                 mov eax, ecx
// 008aed0d  5b                   pop ebx
// 008aed0e  83c41c               add esp, 0x1c
// 008aed11  c20c00               ret 0xc
// copied from an identical function in another client (function ?GetPreviewLinesCount@CXTPReportPaintManager@@QAEHPAVCDC@@AAVCRect@@ABV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\ReportControl\XTPReportPaintManager.cpp