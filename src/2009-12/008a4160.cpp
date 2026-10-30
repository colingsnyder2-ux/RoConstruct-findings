// roc 2009-12 008a4160  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a4160
//
// 008a4160  56                   push esi
// 008a4161  8bf1                 mov esi, ecx
// 008a4163  8b06                 mov eax, dword ptr [esi]
// 008a4165  8b90b8000000         mov edx, dword ptr [eax + 0xb8]
// 008a416b  57                   push edi
// 008a416c  ffd2                 call edx
// 008a416e  8b10                 mov edx, dword ptr [eax]
// 008a4170  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008a4174  8bc8                 mov ecx, eax
// 008a4176  8b4260               mov eax, dword ptr [edx + 0x60]
// 008a4179  57                   push edi
// 008a417a  ffd0                 call eax
// 008a417c  89774c               mov dword ptr [edi + 0x4c], esi
// 008a417f  8bc7                 mov eax, edi
// 008a4181  5f                   pop edi
// 008a4182  5e                   pop esi
// 008a4183  c20400               ret 4
// copied from an identical function in another client (function ?AddChild@CXTPReportRow@@UAEPAV1@PAV1@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp