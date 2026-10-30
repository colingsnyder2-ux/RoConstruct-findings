// roc 2012-06 009babe0  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009babe0
//
// 009babe0  53                   push ebx
// 009babe1  8bd9                 mov ebx, ecx
// 009babe3  8b4328               mov eax, dword ptr [ebx + 0x28]
// 009babe6  56                   push esi
// 009babe7  33f6                 xor esi, esi
// 009babe9  57                   push edi
// 009babea  85c0                 test eax, eax
// 009babec  7e1d                 jle 0x9bac0b
// 009babee  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009babf2  8d7b20               lea edi, [ebx + 0x20]
// 009babf5  85f6                 test esi, esi
// 009babf7  7c3c                 jl 0x9bac35
// 009babf9  3b7708               cmp esi, dword ptr [edi + 8]
// 009babfc  7d37                 jge 0x9bac35
// 009babfe  8b5704               mov edx, dword ptr [edi + 4]
// 009bac01  390cb2               cmp dword ptr [edx + esi*4], ecx
// 009bac04  740e                 je 0x9bac14
// 009bac06  46                   inc esi
// 009bac07  3bf0                 cmp esi, eax
// 009bac09  7cea                 jl 0x9babf5
// 009bac0b  5f                   pop edi
// 009bac0c  5e                   pop esi
// 009bac0d  83c8ff               or eax, 0xffffffff
// 009bac10  5b                   pop ebx
// 009bac11  c20400               ret 4
// 009bac14  e8717afcff           call 0x98268a
// 009bac19  6a01                 push 1
// 009bac1b  56                   push esi
// 009bac1c  8bcf                 mov ecx, edi
// 009bac1e  e84d85fdff           call 0x993170
// 009bac23  8b03                 mov eax, dword ptr [ebx]
// 009bac25  8b5068               mov edx, dword ptr [eax + 0x68]
// 009bac28  56                   push esi
// 009bac29  8bcb                 mov ecx, ebx
// 009bac2b  ffd2                 call edx
// 009bac2d  5f                   pop edi
// 009bac2e  8bc6                 mov eax, esi
// 009bac30  5e                   pop esi
// 009bac31  5b                   pop ebx
// 009bac32  c20400               ret 4
// 009bac35  e88677fcff           call 0x9823c0
// copied from an identical function in another client (function ?RemoveRecord@CXTPReportRecords@@QAEHPAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp