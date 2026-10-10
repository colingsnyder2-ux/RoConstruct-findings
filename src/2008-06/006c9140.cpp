// roc 2008-06 006c9140  unit: CXTPReportControl  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c9140
//
// 006c9140  8b442404             mov eax, dword ptr [esp + 4]
// 006c9144  53                   push ebx
// 006c9145  56                   push esi
// 006c9146  57                   push edi
// 006c9147  8b7828               mov edi, dword ptr [eax + 0x28]
// 006c914a  8bf1                 mov esi, ecx
// 006c914c  8b16                 mov edx, dword ptr [esi]
// 006c914e  50                   push eax
// 006c914f  8b82cc010000         mov eax, dword ptr [edx + 0x1cc]
// 006c9155  57                   push edi
// 006c9156  ffd0                 call eax
// 006c9158  8bd8                 mov ebx, eax
// 006c915a  85db                 test ebx, ebx
// 006c915c  7e1f                 jle 0x6c917d
// 006c915e  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 006c9164  53                   push ebx
// 006c9165  57                   push edi
// 006c9166  e8351e0100           call 0x6dafa0
// 006c916b  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 006c9171  3bc7                 cmp eax, edi
// 006c9173  7e08                 jle 0x6c917d
// 006c9175  03c3                 add eax, ebx
// 006c9177  89861c010000         mov dword ptr [esi + 0x11c], eax
// 006c917d  5f                   pop edi
// 006c917e  5e                   pop esi
// 006c917f  5b                   pop ebx
// 006c9180  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?_DoExpand@CXTPReportControl@@MAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
