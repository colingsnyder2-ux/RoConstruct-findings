// roc 2009-12 008ac840  unit: CXTPDockingPaneWindowSelect  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac840
//
// 008ac840  8bc1                 mov eax, ecx
// 008ac842  33c9                 xor ecx, ecx
// 008ac844  c700446ba000         mov dword ptr [eax], 0xa06b44
// 008ac84a  894804               mov dword ptr [eax + 4], ecx
// 008ac84d  894810               mov dword ptr [eax + 0x10], ecx
// 008ac850  89480c               mov dword ptr [eax + 0xc], ecx
// 008ac853  894808               mov dword ptr [eax + 8], ecx
// 008ac856  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
