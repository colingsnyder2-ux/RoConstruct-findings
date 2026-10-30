// roc 2009-12 0082cd70  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cd70
//
// 0082cd70  53                   push ebx
// 0082cd71  55                   push ebp
// 0082cd72  57                   push edi
// 0082cd73  8bf9                 mov edi, ecx
// 0082cd75  e8a6feffff           call 0x82cc20
// 0082cd7a  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 0082cd7e  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 0082cd82  8bd8                 mov ebx, eax
// 0082cd84  7523                 jne 0x82cda9
// 0082cd86  3beb                 cmp ebp, ebx
// 0082cd88  7d1f                 jge 0x82cda9
// 0082cd8a  56                   push esi
// 0082cd8b  8bf5                 mov esi, ebp
// 0082cd8d  8d4900               lea ecx, [ecx]
// 0082cd90  56                   push esi
// 0082cd91  8bcf                 mov ecx, edi
// 0082cd93  e898feffff           call 0x82cc30
// 0082cd98  85c0                 test eax, eax
// 0082cd9a  7407                 je 0x82cda3
// 0082cd9c  8bc8                 mov ecx, eax
// 0082cd9e  e83970fcff           call 0x7f3ddc
// 0082cda3  46                   inc esi
// 0082cda4  3bf3                 cmp esi, ebx
// 0082cda6  7ce8                 jl 0x82cd90
// 0082cda8  5e                   pop esi
// 0082cda9  8b442414             mov eax, dword ptr [esp + 0x14]
// 0082cdad  50                   push eax
// 0082cdae  55                   push ebp
// 0082cdaf  8d4f20               lea ecx, [edi + 0x20]
// 0082cdb2  e8e9850200           call 0x8553a0
// 0082cdb7  5f                   pop edi
// 0082cdb8  5d                   pop ebp
// 0082cdb9  5b                   pop ebx
// 0082cdba  c20800               ret 8
// copied from an identical function in another client (function ?SetSize@CXTPReportRecords@@UAEXHH@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp