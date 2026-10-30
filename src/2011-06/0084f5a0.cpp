// roc 2011-06 0084f5a0  unit: CXTPDockingPaneManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0084f5a0
//
// 0084f5a0  8b442404             mov eax, dword ptr [esp + 4]
// 0084f5a4  56                   push esi
// 0084f5a5  8bf1                 mov esi, ecx
// 0084f5a7  85c0                 test eax, eax
// 0084f5a9  744b                 je 0x84f5f6
// 0084f5ab  83781800             cmp dword ptr [eax + 0x18], 0
// 0084f5af  750c                 jne 0x84f5bd
// 0084f5b1  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 0084f5b8  7403                 je 0x84f5bd
// 0084f5ba  8b4010               mov eax, dword ptr [eax + 0x10]
// 0084f5bd  85c0                 test eax, eax
// 0084f5bf  7435                 je 0x84f5f6
// 0084f5c1  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0084f5c4  85c9                 test ecx, ecx
// 0084f5c6  742e                 je 0x84f5f6
// 0084f5c8  83791805             cmp dword ptr [ecx + 0x18], 5
// 0084f5cc  7511                 jne 0x84f5df
// 0084f5ce  83c1ac               add ecx, -0x54
// 0084f5d1  5e                   pop esi
// 0084f5d2  c744240400000000     mov dword ptr [esp + 4], 0
// 0084f5da  e931cd0600           jmp 0x8bc310
// 0084f5df  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0084f5e5  50                   push eax
// 0084f5e6  e825a40600           call 0x8b9a10
// 0084f5eb  6a01                 push 1
// 0084f5ed  6a00                 push 0
// 0084f5ef  8bce                 mov ecx, esi
// 0084f5f1  e88af6ffff           call 0x84ec80
// 0084f5f6  5e                   pop esi
// 0084f5f7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?HidePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
