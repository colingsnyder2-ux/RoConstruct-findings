// roc 2011-06 008c63b0  unit: CXTPDockingPaneSplitterContainer  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c63b0
//
// 008c63b0  56                   push esi
// 008c63b1  57                   push edi
// 008c63b2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008c63b6  8b4714               mov eax, dword ptr [edi + 0x14]
// 008c63b9  8bf1                 mov esi, ecx
// 008c63bb  8d4ee0               lea ecx, [esi - 0x20]
// 008c63be  894614               mov dword ptr [esi + 0x14], eax
// 008c63c1  e81afdffff           call 0x8c60e0
// 008c63c6  8bce                 mov ecx, esi
// 008c63c8  e87368f9ff           call 0x85cc40
// 008c63cd  8944240c             mov dword ptr [esp + 0xc], eax
// 008c63d1  85c0                 test eax, eax
// 008c63d3  741d                 je 0x8c63f2
// 008c63d5  8d4c240c             lea ecx, [esp + 0xc]
// 008c63d9  51                   push ecx
// 008c63da  8bce                 mov ecx, esi
// 008c63dc  e84fa30300           call 0x900730
// 008c63e1  8b10                 mov edx, dword ptr [eax]
// 008c63e3  8bc8                 mov ecx, eax
// 008c63e5  8b423c               mov eax, dword ptr [edx + 0x3c]
// 008c63e8  57                   push edi
// 008c63e9  ffd0                 call eax
// 008c63eb  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008c63f0  75e3                 jne 0x8c63d5
// 008c63f2  5f                   pop edi
// 008c63f3  5e                   pop esi
// 008c63f4  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
