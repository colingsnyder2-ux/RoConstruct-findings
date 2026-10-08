// roc 2010-06 007e2ca0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007e2ca0
//
// 007e2ca0  56                   push esi
// 007e2ca1  57                   push edi
// 007e2ca2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 007e2ca6  8b4770               mov eax, dword ptr [edi + 0x70]
// 007e2ca9  8bf1                 mov esi, ecx
// 007e2cab  3b4644               cmp eax, dword ptr [esi + 0x44]
// 007e2cae  7538                 jne 0x7e2ce8
// 007e2cb0  57                   push edi
// 007e2cb1  e85affffff           call 0x7e2c10
// 007e2cb6  57                   push edi
// 007e2cb7  8bce                 mov ecx, esi
// 007e2cb9  85c0                 test eax, eax
// 007e2cbb  7418                 je 0x7e2cd5
// 007e2cbd  e8cefcffff           call 0x7e2990
// 007e2cc2  5f                   pop edi
// 007e2cc3  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 007e2cca  c7464001000000       mov dword ptr [esi + 0x40], 1
// 007e2cd1  5e                   pop esi
// 007e2cd2  c20400               ret 4
// 007e2cd5  e886fcffff           call 0x7e2960
// 007e2cda  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 007e2ce1  c7464001000000       mov dword ptr [esi + 0x40], 1
// 007e2ce8  5f                   pop edi
// 007e2ce9  5e                   pop esi
// 007e2cea  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?Invert@CXTPReportSelectedRows@@QAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
