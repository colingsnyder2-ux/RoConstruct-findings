// roc 2011-06 008b7d30  unit: CXTPReportHeaderDragWnd  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008b7d30
//
// 008b7d30  56                   push esi
// 008b7d31  8bf1                 mov esi, ecx
// 008b7d33  e80e2cf5ff           call 0x80a946
// 008b7d38  8b442408             mov eax, dword ptr [esp + 8]
// 008b7d3c  894654               mov dword ptr [esi + 0x54], eax
// 008b7d3f  33c0                 xor eax, eax
// 008b7d41  c7063c4bad00         mov dword ptr [esi], 0xad4b3c
// 008b7d47  89465c               mov dword ptr [esi + 0x5c], eax
// 008b7d4a  c74658402aac00       mov dword ptr [esi + 0x58], 0xac2a40
// 008b7d51  894660               mov dword ptr [esi + 0x60], eax
// 008b7d54  8bc6                 mov eax, esi
// 008b7d56  5e                   pop esi
// 008b7d57  c20400               ret 4
// library xtp-15.2.1/Source\ReportControl\XTPReportDragDrop.cpp (function ??0CXTPReportHeaderDropWnd@@QAE@K@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/ReportControl/XTPReportDragDrop.cpp
