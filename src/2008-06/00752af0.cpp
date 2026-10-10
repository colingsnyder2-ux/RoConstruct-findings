// roc 2008-06 00752af0  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00752af0
//
// 00752af0  56                   push esi
// 00752af1  8bf1                 mov esi, ecx
// 00752af3  e898e3f4ff           call 0x6a0e90
// 00752af8  8d4e68               lea ecx, [esi + 0x68]
// 00752afb  c7069c488600         mov dword ptr [esi], 0x86489c
// 00752b01  ff15043f8000         call dword ptr [0x803f04]
// 00752b07  33c0                 xor eax, eax
// 00752b09  894678               mov dword ptr [esi + 0x78], eax
// 00752b0c  c7467428b28100       mov dword ptr [esi + 0x74], 0x81b228
// 00752b13  894664               mov dword ptr [esi + 0x64], eax
// 00752b16  89466c               mov dword ptr [esi + 0x6c], eax
// 00752b19  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 00752b20  8bc6                 mov eax, esi
// 00752b22  5e                   pop esi
// 00752b23  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportTip.cpp (function ??0CXTPReportTip@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportTip.cpp
