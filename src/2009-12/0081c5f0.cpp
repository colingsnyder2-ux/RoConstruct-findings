// roc 2009-12 0081c5f0  unit: CXTPReportControl  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081c5f0
//
// 0081c5f0  8b442404             mov eax, dword ptr [esp + 4]
// 0081c5f4  53                   push ebx
// 0081c5f5  56                   push esi
// 0081c5f6  57                   push edi
// 0081c5f7  8b7828               mov edi, dword ptr [eax + 0x28]
// 0081c5fa  8bf1                 mov esi, ecx
// 0081c5fc  8b16                 mov edx, dword ptr [esi]
// 0081c5fe  50                   push eax
// 0081c5ff  8b82cc010000         mov eax, dword ptr [edx + 0x1cc]
// 0081c605  57                   push edi
// 0081c606  ffd0                 call eax
// 0081c608  8bd8                 mov ebx, eax
// 0081c60a  85db                 test ebx, ebx
// 0081c60c  7e1f                 jle 0x81c62d
// 0081c60e  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0081c614  53                   push ebx
// 0081c615  57                   push edi
// 0081c616  e8b51f0100           call 0x82e5d0
// 0081c61b  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 0081c621  3bc7                 cmp eax, edi
// 0081c623  7e08                 jle 0x81c62d
// 0081c625  03c3                 add eax, ebx
// 0081c627  89861c010000         mov dword ptr [esi + 0x11c], eax
// 0081c62d  5f                   pop edi
// 0081c62e  5e                   pop esi
// 0081c62f  5b                   pop ebx
// 0081c630  c20400               ret 4
// copied from an identical function in another client (function ?_DoExpand@CXTPReportControl@@MAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp