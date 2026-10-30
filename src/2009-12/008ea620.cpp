// roc 2009-12 008ea620  unit: CXTPRibbonTab  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ea620
//
// 008ea620  53                   push ebx
// 008ea621  56                   push esi
// 008ea622  57                   push edi
// 008ea623  8bf9                 mov edi, ecx
// 008ea625  33f6                 xor esi, esi
// 008ea627  e8040cecff           call 0x7ab230
// 008ea62c  85c0                 test eax, eax
// 008ea62e  7e35                 jle 0x8ea665
// 008ea630  8b1d5cca9800         mov ebx, dword ptr [0x98ca5c]
// 008ea636  85f6                 test esi, esi
// 008ea638  7c44                 jl 0x8ea67e
// 008ea63a  3b7708               cmp esi, dword ptr [edi + 8]
// 008ea63d  7d3f                 jge 0x8ea67e
// 008ea63f  8b4704               mov eax, dword ptr [edi + 4]
// 008ea642  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008ea646  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008ea649  8b542410             mov edx, dword ptr [esp + 0x10]
// 008ea64d  51                   push ecx
// 008ea64e  83c010               add eax, 0x10
// 008ea651  52                   push edx
// 008ea652  50                   push eax
// 008ea653  ffd3                 call ebx
// 008ea655  85c0                 test eax, eax
// 008ea657  7514                 jne 0x8ea66d
// 008ea659  8bcf                 mov ecx, edi
// 008ea65b  46                   inc esi
// 008ea65c  e8cf0becff           call 0x7ab230
// 008ea661  3bf0                 cmp esi, eax
// 008ea663  7cd1                 jl 0x8ea636
// 008ea665  5f                   pop edi
// 008ea666  5e                   pop esi
// 008ea667  33c0                 xor eax, eax
// 008ea669  5b                   pop ebx
// 008ea66a  c20800               ret 8
// 008ea66d  3b7708               cmp esi, dword ptr [edi + 8]
// 008ea670  7d0c                 jge 0x8ea67e
// 008ea672  8b4704               mov eax, dword ptr [edi + 4]
// 008ea675  8b04b0               mov eax, dword ptr [eax + esi*4]
// 008ea678  5f                   pop edi
// 008ea679  5e                   pop esi
// 008ea67a  5b                   pop ebx
// 008ea67b  c20800               ret 8
// 008ea67e  e88994f0ff           call 0x7f3b0c
// copied from an identical function in another client (function ?HitTest@CXTPRibbonTabContextHeaders@@QBEPAVCXTPRibbonTabContextHeader@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp