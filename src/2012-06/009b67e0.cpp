// roc 2012-06 009b67e0  unit: CXTPReportHeader  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b67e0
//
// 009b67e0  56                   push esi
// 009b67e1  8b742408             mov esi, dword ptr [esp + 8]
// 009b67e5  837e6800             cmp dword ptr [esi + 0x68], 0
// 009b67e9  57                   push edi
// 009b67ea  8bf9                 mov edi, ecx
// 009b67ec  746a                 je 0x9b6858
// 009b67ee  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 009b67f5  7461                 je 0x9b6858
// 009b67f7  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 009b67fe  7416                 je 0x9b6816
// 009b6800  56                   push esi
// 009b6801  e8aaf1ffff           call 0x9b59b0
// 009b6806  85c0                 test eax, eax
// 009b6808  754e                 jne 0x9b6858
// 009b680a  56                   push esi
// 009b680b  8bcf                 mov ecx, edi
// 009b680d  e83ef1ffff           call 0x9b5950
// 009b6812  85c0                 test eax, eax
// 009b6814  7542                 jne 0x9b6858
// 009b6816  53                   push ebx
// 009b6817  55                   push ebp
// 009b6818  56                   push esi
// 009b6819  8bcf                 mov ecx, edi
// 009b681b  e8f0ebffff           call 0x9b5410
// 009b6820  8bce                 mov ecx, esi
// 009b6822  8bd8                 mov ebx, eax
// 009b6824  e8671effff           call 0x9a8690
// 009b6829  8bce                 mov ecx, esi
// 009b682b  8be8                 mov ebp, eax
// 009b682d  e88e1effff           call 0x9a86c0
// 009b6832  3bc3                 cmp eax, ebx
// 009b6834  7d09                 jge 0x9b683f
// 009b6836  8bce                 mov ecx, esi
// 009b6838  e8831effff           call 0x9a86c0
// 009b683d  eb02                 jmp 0x9b6841
// 009b683f  8bc3                 mov eax, ebx
// 009b6841  3bc5                 cmp eax, ebp
// 009b6843  5d                   pop ebp
// 009b6844  5b                   pop ebx
// 009b6845  7e11                 jle 0x9b6858
// 009b6847  50                   push eax
// 009b6848  56                   push esi
// 009b6849  8bcf                 mov ecx, edi
// 009b684b  e850f5ffff           call 0x9b5da0
// 009b6850  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 009b6853  e81854ffff           call 0x9abc70
// 009b6858  5f                   pop edi
// 009b6859  5e                   pop esi
// 009b685a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?BestFit@CXTPReportHeader@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
