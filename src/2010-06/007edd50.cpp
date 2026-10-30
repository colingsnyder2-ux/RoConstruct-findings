// roc 2010-06 007edd50  unit: CXTPDockingPaneManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007edd50
//
// 007edd50  8b442404             mov eax, dword ptr [esp + 4]
// 007edd54  56                   push esi
// 007edd55  8bf1                 mov esi, ecx
// 007edd57  85c0                 test eax, eax
// 007edd59  744b                 je 0x7edda6
// 007edd5b  83781800             cmp dword ptr [eax + 0x18], 0
// 007edd5f  750c                 jne 0x7edd6d
// 007edd61  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 007edd68  7403                 je 0x7edd6d
// 007edd6a  8b4010               mov eax, dword ptr [eax + 0x10]
// 007edd6d  85c0                 test eax, eax
// 007edd6f  7435                 je 0x7edda6
// 007edd71  8b4810               mov ecx, dword ptr [eax + 0x10]
// 007edd74  85c9                 test ecx, ecx
// 007edd76  742e                 je 0x7edda6
// 007edd78  83791805             cmp dword ptr [ecx + 0x18], 5
// 007edd7c  7511                 jne 0x7edd8f
// 007edd7e  83c1ac               add ecx, -0x54
// 007edd81  5e                   pop esi
// 007edd82  c744240400000000     mov dword ptr [esp + 4], 0
// 007edd8a  e9c1130700           jmp 0x85f150
// 007edd8f  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 007edd95  50                   push eax
// 007edd96  e8b5ea0600           call 0x85c850
// 007edd9b  6a01                 push 1
// 007edd9d  6a00                 push 0
// 007edd9f  8bce                 mov ecx, esi
// 007edda1  e88af6ffff           call 0x7ed430
// 007edda6  5e                   pop esi
// 007edda7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?HidePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
