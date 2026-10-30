// roc 2009-12 0081b830  unit: CInstanceRecord::CNameItem  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b830
//
// 0081b830  6aff                 push -1
// 0081b832  688abc9500           push 0x95bc8a
// 0081b837  64a100000000         mov eax, dword ptr fs:[0]
// 0081b83d  50                   push eax
// 0081b83e  51                   push ecx
// 0081b83f  a10052b600           mov eax, dword ptr [0xb65200]
// 0081b844  33c4                 xor eax, esp
// 0081b846  50                   push eax
// 0081b847  8d442408             lea eax, [esp + 8]
// 0081b84b  64a300000000         mov dword ptr fs:[0], eax
// 0081b851  6a7c                 push 0x7c
// 0081b853  e848feffff           call 0x81b6a0
// 0081b858  89442404             mov dword ptr [esp + 4], eax
// 0081b85c  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0081b864  85c0                 test eax, eax
// 0081b866  7417                 je 0x81b87f
// 0081b868  8bc8                 mov ecx, eax
// 0081b86a  e881efffff           call 0x81a7f0
// 0081b86f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081b873  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b87a  59                   pop ecx
// 0081b87b  83c410               add esp, 0x10
// 0081b87e  c3                   ret 
// 0081b87f  33c0                 xor eax, eax
// 0081b881  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081b885  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b88c  59                   pop ecx
// 0081b88d  83c410               add esp, 0x10
// 0081b890  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPReportRecordItem@@SGPAVCObject@@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp