// from server: 100% by auto
// roc 2007-08 0066f660  unit: CXTPDockingPaneManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066f660
//
// 0066f660  8b442404             mov eax, dword ptr [esp + 4]
// 0066f664  85c0                 test eax, eax
// 0066f666  56                   push esi
// 0066f667  8bf1                 mov esi, ecx
// 0066f669  744b                 je 0x66f6b6
// 0066f66b  83781800             cmp dword ptr [eax + 0x18], 0
// 0066f66f  750c                 jne 0x66f67d
// 0066f671  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 0066f678  7403                 je 0x66f67d
// 0066f67a  8b4010               mov eax, dword ptr [eax + 0x10]
// 0066f67d  85c0                 test eax, eax
// 0066f67f  7435                 je 0x66f6b6
// 0066f681  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0066f684  85c9                 test ecx, ecx
// 0066f686  742e                 je 0x66f6b6
// 0066f688  83791805             cmp dword ptr [ecx + 0x18], 5
// 0066f68c  7511                 jne 0x66f69f
// 0066f68e  5e                   pop esi
// 0066f68f  c744240400000000     mov dword ptr [esp + 4], 0
// 0066f697  83c1ac               add ecx, -0x54
// 0066f69a  e9e1b70600           jmp 0x6dae80
// 0066f69f  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 0066f6a5  50                   push eax
// 0066f6a6  e8158e0600           call 0x6d84c0
// 0066f6ab  6a01                 push 1
// 0066f6ad  6a00                 push 0
// 0066f6af  8bce                 mov ecx, esi
// 0066f6b1  e86af6ffff           call 0x66ed20
// 0066f6b6  5e                   pop esi
// 0066f6b7  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneManager.cpp (function ?HidePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneManager.cpp
