// roc 2012-06 009bca30  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009bca30
//
// 009bca30  56                   push esi
// 009bca31  57                   push edi
// 009bca32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009bca36  8b4770               mov eax, dword ptr [edi + 0x70]
// 009bca39  8bf1                 mov esi, ecx
// 009bca3b  3b4644               cmp eax, dword ptr [esi + 0x44]
// 009bca3e  7538                 jne 0x9bca78
// 009bca40  57                   push edi
// 009bca41  e85affffff           call 0x9bc9a0
// 009bca46  57                   push edi
// 009bca47  8bce                 mov ecx, esi
// 009bca49  85c0                 test eax, eax
// 009bca4b  7418                 je 0x9bca65
// 009bca4d  e8cefcffff           call 0x9bc720
// 009bca52  5f                   pop edi
// 009bca53  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 009bca5a  c7464001000000       mov dword ptr [esi + 0x40], 1
// 009bca61  5e                   pop esi
// 009bca62  c20400               ret 4
// 009bca65  e886fcffff           call 0x9bc6f0
// 009bca6a  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 009bca71  c7464001000000       mov dword ptr [esi + 0x40], 1
// 009bca78  5f                   pop edi
// 009bca79  5e                   pop esi
// 009bca7a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?Invert@CXTPReportSelectedRows@@QAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
