// roc 2009-12 008b4de0  unit: CXTPDockingPaneSplitterContainer  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b4de0
//
// 008b4de0  56                   push esi
// 008b4de1  8bf1                 mov esi, ecx
// 008b4de3  837e1000             cmp dword ptr [esi + 0x10], 0
// 008b4de7  740f                 je 0x8b4df8
// 008b4de9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008b4dec  8b01                 mov eax, dword ptr [ecx]
// 008b4dee  8b542408             mov edx, dword ptr [esp + 8]
// 008b4df2  8b4034               mov eax, dword ptr [eax + 0x34]
// 008b4df5  52                   push edx
// 008b4df6  ffd0                 call eax
// 008b4df8  8d4ee0               lea ecx, [esi - 0x20]
// 008b4dfb  e850fdffff           call 0x8b4b50
// 008b4e00  8d46e0               lea eax, [esi - 0x20]
// 008b4e03  f7d8                 neg eax
// 008b4e05  1bc0                 sbb eax, eax
// 008b4e07  23c6                 and eax, esi
// 008b4e09  6a01                 push 1
// 008b4e0b  50                   push eax
// 008b4e0c  8bce                 mov ecx, esi
// 008b4e0e  e82dbaffff           call 0x8b0840
// 008b4e13  8bc8                 mov ecx, eax
// 008b4e15  e8b644f8ff           call 0x8392d0
// 008b4e1a  5e                   pop esi
// 008b4e1b  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnChildContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
