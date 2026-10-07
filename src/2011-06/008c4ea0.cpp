// roc 2011-06 008c4ea0  unit: CXTPDockingPaneTabbedContainer  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c4ea0
//
// 008c4ea0  56                   push esi
// 008c4ea1  8bf1                 mov esi, ecx
// 008c4ea3  e89e5af4ff           call 0x80a946
// 008c4ea8  33c0                 xor eax, eax
// 008c4eaa  894664               mov dword ptr [esi + 0x64], eax
// 008c4ead  894658               mov dword ptr [esi + 0x58], eax
// 008c4eb0  89465c               mov dword ptr [esi + 0x5c], eax
// 008c4eb3  894654               mov dword ptr [esi + 0x54], eax
// 008c4eb6  894660               mov dword ptr [esi + 0x60], eax
// 008c4eb9  894668               mov dword ptr [esi + 0x68], eax
// 008c4ebc  c7067c65ad00         mov dword ptr [esi], 0xad657c
// 008c4ec2  8bc6                 mov eax, esi
// 008c4ec4  5e                   pop esi
// 008c4ec5  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ??0CXTPDockingPaneSplitterWnd@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
