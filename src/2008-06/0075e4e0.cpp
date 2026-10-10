// roc 2008-06 0075e4e0  unit: CXTPDockingPaneTabbedContainer  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075e4e0
//
// 0075e4e0  83ec18               sub esp, 0x18
// 0075e4e3  56                   push esi
// 0075e4e4  8bf1                 mov esi, ecx
// 0075e4e6  57                   push edi
// 0075e4e7  8d7e54               lea edi, [esi + 0x54]
// 0075e4ea  8bcf                 mov ecx, edi
// 0075e4ec  e8afefffff           call 0x75d4a0
// 0075e4f1  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 0075e4f8  746d                 je 0x75e567
// 0075e4fa  53                   push ebx
// 0075e4fb  8d44240c             lea eax, [esp + 0xc]
// 0075e4ff  50                   push eax
// 0075e500  ff159c2d8000         call dword ptr [0x802d9c]
// 0075e506  8b5620               mov edx, dword ptr [esi + 0x20]
// 0075e509  8d4c240c             lea ecx, [esp + 0xc]
// 0075e50d  51                   push ecx
// 0075e50e  52                   push edx
// 0075e50f  ff15a02d8000         call dword ptr [0x802da0]
// 0075e515  8bcf                 mov ecx, edi
// 0075e517  e894efffff           call 0x75d4b0
// 0075e51c  8b10                 mov edx, dword ptr [eax]
// 0075e51e  8b5274               mov edx, dword ptr [edx + 0x74]
// 0075e521  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0075e525  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0075e529  56                   push esi
// 0075e52a  8d4c2418             lea ecx, [esp + 0x18]
// 0075e52e  51                   push ecx
// 0075e52f  8bc8                 mov ecx, eax
// 0075e531  ffd2                 call edx
// 0075e533  53                   push ebx
// 0075e534  57                   push edi
// 0075e535  50                   push eax
// 0075e536  ff152c2d8000         call dword ptr [0x802d2c]
// 0075e53c  5b                   pop ebx
// 0075e53d  85c0                 test eax, eax
// 0075e53f  7426                 je 0x75e567
// 0075e541  e8e023f4ff           call 0x6a0926
// 0075e546  68867f0000           push 0x7f86
// 0075e54b  6a00                 push 0
// 0075e54d  ff15d02d8000         call dword ptr [0x802dd0]
// 0075e553  50                   push eax
// 0075e554  ff15042d8000         call dword ptr [0x802d04]
// 0075e55a  5f                   pop edi
// 0075e55b  b801000000           mov eax, 1
// 0075e560  5e                   pop esi
// 0075e561  83c418               add esp, 0x18
// 0075e564  c20c00               ret 0xc
// 0075e567  8bce                 mov ecx, esi
// 0075e569  e8fa26f4ff           call 0x6a0c68
// 0075e56e  5f                   pop edi
// 0075e56f  5e                   pop esi
// 0075e570  83c418               add esp, 0x18
// 0075e573  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnSetCursor@CXTPDockingPaneTabbedContainer@@IAEHPAVCWnd@@II@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
