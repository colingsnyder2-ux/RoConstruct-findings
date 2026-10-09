// roc 2007-03 006cd940  unit: seg_006c0000  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cd940
//
// 006cd940  56                   push esi
// 006cd941  57                   push edi
// 006cd942  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006cd946  8b4714               mov eax, dword ptr [edi + 0x14]
// 006cd949  8bf1                 mov esi, ecx
// 006cd94b  8d4ee0               lea ecx, [esi - 0x20]
// 006cd94e  894614               mov dword ptr [esi + 0x14], eax
// 006cd951  e81afdffff           call 0x6cd670
// 006cd956  8bce                 mov ecx, esi
// 006cd958  e893ddf9ff           call 0x66b6f0
// 006cd95d  85c0                 test eax, eax
// 006cd95f  8944240c             mov dword ptr [esp + 0xc], eax
// 006cd963  741d                 je 0x6cd982
// 006cd965  8d4c240c             lea ecx, [esp + 0xc]
// 006cd969  51                   push ecx
// 006cd96a  8bce                 mov ecx, esi
// 006cd96c  e8af780400           call 0x715220
// 006cd971  8b10                 mov edx, dword ptr [eax]
// 006cd973  8bc8                 mov ecx, eax
// 006cd975  8b423c               mov eax, dword ptr [edx + 0x3c]
// 006cd978  57                   push edi
// 006cd979  ffd0                 call eax
// 006cd97b  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006cd980  75e3                 jne 0x6cd965
// 006cd982  5f                   pop edi
// 006cd983  5e                   pop esi
// 006cd984  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
