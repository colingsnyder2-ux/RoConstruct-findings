// roc 2009-12 0082d5e0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d5e0
//
// 0082d5e0  83793400             cmp dword ptr [ecx + 0x34], 0
// 0082d5e4  8b542404             mov edx, dword ptr [esp + 4]
// 0082d5e8  740c                 je 0x82d5f6
// 0082d5ea  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0082d5ed  895028               mov dword ptr [eax + 0x28], edx
// 0082d5f0  8b4134               mov eax, dword ptr [ecx + 0x34]
// 0082d5f3  c20400               ret 4
// 0082d5f6  85d2                 test edx, edx
// 0082d5f8  7c1c                 jl 0x82d616
// 0082d5fa  e821f6ffff           call 0x82cc20
// 0082d5ff  3bd0                 cmp edx, eax
// 0082d601  7d13                 jge 0x82d616
// 0082d603  3b5128               cmp edx, dword ptr [ecx + 0x28]
// 0082d606  7d09                 jge 0x82d611
// 0082d608  8b4124               mov eax, dword ptr [ecx + 0x24]
// 0082d60b  8b0490               mov eax, dword ptr [eax + edx*4]
// 0082d60e  c20400               ret 4
// 0082d611  e8f664fcff           call 0x7f3b0c
// 0082d616  33c0                 xor eax, eax
// 0082d618  c20400               ret 4
// copied from an identical function in another client (function ?GetAt@CXTPReportRows@@UBEPAVCXTPReportRow@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRows.cpp