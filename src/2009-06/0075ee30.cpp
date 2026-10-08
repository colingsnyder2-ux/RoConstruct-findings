// roc 2009-06 0075ee30  unit: CXTPDockingPaneManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0075ee30
//
// 0075ee30  8b442404             mov eax, dword ptr [esp + 4]
// 0075ee34  56                   push esi
// 0075ee35  8bf1                 mov esi, ecx
// 0075ee37  85c0                 test eax, eax
// 0075ee39  744b                 je 0x75ee86
// 0075ee3b  83781800             cmp dword ptr [eax + 0x18], 0
// 0075ee3f  750c                 jne 0x75ee4d
// 0075ee41  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 0075ee48  7403                 je 0x75ee4d
// 0075ee4a  8b4010               mov eax, dword ptr [eax + 0x10]
// 0075ee4d  85c0                 test eax, eax
// 0075ee4f  7435                 je 0x75ee86
// 0075ee51  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0075ee54  85c9                 test ecx, ecx
// 0075ee56  742e                 je 0x75ee86
// 0075ee58  83791805             cmp dword ptr [ecx + 0x18], 5
// 0075ee5c  7511                 jne 0x75ee6f
// 0075ee5e  83c1ac               add ecx, -0x54
// 0075ee61  5e                   pop esi
// 0075ee62  c744240400000000     mov dword ptr [esp + 4], 0
// 0075ee6a  e991130700           jmp 0x7d0200
// 0075ee6f  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0075ee75  50                   push eax
// 0075ee76  e885ea0600           call 0x7cd900
// 0075ee7b  6a01                 push 1
// 0075ee7d  6a00                 push 0
// 0075ee7f  8bce                 mov ecx, esi
// 0075ee81  e88af6ffff           call 0x75e510
// 0075ee86  5e                   pop esi
// 0075ee87  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?HidePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
