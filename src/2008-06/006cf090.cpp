// roc 2008-06 006cf090  unit: UCXTPReportDataAllocatorData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf090
//
// 006cf090  56                   push esi
// 006cf091  8bf1                 mov esi, ecx
// 006cf093  c706dc398500         mov dword ptr [esi], 0x8539dc
// 006cf099  833d0ce1970000       cmp dword ptr [0x97e10c], 0
// 006cf0a0  751a                 jne 0x6cf0bc
// 006cf0a2  a108e19700           mov eax, dword ptr [0x97e108]
// 006cf0a7  85c0                 test eax, eax
// 006cf0a9  7407                 je 0x6cf0b2
// 006cf0ab  50                   push eax
// 006cf0ac  ff15ec218000         call dword ptr [0x8021ec]
// 006cf0b2  c70508e1970000000000 mov dword ptr [0x97e108], 0
// 006cf0bc  f644240801           test byte ptr [esp + 8], 1
// 006cf0c1  7409                 je 0x6cf0cc
// 006cf0c3  56                   push esi
// 006cf0c4  e8b115fdff           call 0x6a067a
// 006cf0c9  83c404               add esp, 4
// 006cf0cc  8bc6                 mov eax, esi
// 006cf0ce  5e                   pop esi
// 006cf0cf  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
