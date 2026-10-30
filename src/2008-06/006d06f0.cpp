// from server: 100% by auto
// roc 2008-06 006d06f0  unit: VCXTPReportRowAllocator::?$CXTPBatchAllocManagerT  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006d06f0
//
// 006d06f0  56                   push esi
// 006d06f1  8bf1                 mov esi, ecx
// 006d06f3  c706ac368500         mov dword ptr [esi], 0x8536ac
// 006d06f9  e8a2edffff           call 0x6cf4a0
// 006d06fe  833d1ce1970000       cmp dword ptr [0x97e11c], 0
// 006d0705  751a                 jne 0x6d0721
// 006d0707  a118e19700           mov eax, dword ptr [0x97e118]
// 006d070c  85c0                 test eax, eax
// 006d070e  7407                 je 0x6d0717
// 006d0710  50                   push eax
// 006d0711  ff15ec218000         call dword ptr [0x8021ec]
// 006d0717  c70518e1970000000000 mov dword ptr [0x97e118], 0
// 006d0721  f644240801           test byte ptr [esp + 8], 1
// 006d0726  7409                 je 0x6d0731
// 006d0728  56                   push esi
// 006d0729  e84cfffcff           call 0x6a067a
// 006d072e  83c404               add esp, 4
// 006d0731  8bc6                 mov eax, esi
// 006d0733  5e                   pop esi
// 006d0734  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPBatchAllocManagerT@VCXTPReportRowAllocator@@UCXTPReportRow_BatchData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
