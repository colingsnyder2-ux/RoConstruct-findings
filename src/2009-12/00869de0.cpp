// roc 2009-12 00869de0  unit: CXTPPropertyGridView  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00869de0
//
// 00869de0  8bc1                 mov eax, ecx
// 00869de2  33c9                 xor ecx, ecx
// 00869de4  c70074f29f00         mov dword ptr [eax], 0x9ff274
// 00869dea  894804               mov dword ptr [eax + 4], ecx
// 00869ded  894810               mov dword ptr [eax + 0x10], ecx
// 00869df0  89480c               mov dword ptr [eax + 0xc], ecx
// 00869df3  894808               mov dword ptr [eax + 8], ecx
// 00869df6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
