// roc 2012-06 00a2f400  unit: CXTPReportInplaceList  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a2f400
//
// 00a2f400  8b442404             mov eax, dword ptr [esp + 4]
// 00a2f404  56                   push esi
// 00a2f405  33f6                 xor esi, esi
// 00a2f407  2bc6                 sub eax, esi
// 00a2f409  7421                 je 0xa2f42c
// 00a2f40b  ba01000000           mov edx, 1
// 00a2f410  2bc2                 sub eax, edx
// 00a2f412  740e                 je 0xa2f422
// 00a2f414  2bc2                 sub eax, edx
// 00a2f416  751a                 jne 0xa2f432
// 00a2f418  897124               mov dword ptr [ecx + 0x24], esi
// 00a2f41b  895128               mov dword ptr [ecx + 0x28], edx
// 00a2f41e  5e                   pop esi
// 00a2f41f  c20400               ret 4
// 00a2f422  897128               mov dword ptr [ecx + 0x28], esi
// 00a2f425  895124               mov dword ptr [ecx + 0x24], edx
// 00a2f428  5e                   pop esi
// 00a2f429  c20400               ret 4
// 00a2f42c  897128               mov dword ptr [ecx + 0x28], esi
// 00a2f42f  897124               mov dword ptr [ecx + 0x24], esi
// 00a2f432  5e                   pop esi
// 00a2f433  c20400               ret 4
// library xtp-13.2.1/Source\ReportControl\XTPReportNavigator.cpp (function ?SetMovePosition@CXTPReportNavigator@@IAEXW4XTPReportRowType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-13.2.1 Source/ReportControl/XTPReportNavigator.cpp
