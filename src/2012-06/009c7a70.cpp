// roc 2012-06 009c7a70  unit: CXTPDockingPaneManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c7a70
//
// 009c7a70  8b442404             mov eax, dword ptr [esp + 4]
// 009c7a74  56                   push esi
// 009c7a75  8bf1                 mov esi, ecx
// 009c7a77  85c0                 test eax, eax
// 009c7a79  744b                 je 0x9c7ac6
// 009c7a7b  83781800             cmp dword ptr [eax + 0x18], 0
// 009c7a7f  750c                 jne 0x9c7a8d
// 009c7a81  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 009c7a88  7403                 je 0x9c7a8d
// 009c7a8a  8b4010               mov eax, dword ptr [eax + 0x10]
// 009c7a8d  85c0                 test eax, eax
// 009c7a8f  7435                 je 0x9c7ac6
// 009c7a91  8b4810               mov ecx, dword ptr [eax + 0x10]
// 009c7a94  85c9                 test ecx, ecx
// 009c7a96  742e                 je 0x9c7ac6
// 009c7a98  83791805             cmp dword ptr [ecx + 0x18], 5
// 009c7a9c  7511                 jne 0x9c7aaf
// 009c7a9e  83c1ac               add ecx, -0x54
// 009c7aa1  5e                   pop esi
// 009c7aa2  c744240400000000     mov dword ptr [esp + 4], 0
// 009c7aaa  e961cd0600           jmp 0xa34810
// 009c7aaf  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 009c7ab5  50                   push eax
// 009c7ab6  e875a40600           call 0xa31f30
// 009c7abb  6a01                 push 1
// 009c7abd  6a00                 push 0
// 009c7abf  8bce                 mov ecx, esi
// 009c7ac1  e88af6ffff           call 0x9c7150
// 009c7ac6  5e                   pop esi
// 009c7ac7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?HidePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
