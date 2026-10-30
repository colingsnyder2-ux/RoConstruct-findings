// roc 2009-12 00856cb0  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856cb0
//
// 00856cb0  8bc1                 mov eax, ecx
// 00856cb2  33c9                 xor ecx, ecx
// 00856cb4  c70044cc9f00         mov dword ptr [eax], 0x9fcc44
// 00856cba  894804               mov dword ptr [eax + 4], ecx
// 00856cbd  894810               mov dword ptr [eax + 0x10], ecx
// 00856cc0  89480c               mov dword ptr [eax + 0xc], ecx
// 00856cc3  894808               mov dword ptr [eax + 8], ecx
// 00856cc6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
