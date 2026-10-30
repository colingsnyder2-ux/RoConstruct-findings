// roc 2009-12 0081b1e0  unit: CInstanceRecord::CNameItem  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081b1e0
//
// 0081b1e0  8bc1                 mov eax, ecx
// 0081b1e2  33c9                 xor ecx, ecx
// 0081b1e4  c700b8499f00         mov dword ptr [eax], 0x9f49b8
// 0081b1ea  894804               mov dword ptr [eax + 4], ecx
// 0081b1ed  894810               mov dword ptr [eax + 0x10], ecx
// 0081b1f0  89480c               mov dword ptr [eax + 0xc], ecx
// 0081b1f3  894808               mov dword ptr [eax + 8], ecx
// 0081b1f6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
