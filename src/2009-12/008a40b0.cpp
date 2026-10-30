// roc 2009-12 008a40b0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a40b0
//
// 008a40b0  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 008a40b3  85c0                 test eax, eax
// 008a40b5  7503                 jne 0x8a40ba
// 008a40b7  c20400               ret 4
// 008a40ba  8b542404             mov edx, dword ptr [esp + 4]
// 008a40be  3bd0                 cmp edx, eax
// 008a40c0  7508                 jne 0x8a40ca
// 008a40c2  b801000000           mov eax, 1
// 008a40c7  c20400               ret 4
// 008a40ca  8bc8                 mov ecx, eax
// 008a40cc  8b01                 mov eax, dword ptr [ecx]
// 008a40ce  89542404             mov dword ptr [esp + 4], edx
// 008a40d2  8b90b4000000         mov edx, dword ptr [eax + 0xb4]
// 008a40d8  ffe2                 jmp edx
// copied from an identical function in another client (function ?HasParent@CXTPReportRow@@UAEHPAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp