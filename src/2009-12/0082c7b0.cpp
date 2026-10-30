// roc 2009-12 0082c7b0  unit: CXTPReportRecordItemVariant  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082c7b0
//
// 0082c7b0  6aff                 push -1
// 0082c7b2  688abc9500           push 0x95bc8a
// 0082c7b7  64a100000000         mov eax, dword ptr fs:[0]
// 0082c7bd  50                   push eax
// 0082c7be  51                   push ecx
// 0082c7bf  a10052b600           mov eax, dword ptr [0xb65200]
// 0082c7c4  33c4                 xor eax, esp
// 0082c7c6  50                   push eax
// 0082c7c7  8d442408             lea eax, [esp + 8]
// 0082c7cb  64a300000000         mov dword ptr fs:[0], eax
// 0082c7d1  6880000000           push 0x80
// 0082c7d6  e8c5eefeff           call 0x81b6a0
// 0082c7db  89442404             mov dword ptr [esp + 4], eax
// 0082c7df  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0082c7e7  85c0                 test eax, eax
// 0082c7e9  741c                 je 0x82c807
// 0082c7eb  6856fd9900           push 0x99fd56
// 0082c7f0  8bc8                 mov ecx, eax
// 0082c7f2  e809ecffff           call 0x82b400
// 0082c7f7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082c7fb  64890d00000000       mov dword ptr fs:[0], ecx
// 0082c802  59                   pop ecx
// 0082c803  83c410               add esp, 0x10
// 0082c806  c3                   ret 
// 0082c807  33c0                 xor eax, eax
// 0082c809  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082c80d  64890d00000000       mov dword ptr fs:[0], ecx
// 0082c814  59                   pop ecx
// 0082c815  83c410               add esp, 0x10
// 0082c818  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPReportRecordItemText@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecordItemText.cpp