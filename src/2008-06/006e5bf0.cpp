// roc 2008-06 006e5bf0  unit: CXTPDockingPaneManager  size: 276 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e5bf0
//
// 006e5bf0  8b442404             mov eax, dword ptr [esp + 4]
// 006e5bf4  83ec2c               sub esp, 0x2c
// 006e5bf7  56                   push esi
// 006e5bf8  85c0                 test eax, eax
// 006e5bfa  740d                 je 0x6e5c09
// 006e5bfc  8b10                 mov edx, dword ptr [eax]
// 006e5bfe  8bc8                 mov ecx, eax
// 006e5c00  8b4218               mov eax, dword ptr [edx + 0x18]
// 006e5c03  ffd0                 call eax
// 006e5c05  8bf0                 mov esi, eax
// 006e5c07  eb06                 jmp 0x6e5c0f
// 006e5c09  8bb1cc000000         mov esi, dword ptr [ecx + 0xcc]
// 006e5c0f  85f6                 test esi, esi
// 006e5c11  0f84e6000000         je 0x6e5cfd
// 006e5c17  8b4620               mov eax, dword ptr [esi + 0x20]
// 006e5c1a  50                   push eax
// 006e5c1b  ff15502d8000         call dword ptr [0x802d50]
// 006e5c21  85c0                 test eax, eax
// 006e5c23  0f84d4000000         je 0x6e5cfd
// 006e5c29  8b16                 mov edx, dword ptr [esi]
// 006e5c2b  8b8230010000         mov eax, dword ptr [edx + 0x130]
// 006e5c31  8bce                 mov ecx, esi
// 006e5c33  ffd0                 call eax
// 006e5c35  f7d8                 neg eax
// 006e5c37  1bc0                 sbb eax, eax
// 006e5c39  23c6                 and eax, esi
// 006e5c3b  743b                 je 0x6e5c78
// 006e5c3d  837c243800           cmp dword ptr [esp + 0x38], 0
// 006e5c42  6a00                 push 0
// 006e5c44  741f                 je 0x6e5c65
// 006e5c46  8b4820               mov ecx, dword ptr [eax + 0x20]
// 006e5c49  8388e400000008       or dword ptr [eax + 0xe4], 8
// 006e5c50  6a00                 push 0
// 006e5c52  6863030000           push 0x363
// 006e5c57  51                   push ecx
// 006e5c58  ff150c2e8000         call dword ptr [0x802e0c]
// 006e5c5e  5e                   pop esi
// 006e5c5f  83c42c               add esp, 0x2c
// 006e5c62  c20800               ret 8
// 006e5c65  8b10                 mov edx, dword ptr [eax]
// 006e5c67  8bc8                 mov ecx, eax
// 006e5c69  8b8258010000         mov eax, dword ptr [edx + 0x158]
// 006e5c6f  ffd0                 call eax
// 006e5c71  5e                   pop esi
// 006e5c72  83c42c               add esp, 0x2c
// 006e5c75  c20800               ret 8
// 006e5c78  56                   push esi
// 006e5c79  8d4c2408             lea ecx, [esp + 8]
// 006e5c7d  e8ae1e0100           call 0x6f7b30
// 006e5c82  837c243800           cmp dword ptr [esp + 0x38], 0
// 006e5c87  744a                 je 0x6e5cd3
// 006e5c89  8b4620               mov eax, dword ptr [esi + 0x20]
// 006e5c8c  6a00                 push 0
// 006e5c8e  6a05                 push 5
// 006e5c90  6a05                 push 5
// 006e5c92  50                   push eax
// 006e5c93  8d4c2424             lea ecx, [esp + 0x24]
// 006e5c97  51                   push ecx
// 006e5c98  ff15b02d8000         call dword ptr [0x802db0]
// 006e5c9e  85c0                 test eax, eax
// 006e5ca0  755b                 jne 0x6e5cfd
// 006e5ca2  8b542410             mov edx, dword ptr [esp + 0x10]
// 006e5ca6  2b542408             sub edx, dword ptr [esp + 8]
// 006e5caa  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006e5cae  2b4c2404             sub ecx, dword ptr [esp + 4]
// 006e5cb2  0fb7c2               movzx eax, dx
// 006e5cb5  0fb7d1               movzx edx, cx
// 006e5cb8  c1e010               shl eax, 0x10
// 006e5cbb  0bc2                 or eax, edx
// 006e5cbd  50                   push eax
// 006e5cbe  8b4620               mov eax, dword ptr [esi + 0x20]
// 006e5cc1  6a00                 push 0
// 006e5cc3  6a05                 push 5
// 006e5cc5  50                   push eax
// 006e5cc6  ff150c2e8000         call dword ptr [0x802e0c]
// 006e5ccc  5e                   pop esi
// 006e5ccd  83c42c               add esp, 0x2c
// 006e5cd0  c20800               ret 8
// 006e5cd3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006e5cd7  2b4c2408             sub ecx, dword ptr [esp + 8]
// 006e5cdb  8b44240c             mov eax, dword ptr [esp + 0xc]
// 006e5cdf  2b442404             sub eax, dword ptr [esp + 4]
// 006e5ce3  0fb7d1               movzx edx, cx
// 006e5ce6  0fb7c8               movzx ecx, ax
// 006e5ce9  c1e210               shl edx, 0x10
// 006e5cec  0bd1                 or edx, ecx
// 006e5cee  52                   push edx
// 006e5cef  8b5620               mov edx, dword ptr [esi + 0x20]
// 006e5cf2  6a00                 push 0
// 006e5cf4  6a05                 push 5
// 006e5cf6  52                   push edx
// 006e5cf7  ff15142e8000         call dword ptr [0x802e14]
// 006e5cfd  5e                   pop esi
// 006e5cfe  83c42c               add esp, 0x2c
// 006e5d01  c20800               ret 8
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneManager.cpp (function ?RecalcFrameLayout@CXTPDockingPaneManager@@QAEXPAVCXTPDockingPaneBase@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneManager.cpp
