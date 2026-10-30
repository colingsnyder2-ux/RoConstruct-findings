// roc 2009-12 0082cc30  unit: VCXTPReportRecords::?$CXTPHeapObjectT  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cc30
//
// 0082cc30  83793400             cmp dword ptr [ecx + 0x34], 0
// 0082cc34  8b542404             mov edx, dword ptr [esp + 4]
// 0082cc38  740c                 je 0x82cc46
// 0082cc3a  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0082cc3d  89504c               mov dword ptr [eax + 0x4c], edx
// 0082cc40  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0082cc43  c20400               ret 4
// 0082cc46  85d2                 test edx, edx
// 0082cc48  7c1c                 jl 0x82cc66
// 0082cc4a  e8d1ffffff           call 0x82cc20
// 0082cc4f  3bd0                 cmp edx, eax
// 0082cc51  7d13                 jge 0x82cc66
// 0082cc53  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 0082cc56  7d09                 jge 0x82cc61
// 0082cc58  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0082cc5b  8b0490               mov eax, dword ptr [eax + edx*4]
// 0082cc5e  c20400               ret 4
// 0082cc61  e8a66efcff           call 0x7f3b0c
// 0082cc66  33c0                 xor eax, eax
// 0082cc68  c20400               ret 4
// copied from an identical function in another client (function ?GetAt@CXTPReportRecords@@QBEPAVCXTPReportRecord@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecords.cpp