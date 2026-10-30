// roc 2009-12 00826a20  unit: CXTPReportControl  size: 129 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00826a20
//
// 00826a20  6aff                 push -1
// 00826a22  685ab59500           push 0x95b55a
// 00826a27  64a100000000         mov eax, dword ptr fs:[0]
// 00826a2d  50                   push eax
// 00826a2e  51                   push ecx
// 00826a2f  56                   push esi
// 00826a30  a10052b600           mov eax, dword ptr [0xb65200]
// 00826a35  33c4                 xor eax, esp
// 00826a37  50                   push eax
// 00826a38  8d44240c             lea eax, [esp + 0xc]
// 00826a3c  64a300000000         mov dword ptr fs:[0], eax
// 00826a42  833d8caeb90000       cmp dword ptr [0xb9ae8c], 0
// 00826a49  6a74                 push 0x74
// 00826a4b  740a                 je 0x826a57
// 00826a4d  e8eecdffff           call 0x823840
// 00826a52  83c404               add esp, 4
// 00826a55  eb05                 jmp 0x826a5c
// 00826a57  e884cdffff           call 0x8237e0
// 00826a5c  8bf0                 mov esi, eax
// 00826a5e  89742408             mov dword ptr [esp + 8], esi
// 00826a62  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00826a6a  85f6                 test esi, esi
// 00826a6c  7420                 je 0x826a8e
// 00826a6e  8bce                 mov ecx, esi
// 00826a70  e88bd80700           call 0x8a4300
// 00826a75  c7065c4f9f00         mov dword ptr [esi], 0x9f4f5c
// 00826a7b  8bc6                 mov eax, esi
// 00826a7d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00826a81  64890d00000000       mov dword ptr fs:[0], ecx
// 00826a88  59                   pop ecx
// 00826a89  5e                   pop esi
// 00826a8a  83c410               add esp, 0x10
// 00826a8d  c3                   ret 
// 00826a8e  33c0                 xor eax, eax
// 00826a90  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00826a94  64890d00000000       mov dword ptr fs:[0], ecx
// 00826a9b  59                   pop ecx
// 00826a9c  5e                   pop esi
// 00826a9d  83c410               add esp, 0x10
// 00826aa0  c3                   ret 
// copied from an identical function in another client (function ?CreateRow@CXTPReportControl@@MAEPAVCXTPReportRow@@XZ)

// roc-cl: 21022
// roc-lang: cpp
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportControl.cpp