// roc 2009-12 0084f220  unit: CXTPPropertyGrid  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0084f220
//
// 0084f220  8bc1                 mov eax, ecx
// 0084f222  33c9                 xor ecx, ecx
// 0084f224  c700b0bf9f00         mov dword ptr [eax], 0x9fbfb0
// 0084f22a  894804               mov dword ptr [eax + 4], ecx
// 0084f22d  894810               mov dword ptr [eax + 0x10], ecx
// 0084f230  89480c               mov dword ptr [eax + 0xc], ecx
// 0084f233  894808               mov dword ptr [eax + 8], ecx
// 0084f236  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
