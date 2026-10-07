// roc 2008-06 00753180  unit: CXTPReportTip  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00753180
//
// 00753180  8b442404             mov eax, dword ptr [esp + 4]
// 00753184  56                   push esi
// 00753185  33f6                 xor esi, esi
// 00753187  2bc6                 sub eax, esi
// 00753189  7421                 je 0x7531ac
// 0075318b  ba01000000           mov edx, 1
// 00753190  2bc2                 sub eax, edx
// 00753192  740e                 je 0x7531a2
// 00753194  2bc2                 sub eax, edx
// 00753196  751a                 jne 0x7531b2
// 00753198  897124               mov dword ptr [ecx + 0x24], esi
// 0075319b  895128               mov dword ptr [ecx + 0x28], edx
// 0075319e  5e                   pop esi
// 0075319f  c20400               ret 4
// 007531a2  897128               mov dword ptr [ecx + 0x28], esi
// 007531a5  895124               mov dword ptr [ecx + 0x24], edx
// 007531a8  5e                   pop esi
// 007531a9  c20400               ret 4
// 007531ac  897128               mov dword ptr [ecx + 0x28], esi
// 007531af  897124               mov dword ptr [ecx + 0x24], esi
// 007531b2  5e                   pop esi
// 007531b3  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportNavigator.cpp (function ?SetMovePosition@CXTPReportNavigator@@IAEXW4XTPReportRowType@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportNavigator.cpp
