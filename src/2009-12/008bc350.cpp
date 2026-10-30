// roc 2009-12 008bc350  unit: CXTPDockingPaneContextStickerWnd  size: 382 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bc350
//
// 008bc350  6aff                 push -1
// 008bc352  68383a9600           push 0x963a38
// 008bc357  64a100000000         mov eax, dword ptr fs:[0]
// 008bc35d  50                   push eax
// 008bc35e  83ec54               sub esp, 0x54
// 008bc361  53                   push ebx
// 008bc362  55                   push ebp
// 008bc363  56                   push esi
// 008bc364  57                   push edi
// 008bc365  a10052b600           mov eax, dword ptr [0xb65200]
// 008bc36a  33c4                 xor eax, esp
// 008bc36c  50                   push eax
// 008bc36d  8d442468             lea eax, [esp + 0x68]
// 008bc371  64a300000000         mov dword ptr fs:[0], eax
// 008bc377  894c2414             mov dword ptr [esp + 0x14], ecx
// 008bc37b  33db                 xor ebx, ebx
// 008bc37d  895c2424             mov dword ptr [esp + 0x24], ebx
// 008bc381  c744242018229a00     mov dword ptr [esp + 0x20], 0x9a2218
// 008bc389  895c2470             mov dword ptr [esp + 0x70], ebx
// 008bc38d  e80e25fbff           call 0x86e8a0
// 008bc392  8b4c247c             mov ecx, dword ptr [esp + 0x7c]
// 008bc396  8b10                 mov edx, dword ptr [eax]
// 008bc398  8b5214               mov edx, dword ptr [edx + 0x14]
// 008bc39b  51                   push ecx
// 008bc39c  8d4c2424             lea ecx, [esp + 0x24]
// 008bc3a0  51                   push ecx
// 008bc3a1  8bc8                 mov ecx, eax
// 008bc3a3  ffd2                 call edx
// 008bc3a5  8bb42480000000       mov esi, dword ptr [esp + 0x80]
// 008bc3ac  8b7e14               mov edi, dword ptr [esi + 0x14]
// 008bc3af  8b6e10               mov ebp, dword ptr [esi + 0x10]
// 008bc3b2  2b7e0c               sub edi, dword ptr [esi + 0xc]
// 008bc3b5  2b6e08               sub ebp, dword ptr [esi + 8]
// 008bc3b8  897c2434             mov dword ptr [esp + 0x34], edi
// 008bc3bc  896c2430             mov dword ptr [esp + 0x30], ebp
// 008bc3c0  895c241c             mov dword ptr [esp + 0x1c], ebx
// 008bc3c4  c744241818229a00     mov dword ptr [esp + 0x18], 0x9a2218
// 008bc3cc  8b5c2478             mov ebx, dword ptr [esp + 0x78]
// 008bc3d0  8b4304               mov eax, dword ptr [ebx + 4]
// 008bc3d3  57                   push edi
// 008bc3d4  55                   push ebp
// 008bc3d5  50                   push eax
// 008bc3d6  c644247c01           mov byte ptr [esp + 0x7c], 1
// 008bc3db  ff1550b19800         call dword ptr [0x98b150]
// 008bc3e1  50                   push eax
// 008bc3e2  8d4c241c             lea ecx, [esp + 0x1c]
// 008bc3e6  e83f7af3ff           call 0x7f3e2a
// 008bc3eb  837c241c00           cmp dword ptr [esp + 0x1c], 0
// 008bc3f0  745d                 je 0x8bc44f
// 008bc3f2  8d4c2418             lea ecx, [esp + 0x18]
// 008bc3f6  51                   push ecx
// 008bc3f7  53                   push ebx
// 008bc3f8  8d4c245c             lea ecx, [esp + 0x5c]
// 008bc3fc  e87ff4f8ff           call 0x84b880
// 008bc401  8d542420             lea edx, [esp + 0x20]
// 008bc405  52                   push edx
// 008bc406  53                   push ebx
// 008bc407  8d4c2448             lea ecx, [esp + 0x48]
// 008bc40b  c644247802           mov byte ptr [esp + 0x78], 2
// 008bc410  e86bf4f8ff           call 0x84b880
// 008bc415  8b460c               mov eax, dword ptr [esi + 0xc]
// 008bc418  8b4e08               mov ecx, dword ptr [esi + 8]
// 008bc41b  682000cc00           push 0xcc0020
// 008bc420  50                   push eax
// 008bc421  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 008bc425  51                   push ecx
// 008bc426  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 008bc42a  50                   push eax
// 008bc42b  57                   push edi
// 008bc42c  55                   push ebp
// 008bc42d  6a00                 push 0
// 008bc42f  6a00                 push 0
// 008bc431  51                   push ecx
// 008bc432  ff1548b19800         call dword ptr [0x98b148]
// 008bc438  8d4c2440             lea ecx, [esp + 0x40]
// 008bc43c  e84ff5f8ff           call 0x84b990
// 008bc441  8d4c2454             lea ecx, [esp + 0x54]
// 008bc445  c644247001           mov byte ptr [esp + 0x70], 1
// 008bc44a  e841f5f8ff           call 0x84b990
// 008bc44f  33c0                 xor eax, eax
// 008bc451  39842484000000       cmp dword ptr [esp + 0x84], eax
// 008bc458  750c                 jne 0x8bc466
// 008bc45a  89442428             mov dword ptr [esp + 0x28], eax
// 008bc45e  8944242c             mov dword ptr [esp + 0x2c], eax
// 008bc462  8d742428             lea esi, [esp + 0x28]
// 008bc466  8b16                 mov edx, dword ptr [esi]
// 008bc468  8b4604               mov eax, dword ptr [esi + 4]
// 008bc46b  8d4c2418             lea ecx, [esp + 0x18]
// 008bc46f  51                   push ecx
// 008bc470  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008bc474  8954243c             mov dword ptr [esp + 0x3c], edx
// 008bc478  8d542434             lea edx, [esp + 0x34]
// 008bc47c  89442440             mov dword ptr [esp + 0x40], eax
// 008bc480  52                   push edx
// 008bc481  8d442440             lea eax, [esp + 0x40]
// 008bc485  50                   push eax
// 008bc486  53                   push ebx
// 008bc487  e8f4fdffff           call 0x8bc280
// 008bc48c  be18229a00           mov esi, 0x9a2218
// 008bc491  8d4c2418             lea ecx, [esp + 0x18]
// 008bc495  c644247000           mov byte ptr [esp + 0x70], 0
// 008bc49a  89742418             mov dword ptr [esp + 0x18], esi
// 008bc49e  e88d2db5ff           call 0x40f230
// 008bc4a3  8d4c2420             lea ecx, [esp + 0x20]
// 008bc4a7  c7442470ffffffff     mov dword ptr [esp + 0x70], 0xffffffff
// 008bc4af  89742420             mov dword ptr [esp + 0x20], esi
// 008bc4b3  e8782db5ff           call 0x40f230
// 008bc4b8  8b4c2468             mov ecx, dword ptr [esp + 0x68]
// 008bc4bc  64890d00000000       mov dword ptr fs:[0], ecx
// 008bc4c3  59                   pop ecx
// 008bc4c4  5f                   pop edi
// 008bc4c5  5e                   pop esi
// 008bc4c6  5d                   pop ebp
// 008bc4c7  5b                   pop ebx
// 008bc4c8  83c460               add esp, 0x60
// 008bc4cb  c21000               ret 0x10
// copied from an identical function in another client (function ?DrawSprite@CXTPDockingPaneContextStickerWnd@@IAEXPAVCDC@@IPAUSPRITEINFO@1@H@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-vc8-shared-mfc Source/DockingPane/XTPDockingPaneContext.cpp