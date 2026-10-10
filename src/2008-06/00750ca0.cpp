// roc 2008-06 00750ca0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750ca0
//
// 00750ca0  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 00750ca3  85c0                 test eax, eax
// 00750ca5  7503                 jne 0x750caa
// 00750ca7  c20400               ret 4
// 00750caa  8b542404             mov edx, dword ptr [esp + 4]
// 00750cae  3bd0                 cmp edx, eax
// 00750cb0  7508                 jne 0x750cba
// 00750cb2  b801000000           mov eax, 1
// 00750cb7  c20400               ret 4
// 00750cba  8bc8                 mov ecx, eax
// 00750cbc  8b01                 mov eax, dword ptr [ecx]
// 00750cbe  89542404             mov dword ptr [esp + 4], edx
// 00750cc2  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 00750cc8  ffe2                 jmp edx
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?HasParent@CXTPReportRow@@UAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
