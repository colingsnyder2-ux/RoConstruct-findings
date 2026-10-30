// roc 2010-06 0085f150  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085f150
//
// 0085f150  833d709cbe0000       cmp dword ptr [0xbe9c70], 0
// 0085f157  56                   push esi
// 0085f158  8bf1                 mov esi, ecx
// 0085f15a  0f84f5000000         je 0x85f255
// 0085f160  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0085f166  85c0                 test eax, eax
// 0085f168  0f84e7000000         je 0x85f255
// 0085f16e  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 0085f174  57                   push edi
// 0085f175  85c0                 test eax, eax
// 0085f177  744d                 je 0x85f1c6
// 0085f179  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 0085f17f  6a00                 push 0
// 0085f181  6a00                 push 0
// 0085f183  50                   push eax
// 0085f184  8d7e54               lea edi, [esi + 0x54]
// 0085f187  6a0a                 push 0xa
// 0085f189  8bcf                 mov ecx, edi
// 0085f18b  e880570000           call 0x864910
// 0085f190  8bc8                 mov ecx, eax
// 0085f192  e8a9d5f8ff           call 0x7ec740
// 0085f197  85c0                 test eax, eax
// 0085f199  0f85b5000000         jne 0x85f254
// 0085f19f  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0085f1a5  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 0085f1ab  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 0085f1b1  6a00                 push 0
// 0085f1b3  6a00                 push 0
// 0085f1b5  50                   push eax
// 0085f1b6  6a0b                 push 0xb
// 0085f1b8  8bcf                 mov ecx, edi
// 0085f1ba  e851570000           call 0x864910
// 0085f1bf  8bc8                 mov ecx, eax
// 0085f1c1  e87ad5f8ff           call 0x7ec740
// 0085f1c6  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0085f1cb  7472                 je 0x85f23f
// 0085f1cd  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 0085f1d3  8b8af8000000         mov ecx, dword ptr [edx + 0xf8]
// 0085f1d9  85c9                 test ecx, ecx
// 0085f1db  743d                 je 0x85f21a
// 0085f1dd  6a00                 push 0
// 0085f1df  e8a48af4ff           call 0x7a7c88
// 0085f1e4  8d4e54               lea ecx, [esi + 0x54]
// 0085f1e7  e824570000           call 0x864910
// 0085f1ec  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0085f1f2  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 0085f1f8  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0085f1fb  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 0085f201  8b522c               mov edx, dword ptr [edx + 0x2c]
// 0085f204  83c154               add ecx, 0x54
// 0085f207  50                   push eax
// 0085f208  ffd2                 call edx
// 0085f20a  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 0085f210  c780f800000000000000 mov dword ptr [eax + 0xf8], 0
// 0085f21a  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0085f220  8b5120               mov edx, dword ptr [ecx + 0x20]
// 0085f223  6a00                 push 0
// 0085f225  6a32                 push 0x32
// 0085f227  6a04                 push 4
// 0085f229  52                   push edx
// 0085f22a  ff1554bc9e00         call dword ptr [0x9ebc54]
// 0085f230  5f                   pop edi
// 0085f231  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 0085f23b  5e                   pop esi
// 0085f23c  c20400               ret 4
// 0085f23f  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 0085f245  e816efffff           call 0x85e160
// 0085f24a  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 0085f254  5f                   pop edi
// 0085f255  5e                   pop esi
// 0085f256  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindow@CXTPDockingPaneAutoHidePanel@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
