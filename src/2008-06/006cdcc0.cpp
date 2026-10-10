// roc 2008-06 006cdcc0  unit: CXTPReportControl  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cdcc0
//
// 006cdcc0  83ec08               sub esp, 8
// 006cdcc3  56                   push esi
// 006cdcc4  8bf1                 mov esi, ecx
// 006cdcc6  8b86ac020000         mov eax, dword ptr [esi + 0x2ac]
// 006cdccc  3b442410             cmp eax, dword ptr [esp + 0x10]
// 006cdcd0  7542                 jne 0x6cdd14
// 006cdcd2  8d4c2404             lea ecx, [esp + 4]
// 006cdcd6  51                   push ecx
// 006cdcd7  ff159c2d8000         call dword ptr [0x802d9c]
// 006cdcdd  85c0                 test eax, eax
// 006cdcdf  7433                 je 0x6cdd14
// 006cdce1  8b4620               mov eax, dword ptr [esi + 0x20]
// 006cdce4  8d542404             lea edx, [esp + 4]
// 006cdce8  52                   push edx
// 006cdce9  50                   push eax
// 006cdcea  ff15a02d8000         call dword ptr [0x802da0]
// 006cdcf0  8b442408             mov eax, dword ptr [esp + 8]
// 006cdcf4  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006cdcf8  8b16                 mov edx, dword ptr [esi]
// 006cdcfa  8b9218020000         mov edx, dword ptr [edx + 0x218]
// 006cdd00  50                   push eax
// 006cdd01  8b863c020000         mov eax, dword ptr [esi + 0x23c]
// 006cdd07  51                   push ecx
// 006cdd08  8b8e38020000         mov ecx, dword ptr [esi + 0x238]
// 006cdd0e  50                   push eax
// 006cdd0f  51                   push ecx
// 006cdd10  8bce                 mov ecx, esi
// 006cdd12  ffd2                 call edx
// 006cdd14  8bce                 mov ecx, esi
// 006cdd16  e84d2ffdff           call 0x6a0c68
// 006cdd1b  5e                   pop esi
// 006cdd1c  83c408               add esp, 8
// 006cdd1f  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?OnTimer@CXTPReportControl@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
