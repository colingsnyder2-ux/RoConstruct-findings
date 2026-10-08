// from server: 100% by auto
// roc 2007-08 006e4aa0  unit: CXTPDockingPaneSplitterContainer  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e4aa0
//
// 006e4aa0  56                   push esi
// 006e4aa1  57                   push edi
// 006e4aa2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e4aa6  8b4714               mov eax, dword ptr [edi + 0x14]
// 006e4aa9  8bf1                 mov esi, ecx
// 006e4aab  8d4ee0               lea ecx, [esi - 0x20]
// 006e4aae  894614               mov dword ptr [esi + 0x14], eax
// 006e4ab1  e81afdffff           call 0x6e47d0
// 006e4ab6  8bce                 mov ecx, esi
// 006e4ab8  e8a39af7ff           call 0x65e560
// 006e4abd  85c0                 test eax, eax
// 006e4abf  8944240c             mov dword ptr [esp + 0xc], eax
// 006e4ac3  741d                 je 0x6e4ae2
// 006e4ac5  8d4c240c             lea ecx, [esp + 0xc]
// 006e4ac9  51                   push ecx
// 006e4aca  8bce                 mov ecx, esi
// 006e4acc  e88faf0300           call 0x71fa60
// 006e4ad1  8b10                 mov edx, dword ptr [eax]
// 006e4ad3  8bc8                 mov ecx, eax
// 006e4ad5  8b423c               mov eax, dword ptr [edx + 0x3c]
// 006e4ad8  57                   push edi
// 006e4ad9  ffd0                 call eax
// 006e4adb  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006e4ae0  75e3                 jne 0x6e4ac5
// 006e4ae2  5f                   pop edi
// 006e4ae3  5e                   pop esi
// 006e4ae4  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnParentContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
