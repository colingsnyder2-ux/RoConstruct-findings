// roc 2009-06 007da2b0  unit: CXTPDockingPaneSplitterContainer  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007da2b0
//
// 007da2b0  56                   push esi
// 007da2b1  8bf1                 mov esi, ecx
// 007da2b3  837e1000             cmp dword ptr [esi + 0x10], 0
// 007da2b7  740f                 je 0x7da2c8
// 007da2b9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 007da2bc  8b01                 mov eax, dword ptr [ecx]
// 007da2be  8b542408             mov edx, dword ptr [esp + 8]
// 007da2c2  8b4034               mov eax, dword ptr [eax + 0x34]
// 007da2c5  52                   push edx
// 007da2c6  ffd0                 call eax
// 007da2c8  8d4ee0               lea ecx, [esi - 0x20]
// 007da2cb  e850fdffff           call 0x7da020
// 007da2d0  8d46e0               lea eax, [esi - 0x20]
// 007da2d3  f7d8                 neg eax
// 007da2d5  1bc0                 sbb eax, eax
// 007da2d7  23c6                 and eax, esi
// 007da2d9  6a01                 push 1
// 007da2db  50                   push eax
// 007da2dc  8bce                 mov ecx, esi
// 007da2de  e81dbaffff           call 0x7d5d00
// 007da2e3  8bc8                 mov ecx, eax
// 007da2e5  e82642f8ff           call 0x75e510
// 007da2ea  5e                   pop esi
// 007da2eb  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnChildContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
