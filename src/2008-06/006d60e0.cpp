// roc 2008-06 006d60e0  unit: CXTPReportHeader  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d60e0
//
// 006d60e0  8b542408             mov edx, dword ptr [esp + 8]
// 006d60e4  53                   push ebx
// 006d60e5  56                   push esi
// 006d60e6  8bf1                 mov esi, ecx
// 006d60e8  8b4624               mov eax, dword ptr [esi + 0x24]
// 006d60eb  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d60ef  57                   push edi
// 006d60f0  8bf9                 mov edi, ecx
// 006d60f2  8bda                 mov ebx, edx
// 006d60f4  85c0                 test eax, eax
// 006d60f6  7468                 je 0x6d6160
// 006d60f8  52                   push edx
// 006d60f9  83c070               add eax, 0x70
// 006d60fc  51                   push ecx
// 006d60fd  50                   push eax
// 006d60fe  ff152c2d8000         call dword ptr [0x802d2c]
// 006d6104  85c0                 test eax, eax
// 006d6106  7458                 je 0x6d6160
// 006d6108  8b4624               mov eax, dword ptr [esi + 0x24]
// 006d610b  83b8c001000000       cmp dword ptr [eax + 0x1c0], 0
// 006d6112  754c                 jne 0x6d6160
// 006d6114  8b16                 mov edx, dword ptr [esi]
// 006d6116  8b8280000000         mov eax, dword ptr [edx + 0x80]
// 006d611c  53                   push ebx
// 006d611d  57                   push edi
// 006d611e  8bce                 mov ecx, esi
// 006d6120  ffd0                 call eax
// 006d6122  8bf8                 mov edi, eax
// 006d6124  85ff                 test edi, edi
// 006d6126  7508                 jne 0x6d6130
// 006d6128  390584e19700         cmp dword ptr [0x97e184], eax
// 006d612e  7430                 je 0x6d6160
// 006d6130  8b5624               mov edx, dword ptr [esi + 0x24]
// 006d6133  8b4220               mov eax, dword ptr [edx + 0x20]
// 006d6136  8d4c2410             lea ecx, [esp + 0x10]
// 006d613a  51                   push ecx
// 006d613b  50                   push eax
// 006d613c  ff15802d8000         call dword ptr [0x802d80]
// 006d6142  6aff                 push -1
// 006d6144  8d4c2414             lea ecx, [esp + 0x14]
// 006d6148  51                   push ecx
// 006d6149  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d614c  6acd                 push -0x33
// 006d614e  57                   push edi
// 006d614f  6a00                 push 0
// 006d6151  6a00                 push 0
// 006d6153  e8589cffff           call 0x6cfdb0
// 006d6158  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 006d615b  e8d05dffff           call 0x6cbf30
// 006d6160  5f                   pop edi
// 006d6161  5e                   pop esi
// 006d6162  5b                   pop ebx
// 006d6163  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportHeader.cpp (function ?OnContextMenu@CXTPReportHeader@@MAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportHeader.cpp
