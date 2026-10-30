// roc 2009-12 008ceee0  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008ceee0
//
// 008ceee0  8bc1                 mov eax, ecx
// 008ceee2  33c9                 xor ecx, ecx
// 008ceee4  c70044a7a000         mov dword ptr [eax], 0xa0a744
// 008ceeea  894804               mov dword ptr [eax + 4], ecx
// 008ceeed  894810               mov dword ptr [eax + 0x10], ecx
// 008ceef0  89480c               mov dword ptr [eax + 0xc], ecx
// 008ceef3  894808               mov dword ptr [eax + 8], ecx
// 008ceef6  c3                   ret 
// library mfc-8.0/atlmfc\src\mfc\array_b.cpp (function ??0CByteArray@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/array_b.cpp
