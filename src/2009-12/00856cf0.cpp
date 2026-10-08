// roc 2009-12 00856cf0  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856cf0
//
// 00856cf0  8bc1                 mov eax, ecx
// 00856cf2  33c9                 xor ecx, ecx
// 00856cf4  c7005ccc9f00         mov dword ptr [eax], 0x9fcc5c
// 00856cfa  894804               mov dword ptr [eax + 4], ecx
// 00856cfd  894810               mov dword ptr [eax + 0x10], ecx
// 00856d00  89480c               mov dword ptr [eax + 0xc], ecx
// 00856d03  894808               mov dword ptr [eax + 8], ecx
// 00856d06  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
