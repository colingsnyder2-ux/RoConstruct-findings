// roc 2009-12 00877c70  unit: CXTPControlGalleryPaintManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00877c70
//
// 00877c70  8bc1                 mov eax, ecx
// 00877c72  33c9                 xor ecx, ecx
// 00877c74  c7003019a000         mov dword ptr [eax], 0xa01930
// 00877c7a  894804               mov dword ptr [eax + 4], ecx
// 00877c7d  894810               mov dword ptr [eax + 0x10], ecx
// 00877c80  89480c               mov dword ptr [eax + 0xc], ecx
// 00877c83  894808               mov dword ptr [eax + 8], ecx
// 00877c86  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
