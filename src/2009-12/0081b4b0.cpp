// roc 2009-12 0081b4b0  unit: CInstanceRecord::CNameItem  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b4b0
//
// 0081b4b0  6aff                 push -1
// 0081b4b2  681aab9500           push 0x95ab1a
// 0081b4b7  64a100000000         mov eax, dword ptr fs:[0]
// 0081b4bd  50                   push eax
// 0081b4be  56                   push esi
// 0081b4bf  a10052b600           mov eax, dword ptr [0xb65200]
// 0081b4c4  33c4                 xor eax, esp
// 0081b4c6  50                   push eax
// 0081b4c7  8d442408             lea eax, [esp + 8]
// 0081b4cb  64a300000000         mov dword ptr fs:[0], eax
// 0081b4d1  8bf1                 mov esi, ecx
// 0081b4d3  8b4678               mov eax, dword ptr [esi + 0x78]
// 0081b4d6  85c0                 test eax, eax
// 0081b4d8  7549                 jne 0x81b523
// 0081b4da  8b442418             mov eax, dword ptr [esp + 0x18]
// 0081b4de  85c0                 test eax, eax
// 0081b4e0  7419                 je 0x81b4fb
// 0081b4e2  8b80c0000000         mov eax, dword ptr [eax + 0xc0]
// 0081b4e8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081b4ec  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b4f3  59                   pop ecx
// 0081b4f4  5e                   pop esi
// 0081b4f5  83c40c               add esp, 0xc
// 0081b4f8  c20400               ret 4
// 0081b4fb  6a4c                 push 0x4c
// 0081b4fd  e85e83fdff           call 0x7f3860
// 0081b502  83c404               add esp, 4
// 0081b505  89442418             mov dword ptr [esp + 0x18], eax
// 0081b509  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0081b511  85c0                 test eax, eax
// 0081b513  7409                 je 0x81b51e
// 0081b515  8bc8                 mov ecx, eax
// 0081b517  e8e4fdffff           call 0x81b300
// 0081b51c  eb02                 jmp 0x81b520
// 0081b51e  33c0                 xor eax, eax
// 0081b520  894678               mov dword ptr [esi + 0x78], eax
// 0081b523  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0081b527  64890d00000000       mov dword ptr fs:[0], ecx
// 0081b52e  59                   pop ecx
// 0081b52f  5e                   pop esi
// 0081b530  83c40c               add esp, 0xc
// 0081b533  c20400               ret 4
// copied from an identical function in another client (function ?GetEditOptions@CXTPReportRecordItem@@QAEPAVCXTPReportRecordItemEditOptions@@PAVCXTPReportColumn@@@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecordItem.cpp