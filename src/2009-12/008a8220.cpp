// roc 2009-12 008a8220  unit: CXTPDockingPaneBase  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a8220
//
// 008a8220  83ec14               sub esp, 0x14
// 008a8223  53                   push ebx
// 008a8224  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 008a8228  55                   push ebp
// 008a8229  56                   push esi
// 008a822a  8bf1                 mov esi, ecx
// 008a822c  57                   push edi
// 008a822d  8b7c243c             mov edi, dword ptr [esp + 0x3c]
// 008a8231  8d6e60               lea ebp, [esi + 0x60]
// 008a8234  c744241004000000     mov dword ptr [esp + 0x10], 4
// 008a823c  8d642400             lea esp, [esp]
// 008a8240  8b4d00               mov ecx, dword ptr [ebp]
// 008a8243  85c9                 test ecx, ecx
// 008a8245  7411                 je 0x8a8258
// 008a8247  8b01                 mov eax, dword ptr [ecx]
// 008a8249  8b8044010000         mov eax, dword ptr [eax + 0x144]
// 008a824f  57                   push edi
// 008a8250  8d542430             lea edx, [esp + 0x30]
// 008a8254  52                   push edx
// 008a8255  53                   push ebx
// 008a8256  ffd0                 call eax
// 008a8258  83c504               add ebp, 4
// 008a825b  836c241001           sub dword ptr [esp + 0x10], 1
// 008a8260  75de                 jne 0x8a8240
// 008a8262  833f00               cmp dword ptr [edi], 0
// 008a8265  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 008a826b  8b81dc000000         mov eax, dword ptr [ecx + 0xdc]
// 008a8271  89442414             mov dword ptr [esp + 0x14], eax
// 008a8275  89442418             mov dword ptr [esp + 0x18], eax
// 008a8279  8944241c             mov dword ptr [esp + 0x1c], eax
// 008a827d  89442420             mov dword ptr [esp + 0x20], eax
// 008a8281  7413                 je 0x8a8296
// 008a8283  8d542414             lea edx, [esp + 0x14]
// 008a8287  52                   push edx
// 008a8288  8d442430             lea eax, [esp + 0x30]
// 008a828c  50                   push eax
// 008a828d  8bce                 mov ecx, esi
// 008a828f  e8bcfdffff           call 0x8a8050
// 008a8294  eb10                 jmp 0x8a82a6
// 008a8296  0144242c             add dword ptr [esp + 0x2c], eax
// 008a829a  01442430             add dword ptr [esp + 0x30], eax
// 008a829e  29442434             sub dword ptr [esp + 0x34], eax
// 008a82a2  29442438             sub dword ptr [esp + 0x38], eax
// 008a82a6  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008a82aa  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a82ad  8b11                 mov edx, dword ptr [ecx]
// 008a82af  57                   push edi
// 008a82b0  83ec10               sub esp, 0x10
// 008a82b3  8bc4                 mov eax, esp
// 008a82b5  8928                 mov dword ptr [eax], ebp
// 008a82b7  8b6c2444             mov ebp, dword ptr [esp + 0x44]
// 008a82bb  896804               mov dword ptr [eax + 4], ebp
// 008a82be  8b6c2448             mov ebp, dword ptr [esp + 0x48]
// 008a82c2  896808               mov dword ptr [eax + 8], ebp
// 008a82c5  8b6c244c             mov ebp, dword ptr [esp + 0x4c]
// 008a82c9  89680c               mov dword ptr [eax + 0xc], ebp
// 008a82cc  8b4224               mov eax, dword ptr [edx + 0x24]
// 008a82cf  53                   push ebx
// 008a82d0  ffd0                 call eax
// 008a82d2  8b7620               mov esi, dword ptr [esi + 0x20]
// 008a82d5  8b5620               mov edx, dword ptr [esi + 0x20]
// 008a82d8  8d4e20               lea ecx, [esi + 0x20]
// 008a82db  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008a82df  57                   push edi
// 008a82e0  83ec10               sub esp, 0x10
// 008a82e3  8bc4                 mov eax, esp
// 008a82e5  8930                 mov dword ptr [eax], esi
// 008a82e7  8b742444             mov esi, dword ptr [esp + 0x44]
// 008a82eb  897004               mov dword ptr [eax + 4], esi
// 008a82ee  8b742448             mov esi, dword ptr [esp + 0x48]
// 008a82f2  897008               mov dword ptr [eax + 8], esi
// 008a82f5  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 008a82f9  89700c               mov dword ptr [eax + 0xc], esi
// 008a82fc  8b4224               mov eax, dword ptr [edx + 0x24]
// 008a82ff  53                   push ebx
// 008a8300  ffd0                 call eax
// 008a8302  5f                   pop edi
// 008a8303  5e                   pop esi
// 008a8304  5d                   pop ebp
// 008a8305  5b                   pop ebx
// 008a8306  83c414               add esp, 0x14
// 008a8309  c21800               ret 0x18
// copied from an identical function in another client (function ?OnSizeParent@CXTPDockingPaneLayout@@AAEXPAVCWnd@@VCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneLayout.cpp