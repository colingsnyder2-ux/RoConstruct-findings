// roc 2008-06 00750d50  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00750d50
//
// 00750d50  56                   push esi
// 00750d51  8bf1                 mov esi, ecx
// 00750d53  8b06                 mov eax, dword ptr [esi]
// 00750d55  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 00750d5b  57                   push edi
// 00750d5c  ffd2                 call edx
// 00750d5e  8b10                 mov edx, dword ptr [eax]
// 00750d60  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00750d64  8bc8                 mov ecx, eax
// 00750d66  8b4260               mov eax, dword ptr [edx + 0x60]
// 00750d69  57                   push edi
// 00750d6a  ffd0                 call eax
// 00750d6c  89774c               mov dword ptr [edi + 0x4c], esi
// 00750d6f  8bc7                 mov eax, edi
// 00750d71  5f                   pop edi
// 00750d72  5e                   pop esi
// 00750d73  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportRow.cpp (function ?AddChild@CXTPReportRow@@UAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp
