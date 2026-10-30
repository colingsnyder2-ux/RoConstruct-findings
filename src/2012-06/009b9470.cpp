// roc 2012-06 009b9470  unit: CXTPReportRecordItemText  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b9470
//
// 009b9470  6aff                 push -1
// 009b9472  6878edad00           push 0xaded78
// 009b9477  64a100000000         mov eax, dword ptr fs:[0]
// 009b947d  50                   push eax
// 009b947e  51                   push ecx
// 009b947f  56                   push esi
// 009b9480  a1d027e000           mov eax, dword ptr [0xe027d0]
// 009b9485  33c4                 xor eax, esp
// 009b9487  50                   push eax
// 009b9488  8d44240c             lea eax, [esp + 0xc]
// 009b948c  64a300000000         mov dword ptr fs:[0], eax
// 009b9492  8bf1                 mov esi, ecx
// 009b9494  89742408             mov dword ptr [esp + 8], esi
// 009b9498  e863deffff           call 0x9b7300
// 009b949d  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009b94a1  50                   push eax
// 009b94a2  8d4e7c               lea ecx, [esi + 0x7c]
// 009b94a5  c744241800000000     mov dword ptr [esp + 0x18], 0
// 009b94ad  c706cc10c100         mov dword ptr [esi], 0xc110cc
// 009b94b3  ff15c847b200         call dword ptr [0xb247c8]
// 009b94b9  8bc6                 mov eax, esi
// 009b94bb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 009b94bf  64890d00000000       mov dword ptr fs:[0], ecx
// 009b94c6  59                   pop ecx
// 009b94c7  5e                   pop esi
// 009b94c8  83c410               add esp, 0x10
// 009b94cb  c20400               ret 4
// copied from an identical function in another client (function ??0CXTPReportRecordItemText@@QAE@PBD@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/ReportControl/XTPReportRecordItemText.cpp