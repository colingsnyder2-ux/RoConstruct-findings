// roc 2009-06 00753cf0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00753cf0
//
// 00753cf0  56                   push esi
// 00753cf1  57                   push edi
// 00753cf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00753cf6  8b4770               mov eax, dword ptr [edi + 0x70]
// 00753cf9  8bf1                 mov esi, ecx
// 00753cfb  3b4644               cmp eax, dword ptr [esi + 0x44]
// 00753cfe  7538                 jne 0x753d38
// 00753d00  57                   push edi
// 00753d01  e85affffff           call 0x753c60
// 00753d06  57                   push edi
// 00753d07  8bce                 mov ecx, esi
// 00753d09  85c0                 test eax, eax
// 00753d0b  7418                 je 0x753d25
// 00753d0d  e8cefcffff           call 0x7539e0
// 00753d12  5f                   pop edi
// 00753d13  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00753d1a  c7464001000000       mov dword ptr [esi + 0x40], 1
// 00753d21  5e                   pop esi
// 00753d22  c20400               ret 4
// 00753d25  e886fcffff           call 0x7539b0
// 00753d2a  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00753d31  c7464001000000       mov dword ptr [esi + 0x40], 1
// 00753d38  5f                   pop edi
// 00753d39  5e                   pop esi
// 00753d3a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?Invert@CXTPReportSelectedRows@@QAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
