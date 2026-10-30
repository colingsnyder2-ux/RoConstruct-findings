// from server: 100% by auto
// roc 2008-06 00760610  unit: CXTPDockingPaneTabbedContainer  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00760610
//
// 00760610  56                   push esi
// 00760611  8bf1                 mov esi, ecx
// 00760613  e87808f4ff           call 0x6a0e90
// 00760618  33c0                 xor eax, eax
// 0076061a  894664               mov dword ptr [esi + 0x64], eax
// 0076061d  894658               mov dword ptr [esi + 0x58], eax
// 00760620  89465c               mov dword ptr [esi + 0x5c], eax
// 00760623  894654               mov dword ptr [esi + 0x54], eax
// 00760626  894660               mov dword ptr [esi + 0x60], eax
// 00760629  894668               mov dword ptr [esi + 0x68], eax
// 0076062c  c706dc638600         mov dword ptr [esi], 0x8663dc
// 00760632  8bc6                 mov eax, esi
// 00760634  5e                   pop esi
// 00760635  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ??0CXTPDockingPaneSplitterWnd@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
