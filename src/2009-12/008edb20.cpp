// roc 2009-12 008edb20  unit: CXTPRibbonGroup  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008edb20
//
// 008edb20  8bc1                 mov eax, ecx
// 008edb22  33c9                 xor ecx, ecx
// 008edb24  c70054daa000         mov dword ptr [eax], 0xa0da54
// 008edb2a  894804               mov dword ptr [eax + 4], ecx
// 008edb2d  894810               mov dword ptr [eax + 0x10], ecx
// 008edb30  89480c               mov dword ptr [eax + 0xc], ecx
// 008edb33  894808               mov dword ptr [eax + 8], ecx
// 008edb36  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
