// roc 2009-12 008abb10  unit: CXTPDockingPaneAutoHidePanel  size: 444 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008abb10
//
// 008abb10  6aff                 push -1
// 008abb12  68b82a9600           push 0x962ab8
// 008abb17  64a100000000         mov eax, dword ptr fs:[0]
// 008abb1d  50                   push eax
// 008abb1e  83ec34               sub esp, 0x34
// 008abb21  53                   push ebx
// 008abb22  55                   push ebp
// 008abb23  56                   push esi
// 008abb24  57                   push edi
// 008abb25  a10052b600           mov eax, dword ptr [0xb65200]
// 008abb2a  33c4                 xor eax, esp
// 008abb2c  50                   push eax
// 008abb2d  8d442448             lea eax, [esp + 0x48]
// 008abb31  64a300000000         mov dword ptr fs:[0], eax
// 008abb37  8bf9                 mov edi, ecx
// 008abb39  8b4754               mov eax, dword ptr [edi + 0x54]
// 008abb3c  8b5014               mov edx, dword ptr [eax + 0x14]
// 008abb3f  8d4f54               lea ecx, [edi + 0x54]
// 008abb42  ffd2                 call edx
// 008abb44  85c0                 test eax, eax
// 008abb46  7418                 je 0x8abb60
// 008abb48  837f2000             cmp dword ptr [edi + 0x20], 0
// 008abb4c  0f8451010000         je 0x8abca3
// 008abb52  8b07                 mov eax, dword ptr [edi]
// 008abb54  8b5068               mov edx, dword ptr [eax + 0x68]
// 008abb57  8bcf                 mov ecx, edi
// 008abb59  ffd2                 call edx
// 008abb5b  e943010000           jmp 0x8abca3
// 008abb60  837f2000             cmp dword ptr [edi + 0x20], 0
// 008abb64  7511                 jne 0x8abb77
// 008abb66  8b4c2458             mov ecx, dword ptr [esp + 0x58]
// 008abb6a  8b07                 mov eax, dword ptr [edi]
// 008abb6c  8b904c010000         mov edx, dword ptr [eax + 0x14c]
// 008abb72  51                   push ecx
// 008abb73  8bcf                 mov ecx, edi
// 008abb75  ffd2                 call edx
// 008abb77  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 008abb7b  56                   push esi
// 008abb7c  8d9fb8000000         lea ebx, [edi + 0xb8]
// 008abb82  53                   push ebx
// 008abb83  ff15bcca9800         call dword ptr [0x98cabc]
// 008abb89  85c0                 test eax, eax
// 008abb8b  751e                 jne 0x8abbab
// 008abb8d  50                   push eax
// 008abb8e  8bcf                 mov ecx, edi
// 008abb90  e88bf4ffff           call 0x8ab020
// 008abb95  8b06                 mov eax, dword ptr [esi]
// 008abb97  8903                 mov dword ptr [ebx], eax
// 008abb99  8b4e04               mov ecx, dword ptr [esi + 4]
// 008abb9c  894b04               mov dword ptr [ebx + 4], ecx
// 008abb9f  8b5608               mov edx, dword ptr [esi + 8]
// 008abba2  895308               mov dword ptr [ebx + 8], edx
// 008abba5  8b460c               mov eax, dword ptr [esi + 0xc]
// 008abba8  89430c               mov dword ptr [ebx + 0xc], eax
// 008abbab  8bcf                 mov ecx, edi
// 008abbad  e86ee0ffff           call 0x8a9c20
// 008abbb2  8b4e08               mov ecx, dword ptr [esi + 8]
// 008abbb5  8b560c               mov edx, dword ptr [esi + 0xc]
// 008abbb8  8b2e                 mov ebp, dword ptr [esi]
// 008abbba  8b5e04               mov ebx, dword ptr [esi + 4]
// 008abbbd  894c242c             mov dword ptr [esp + 0x2c], ecx
// 008abbc1  8b8fac000000         mov ecx, dword ptr [edi + 0xac]
// 008abbc7  89542430             mov dword ptr [esp + 0x30], edx
// 008abbcb  83f903               cmp ecx, 3
// 008abbce  772b                 ja 0x8abbfb
// 008abbd0  ff248dbcbc8a00       jmp dword ptr [ecx*4 + 0x8abcbc]
// 008abbd7  0106                 add dword ptr [esi], eax
// 008abbd9  8b06                 mov eax, dword ptr [esi]
// 008abbdb  8944242c             mov dword ptr [esp + 0x2c], eax
// 008abbdf  eb1a                 jmp 0x8abbfb
// 008abbe1  294608               sub dword ptr [esi + 8], eax
// 008abbe4  8b6e08               mov ebp, dword ptr [esi + 8]
// 008abbe7  eb12                 jmp 0x8abbfb
// 008abbe9  014604               add dword ptr [esi + 4], eax
// 008abbec  8b4e04               mov ecx, dword ptr [esi + 4]
// 008abbef  894c2430             mov dword ptr [esp + 0x30], ecx
// 008abbf3  eb06                 jmp 0x8abbfb
// 008abbf5  29460c               sub dword ptr [esi + 0xc], eax
// 008abbf8  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 008abbfb  57                   push edi
// 008abbfc  8d4c2438             lea ecx, [esp + 0x38]
// 008abc00  e8d18af4ff           call 0x7f46d6
// 008abc05  8b54242c             mov edx, dword ptr [esp + 0x2c]
// 008abc09  8b742430             mov esi, dword ptr [esp + 0x30]
// 008abc0d  8bc3                 mov eax, ebx
// 008abc0f  f7d8                 neg eax
// 008abc11  50                   push eax
// 008abc12  8bcd                 mov ecx, ebp
// 008abc14  f7d9                 neg ecx
// 008abc16  51                   push ecx
// 008abc17  8d44241c             lea eax, [esp + 0x1c]
// 008abc1b  50                   push eax
// 008abc1c  c744245c00000000     mov dword ptr [esp + 0x5c], 0
// 008abc24  896c2420             mov dword ptr [esp + 0x20], ebp
// 008abc28  895c2424             mov dword ptr [esp + 0x24], ebx
// 008abc2c  89542428             mov dword ptr [esp + 0x28], edx
// 008abc30  8974242c             mov dword ptr [esp + 0x2c], esi
// 008abc34  ff156ccc9800         call dword ptr [0x98cc6c]
// 008abc3a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008abc3e  8b542418             mov edx, dword ptr [esp + 0x18]
// 008abc42  83ec10               sub esp, 0x10
// 008abc45  8bc4                 mov eax, esp
// 008abc47  8908                 mov dword ptr [eax], ecx
// 008abc49  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008abc4d  895004               mov dword ptr [eax + 4], edx
// 008abc50  8b542430             mov edx, dword ptr [esp + 0x30]
// 008abc54  894808               mov dword ptr [eax + 8], ecx
// 008abc57  89500c               mov dword ptr [eax + 0xc], edx
// 008abc5a  8d442444             lea eax, [esp + 0x44]
// 008abc5e  50                   push eax
// 008abc5f  8bcf                 mov ecx, edi
// 008abc61  e8dafaffff           call 0x8ab740
// 008abc66  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 008abc6a  833900               cmp dword ptr [ecx], 0
// 008abc6d  7423                 je 0x8abc92
// 008abc6f  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 008abc73  6a01                 push 1
// 008abc75  2bf3                 sub esi, ebx
// 008abc77  56                   push esi
// 008abc78  2bc5                 sub eax, ebp
// 008abc7a  50                   push eax
// 008abc7b  53                   push ebx
// 008abc7c  55                   push ebp
// 008abc7d  8bcf                 mov ecx, edi
// 008abc7f  e8ae7ff4ff           call 0x7f3c32
// 008abc84  8b5720               mov edx, dword ptr [edi + 0x20]
// 008abc87  6a00                 push 0
// 008abc89  6a00                 push 0
// 008abc8b  52                   push edx
// 008abc8c  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008abc92  8d4c2434             lea ecx, [esp + 0x34]
// 008abc96  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 008abc9e  e82d8af4ff           call 0x7f46d0
// 008abca3  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 008abca7  64890d00000000       mov dword ptr fs:[0], ecx
// 008abcae  59                   pop ecx
// 008abcaf  5f                   pop edi
// 008abcb0  5e                   pop esi
// 008abcb1  5d                   pop ebp
// 008abcb2  5b                   pop ebx
// 008abcb3  83c440               add esp, 0x40
// 008abcb6  c20c00               ret 0xc
// 008abcb9  8d4900               lea ecx, [ecx]
// 008abcbc  d7                   xlatb 
// 008abcbd  bb8a00e1bb           mov ebx, 0xbbe1008a
// 008abcc2  8a00                 mov al, byte ptr [eax]
// 008abcc4  e9bb8a00f5           jmp 0xf58b4784
// copied from an identical function in another client (function ?OnSizeParentEx@CXTPDockingPaneAutoHidePanel@@MAEXPAVCWnd@@AAVCRect@@PAX@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp