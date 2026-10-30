// roc 2009-12 0082b330  unit: CInstanceRecord  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082b330
//
// 0082b330  57                   push edi
// 0082b331  8bf9                 mov edi, ecx
// 0082b333  e8e8f9ffff           call 0x82ad20
// 0082b338  85c0                 test eax, eax
// 0082b33a  743f                 je 0x82b37b
// 0082b33c  56                   push esi
// 0082b33d  8bcf                 mov ecx, edi
// 0082b33f  33f6                 xor esi, esi
// 0082b341  e83afcffff           call 0x82af80
// 0082b346  8bc8                 mov ecx, eax
// 0082b348  e8d3180000           call 0x82cc20
// 0082b34d  85c0                 test eax, eax
// 0082b34f  7e29                 jle 0x82b37a
// 0082b351  56                   push esi
// 0082b352  8bcf                 mov ecx, edi
// 0082b354  e827fcffff           call 0x82af80
// 0082b359  8bc8                 mov ecx, eax
// 0082b35b  e8d0180000           call 0x82cc30
// 0082b360  8bc8                 mov ecx, eax
// 0082b362  e8c9ffffff           call 0x82b330
// 0082b367  8bcf                 mov ecx, edi
// 0082b369  46                   inc esi
// 0082b36a  e811fcffff           call 0x82af80
// 0082b36f  8bc8                 mov ecx, eax
// 0082b371  e8aa180000           call 0x82cc20
// 0082b376  3bf0                 cmp esi, eax
// 0082b378  7cd7                 jl 0x82b351
// 0082b37a  5e                   pop esi
// 0082b37b  8bcf                 mov ecx, edi
// 0082b37d  5f                   pop edi
// 0082b37e  e9598afcff           jmp 0x7f3ddc
// copied from an identical function in another client (function ?TreeRelease@CXTPReportRecord@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\ReportControl\XTPReportRecord.cpp