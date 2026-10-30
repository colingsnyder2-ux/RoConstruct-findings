// roc 2011-06 00844600  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00844600
//
// 00844600  56                   push esi
// 00844601  57                   push edi
// 00844602  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00844606  8b4770               mov eax, dword ptr [edi + 0x70]
// 00844609  8bf1                 mov esi, ecx
// 0084460b  3b4644               cmp eax, dword ptr [esi + 0x44]
// 0084460e  7538                 jne 0x844648
// 00844610  57                   push edi
// 00844611  e85affffff           call 0x844570
// 00844616  57                   push edi
// 00844617  8bce                 mov ecx, esi
// 00844619  85c0                 test eax, eax
// 0084461b  7418                 je 0x844635
// 0084461d  e8cefcffff           call 0x8442f0
// 00844622  5f                   pop edi
// 00844623  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 0084462a  c7464001000000       mov dword ptr [esi + 0x40], 1
// 00844631  5e                   pop esi
// 00844632  c20400               ret 4
// 00844635  e886fcffff           call 0x8442c0
// 0084463a  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 00844641  c7464001000000       mov dword ptr [esi + 0x40], 1
// 00844648  5f                   pop edi
// 00844649  5e                   pop esi
// 0084464a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?Invert@CXTPReportSelectedRows@@QAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
