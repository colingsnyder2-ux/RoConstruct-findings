// roc 2008-06 006cdf80  unit: CXTPReportControl  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cdf80
//
// 006cdf80  53                   push ebx
// 006cdf81  55                   push ebp
// 006cdf82  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 006cdf86  56                   push esi
// 006cdf87  8bf1                 mov esi, ecx
// 006cdf89  8d8634010000         lea eax, [esi + 0x134]
// 006cdf8f  57                   push edi
// 006cdf90  85c0                 test eax, eax
// 006cdf92  7441                 je 0x6cdfd5
// 006cdf94  83782000             cmp dword ptr [eax + 0x20], 0
// 006cdf98  743b                 je 0x6cdfd5
// 006cdf9a  8b8654010000         mov eax, dword ptr [esi + 0x154]
// 006cdfa0  50                   push eax
// 006cdfa1  ff153c2d8000         call dword ptr [0x802d3c]
// 006cdfa7  85c0                 test eax, eax
// 006cdfa9  742a                 je 0x6cdfd5
// 006cdfab  833d80e1970000       cmp dword ptr [0x97e180], 0
// 006cdfb2  7521                 jne 0x6cdfd5
// 006cdfb4  8b16                 mov edx, dword ptr [esi]
// 006cdfb6  8b825c020000         mov eax, dword ptr [edx + 0x25c]
// 006cdfbc  55                   push ebp
// 006cdfbd  8bce                 mov ecx, esi
// 006cdfbf  c70580e1970001000000 mov dword ptr [0x97e180], 1
// 006cdfc9  ffd0                 call eax
// 006cdfcb  c70580e1970000000000 mov dword ptr [0x97e180], 0
// 006cdfd5  8b8e1c020000         mov ecx, dword ptr [esi + 0x21c]
// 006cdfdb  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 006cdfdf  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 006cdfe3  85c9                 test ecx, ecx
// 006cdfe5  7412                 je 0x6cdff9
// 006cdfe7  83bec801000000       cmp dword ptr [esi + 0x1c8], 0
// 006cdfee  7409                 je 0x6cdff9
// 006cdff0  57                   push edi
// 006cdff1  53                   push ebx
// 006cdff2  55                   push ebp
// 006cdff3  56                   push esi
// 006cdff4  e887f30300           call 0x70d380
// 006cdff9  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006cdffd  51                   push ecx
// 006cdffe  57                   push edi
// 006cdfff  53                   push ebx
// 006ce000  55                   push ebp
// 006ce001  8bce                 mov ecx, esi
// 006ce003  e8f827fdff           call 0x6a0800
// 006ce008  5f                   pop edi
// 006ce009  5e                   pop esi
// 006ce00a  5d                   pop ebp
// 006ce00b  5b                   pop ebx
// 006ce00c  c21000               ret 0x10
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?OnWndMsg@CXTPReportControl@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
