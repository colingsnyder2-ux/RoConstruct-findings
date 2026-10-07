// roc 2007-08 006e4a60  unit: CXTPDockingPaneSplitterContainer  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e4a60
//
// 006e4a60  56                   push esi
// 006e4a61  8bf1                 mov esi, ecx
// 006e4a63  837e1000             cmp dword ptr [esi + 0x10], 0
// 006e4a67  740f                 je 0x6e4a78
// 006e4a69  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006e4a6c  8b01                 mov eax, dword ptr [ecx]
// 006e4a6e  8b542408             mov edx, dword ptr [esp + 8]
// 006e4a72  8b4034               mov eax, dword ptr [eax + 0x34]
// 006e4a75  52                   push edx
// 006e4a76  ffd0                 call eax
// 006e4a78  8d4ee0               lea ecx, [esi - 0x20]
// 006e4a7b  e850fdffff           call 0x6e47d0
// 006e4a80  8d46e0               lea eax, [esi - 0x20]
// 006e4a83  f7d8                 neg eax
// 006e4a85  1bc0                 sbb eax, eax
// 006e4a87  23c6                 and eax, esi
// 006e4a89  6a01                 push 1
// 006e4a8b  50                   push eax
// 006e4a8c  8bce                 mov ecx, esi
// 006e4a8e  e8adbaffff           call 0x6e0540
// 006e4a93  8bc8                 mov ecx, eax
// 006e4a95  e886a2f8ff           call 0x66ed20
// 006e4a9a  5e                   pop esi
// 006e4a9b  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnChildContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
