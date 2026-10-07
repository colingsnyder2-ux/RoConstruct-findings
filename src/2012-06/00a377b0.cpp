// roc 2012-06 00a377b0  unit: CXTPReportSelectedRows::USELECTED_BLOCK::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a377b0
//
// 00a377b0  56                   push esi
// 00a377b1  57                   push edi
// 00a377b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a377b6  8b4718               mov eax, dword ptr [edi + 0x18]
// 00a377b9  f7d0                 not eax
// 00a377bb  8bf1                 mov esi, ecx
// 00a377bd  a801                 test al, 1
// 00a377bf  741e                 je 0xa377df
// 00a377c1  8b4e08               mov ecx, dword ptr [esi + 8]
// 00a377c4  51                   push ecx
// 00a377c5  8bcf                 mov ecx, edi
// 00a377c7  e8b2b4f4ff           call 0x982c7e
// 00a377cc  8b5608               mov edx, dword ptr [esi + 8]
// 00a377cf  8b4604               mov eax, dword ptr [esi + 4]
// 00a377d2  52                   push edx
// 00a377d3  50                   push eax
// 00a377d4  57                   push edi
// 00a377d5  e80641f8ff           call 0x9bb8e0
// 00a377da  5f                   pop edi
// 00a377db  5e                   pop esi
// 00a377dc  c20400               ret 4
// 00a377df  8bcf                 mov ecx, edi
// 00a377e1  e892b4f4ff           call 0x982c78
// 00a377e6  6aff                 push -1
// 00a377e8  50                   push eax
// 00a377e9  8bce                 mov ecx, esi
// 00a377eb  e840e4ffff           call 0xa35c30
// 00a377f0  8b5608               mov edx, dword ptr [esi + 8]
// 00a377f3  8b4604               mov eax, dword ptr [esi + 4]
// 00a377f6  52                   push edx
// 00a377f7  50                   push eax
// 00a377f8  57                   push edi
// 00a377f9  e8e240f8ff           call 0x9bb8e0
// 00a377fe  5f                   pop edi
// 00a377ff  5e                   pop esi
// 00a37800  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Serialize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
