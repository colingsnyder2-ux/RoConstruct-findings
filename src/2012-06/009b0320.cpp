// from server: 100% by auto
// roc 2012-06 009b0320  unit: VCXTPReportRow::V?$CXTPSmartPtrInternalT::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009b0320
//
// 009b0320  56                   push esi
// 009b0321  57                   push edi
// 009b0322  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009b0326  8b4718               mov eax, dword ptr [edi + 0x18]
// 009b0329  f7d0                 not eax
// 009b032b  8bf1                 mov esi, ecx
// 009b032d  a801                 test al, 1
// 009b032f  741e                 je 0x9b034f
// 009b0331  8b4e08               mov ecx, dword ptr [esi + 8]
// 009b0334  51                   push ecx
// 009b0335  8bcf                 mov ecx, edi
// 009b0337  e84229fdff           call 0x982c7e
// 009b033c  8b5608               mov edx, dword ptr [esi + 8]
// 009b033f  8b4604               mov eax, dword ptr [esi + 4]
// 009b0342  52                   push edx
// 009b0343  50                   push eax
// 009b0344  57                   push edi
// 009b0345  e896b50000           call 0x9bb8e0
// 009b034a  5f                   pop edi
// 009b034b  5e                   pop esi
// 009b034c  c20400               ret 4
// 009b034f  8bcf                 mov ecx, edi
// 009b0351  e82229fdff           call 0x982c78
// 009b0356  6aff                 push -1
// 009b0358  50                   push eax
// 009b0359  8bce                 mov ecx, esi
// 009b035b  e880efffff           call 0x9af2e0
// 009b0360  8b5608               mov edx, dword ptr [esi + 8]
// 009b0363  8b4604               mov eax, dword ptr [esi + 4]
// 009b0366  52                   push edx
// 009b0367  50                   push eax
// 009b0368  57                   push edi
// 009b0369  e872b50000           call 0x9bb8e0
// 009b036e  5f                   pop edi
// 009b036f  5e                   pop esi
// 009b0370  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Serialize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
