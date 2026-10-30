// roc 2009-12 0041ac90  unit: CInstanceRecord::CNameItem  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0041ac90
//
// 0041ac90  56                   push esi
// 0041ac91  8bf1                 mov esi, ecx
// 0041ac93  8b06                 mov eax, dword ptr [esi]
// 0041ac95  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0041ac9b  ffd2                 call edx
// 0041ac9d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041aca1  894e50               mov dword ptr [esi + 0x50], ecx
// 0041aca4  5e                   pop esi
// 0041aca5  c20400               ret 4
// copied from an identical function in another client (function ?SetIconIndex@CXTPReportRecordItem@@UAEHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRecordItem.cpp