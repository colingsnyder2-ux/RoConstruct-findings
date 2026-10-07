// roc 2008-06 006cf810  unit: UCXTPReportRowAllocatorData::?$CXTPHeapAllocatorT  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cf810
//
// 006cf810  56                   push esi
// 006cf811  8bf1                 mov esi, ecx
// 006cf813  c706e4398500         mov dword ptr [esi], 0x8539e4
// 006cf819  833d1ce1970000       cmp dword ptr [0x97e11c], 0
// 006cf820  751a                 jne 0x6cf83c
// 006cf822  a118e19700           mov eax, dword ptr [0x97e118]
// 006cf827  85c0                 test eax, eax
// 006cf829  7407                 je 0x6cf832
// 006cf82b  50                   push eax
// 006cf82c  ff15ec218000         call dword ptr [0x8021ec]
// 006cf832  c70518e1970000000000 mov dword ptr [0x97e118], 0
// 006cf83c  f644240801           test byte ptr [esp + 8], 1
// 006cf841  7409                 je 0x6cf84c
// 006cf843  56                   push esi
// 006cf844  e8310efdff           call 0x6a067a
// 006cf849  83c404               add esp, 4
// 006cf84c  8bc6                 mov eax, esi
// 006cf84e  5e                   pop esi
// 006cf84f  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportControl.cpp (function ??_G?$CXTPHeapAllocatorT@UCXTPReportDataAllocatorData@@@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportControl.cpp
