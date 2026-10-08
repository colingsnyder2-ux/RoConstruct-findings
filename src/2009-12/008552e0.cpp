// roc 2009-12 008552e0  unit: CXTPTabClientWnd  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008552e0
//
// 008552e0  8bc1                 mov eax, ecx
// 008552e2  33c9                 xor ecx, ecx
// 008552e4  c70014cc9f00         mov dword ptr [eax], 0x9fcc14
// 008552ea  894804               mov dword ptr [eax + 4], ecx
// 008552ed  894810               mov dword ptr [eax + 0x10], ecx
// 008552f0  89480c               mov dword ptr [eax + 0xc], ecx
// 008552f3  894808               mov dword ptr [eax + 8], ecx
// 008552f6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
