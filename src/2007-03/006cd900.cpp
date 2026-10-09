// roc 2007-03 006cd900  unit: seg_006c0000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006cd900
//
// 006cd900  56                   push esi
// 006cd901  8bf1                 mov esi, ecx
// 006cd903  837e1000             cmp dword ptr [esi + 0x10], 0
// 006cd907  740f                 je 0x6cd918
// 006cd909  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006cd90c  8b01                 mov eax, dword ptr [ecx]
// 006cd90e  8b542408             mov edx, dword ptr [esp + 8]
// 006cd912  8b4034               mov eax, dword ptr [eax + 0x34]
// 006cd915  52                   push edx
// 006cd916  ffd0                 call eax
// 006cd918  8d4ee0               lea ecx, [esi - 0x20]
// 006cd91b  e850fdffff           call 0x6cd670
// 006cd920  8d46e0               lea eax, [esi - 0x20]
// 006cd923  f7d8                 neg eax
// 006cd925  1bc0                 sbb eax, eax
// 006cd927  23c6                 and eax, esi
// 006cd929  6a01                 push 1
// 006cd92b  50                   push eax
// 006cd92c  8bce                 mov ecx, esi
// 006cd92e  e8edbbffff           call 0x6c9520
// 006cd933  8bc8                 mov ecx, eax
// 006cd935  e8c6d3f8ff           call 0x65ad00
// 006cd93a  5e                   pop esi
// 006cd93b  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnChildContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
