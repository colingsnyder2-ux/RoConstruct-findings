// roc 2009-12 0085b0f0  unit: CXTPStatusBar  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085b0f0
//
// 0085b0f0  8bc1                 mov eax, ecx
// 0085b0f2  33c9                 xor ecx, ecx
// 0085b0f4  c700fcd29f00         mov dword ptr [eax], 0x9fd2fc
// 0085b0fa  894804               mov dword ptr [eax + 4], ecx
// 0085b0fd  894810               mov dword ptr [eax + 0x10], ecx
// 0085b100  89480c               mov dword ptr [eax + 0xc], ecx
// 0085b103  894808               mov dword ptr [eax + 8], ecx
// 0085b106  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
