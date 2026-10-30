// roc 2012-06 00a70300  unit: CXTPRibbonTab  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a70300
//
// 00a70300  53                   push ebx
// 00a70301  56                   push esi
// 00a70302  57                   push edi
// 00a70303  8bf9                 mov edi, ecx
// 00a70305  33f6                 xor esi, esi
// 00a70307  e8144a9fff           call 0x464d20
// 00a7030c  85c0                 test eax, eax
// 00a7030e  7e35                 jle 0xa70345
// 00a70310  8b1d483bb200         mov ebx, dword ptr [0xb23b48]
// 00a70316  85f6                 test esi, esi
// 00a70318  7c44                 jl 0xa7035e
// 00a7031a  3b7708               cmp esi, dword ptr [edi + 8]
// 00a7031d  7d3f                 jge 0xa7035e
// 00a7031f  8b4704               mov eax, dword ptr [edi + 4]
// 00a70322  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a70326  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00a70329  8b542410             mov edx, dword ptr [esp + 0x10]
// 00a7032d  51                   push ecx
// 00a7032e  83c010               add eax, 0x10
// 00a70331  52                   push edx
// 00a70332  50                   push eax
// 00a70333  ffd3                 call ebx
// 00a70335  85c0                 test eax, eax
// 00a70337  7514                 jne 0xa7034d
// 00a70339  8bcf                 mov ecx, edi
// 00a7033b  46                   inc esi
// 00a7033c  e8df499fff           call 0x464d20
// 00a70341  3bf0                 cmp esi, eax
// 00a70343  7cd1                 jl 0xa70316
// 00a70345  5f                   pop edi
// 00a70346  5e                   pop esi
// 00a70347  33c0                 xor eax, eax
// 00a70349  5b                   pop ebx
// 00a7034a  c20800               ret 8
// 00a7034d  3b7708               cmp esi, dword ptr [edi + 8]
// 00a70350  7d0c                 jge 0xa7035e
// 00a70352  8b4704               mov eax, dword ptr [edi + 4]
// 00a70355  8b04b0               mov eax, dword ptr [eax + esi*4]
// 00a70358  5f                   pop edi
// 00a70359  5e                   pop esi
// 00a7035a  5b                   pop ebx
// 00a7035b  c20800               ret 8
// 00a7035e  e85d20f1ff           call 0x9823c0
// copied from an identical function in another client (function ?HitTest@CXTPRibbonTabContextHeaders@@QBEPAVCXTPRibbonTabContextHeader@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp