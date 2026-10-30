// roc 2009-12 0082cb90  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cb90
//
// 0082cb90  53                   push ebx
// 0082cb91  8bd9                 mov ebx, ecx
// 0082cb93  8b4328               mov eax, dword ptr [ebx + 0x28]
// 0082cb96  56                   push esi
// 0082cb97  33f6                 xor esi, esi
// 0082cb99  57                   push edi
// 0082cb9a  85c0                 test eax, eax
// 0082cb9c  7e1d                 jle 0x82cbbb
// 0082cb9e  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0082cba2  8d7b20               lea edi, [ebx + 0x20]
// 0082cba5  85f6                 test esi, esi
// 0082cba7  7c3c                 jl 0x82cbe5
// 0082cba9  3b7708               cmp esi, dword ptr [edi + 8]
// 0082cbac  7d37                 jge 0x82cbe5
// 0082cbae  8b5704               mov edx, dword ptr [edi + 4]
// 0082cbb1  390cb2               cmp dword ptr [edx + esi*4], ecx
// 0082cbb4  740e                 je 0x82cbc4
// 0082cbb6  46                   inc esi
// 0082cbb7  3bf0                 cmp esi, eax
// 0082cbb9  7cea                 jl 0x82cba5
// 0082cbbb  5f                   pop edi
// 0082cbbc  5e                   pop esi
// 0082cbbd  83c8ff               or eax, 0xffffffff
// 0082cbc0  5b                   pop ebx
// 0082cbc1  c20400               ret 4
// 0082cbc4  e81372fcff           call 0x7f3ddc
// 0082cbc9  6a01                 push 1
// 0082cbcb  56                   push esi
// 0082cbcc  8bcf                 mov ecx, edi
// 0082cbce  e8ad060000           call 0x82d280
// 0082cbd3  8b03                 mov eax, dword ptr [ebx]
// 0082cbd5  8b5068               mov edx, dword ptr [eax + 0x68]
// 0082cbd8  56                   push esi
// 0082cbd9  8bcb                 mov ecx, ebx
// 0082cbdb  ffd2                 call edx
// 0082cbdd  5f                   pop edi
// 0082cbde  8bc6                 mov eax, esi
// 0082cbe0  5e                   pop esi
// 0082cbe1  5b                   pop ebx
// 0082cbe2  c20400               ret 4
// 0082cbe5  e8226ffcff           call 0x7f3b0c
// copied from an identical function in another client (function ?RemoveRecord@CXTPReportRecords@@QAEHPAVCXTPReportRecord@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp