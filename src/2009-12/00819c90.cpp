// roc 2009-12 00819c90  unit: CXTPPrintOptions  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00819c90
//
// 00819c90  6aff                 push -1
// 00819c92  687a6a9600           push 0x966a7a
// 00819c97  64a100000000         mov eax, dword ptr fs:[0]
// 00819c9d  50                   push eax
// 00819c9e  51                   push ecx
// 00819c9f  a10052b600           mov eax, dword ptr [0xb65200]
// 00819ca4  33c4                 xor eax, esp
// 00819ca6  50                   push eax
// 00819ca7  8d442408             lea eax, [esp + 8]
// 00819cab  64a300000000         mov dword ptr fs:[0], eax
// 00819cb1  6878030000           push 0x378
// 00819cb6  e8a59bfdff           call 0x7f3860
// 00819cbb  83c404               add esp, 4
// 00819cbe  89442404             mov dword ptr [esp + 4], eax
// 00819cc2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00819cca  85c0                 test eax, eax
// 00819ccc  7417                 je 0x819ce5
// 00819cce  8bc8                 mov ecx, eax
// 00819cd0  e82be8ffff           call 0x818500
// 00819cd5  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00819cd9  64890d00000000       mov dword ptr fs:[0], ecx
// 00819ce0  59                   pop ecx
// 00819ce1  83c410               add esp, 0x10
// 00819ce4  c3                   ret 
// 00819ce5  33c0                 xor eax, eax
// 00819ce7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00819ceb  64890d00000000       mov dword ptr fs:[0], ecx
// 00819cf2  59                   pop ecx
// 00819cf3  83c410               add esp, 0x10
// 00819cf6  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPReportView@@SGPAVCObject@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportView.cpp