// from server: 100% by auto
// roc 2012-06 009af280  unit: CXTPReportControlLocale::UXTP_TIMESPEC::?$CArray  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009af280
//
// 009af280  56                   push esi
// 009af281  57                   push edi
// 009af282  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009af286  8b4718               mov eax, dword ptr [edi + 0x18]
// 009af289  f7d0                 not eax
// 009af28b  8bf1                 mov esi, ecx
// 009af28d  a801                 test al, 1
// 009af28f  741e                 je 0x9af2af
// 009af291  8b4e08               mov ecx, dword ptr [esi + 8]
// 009af294  51                   push ecx
// 009af295  8bcf                 mov ecx, edi
// 009af297  e8e239fdff           call 0x982c7e
// 009af29c  8b5608               mov edx, dword ptr [esi + 8]
// 009af29f  8b4604               mov eax, dword ptr [esi + 4]
// 009af2a2  52                   push edx
// 009af2a3  50                   push eax
// 009af2a4  57                   push edi
// 009af2a5  e8b6c2ffff           call 0x9ab560
// 009af2aa  5f                   pop edi
// 009af2ab  5e                   pop esi
// 009af2ac  c20400               ret 4
// 009af2af  8bcf                 mov ecx, edi
// 009af2b1  e8c239fdff           call 0x982c78
// 009af2b6  6aff                 push -1
// 009af2b8  50                   push eax
// 009af2b9  8bce                 mov ecx, esi
// 009af2bb  e8f0c0ffff           call 0x9ab3b0
// 009af2c0  8b5608               mov edx, dword ptr [esi + 8]
// 009af2c3  8b4604               mov eax, dword ptr [esi + 4]
// 009af2c6  52                   push edx
// 009af2c7  50                   push eax
// 009af2c8  57                   push edi
// 009af2c9  e892c2ffff           call 0x9ab560
// 009af2ce  5f                   pop edi
// 009af2cf  5e                   pop esi
// 009af2d0  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarCaptionBarControl.cpp (function ?Serialize@?$CArray@V?$CXTPSmartPtrInternalT@VCXTPCalendarCaptionBarThemePart@@@@AAV1@@@UAEXAAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarCaptionBarControl.cpp
