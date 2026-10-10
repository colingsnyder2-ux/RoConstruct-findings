// roc 2008-06 006cb110  unit: CXTPReportControl  size: 120 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cb110
//
// 006cb110  8b442408             mov eax, dword ptr [esp + 8]
// 006cb114  53                   push ebx
// 006cb115  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006cb119  56                   push esi
// 006cb11a  53                   push ebx
// 006cb11b  8bf1                 mov esi, ecx
// 006cb11d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cb121  50                   push eax
// 006cb122  51                   push ecx
// 006cb123  8bce                 mov ecx, esi
// 006cb125  e8f855fdff           call 0x6a0722
// 006cb12a  83f8ff               cmp eax, -1
// 006cb12d  7554                 jne 0x6cb183
// 006cb12f  8b442410             mov eax, dword ptr [esp + 0x10]
// 006cb133  8b8e88020000         mov ecx, dword ptr [esi + 0x288]
// 006cb139  8b11                 mov edx, dword ptr [ecx]
// 006cb13b  8b9294000000         mov edx, dword ptr [edx + 0x94]
// 006cb141  57                   push edi
// 006cb142  53                   push ebx
// 006cb143  50                   push eax
// 006cb144  8b442418             mov eax, dword ptr [esp + 0x18]
// 006cb148  50                   push eax
// 006cb149  ffd2                 call edx
// 006cb14b  8bf8                 mov edi, eax
// 006cb14d  83ffff               cmp edi, -1
// 006cb150  7530                 jne 0x6cb182
// 006cb152  8b442414             mov eax, dword ptr [esp + 0x14]
// 006cb156  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006cb15a  50                   push eax
// 006cb15b  51                   push ecx
// 006cb15c  8bce                 mov ecx, esi
// 006cb15e  e8cdefffff           call 0x6ca130
// 006cb163  85c0                 test eax, eax
// 006cb165  7419                 je 0x6cb180
// 006cb167  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006cb16b  8b10                 mov edx, dword ptr [eax]
// 006cb16d  8b92f4000000         mov edx, dword ptr [edx + 0xf4]
// 006cb173  53                   push ebx
// 006cb174  51                   push ecx
// 006cb175  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006cb179  51                   push ecx
// 006cb17a  8bc8                 mov ecx, eax
// 006cb17c  ffd2                 call edx
// 006cb17e  8bf8                 mov edi, eax
// 006cb180  8bc7                 mov eax, edi
// 006cb182  5f                   pop edi
// 006cb183  5e                   pop esi
// 006cb184  5b                   pop ebx
// 006cb185  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?OnToolHitTest@CXTPReportControl@@MBEHVCPoint@@PAUtagTOOLINFOA@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
