// roc 2008-06 00757e20  unit: CXTPDockingPaneAutoHidePanel  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00757e20
//
// 00757e20  56                   push esi
// 00757e21  8bf1                 mov esi, ecx
// 00757e23  837e5400             cmp dword ptr [esi + 0x54], 0
// 00757e27  744b                 je 0x757e74
// 00757e29  833db899960000       cmp dword ptr [0x9699b8], 0
// 00757e30  752e                 jne 0x757e60
// 00757e32  8d46ac               lea eax, [esi - 0x54]
// 00757e35  f7d8                 neg eax
// 00757e37  1bc0                 sbb eax, eax
// 00757e39  23c6                 and eax, esi
// 00757e3b  6a00                 push 0
// 00757e3d  50                   push eax
// 00757e3e  e85d560000           call 0x75d4a0
// 00757e43  8bc8                 mov ecx, eax
// 00757e45  e8a6ddf8ff           call 0x6e5bf0
// 00757e4a  8b4e54               mov ecx, dword ptr [esi + 0x54]
// 00757e4d  8b01                 mov eax, dword ptr [ecx]
// 00757e4f  5e                   pop esi
// 00757e50  c744240401000000     mov dword ptr [esp + 4], 1
// 00757e58  8b9058010000         mov edx, dword ptr [eax + 0x158]
// 00757e5e  ffe2                 jmp edx
// 00757e60  e83b560000           call 0x75d4a0
// 00757e65  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 00757e6b  50                   push eax
// 00757e6c  8d4eac               lea ecx, [esi - 0x54]
// 00757e6f  e8acfdffff           call 0x757c20
// 00757e74  5e                   pop esi
// 00757e75  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnChildContainerChanged@CXTPDockingPaneAutoHidePanel@@MAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
