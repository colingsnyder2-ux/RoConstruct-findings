// roc 2012-06 00a3d2d0  unit: CXTPDockingPaneTabbedContainer  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3d2d0
//
// 00a3d2d0  56                   push esi
// 00a3d2d1  8bf1                 mov esi, ecx
// 00a3d2d3  e8ee56f4ff           call 0x9829c6
// 00a3d2d8  33c0                 xor eax, eax
// 00a3d2da  894664               mov dword ptr [esi + 0x64], eax
// 00a3d2dd  894658               mov dword ptr [esi + 0x58], eax
// 00a3d2e0  89465c               mov dword ptr [esi + 0x5c], eax
// 00a3d2e3  894654               mov dword ptr [esi + 0x54], eax
// 00a3d2e6  894660               mov dword ptr [esi + 0x60], eax
// 00a3d2e9  894668               mov dword ptr [esi + 0x68], eax
// 00a3d2ec  c706141cc200         mov dword ptr [esi], 0xc21c14
// 00a3d2f2  8bc6                 mov eax, esi
// 00a3d2f4  5e                   pop esi
// 00a3d2f5  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ??0CXTPDockingPaneSplitterWnd@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
