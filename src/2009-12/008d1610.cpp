// roc 2009-12 008d1610  unit: CXTPTabPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008d1610
//
// 008d1610  8bc1                 mov eax, ecx
// 008d1612  33c9                 xor ecx, ecx
// 008d1614  c70034aba000         mov dword ptr [eax], 0xa0ab34
// 008d161a  894804               mov dword ptr [eax + 4], ecx
// 008d161d  894810               mov dword ptr [eax + 0x10], ecx
// 008d1620  89480c               mov dword ptr [eax + 0xc], ecx
// 008d1623  894808               mov dword ptr [eax + 8], ecx
// 008d1626  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
