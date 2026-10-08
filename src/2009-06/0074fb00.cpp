// roc 2009-06 0074fb00  unit: CXTPReportHeader  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0074fb00
//
// 0074fb00  56                   push esi
// 0074fb01  8b742408             mov esi, dword ptr [esp + 8]
// 0074fb05  837e6800             cmp dword ptr [esi + 0x68], 0
// 0074fb09  57                   push edi
// 0074fb0a  8bf9                 mov edi, ecx
// 0074fb0c  746a                 je 0x74fb78
// 0074fb0e  83bf8000000000       cmp dword ptr [edi + 0x80], 0
// 0074fb15  7461                 je 0x74fb78
// 0074fb17  83bf8c00000000       cmp dword ptr [edi + 0x8c], 0
// 0074fb1e  7416                 je 0x74fb36
// 0074fb20  56                   push esi
// 0074fb21  e8aaf1ffff           call 0x74ecd0
// 0074fb26  85c0                 test eax, eax
// 0074fb28  754e                 jne 0x74fb78
// 0074fb2a  56                   push esi
// 0074fb2b  8bcf                 mov ecx, edi
// 0074fb2d  e83ef1ffff           call 0x74ec70
// 0074fb32  85c0                 test eax, eax
// 0074fb34  7542                 jne 0x74fb78
// 0074fb36  53                   push ebx
// 0074fb37  55                   push ebp
// 0074fb38  56                   push esi
// 0074fb39  8bcf                 mov ecx, edi
// 0074fb3b  e8f0ebffff           call 0x74e730
// 0074fb40  8bce                 mov ecx, esi
// 0074fb42  8bd8                 mov ebx, eax
// 0074fb44  e847d6ffff           call 0x74d190
// 0074fb49  8bce                 mov ecx, esi
// 0074fb4b  8be8                 mov ebp, eax
// 0074fb4d  e86ed6ffff           call 0x74d1c0
// 0074fb52  3bc3                 cmp eax, ebx
// 0074fb54  7d09                 jge 0x74fb5f
// 0074fb56  8bce                 mov ecx, esi
// 0074fb58  e863d6ffff           call 0x74d1c0
// 0074fb5d  eb02                 jmp 0x74fb61
// 0074fb5f  8bc3                 mov eax, ebx
// 0074fb61  3bc5                 cmp eax, ebp
// 0074fb63  5d                   pop ebp
// 0074fb64  5b                   pop ebx
// 0074fb65  7e11                 jle 0x74fb78
// 0074fb67  50                   push eax
// 0074fb68  56                   push esi
// 0074fb69  8bcf                 mov ecx, edi
// 0074fb6b  e850f5ffff           call 0x74f0c0
// 0074fb70  8b4f24               mov ecx, dword ptr [edi + 0x24]
// 0074fb73  e8f84affff           call 0x744670
// 0074fb78  5f                   pop edi
// 0074fb79  5e                   pop esi
// 0074fb7a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportHeader.cpp (function ?BestFit@CXTPReportHeader@@QAEXPAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportHeader.cpp
