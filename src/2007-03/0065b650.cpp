// roc 2007-03 0065b650  unit: seg_00650000  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065b650
//
// 0065b650  8b442404             mov eax, dword ptr [esp + 4]
// 0065b654  85c0                 test eax, eax
// 0065b656  56                   push esi
// 0065b657  8bf1                 mov esi, ecx
// 0065b659  744b                 je 0x65b6a6
// 0065b65b  83781800             cmp dword ptr [eax + 0x18], 0
// 0065b65f  750c                 jne 0x65b66d
// 0065b661  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 0065b668  7403                 je 0x65b66d
// 0065b66a  8b4010               mov eax, dword ptr [eax + 0x10]
// 0065b66d  85c0                 test eax, eax
// 0065b66f  7435                 je 0x65b6a6
// 0065b671  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0065b674  85c9                 test ecx, ecx
// 0065b676  742e                 je 0x65b6a6
// 0065b678  83791805             cmp dword ptr [ecx + 0x18], 5
// 0065b67c  7511                 jne 0x65b68f
// 0065b67e  5e                   pop esi
// 0065b67f  c744240400000000     mov dword ptr [esp + 4], 0
// 0065b687  83c1ac               add ecx, -0x54
// 0065b68a  e931890600           jmp 0x6c3fc0
// 0065b68f  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0065b695  50                   push eax
// 0065b696  e8b55f0600           call 0x6c1650
// 0065b69b  6a01                 push 1
// 0065b69d  6a00                 push 0
// 0065b69f  8bce                 mov ecx, esi
// 0065b6a1  e85af6ffff           call 0x65ad00
// 0065b6a6  5e                   pop esi
// 0065b6a7  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?HidePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
