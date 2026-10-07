// roc 2008-06 006d06a0  unit: VCXTPReportRowAllocator::?$CXTPBatchAllocManagerT  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d06a0
//
// 006d06a0  56                   push esi
// 006d06a1  8bf1                 mov esi, ecx
// 006d06a3  c706a4368500         mov dword ptr [esi], 0x8536a4
// 006d06a9  e812ecffff           call 0x6cf2c0
// 006d06ae  833d1ce1970000       cmp dword ptr [0x97e11c], 0
// 006d06b5  751a                 jne 0x6d06d1
// 006d06b7  a118e19700           mov eax, dword ptr [0x97e118]
// 006d06bc  85c0                 test eax, eax
// 006d06be  7407                 je 0x6d06c7
// 006d06c0  50                   push eax
// 006d06c1  ff15ec218000         call dword ptr [0x8021ec]
// 006d06c7  c70518e1970000000000 mov dword ptr [0x97e118], 0
// 006d06d1  f644240801           test byte ptr [esp + 8], 1
// 006d06d6  7409                 je 0x6d06e1
// 006d06d8  56                   push esi
// 006d06d9  e89cfffcff           call 0x6a067a
// 006d06de  83c404               add esp, 4
// 006d06e1  8bc6                 mov eax, esi
// 006d06e3  5e                   pop esi
// 006d06e4  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
