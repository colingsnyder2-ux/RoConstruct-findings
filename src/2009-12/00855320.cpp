// roc 2009-12 00855320  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00855320
//
// 00855320  8bc1                 mov eax, ecx
// 00855322  33c9                 xor ecx, ecx
// 00855324  c7002ccc9f00         mov dword ptr [eax], 0x9fcc2c
// 0085532a  894804               mov dword ptr [eax + 4], ecx
// 0085532d  894810               mov dword ptr [eax + 0x10], ecx
// 00855330  89480c               mov dword ptr [eax + 0xc], ecx
// 00855333  894808               mov dword ptr [eax + 8], ecx
// 00855336  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
