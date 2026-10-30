// roc 2009-12 0082d860  unit: VCXTPReportRows::?$CXTPHeapObjectT  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0082d860
//
// 0082d860  8bc1                 mov eax, ecx
// 0082d862  33c9                 xor ecx, ecx
// 0082d864  c70058629f00         mov dword ptr [eax], 0x9f6258
// 0082d86a  894804               mov dword ptr [eax + 4], ecx
// 0082d86d  894810               mov dword ptr [eax + 0x10], ecx
// 0082d870  89480c               mov dword ptr [eax + 0xc], ecx
// 0082d873  894808               mov dword ptr [eax + 8], ecx
// 0082d876  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
