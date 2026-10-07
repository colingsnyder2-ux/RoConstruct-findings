// roc 2007-08 006e3530  unit: CXTPDockingPaneTabbedContainer  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e3530
//
// 006e3530  56                   push esi
// 006e3531  8bf1                 mov esi, ecx
// 006e3533  e8a2d0f4ff           call 0x6305da
// 006e3538  33c0                 xor eax, eax
// 006e353a  894664               mov dword ptr [esi + 0x64], eax
// 006e353d  894658               mov dword ptr [esi + 0x58], eax
// 006e3540  89465c               mov dword ptr [esi + 0x5c], eax
// 006e3543  894654               mov dword ptr [esi + 0x54], eax
// 006e3546  894660               mov dword ptr [esi + 0x60], eax
// 006e3549  894668               mov dword ptr [esi + 0x68], eax
// 006e354c  c7061ca17d00         mov dword ptr [esi], 0x7da11c
// 006e3552  8bc6                 mov eax, esi
// 006e3554  5e                   pop esi
// 006e3555  c3                   ret 
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ??0CXTPDockingPaneSplitterWnd@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
