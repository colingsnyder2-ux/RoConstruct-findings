// roc 2008-06 006e6510  unit: CXTPDockingPaneManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e6510
//
// 006e6510  8b442404             mov eax, dword ptr [esp + 4]
// 006e6514  56                   push esi
// 006e6515  8bf1                 mov esi, ecx
// 006e6517  85c0                 test eax, eax
// 006e6519  744b                 je 0x6e6566
// 006e651b  83781800             cmp dword ptr [eax + 0x18], 0
// 006e651f  750c                 jne 0x6e652d
// 006e6521  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 006e6528  7403                 je 0x6e652d
// 006e652a  8b4010               mov eax, dword ptr [eax + 0x10]
// 006e652d  85c0                 test eax, eax
// 006e652f  7435                 je 0x6e6566
// 006e6531  8b4810               mov ecx, dword ptr [eax + 0x10]
// 006e6534  85c9                 test ecx, ecx
// 006e6536  742e                 je 0x6e6566
// 006e6538  83791805             cmp dword ptr [ecx + 0x18], 5
// 006e653c  7511                 jne 0x6e654f
// 006e653e  83c1ac               add ecx, -0x54
// 006e6541  5e                   pop esi
// 006e6542  c744240400000000     mov dword ptr [esp + 4], 0
// 006e654a  e9d1160700           jmp 0x757c20
// 006e654f  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 006e6555  50                   push eax
// 006e6556  e8c5ed0600           call 0x755320
// 006e655b  6a01                 push 1
// 006e655d  6a00                 push 0
// 006e655f  8bce                 mov ecx, esi
// 006e6561  e88af6ffff           call 0x6e5bf0
// 006e6566  5e                   pop esi
// 006e6567  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?HidePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
