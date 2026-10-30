// roc 2009-12 00814720  unit: CRobloxControlColorSelector  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00814720
//
// 00814720  8bc1                 mov eax, ecx
// 00814722  33c9                 xor ecx, ecx
// 00814724  c7007c3d9f00         mov dword ptr [eax], 0x9f3d7c
// 0081472a  894804               mov dword ptr [eax + 4], ecx
// 0081472d  894810               mov dword ptr [eax + 0x10], ecx
// 00814730  89480c               mov dword ptr [eax + 0xc], ecx
// 00814733  894808               mov dword ptr [eax + 8], ecx
// 00814736  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
