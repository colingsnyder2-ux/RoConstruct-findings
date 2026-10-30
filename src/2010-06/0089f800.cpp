// roc 2010-06 0089f800  unit: PAVCXTPRibbonTabContextHeader::?$CArray  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f800
//
// 0089f800  53                   push ebx
// 0089f801  56                   push esi
// 0089f802  57                   push edi
// 0089f803  8bf9                 mov edi, ecx
// 0089f805  33f6                 xor esi, esi
// 0089f807  e854fcffff           call 0x89f460
// 0089f80c  85c0                 test eax, eax
// 0089f80e  7e31                 jle 0x89f841
// 0089f810  85f6                 test esi, esi
// 0089f812  7c3c                 jl 0x89f850
// 0089f814  3b7708               cmp esi, dword ptr [edi + 8]
// 0089f817  7d37                 jge 0x89f850
// 0089f819  8b4704               mov eax, dword ptr [edi + 4]
// 0089f81c  8b1cb0               mov ebx, dword ptr [eax + esi*4]
// 0089f81f  85db                 test ebx, ebx
// 0089f821  7412                 je 0x89f835
// 0089f823  8d4b08               lea ecx, [ebx + 8]
// 0089f826  ff15f0ce9e00         call dword ptr [0x9ecef0]
// 0089f82c  53                   push ebx
// 0089f82d  e86881f0ff           call 0x7a799a
// 0089f832  83c404               add esp, 4
// 0089f835  8bcf                 mov ecx, edi
// 0089f837  46                   inc esi
// 0089f838  e823fcffff           call 0x89f460
// 0089f83d  3bf0                 cmp esi, eax
// 0089f83f  7ccf                 jl 0x89f810
// 0089f841  6aff                 push -1
// 0089f843  6a00                 push 0
// 0089f845  8bcf                 mov ecx, edi
// 0089f847  e8b41af4ff           call 0x7e1300
// 0089f84c  5f                   pop edi
// 0089f84d  5e                   pop esi
// 0089f84e  5b                   pop ebx
// 0089f84f  c3                   ret 
// 0089f850  e8f783f0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?RemoveAll@CXTPRibbonTabContextHeaders@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp