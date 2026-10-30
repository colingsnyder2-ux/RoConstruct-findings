// roc 2009-12 008ab280  unit: CXTPDockingPaneAutoHidePanel  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ab280
//
// 008ab280  8bc1                 mov eax, ecx
// 008ab282  33c9                 xor ecx, ecx
// 008ab284  c700e065a000         mov dword ptr [eax], 0xa065e0
// 008ab28a  894804               mov dword ptr [eax + 4], ecx
// 008ab28d  894810               mov dword ptr [eax + 0x10], ecx
// 008ab290  89480c               mov dword ptr [eax + 0xc], ecx
// 008ab293  894808               mov dword ptr [eax + 8], ecx
// 008ab296  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
