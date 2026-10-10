// roc 2008-06 006e5b00  unit: CXTPDockingPaneManager  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5b00
//
// 006e5b00  56                   push esi
// 006e5b01  8b742408             mov esi, dword ptr [esp + 8]
// 006e5b05  85f6                 test esi, esi
// 006e5b07  7450                 je 0x6e5b59
// 006e5b09  837e1800             cmp dword ptr [esi + 0x18], 0
// 006e5b0d  750e                 jne 0x6e5b1d
// 006e5b0f  8d46e0               lea eax, [esi - 0x20]
// 006e5b12  6a00                 push 0
// 006e5b14  50                   push eax
// 006e5b15  e846feffff           call 0x6e5960
// 006e5b1a  8b7610               mov esi, dword ptr [esi + 0x10]
// 006e5b1d  837e1801             cmp dword ptr [esi + 0x18], 1
// 006e5b21  750a                 jne 0x6e5b2d
// 006e5b23  8d4eac               lea ecx, [esi - 0x54]
// 006e5b26  6a00                 push 0
// 006e5b28  e8f3800700           call 0x75dc20
// 006e5b2d  8b06                 mov eax, dword ptr [esi]
// 006e5b2f  8b5018               mov edx, dword ptr [eax + 0x18]
// 006e5b32  8bce                 mov ecx, esi
// 006e5b34  ffd2                 call edx
// 006e5b36  8bf0                 mov esi, eax
// 006e5b38  56                   push esi
// 006e5b39  e8e2550700           call 0x75b120
// 006e5b3e  50                   push eax
// 006e5b3f  e8e2b0fbff           call 0x6a0c26
// 006e5b44  83c408               add esp, 8
// 006e5b47  85c0                 test eax, eax
// 006e5b49  740e                 je 0x6e5b59
// 006e5b4b  8b4620               mov eax, dword ptr [esi + 0x20]
// 006e5b4e  5e                   pop esi
// 006e5b4f  89442404             mov dword ptr [esp + 4], eax
// 006e5b53  ff25c42b8000         jmp dword ptr [0x802bc4]
// 006e5b59  5e                   pop esi
// 006e5b5a  c20400               ret 4
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneManager.cpp (function ?EnsureVisible@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp
