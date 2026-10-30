// roc 2010-06 00868ed0  unit: CXTPDockingPaneSplitterContainer  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00868ed0
//
// 00868ed0  56                   push esi
// 00868ed1  8bf1                 mov esi, ecx
// 00868ed3  837e1000             cmp dword ptr [esi + 0x10], 0
// 00868ed7  740f                 je 0x868ee8
// 00868ed9  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 00868edc  8b01                 mov eax, dword ptr [ecx]
// 00868ede  8b542408             mov edx, dword ptr [esp + 8]
// 00868ee2  8b4034               mov eax, dword ptr [eax + 0x34]
// 00868ee5  52                   push edx
// 00868ee6  ffd0                 call eax
// 00868ee8  8d4ee0               lea ecx, [esi - 0x20]
// 00868eeb  e850fdffff           call 0x868c40
// 00868ef0  8d46e0               lea eax, [esi - 0x20]
// 00868ef3  f7d8                 neg eax
// 00868ef5  1bc0                 sbb eax, eax
// 00868ef7  23c6                 and eax, esi
// 00868ef9  6a01                 push 1
// 00868efb  50                   push eax
// 00868efc  8bce                 mov ecx, esi
// 00868efe  e80dbaffff           call 0x864910
// 00868f03  8bc8                 mov ecx, eax
// 00868f05  e82645f8ff           call 0x7ed430
// 00868f0a  5e                   pop esi
// 00868f0b  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnChildContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
