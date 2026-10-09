// roc 2009-12 0082eaf0  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082eaf0
//
// 0082eaf0  56                   push esi
// 0082eaf1  57                   push edi
// 0082eaf2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0082eaf6  8b4770               mov eax, dword ptr [edi + 0x70]
// 0082eaf9  8bf1                 mov esi, ecx
// 0082eafb  3b4644               cmp eax, dword ptr [esi + 0x44]
// 0082eafe  7538                 jne 0x82eb38
// 0082eb00  57                   push edi
// 0082eb01  e85affffff           call 0x82ea60
// 0082eb06  57                   push edi
// 0082eb07  8bce                 mov ecx, esi
// 0082eb09  85c0                 test eax, eax
// 0082eb0b  7418                 je 0x82eb25
// 0082eb0d  e8cefcffff           call 0x82e7e0
// 0082eb12  5f                   pop edi
// 0082eb13  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 0082eb1a  c7464001000000       mov dword ptr [esi + 0x40], 1
// 0082eb21  5e                   pop esi
// 0082eb22  c20400               ret 4
// 0082eb25  e886fcffff           call 0x82e7b0
// 0082eb2a  c74624ffffffff       mov dword ptr [esi + 0x24], 0xffffffff
// 0082eb31  c7464001000000       mov dword ptr [esi + 0x40], 1
// 0082eb38  5f                   pop edi
// 0082eb39  5e                   pop esi
// 0082eb3a  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRows.cpp (function ?Invert@CXTPReportSelectedRows@@QAEXPAVCXTPReportRow@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRows.cpp
