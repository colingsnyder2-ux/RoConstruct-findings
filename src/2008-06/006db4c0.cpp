// from server: 100% by auto
// roc 2008-06 006db4c0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006db4c0
//
// 006db4c0  56                   push esi
// 006db4c1  57                   push edi
// 006db4c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006db4c6  8b4770               mov eax, dword ptr [edi + 0x70]
// 006db4c9  8bf1                 mov esi, ecx
// 006db4cb  3b4644               cmp eax, dword ptr [esi + 0x44]
// 006db4ce  7538                 jne 0x6db508
// 006db4d0  57                   push edi
// 006db4d1  e85affffff           call 0x6db430
// 006db4d6  57                   push edi
// 006db4d7  8bce                 mov ecx, esi
// 006db4d9  85c0                 test eax, eax
// 006db4db  7418                 je 0x6db4f5
// 006db4dd  e8cefcffff           call 0x6db1b0
// 006db4e2  5f                   pop edi
// 006db4e3  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 006db4ea  c7464001000000       mov dword ptr [esi + 0x40], 1
// 006db4f1  5e                   pop esi
// 006db4f2  c20400               ret 4
// 006db4f5  e886fcffff           call 0x6db180
// 006db4fa  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 006db501  c7464001000000       mov dword ptr [esi + 0x40], 1
// 006db508  5f                   pop edi
// 006db509  5e                   pop esi
// 006db50a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?Invert@CXTPReportSelectedRows@@QAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
