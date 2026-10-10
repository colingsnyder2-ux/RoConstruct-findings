// roc 2012-06 009c7060  unit: CXTPDockingPaneManager  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c7060
//
// 009c7060  56                   push esi
// 009c7061  8b742408             mov esi, dword ptr [esp + 8]
// 009c7065  85f6                 test esi, esi
// 009c7067  7450                 je 0x9c70b9
// 009c7069  837e1800             cmp dword ptr [esi + 0x18], 0
// 009c706d  750e                 jne 0x9c707d
// 009c706f  8d46e0               lea eax, [esi - 0x20]
// 009c7072  6a00                 push 0
// 009c7074  50                   push eax
// 009c7075  e846feffff           call 0x9c6ec0
// 009c707a  8b7610               mov esi, dword ptr [esi + 0x10]
// 009c707d  837e1801             cmp dword ptr [esi + 0x18], 1
// 009c7081  750a                 jne 0x9c708d
// 009c7083  8d4eac               lea ecx, [esi - 0x54]
// 009c7086  6a00                 push 0
// 009c7088  e873380700           call 0xa3a900
// 009c708d  8b06                 mov eax, dword ptr [esi]
// 009c708f  8b5018               mov edx, dword ptr [eax + 0x18]
// 009c7092  8bce                 mov ecx, esi
// 009c7094  ffd2                 call edx
// 009c7096  8bf0                 mov esi, eax
// 009c7098  56                   push esi
// 009c7099  e8520d0700           call 0xa37df0
// 009c709e  50                   push eax
// 009c709f  e842b4fbff           call 0x9824e6
// 009c70a4  83c408               add esp, 8
// 009c70a7  85c0                 test eax, eax
// 009c70a9  740e                 je 0x9c70b9
// 009c70ab  8b4620               mov eax, dword ptr [esi + 0x20]
// 009c70ae  5e                   pop esi
// 009c70af  89442404             mov dword ptr [esp + 4], eax
// 009c70b3  ff25a03cb200         jmp dword ptr [0xb23ca0]
// 009c70b9  5e                   pop esi
// 009c70ba  c20400               ret 4
// library xtp-15.2.1-shared-mfc/Source\DockingPane\XTPDockingPaneManager.cpp (function ?EnsureVisible@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp
