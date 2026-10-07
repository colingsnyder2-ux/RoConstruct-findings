// roc 2008-06 006d7390  unit: CXTPReportHeader  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d7390
//
// 006d7390  56                   push esi
// 006d7391  8b742408             mov esi, dword ptr [esp + 8]
// 006d7395  837e6800             cmp dword ptr [esi + 0x68], 0
// 006d7399  57                   push edi
// 006d739a  8bf9                 mov edi, ecx
// 006d739c  746a                 je 0x6d7408
// 006d739e  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 006d73a5  7461                 je 0x6d7408
// 006d73a7  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 006d73ae  7416                 je 0x6d73c6
// 006d73b0  56                   push esi
// 006d73b1  e8aaf1ffff           call 0x6d6560
// 006d73b6  85c0                 test eax, eax
// 006d73b8  754e                 jne 0x6d7408
// 006d73ba  56                   push esi
// 006d73bb  8bcf                 mov ecx, edi
// 006d73bd  e83ef1ffff           call 0x6d6500
// 006d73c2  85c0                 test eax, eax
// 006d73c4  7542                 jne 0x6d7408
// 006d73c6  53                   push ebx
// 006d73c7  55                   push ebp
// 006d73c8  56                   push esi
// 006d73c9  8bcf                 mov ecx, edi
// 006d73cb  e8f0ebffff           call 0x6d5fc0
// 006d73d0  8bce                 mov ecx, esi
// 006d73d2  8bd8                 mov ebx, eax
// 006d73d4  e847d6ffff           call 0x6d4a20
// 006d73d9  8bce                 mov ecx, esi
// 006d73db  8be8                 mov ebp, eax
// 006d73dd  e86ed6ffff           call 0x6d4a50
// 006d73e2  3bc3                 cmp eax, ebx
// 006d73e4  7d09                 jge 0x6d73ef
// 006d73e6  8bce                 mov ecx, esi
// 006d73e8  e863d6ffff           call 0x6d4a50
// 006d73ed  eb02                 jmp 0x6d73f1
// 006d73ef  8bc3                 mov eax, ebx
// 006d73f1  3bc5                 cmp eax, ebp
// 006d73f3  5d                   pop ebp
// 006d73f4  5b                   pop ebx
// 006d73f5  7e11                 jle 0x6d7408
// 006d73f7  50                   push eax
// 006d73f8  56                   push esi
// 006d73f9  8bcf                 mov ecx, edi
// 006d73fb  e850f5ffff           call 0x6d6950
// 006d7400  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 006d7403  e8284bffff           call 0x6cbf30
// 006d7408  5f                   pop edi
// 006d7409  5e                   pop esi
// 006d740a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?BestFit@CXTPReportHeader@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
