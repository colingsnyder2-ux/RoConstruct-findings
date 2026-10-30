// roc 2009-12 008ac800  unit: CXTPDockingPaneWindowSelect  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ac800
//
// 008ac800  8bc1                 mov eax, ecx
// 008ac802  33c9                 xor ecx, ecx
// 008ac804  c7002c6ba000         mov dword ptr [eax], 0xa06b2c
// 008ac80a  894804               mov dword ptr [eax + 4], ecx
// 008ac80d  894810               mov dword ptr [eax + 0x10], ecx
// 008ac810  89480c               mov dword ptr [eax + 0xc], ecx
// 008ac813  894808               mov dword ptr [eax + 8], ecx
// 008ac816  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
