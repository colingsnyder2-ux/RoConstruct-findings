// roc 2008-06 006cf0e0  unit: UCXTPReportAllocatorDefaultData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf0e0
//
// 006cf0e0  56                   push esi
// 006cf0e1  8bf1                 mov esi, ecx
// 006cf0e3  c706ec398500         mov dword ptr [esi], 0x8539ec
// 006cf0e9  833d2ce1970000       cmp dword ptr [0x97e12c], 0
// 006cf0f0  751a                 jne 0x6cf10c
// 006cf0f2  a128e19700           mov eax, dword ptr [0x97e128]
// 006cf0f7  85c0                 test eax, eax
// 006cf0f9  7407                 je 0x6cf102
// 006cf0fb  50                   push eax
// 006cf0fc  ff15ec218000         call dword ptr [0x8021ec]
// 006cf102  c70528e1970000000000 mov dword ptr [0x97e128], 0
// 006cf10c  f644240801           test byte ptr [esp + 8], 1
// 006cf111  7409                 je 0x6cf11c
// 006cf113  56                   push esi
// 006cf114  e86115fdff           call 0x6a067a
// 006cf119  83c404               add esp, 4
// 006cf11c  8bc6                 mov eax, esi
// 006cf11e  5e                   pop esi
// 006cf11f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
