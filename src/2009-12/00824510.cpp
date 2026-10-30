// roc 2009-12 00824510  unit: CXTPReportControl  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00824510
//
// 00824510  83ec28               sub esp, 0x28
// 00824513  33c0                 xor eax, eax
// 00824515  89442424             mov dword ptr [esp + 0x24], eax
// 00824519  890424               mov dword ptr [esp], eax
// 0082451c  89442404             mov dword ptr [esp + 4], eax
// 00824520  89442408             mov dword ptr [esp + 8], eax
// 00824524  8944240c             mov dword ptr [esp + 0xc], eax
// 00824528  89442410             mov dword ptr [esp + 0x10], eax
// 0082452c  89442414             mov dword ptr [esp + 0x14], eax
// 00824530  89442418             mov dword ptr [esp + 0x18], eax
// 00824534  8944241c             mov dword ptr [esp + 0x1c], eax
// 00824538  89442420             mov dword ptr [esp + 0x20], eax
// 0082453c  89442424             mov dword ptr [esp + 0x24], eax
// 00824540  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00824544  56                   push esi
// 00824545  8bf1                 mov esi, ecx
// 00824547  85c0                 test eax, eax
// 00824549  7505                 jne 0x824550
// 0082454b  e810a0ffff           call 0x81e560
// 00824550  8b542434             mov edx, dword ptr [esp + 0x34]
// 00824554  89442410             mov dword ptr [esp + 0x10], eax
// 00824558  85d2                 test edx, edx
// 0082455a  7506                 jne 0x824562
// 0082455c  8b9618020000         mov edx, dword ptr [esi + 0x218]
// 00824562  89542418             mov dword ptr [esp + 0x18], edx
// 00824566  85c0                 test eax, eax
// 00824568  742e                 je 0x824598
// 0082456a  85d2                 test edx, edx
// 0082456c  742a                 je 0x824598
// 0082456e  8b10                 mov edx, dword ptr [eax]
// 00824570  8bc8                 mov ecx, eax
// 00824572  8b4260               mov eax, dword ptr [edx + 0x60]
// 00824575  ffd0                 call eax
// 00824577  85c0                 test eax, eax
// 00824579  741d                 je 0x824598
// 0082457b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0082457f  51                   push ecx
// 00824580  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00824584  8b11                 mov edx, dword ptr [ecx]
// 00824586  8b4260               mov eax, dword ptr [edx + 0x60]
// 00824589  ffd0                 call eax
// 0082458b  8bc8                 mov ecx, eax
// 0082458d  e8ae670000           call 0x82ad40
// 00824592  89442414             mov dword ptr [esp + 0x14], eax
// 00824596  eb08                 jmp 0x8245a0
// 00824598  c744241400000000     mov dword ptr [esp + 0x14], 0
// 008245a0  8d4c2404             lea ecx, [esp + 4]
// 008245a4  51                   push ecx
// 008245a5  6ab4                 push -0x4c
// 008245a7  8bce                 mov ecx, esi
// 008245a9  e8c2ecffff           call 0x823270
// 008245ae  33c0                 xor eax, eax
// 008245b0  39442428             cmp dword ptr [esp + 0x28], eax
// 008245b4  5e                   pop esi
// 008245b5  0f94c0               sete al
// 008245b8  83c428               add esp, 0x28
// 008245bb  c20800               ret 8
// copied from an identical function in another client (function ?OnFocusChanging@CXTPReportControl@@MAEHPAVCXTPReportRow@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp