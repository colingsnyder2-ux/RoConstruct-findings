// roc 2009-12 00865ea0  unit: CXTPPropertyGridItemConstraints  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00865ea0
//
// 00865ea0  8bc1                 mov eax, ecx
// 00865ea2  33c9                 xor ecx, ecx
// 00865ea4  c700e0e99f00         mov dword ptr [eax], 0x9fe9e0
// 00865eaa  894804               mov dword ptr [eax + 4], ecx
// 00865ead  894810               mov dword ptr [eax + 0x10], ecx
// 00865eb0  89480c               mov dword ptr [eax + 0xc], ecx
// 00865eb3  894808               mov dword ptr [eax + 8], ecx
// 00865eb6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
