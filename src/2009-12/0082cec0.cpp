// roc 2009-12 0082cec0  unit: PAVCXTPReportRecord::?$CArray  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082cec0
//
// 0082cec0  56                   push esi
// 0082cec1  8bf1                 mov esi, ecx
// 0082cec3  e87a950f00           call 0x926442
// 0082cec8  8d4e20               lea ecx, [esi + 0x20]
// 0082cecb  c706cc619f00         mov dword ptr [esi], 0x9f61cc
// 0082ced1  e84affffff           call 0x82ce20
// 0082ced6  8b442408             mov eax, dword ptr [esp + 8]
// 0082ceda  894644               mov dword ptr [esi + 0x44], eax
// 0082cedd  33c0                 xor eax, eax
// 0082cedf  894634               mov dword ptr [esi + 0x34], eax
// 0082cee2  894638               mov dword ptr [esi + 0x38], eax
// 0082cee5  89463c               mov dword ptr [esi + 0x3c], eax
// 0082cee8  c7464001000000       mov dword ptr [esi + 0x40], 1
// 0082ceef  8bc6                 mov eax, esi
// 0082cef1  5e                   pop esi
// 0082cef2  c20400               ret 4
// library xtp-11.2.2/Source\ReportControl\XTPReportRecords.cpp (function ??0CXTPReportRecords@@QAE@PAVCXTPReportRecord@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-11.2.2 Source/ReportControl/XTPReportRecords.cpp
