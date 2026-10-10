// roc 2008-06 006d7620  unit: CXTPReportHeader  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7620
//
// 006d7620  83ec08               sub esp, 8
// 006d7623  56                   push esi
// 006d7624  8bf1                 mov esi, ecx
// 006d7626  8b4624               mov eax, dword ptr [esi + 0x24]
// 006d7629  83b8c001000001       cmp dword ptr [eax + 0x1c0], 1
// 006d7630  752d                 jne 0x6d765f
// 006d7632  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d7636  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d763a  8b16                 mov edx, dword ptr [esi]
// 006d763c  89442404             mov dword ptr [esp + 4], eax
// 006d7640  2b8690000000         sub eax, dword ptr [esi + 0x90]
// 006d7646  51                   push ecx
// 006d7647  48                   dec eax
// 006d7648  50                   push eax
// 006d7649  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006d764f  8bce                 mov ecx, esi
// 006d7651  ffd0                 call eax
// 006d7653  85c0                 test eax, eax
// 006d7655  7408                 je 0x6d765f
// 006d7657  50                   push eax
// 006d7658  8bce                 mov ecx, esi
// 006d765a  e831fdffff           call 0x6d7390
// 006d765f  5e                   pop esi
// 006d7660  83c408               add esp, 8
// 006d7663  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportHeader.cpp (function ?OnLButtonDblClk@CXTPReportHeader@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHeader.cpp
