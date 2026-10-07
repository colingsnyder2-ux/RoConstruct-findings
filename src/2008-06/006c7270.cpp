// roc 2008-06 006c7270  unit: XTP_REPORTRECORDITEM_METRICS  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006c7270
//
// 006c7270  56                   push esi
// 006c7271  8bf1                 mov esi, ecx
// 006c7273  8b4608               mov eax, dword ptr [esi + 8]
// 006c7276  57                   push edi
// 006c7277  8b3db0218000         mov edi, dword ptr [0x8021b0]
// 006c727d  85c0                 test eax, eax
// 006c727f  7406                 je 0x6c7287
// 006c7281  83c004               add eax, 4
// 006c7284  50                   push eax
// 006c7285  ffd7                 call edi
// 006c7287  8b460c               mov eax, dword ptr [esi + 0xc]
// 006c728a  85c0                 test eax, eax
// 006c728c  7406                 je 0x6c7294
// 006c728e  83c004               add eax, 4
// 006c7291  50                   push eax
// 006c7292  ffd7                 call edi
// 006c7294  8b7610               mov esi, dword ptr [esi + 0x10]
// 006c7297  85f6                 test esi, esi
// 006c7299  7406                 je 0x6c72a1
// 006c729b  83c604               add esi, 4
// 006c729e  56                   push esi
// 006c729f  ffd7                 call edi
// 006c72a1  5f                   pop edi
// 006c72a2  5e                   pop esi
// 006c72a3  c3                   ret 
// library xtp-11.2.2/Source\ReportControl\XTPReportRecordItem.cpp (function ?AddRef@XTP_REPORTRECORDITEM_ARGS@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecordItem.cpp
