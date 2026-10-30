// roc 2009-12 00825130  unit: CXTPReportControl  size: 103 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00825130
//
// 00825130  6aff                 push -1
// 00825132  687a6a9600           push 0x966a7a
// 00825137  64a100000000         mov eax, dword ptr fs:[0]
// 0082513d  50                   push eax
// 0082513e  51                   push ecx
// 0082513f  a10052b600           mov eax, dword ptr [0xb65200]
// 00825144  33c4                 xor eax, esp
// 00825146  50                   push eax
// 00825147  8d442408             lea eax, [esp + 8]
// 0082514b  64a300000000         mov dword ptr fs:[0], eax
// 00825151  68e4020000           push 0x2e4
// 00825156  e805e7fcff           call 0x7f3860
// 0082515b  83c404               add esp, 4
// 0082515e  89442404             mov dword ptr [esp + 4], eax
// 00825162  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0082516a  85c0                 test eax, eax
// 0082516c  7417                 je 0x825185
// 0082516e  8bc8                 mov ecx, eax
// 00825170  e88becffff           call 0x823e00
// 00825175  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00825179  64890d00000000       mov dword ptr fs:[0], ecx
// 00825180  59                   pop ecx
// 00825181  83c410               add esp, 0x10
// 00825184  c3                   ret 
// 00825185  33c0                 xor eax, eax
// 00825187  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0082518b  64890d00000000       mov dword ptr fs:[0], ecx
// 00825192  59                   pop ecx
// 00825193  83c410               add esp, 0x10
// 00825196  c3                   ret 
// copied from an identical function in another client (function ?CreateObject@CXTPReportControl@@SGPAVCObject@@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp