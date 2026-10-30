// roc 2009-12 00839bf0  unit: CXTPDockingPaneManager  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00839bf0
//
// 00839bf0  8b442404             mov eax, dword ptr [esp + 4]
// 00839bf4  56                   push esi
// 00839bf5  8bf1                 mov esi, ecx
// 00839bf7  85c0                 test eax, eax
// 00839bf9  744b                 je 0x839c46
// 00839bfb  83781800             cmp dword ptr [eax + 0x18], 0
// 00839bff  750c                 jne 0x839c0d
// 00839c01  83beb800000000       cmp dword ptr [esi + 0xb8], 0
// 00839c08  7403                 je 0x839c0d
// 00839c0a  8b4010               mov eax, dword ptr [eax + 0x10]
// 00839c0d  85c0                 test eax, eax
// 00839c0f  7435                 je 0x839c46
// 00839c11  8b4810               mov ecx, dword ptr [eax + 0x10]
// 00839c14  85c9                 test ecx, ecx
// 00839c16  742e                 je 0x839c46
// 00839c18  83791805             cmp dword ptr [ecx + 0x18], 5
// 00839c1c  7511                 jne 0x839c2f
// 00839c1e  83c1ac               add ecx, -0x54
// 00839c21  5e                   pop esi
// 00839c22  c744240400000000     mov dword ptr [esp + 4], 0
// 00839c2a  e9f1130700           jmp 0x8ab020
// 00839c2f  8b8ed0000000         mov ecx, dword ptr [esi + 0xd0]
// 00839c35  50                   push eax
// 00839c36  e8d5ea0600           call 0x8a8710
// 00839c3b  6a01                 push 1
// 00839c3d  6a00                 push 0
// 00839c3f  8bce                 mov ecx, esi
// 00839c41  e88af6ffff           call 0x8392d0
// 00839c46  5e                   pop esi
// 00839c47  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneManager.cpp (function ?HidePane@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneManager.cpp
