// roc 2009-12 008a5f00  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 52 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a5f00
//
// 008a5f00  56                   push esi
// 008a5f01  8bf1                 mov esi, ecx
// 008a5f03  e840e2f4ff           call 0x7f4148
// 008a5f08  8d4e68               lea ecx, [esi + 0x68]
// 008a5f0b  c7064c5da000         mov dword ptr [esi], 0xa05d4c
// 008a5f11  ff1574de9800         call dword ptr [0x98de74]
// 008a5f17  33c0                 xor eax, eax
// 008a5f19  894678               mov dword ptr [esi + 0x78], eax
// 008a5f1c  c7467498019b00       mov dword ptr [esi + 0x74], 0x9b0198
// 008a5f23  894664               mov dword ptr [esi + 0x64], eax
// 008a5f26  89466c               mov dword ptr [esi + 0x6c], eax
// 008a5f29  c74670ffffffff       mov dword ptr [esi + 0x70], 0xffffffff
// 008a5f30  8bc6                 mov eax, esi
// 008a5f32  5e                   pop esi
// 008a5f33  c3                   ret 
// copied from an identical function in another client (function ??0CXTPReportTip@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportTip.cpp