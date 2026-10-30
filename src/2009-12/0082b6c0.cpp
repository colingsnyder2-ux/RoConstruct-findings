// roc 2009-12 0082b6c0  unit: CXTPReportRecordItemPreview  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b6c0
//
// 0082b6c0  6aff                 push -1
// 0082b6c2  68e8b99500           push 0x95b9e8
// 0082b6c7  64a100000000         mov eax, dword ptr fs:[0]
// 0082b6cd  50                   push eax
// 0082b6ce  51                   push ecx
// 0082b6cf  56                   push esi
// 0082b6d0  a10052b600           mov eax, dword ptr [0xb65200]
// 0082b6d5  33c4                 xor eax, esp
// 0082b6d7  50                   push eax
// 0082b6d8  8d44240c             lea eax, [esp + 0xc]
// 0082b6dc  64a300000000         mov dword ptr fs:[0], eax
// 0082b6e2  8bf1                 mov esi, ecx
// 0082b6e4  89742408             mov dword ptr [esp + 8], esi
// 0082b6e8  e803f1feff           call 0x81a7f0
// 0082b6ed  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0082b6f1  50                   push eax
// 0082b6f2  8d4e7c               lea ecx, [esi + 0x7c]
// 0082b6f5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0082b6fd  c706545d9f00         mov dword ptr [esi], 0x9f5d54
// 0082b703  ff15b8de9800         call dword ptr [0x98deb8]
// 0082b709  8bc6                 mov eax, esi
// 0082b70b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0082b70f  64890d00000000       mov dword ptr fs:[0], ecx
// 0082b716  59                   pop ecx
// 0082b717  5e                   pop esi
// 0082b718  83c410               add esp, 0x10
// 0082b71b  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPReportRecordItemText@@QAE@PBD@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\ReportControl\XTPReportRecordItemText.cpp