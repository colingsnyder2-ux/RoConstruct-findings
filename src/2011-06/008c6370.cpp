// roc 2011-06 008c6370  unit: CXTPDockingPaneSplitterContainer  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6370
//
// 008c6370  56                   push esi
// 008c6371  8bf1                 mov esi, ecx
// 008c6373  837e1000             cmp dword ptr [esi + 0x10], 0
// 008c6377  740f                 je 0x8c6388
// 008c6379  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 008c637c  8b01                 mov eax, dword ptr [ecx]
// 008c637e  8b542408             mov edx, dword ptr [esp + 8]
// 008c6382  8b4034               mov eax, dword ptr [eax + 0x34]
// 008c6385  52                   push edx
// 008c6386  ffd0                 call eax
// 008c6388  8d4ee0               lea ecx, [esi - 0x20]
// 008c638b  e850fdffff           call 0x8c60e0
// 008c6390  8d46e0               lea eax, [esi - 0x20]
// 008c6393  f7d8                 neg eax
// 008c6395  1bc0                 sbb eax, eax
// 008c6397  23c6                 and eax, esi
// 008c6399  6a01                 push 1
// 008c639b  50                   push eax
// 008c639c  8bce                 mov ecx, esi
// 008c639e  e8bdb9ffff           call 0x8c1d60
// 008c63a3  8bc8                 mov ecx, eax
// 008c63a5  e8d688f8ff           call 0x84ec80
// 008c63aa  5e                   pop esi
// 008c63ab  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneSplitterContainer.cpp (function ?OnChildContainerChanged@CXTPDockingPaneSplitterContainer@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneSplitterContainer.cpp
