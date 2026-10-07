// roc 2008-06 00761af0  unit: CXTPDockingPaneSplitterContainer  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00761af0
//
// 00761af0  56                   push esi
// 00761af1  57                   push edi
// 00761af2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00761af6  8b4714               mov eax, dword ptr [edi + 0x14]
// 00761af9  8bf1                 mov esi, ecx
// 00761afb  8d4ee0               lea ecx, [esi - 0x20]
// 00761afe  894614               mov dword ptr [esi + 0x14], eax
// 00761b01  e81afdffff           call 0x761820
// 00761b06  8bce                 mov ecx, esi
// 00761b08  e863ec0300           call 0x7a0770
// 00761b0d  8944240c             mov dword ptr [esp + 0xc], eax
// 00761b11  85c0                 test eax, eax
// 00761b13  741d                 je 0x761b32
// 00761b15  8d4c240c             lea ecx, [esp + 0xc]
// 00761b19  51                   push ecx
// 00761b1a  8bce                 mov ecx, esi
// 00761b1c  e85fec0300           call 0x7a0780
// 00761b21  8b10                 mov edx, dword ptr [eax]
// 00761b23  8bc8                 mov ecx, eax
// 00761b25  8b423c               mov eax, dword ptr [edx + 0x3c]
// 00761b28  57                   push edi
// 00761b29  ffd0                 call eax
// 00761b2b  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00761b30  75e3                 jne 0x761b15
// 00761b32  5f                   pop edi
// 00761b33  5e                   pop esi
// 00761b34  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
