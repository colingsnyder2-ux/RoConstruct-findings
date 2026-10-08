// from server: 100% by auto
// roc 2008-06 006cfd20  unit: CXTPReportControl  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cfd20
//
// 006cfd20  83ec0c               sub esp, 0xc
// 006cfd23  53                   push ebx
// 006cfd24  8b1d502d8000         mov ebx, dword ptr [0x802d50]
// 006cfd2a  57                   push edi
// 006cfd2b  8bf9                 mov edi, ecx
// 006cfd2d  8b4720               mov eax, dword ptr [edi + 0x20]
// 006cfd30  50                   push eax
// 006cfd31  ffd3                 call ebx
// 006cfd33  85c0                 test eax, eax
// 006cfd35  7508                 jne 0x6cfd3f
// 006cfd37  5f                   pop edi
// 006cfd38  5b                   pop ebx
// 006cfd39  83c40c               add esp, 0xc
// 006cfd3c  c20800               ret 8
// 006cfd3f  56                   push esi
// 006cfd40  8b742420             mov esi, dword ptr [esp + 0x20]
// 006cfd44  85f6                 test esi, esi
// 006cfd46  7504                 jne 0x6cfd4c
// 006cfd48  8d74240c             lea esi, [esp + 0xc]
// 006cfd4c  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006cfd4f  890e                 mov dword ptr [esi], ecx
// 006cfd51  8bcf                 mov ecx, edi
// 006cfd53  e82ec50e00           call 0x7bc286
// 006cfd58  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 006cfd5c  894604               mov dword ptr [esi + 4], eax
// 006cfd5f  895608               mov dword ptr [esi + 8], edx
// 006cfd62  8b4738               mov eax, dword ptr [edi + 0x38]
// 006cfd65  85c0                 test eax, eax
// 006cfd67  750a                 jne 0x6cfd73
// 006cfd69  8b4720               mov eax, dword ptr [edi + 0x20]
// 006cfd6c  50                   push eax
// 006cfd6d  ff15f82d8000         call dword ptr [0x802df8]
// 006cfd73  50                   push eax
// 006cfd74  e8650efdff           call 0x6a0bde
// 006cfd79  8bf8                 mov edi, eax
// 006cfd7b  85ff                 test edi, edi
// 006cfd7d  7424                 je 0x6cfda3
// 006cfd7f  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 006cfd82  51                   push ecx
// 006cfd83  ffd3                 call ebx
// 006cfd85  85c0                 test eax, eax
// 006cfd87  741a                 je 0x6cfda3
// 006cfd89  8b4604               mov eax, dword ptr [esi + 4]
// 006cfd8c  8b5720               mov edx, dword ptr [edi + 0x20]
// 006cfd8f  56                   push esi
// 006cfd90  50                   push eax
// 006cfd91  6a4e                 push 0x4e
// 006cfd93  52                   push edx
// 006cfd94  ff15142e8000         call dword ptr [0x802e14]
// 006cfd9a  5e                   pop esi
// 006cfd9b  5f                   pop edi
// 006cfd9c  5b                   pop ebx
// 006cfd9d  83c40c               add esp, 0xc
// 006cfda0  c20800               ret 8
// 006cfda3  5e                   pop esi
// 006cfda4  5f                   pop edi
// 006cfda5  33c0                 xor eax, eax
// 006cfda7  5b                   pop ebx
// 006cfda8  83c40c               add esp, 0xc
// 006cfdab  c20800               ret 8
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ?SendNotifyMessageA@CXTPReportControl@@QBEJIPAUtagNMHDR@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
