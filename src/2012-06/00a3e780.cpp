// roc 2012-06 00a3e780  unit: CXTPDockingPaneSplitterContainer  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a3e780
//
// 00a3e780  56                   push esi
// 00a3e781  57                   push edi
// 00a3e782  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00a3e786  8b4714               mov eax, dword ptr [edi + 0x14]
// 00a3e789  8bf1                 mov esi, ecx
// 00a3e78b  8d4ee0               lea ecx, [esi - 0x20]
// 00a3e78e  894614               mov dword ptr [esi + 0x14], eax
// 00a3e791  e81afdffff           call 0xa3e4b0
// 00a3e796  8bce                 mov ecx, esi
// 00a3e798  e8d3b7faff           call 0x9e9f70
// 00a3e79d  8944240c             mov dword ptr [esp + 0xc], eax
// 00a3e7a1  85c0                 test eax, eax
// 00a3e7a3  741d                 je 0xa3e7c2
// 00a3e7a5  8d4c240c             lea ecx, [esp + 0xc]
// 00a3e7a9  51                   push ecx
// 00a3e7aa  8bce                 mov ecx, esi
// 00a3e7ac  e89fa10300           call 0xa78950
// 00a3e7b1  8b10                 mov edx, dword ptr [eax]
// 00a3e7b3  8bc8                 mov ecx, eax
// 00a3e7b5  8b423c               mov eax, dword ptr [edx + 0x3c]
// 00a3e7b8  57                   push edi
// 00a3e7b9  ffd0                 call eax
// 00a3e7bb  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a3e7c0  75e3                 jne 0xa3e7a5
// 00a3e7c2  5f                   pop edi
// 00a3e7c3  5e                   pop esi
// 00a3e7c4  c20400               ret 4
// library xtp-15.2.1/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
