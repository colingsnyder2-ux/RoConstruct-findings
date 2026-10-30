// roc 2010-06 007de940  unit: CXTPReportHeader  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007de940
//
// 007de940  56                   push esi
// 007de941  8b742408             mov esi, dword ptr [esp + 8]
// 007de945  837e6800             cmp dword ptr [esi + 0x68], 0
// 007de949  57                   push edi
// 007de94a  8bf9                 mov edi, ecx
// 007de94c  746a                 je 0x7de9b8
// 007de94e  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 007de955  7461                 je 0x7de9b8
// 007de957  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 007de95e  7416                 je 0x7de976
// 007de960  56                   push esi
// 007de961  e8aaf1ffff           call 0x7ddb10
// 007de966  85c0                 test eax, eax
// 007de968  754e                 jne 0x7de9b8
// 007de96a  56                   push esi
// 007de96b  8bcf                 mov ecx, edi
// 007de96d  e83ef1ffff           call 0x7ddab0
// 007de972  85c0                 test eax, eax
// 007de974  7542                 jne 0x7de9b8
// 007de976  53                   push ebx
// 007de977  55                   push ebp
// 007de978  56                   push esi
// 007de979  8bcf                 mov ecx, edi
// 007de97b  e8f0ebffff           call 0x7dd570
// 007de980  8bce                 mov ecx, esi
// 007de982  8bd8                 mov ebx, eax
// 007de984  e847d6ffff           call 0x7dbfd0
// 007de989  8bce                 mov ecx, esi
// 007de98b  8be8                 mov ebp, eax
// 007de98d  e86ed6ffff           call 0x7dc000
// 007de992  3bc3                 cmp eax, ebx
// 007de994  7d09                 jge 0x7de99f
// 007de996  8bce                 mov ecx, esi
// 007de998  e863d6ffff           call 0x7dc000
// 007de99d  eb02                 jmp 0x7de9a1
// 007de99f  8bc3                 mov eax, ebx
// 007de9a1  3bc5                 cmp eax, ebp
// 007de9a3  5d                   pop ebp
// 007de9a4  5b                   pop ebx
// 007de9a5  7e11                 jle 0x7de9b8
// 007de9a7  50                   push eax
// 007de9a8  56                   push esi
// 007de9a9  8bcf                 mov ecx, edi
// 007de9ab  e850f5ffff           call 0x7ddf00
// 007de9b0  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 007de9b3  e8284bffff           call 0x7d34e0
// 007de9b8  5f                   pop edi
// 007de9b9  5e                   pop esi
// 007de9ba  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?BestFit@CXTPReportHeader@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
