// roc 2012-06 00a3e740  unit: CXTPDockingPaneSplitterContainer  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3e740
//
// 00a3e740  56                   push esi
// 00a3e741  8bf1                 mov esi, ecx
// 00a3e743  837e1000             cmp dword ptr [esi + 0x10], 0
// 00a3e747  740f                 je 0xa3e758
// 00a3e749  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00a3e74c  8b01                 mov eax, dword ptr [ecx]
// 00a3e74e  8b542408             mov edx, dword ptr [esp + 8]
// 00a3e752  8b4034               mov eax, dword ptr [eax + 0x34]
// 00a3e755  52                   push edx
// 00a3e756  ffd0                 call eax
// 00a3e758  8d4ee0               lea ecx, [esi - 0x20]
// 00a3e75b  e850fdffff           call 0xa3e4b0
// 00a3e760  8d46e0               lea eax, [esi - 0x20]
// 00a3e763  f7d8                 neg eax
// 00a3e765  1bc0                 sbb eax, eax
// 00a3e767  23c6                 and eax, esi
// 00a3e769  6a01                 push 1
// 00a3e76b  50                   push eax
// 00a3e76c  8bce                 mov ecx, esi
// 00a3e76e  e8fdb9ffff           call 0xa3a170
// 00a3e773  8bc8                 mov ecx, eax
// 00a3e775  e8d689f8ff           call 0x9c7150
// 00a3e77a  5e                   pop esi
// 00a3e77b  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnChildContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
