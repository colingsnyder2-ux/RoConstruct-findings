// roc 2009-12 00821210  unit: CXTPReportControl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00821210
//
// 00821210  83ec08               sub esp, 8
// 00821213  56                   push esi
// 00821214  8bf1                 mov esi, ecx
// 00821216  8b86ac020000         mov eax, dword ptr [esi + 0x2ac]
// 0082121c  3b442410             cmp eax, dword ptr [esp + 0x10]
// 00821220  7542                 jne 0x821264
// 00821222  8d4c2404             lea ecx, [esp + 4]
// 00821226  51                   push ecx
// 00821227  ff1538cc9800         call dword ptr [0x98cc38]
// 0082122d  85c0                 test eax, eax
// 0082122f  7433                 je 0x821264
// 00821231  8b4620               mov eax, dword ptr [esi + 0x20]
// 00821234  8d542404             lea edx, [esp + 4]
// 00821238  52                   push edx
// 00821239  50                   push eax
// 0082123a  ff1534cc9800         call dword ptr [0x98cc34]
// 00821240  8b442408             mov eax, dword ptr [esp + 8]
// 00821244  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00821248  8b16                 mov edx, dword ptr [esi]
// 0082124a  8b9218020000         mov edx, dword ptr [edx + 0x218]
// 00821250  50                   push eax
// 00821251  8b863c020000         mov eax, dword ptr [esi + 0x23c]
// 00821257  51                   push ecx
// 00821258  8b8e38020000         mov ecx, dword ptr [esi + 0x238]
// 0082125e  50                   push eax
// 0082125f  51                   push ecx
// 00821260  8bce                 mov ecx, esi
// 00821262  ffd2                 call edx
// 00821264  8bce                 mov ecx, esi
// 00821266  e8c52bfdff           call 0x7f3e30
// 0082126b  5e                   pop esi
// 0082126c  83c408               add esp, 8
// 0082126f  c20400               ret 4
// copied from an identical function in another client (function ?OnTimer@CXTPReportControl@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp