// roc 2012-06 009ab810  unit: XTP_REPORTRECORDITEM_METRICS  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009ab810
//
// 009ab810  56                   push esi
// 009ab811  8bf1                 mov esi, ecx
// 009ab813  8d4e2c               lea ecx, [esi + 0x2c]
// 009ab816  ff15d047b200         call dword ptr [0xb247d0]
// 009ab81c  8bce                 mov ecx, esi
// 009ab81e  e84974fdff           call 0x982c6c
// 009ab823  f644240801           test byte ptr [esp + 8], 1
// 009ab828  7409                 je 0x9ab833
// 009ab82a  56                   push esi
// 009ab82b  e8e468fdff           call 0x982114
// 009ab830  83c404               add esp, 4
// 009ab833  8bc6                 mov eax, esi
// 009ab835  5e                   pop esi
// 009ab836  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\ReportControl\ItemTypes\XTPReportRecordItemPreview.cpp (function ??_GXTP_REPORTRECORDITEM_METRICS@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/ReportControl/ItemTypes/XTPReportRecordItemPreview.cpp
