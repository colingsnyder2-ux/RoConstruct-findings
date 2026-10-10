// roc 2008-06 006d0fc0  unit: CXTPReportControl  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d0fc0
//
// 006d0fc0  83ec28               sub esp, 0x28
// 006d0fc3  33c0                 xor eax, eax
// 006d0fc5  89442424             mov dword ptr [esp + 0x24], eax
// 006d0fc9  890424               mov dword ptr [esp], eax
// 006d0fcc  89442404             mov dword ptr [esp + 4], eax
// 006d0fd0  89442408             mov dword ptr [esp + 8], eax
// 006d0fd4  8944240c             mov dword ptr [esp + 0xc], eax
// 006d0fd8  89442410             mov dword ptr [esp + 0x10], eax
// 006d0fdc  89442414             mov dword ptr [esp + 0x14], eax
// 006d0fe0  89442418             mov dword ptr [esp + 0x18], eax
// 006d0fe4  8944241c             mov dword ptr [esp + 0x1c], eax
// 006d0fe8  89442420             mov dword ptr [esp + 0x20], eax
// 006d0fec  89442424             mov dword ptr [esp + 0x24], eax
// 006d0ff0  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006d0ff4  56                   push esi
// 006d0ff5  8bf1                 mov esi, ecx
// 006d0ff7  85c0                 test eax, eax
// 006d0ff9  7505                 jne 0x6d1000
// 006d0ffb  e8b0a0ffff           call 0x6cb0b0
// 006d1000  8b542434             mov edx, dword ptr [esp + 0x34]
// 006d1004  89442410             mov dword ptr [esp + 0x10], eax
// 006d1008  85d2                 test edx, edx
// 006d100a  7506                 jne 0x6d1012
// 006d100c  8b9618020000         mov edx, dword ptr [esi + 0x218]
// 006d1012  89542418             mov dword ptr [esp + 0x18], edx
// 006d1016  85c0                 test eax, eax
// 006d1018  742e                 je 0x6d1048
// 006d101a  85d2                 test edx, edx
// 006d101c  742a                 je 0x6d1048
// 006d101e  8b10                 mov edx, dword ptr [eax]
// 006d1020  8bc8                 mov ecx, eax
// 006d1022  8b4260               mov eax, dword ptr [edx + 0x60]
// 006d1025  ffd0                 call eax
// 006d1027  85c0                 test eax, eax
// 006d1029  741d                 je 0x6d1048
// 006d102b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006d102f  51                   push ecx
// 006d1030  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006d1034  8b11                 mov edx, dword ptr [ecx]
// 006d1036  8b4260               mov eax, dword ptr [edx + 0x60]
// 006d1039  ffd0                 call eax
// 006d103b  8bc8                 mov ecx, eax
// 006d103d  e8fe6e0000           call 0x6d7f40
// 006d1042  89442414             mov dword ptr [esp + 0x14], eax
// 006d1046  eb08                 jmp 0x6d1050
// 006d1048  c744241400000000     mov dword ptr [esp + 0x14], 0
// 006d1050  8d4c2404             lea ecx, [esp + 4]
// 006d1054  51                   push ecx
// 006d1055  6ab4                 push -0x4c
// 006d1057  8bce                 mov ecx, esi
// 006d1059  e8c2ecffff           call 0x6cfd20
// 006d105e  33c0                 xor eax, eax
// 006d1060  39442428             cmp dword ptr [esp + 0x28], eax
// 006d1064  5e                   pop esi
// 006d1065  0f94c0               sete al
// 006d1068  83c428               add esp, 0x28
// 006d106b  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?OnFocusChanging@CXTPReportControl@@MAEHPAVCXTPReportRow@@PAVCXTPReportColumn@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
