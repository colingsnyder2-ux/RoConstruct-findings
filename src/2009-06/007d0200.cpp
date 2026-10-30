// roc 2009-06 007d0200  unit: CXTPDockingPaneAutoHidePanel::CAutoHidePanelTabManager  size: 265 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d0200
//
// 007d0200  833de88ba20000       cmp dword ptr [0xa28be8], 0
// 007d0207  56                   push esi
// 007d0208  8bf1                 mov esi, ecx
// 007d020a  0f84f5000000         je 0x7d0305
// 007d0210  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 007d0216  85c0                 test eax, eax
// 007d0218  0f84e7000000         je 0x7d0305
// 007d021e  8b80f8000000         mov eax, dword ptr [eax + 0xf8]
// 007d0224  57                   push edi
// 007d0225  85c0                 test eax, eax
// 007d0227  744d                 je 0x7d0276
// 007d0229  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 007d022f  6a00                 push 0
// 007d0231  6a00                 push 0
// 007d0233  50                   push eax
// 007d0234  8d7e54               lea edi, [esi + 0x54]
// 007d0237  6a0a                 push 0xa
// 007d0239  8bcf                 mov ecx, edi
// 007d023b  e8c05a0000           call 0x7d5d00
// 007d0240  8bc8                 mov ecx, eax
// 007d0242  e869d5f8ff           call 0x75d7b0
// 007d0247  85c0                 test eax, eax
// 007d0249  0f85b5000000         jne 0x7d0304
// 007d024f  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 007d0255  8b88f8000000         mov ecx, dword ptr [eax + 0xf8]
// 007d025b  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 007d0261  6a00                 push 0
// 007d0263  6a00                 push 0
// 007d0265  50                   push eax
// 007d0266  6a0b                 push 0xb
// 007d0268  8bcf                 mov ecx, edi
// 007d026a  e8915a0000           call 0x7d5d00
// 007d026f  8bc8                 mov ecx, eax
// 007d0271  e83ad5f8ff           call 0x75d7b0
// 007d0276  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007d027b  7472                 je 0x7d02ef
// 007d027d  8b96a8000000         mov edx, dword ptr [esi + 0xa8]
// 007d0283  8b8af8000000         mov ecx, dword ptr [edx + 0xf8]
// 007d0289  85c9                 test ecx, ecx
// 007d028b  743d                 je 0x7d02ca
// 007d028d  6a00                 push 0
// 007d028f  e88c8af4ff           call 0x718d20
// 007d0294  8d4e54               lea ecx, [esi + 0x54]
// 007d0297  e8645a0000           call 0x7d5d00
// 007d029c  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 007d02a2  8b89f8000000         mov ecx, dword ptr [ecx + 0xf8]
// 007d02a8  8b5154               mov edx, dword ptr [ecx + 0x54]
// 007d02ab  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 007d02b1  8b522c               mov edx, dword ptr [edx + 0x2c]
// 007d02b4  83c154               add ecx, 0x54
// 007d02b7  50                   push eax
// 007d02b8  ffd2                 call edx
// 007d02ba  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 007d02c0  c780f800000000000000 mov dword ptr [eax + 0xf8], 0
// 007d02ca  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 007d02d0  8b5120               mov edx, dword ptr [ecx + 0x20]
// 007d02d3  6a00                 push 0
// 007d02d5  6a32                 push 0x32
// 007d02d7  6a04                 push 4
// 007d02d9  52                   push edx
// 007d02da  ff150cee8900         call dword ptr [0x89ee0c]
// 007d02e0  5f                   pop edi
// 007d02e1  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 007d02eb  5e                   pop esi
// 007d02ec  c20400               ret 4
// 007d02ef  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 007d02f5  e826efffff           call 0x7cf220
// 007d02fa  c786a800000000000000 mov dword ptr [esi + 0xa8], 0
// 007d0304  5f                   pop edi
// 007d0305  5e                   pop esi
// 007d0306  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?CloseActiveWindow@CXTPDockingPaneAutoHidePanel@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
