// roc 2009-12 0082c980  unit: CXTPReportRecordItemDateTime  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082c980
//
// 0082c980  6aff                 push -1
// 0082c982  688abc9500           push 0x95bc8a
// 0082c987  64a100000000         mov eax, dword ptr fs:[0]
// 0082c98d  50                   push eax
// 0082c98e  51                   push ecx
// 0082c98f  a10052b600           mov eax, dword ptr [0xb65200]
// 0082c994  33c4                 xor eax, esp
// 0082c996  50                   push eax
// 0082c997  8d442408             lea eax, [esp + 8]
// 0082c99b  64a300000000         mov dword ptr fs:[0], eax
// 0082c9a1  6880000000           push 0x80
// 0082c9a6  e8f5ecfeff           call 0x81b6a0
// 0082c9ab  89442404             mov dword ptr [esp + 4], eax
// 0082c9af  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0082c9b7  85c0                 test eax, eax
// 0082c9b9  741c                 je 0x82c9d7
// 0082c9bb  6856fd9900           push 0x99fd56
// 0082c9c0  8bc8                 mov ecx, eax
// 0082c9c2  e8f9ecffff           call 0x82b6c0
// 0082c9c7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082c9cb  64890d00000000       mov dword ptr fs:[0], ecx
// 0082c9d2  59                   pop ecx
// 0082c9d3  83c410               add esp, 0x10
// 0082c9d6  c3                   ret 
// 0082c9d7  33c0                 xor eax, eax
// 0082c9d9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082c9dd  64890d00000000       mov dword ptr fs:[0], ecx
// 0082c9e4  59                   pop ecx
// 0082c9e5  83c410               add esp, 0x10
// 0082c9e8  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPReportRecordItemText@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecordItemText.cpp