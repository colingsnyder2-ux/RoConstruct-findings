// roc 2009-12 0082b400  unit: CXTPReportRecordItemText  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b400
//
// 0082b400  6aff                 push -1
// 0082b402  68e8b99500           push 0x95b9e8
// 0082b407  64a100000000         mov eax, dword ptr fs:[0]
// 0082b40d  50                   push eax
// 0082b40e  51                   push ecx
// 0082b40f  56                   push esi
// 0082b410  a10052b600           mov eax, dword ptr [0xb65200]
// 0082b415  33c4                 xor eax, esp
// 0082b417  50                   push eax
// 0082b418  8d44240c             lea eax, [esp + 0xc]
// 0082b41c  64a300000000         mov dword ptr fs:[0], eax
// 0082b422  8bf1                 mov esi, ecx
// 0082b424  89742408             mov dword ptr [esp + 8], esi
// 0082b428  e8c3f3feff           call 0x81a7f0
// 0082b42d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082b431  50                   push eax
// 0082b432  8d4e7c               lea ecx, [esi + 0x7c]
// 0082b435  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0082b43d  c706b45a9f00         mov dword ptr [esi], 0x9f5ab4
// 0082b443  ff15b8de9800         call dword ptr [0x98deb8]
// 0082b449  8bc6                 mov eax, esi
// 0082b44b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082b44f  64890d00000000       mov dword ptr fs:[0], ecx
// 0082b456  59                   pop ecx
// 0082b457  5e                   pop esi
// 0082b458  83c410               add esp, 0x10
// 0082b45b  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPReportRecordItemText@@QAE@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecordItemText.cpp