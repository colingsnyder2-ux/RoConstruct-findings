// roc 2011-06 0083e1c0  unit: CXTPReportHeader  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0083e1c0
//
// 0083e1c0  56                   push esi
// 0083e1c1  8b742408             mov esi, dword ptr [esp + 8]
// 0083e1c5  837e6800             cmp dword ptr [esi + 0x68], 0
// 0083e1c9  57                   push edi
// 0083e1ca  8bf9                 mov edi, ecx
// 0083e1cc  746a                 je 0x83e238
// 0083e1ce  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 0083e1d5  7461                 je 0x83e238
// 0083e1d7  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 0083e1de  7416                 je 0x83e1f6
// 0083e1e0  56                   push esi
// 0083e1e1  e8aaf1ffff           call 0x83d390
// 0083e1e6  85c0                 test eax, eax
// 0083e1e8  754e                 jne 0x83e238
// 0083e1ea  56                   push esi
// 0083e1eb  8bcf                 mov ecx, edi
// 0083e1ed  e83ef1ffff           call 0x83d330
// 0083e1f2  85c0                 test eax, eax
// 0083e1f4  7542                 jne 0x83e238
// 0083e1f6  53                   push ebx
// 0083e1f7  55                   push ebp
// 0083e1f8  56                   push esi
// 0083e1f9  8bcf                 mov ecx, edi
// 0083e1fb  e8f0ebffff           call 0x83cdf0
// 0083e200  8bce                 mov ecx, esi
// 0083e202  8bd8                 mov ebx, eax
// 0083e204  e8971effff           call 0x8300a0
// 0083e209  8bce                 mov ecx, esi
// 0083e20b  8be8                 mov ebp, eax
// 0083e20d  e8be1effff           call 0x8300d0
// 0083e212  3bc3                 cmp eax, ebx
// 0083e214  7d09                 jge 0x83e21f
// 0083e216  8bce                 mov ecx, esi
// 0083e218  e8b31effff           call 0x8300d0
// 0083e21d  eb02                 jmp 0x83e221
// 0083e21f  8bc3                 mov eax, ebx
// 0083e221  3bc5                 cmp eax, ebp
// 0083e223  5d                   pop ebp
// 0083e224  5b                   pop ebx
// 0083e225  7e11                 jle 0x83e238
// 0083e227  50                   push eax
// 0083e228  56                   push esi
// 0083e229  8bcf                 mov ecx, edi
// 0083e22b  e850f5ffff           call 0x83d780
// 0083e230  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0083e233  e83854ffff           call 0x833670
// 0083e238  5f                   pop edi
// 0083e239  5e                   pop esi
// 0083e23a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?BestFit@CXTPReportHeader@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
