// from server: 100% by auto
// roc 2008-06 00757c20  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00757c20
//
// 00757c20  833db899960000       cmp dword ptr [0x9699b8], 0
// 00757c27  56                   push esi
// 00757c28  8bf1                 mov esi, ecx
// 00757c2a  0f84f5000000         je 0x757d25
// 00757c30  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00757c36  85c0                 test eax, eax
// 00757c38  0f84e7000000         je 0x757d25
// 00757c3e  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 00757c44  57                   push edi
// 00757c45  85c0                 test eax, eax
// 00757c47  744d                 je 0x757c96
// 00757c49  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 00757c4f  6a00                 push 0
// 00757c51  6a00                 push 0
// 00757c53  50                   push eax
// 00757c54  8d7e54               lea edi, [esi + 0x54]
// 00757c57  6a0a                 push 0xa
// 00757c59  8bcf                 mov ecx, edi
// 00757c5b  e840580000           call 0x75d4a0
// 00757c60  8bc8                 mov ecx, eax
// 00757c62  e869d2f8ff           call 0x6e4ed0
// 00757c67  85c0                 test eax, eax
// 00757c69  0f85b5000000         jne 0x757d24
// 00757c6f  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00757c75  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 00757c7b  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 00757c81  6a00                 push 0
// 00757c83  6a00                 push 0
// 00757c85  50                   push eax
// 00757c86  6a0b                 push 0xb
// 00757c88  8bcf                 mov ecx, edi
// 00757c8a  e811580000           call 0x75d4a0
// 00757c8f  8bc8                 mov ecx, eax
// 00757c91  e83ad2f8ff           call 0x6e4ed0
// 00757c96  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00757c9b  7472                 je 0x757d0f
// 00757c9d  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 00757ca3  8b8af8000000         mov ecx, dword ptr [edx + 0xf8]
// 00757ca9  85c9                 test ecx, ecx
// 00757cab  743d                 je 0x757cea
// 00757cad  6a00                 push 0
// 00757caf  e8ba8cf4ff           call 0x6a096e
// 00757cb4  8d4e54               lea ecx, [esi + 0x54]
// 00757cb7  e8e4570000           call 0x75d4a0
// 00757cbc  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00757cc2  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 00757cc8  8b5154               mov edx, dword ptr [ecx + 0x54]
// 00757ccb  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00757cd1  8b522c               mov edx, dword ptr [edx + 0x2c]
// 00757cd4  83c154               add ecx, 0x54
// 00757cd7  50                   push eax
// 00757cd8  ffd2                 call edx
// 00757cda  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 00757ce0  c780f800000000000000 mov dword ptr [eax + 0xf8], 0
// 00757cea  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00757cf0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00757cf3  6a00                 push 0
// 00757cf5  6a32                 push 0x32
// 00757cf7  6a04                 push 4
// 00757cf9  52                   push edx
// 00757cfa  ff157c2d8000         call dword ptr [0x802d7c]
// 00757d00  5f                   pop edi
// 00757d01  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 00757d0b  5e                   pop esi
// 00757d0c  c20400               ret 4
// 00757d0f  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 00757d15  e846efffff           call 0x756c60
// 00757d1a  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 00757d24  5f                   pop edi
// 00757d25  5e                   pop esi
// 00757d26  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindow@CXTPDockingPaneAutoHidePanel@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
