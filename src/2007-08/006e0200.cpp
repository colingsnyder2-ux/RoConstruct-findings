// roc 2007-08 006e0200  unit: CXTPDockingPaneMiniWnd  size: 257 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0200
//
// 006e0200  83ec20               sub esp, 0x20
// 006e0203  56                   push esi
// 006e0204  8bf1                 mov esi, ecx
// 006e0206  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 006e020c  85c0                 test eax, eax
// 006e020e  0f84e6000000         je 0x6e02fa
// 006e0214  83bec800000000       cmp dword ptr [esi + 0xc8], 0
// 006e021b  0f85d9000000         jne 0x6e02fa
// 006e0221  83a6d0000000f3       and dword ptr [esi + 0xd0], 0xfffffff3
// 006e0228  8d4820               lea ecx, [eax + 0x20]
// 006e022b  c786c800000001000000 mov dword ptr [esi + 0xc8], 1
// 006e0235  8b01                 mov eax, dword ptr [ecx]
// 006e0237  8b5014               mov edx, dword ptr [eax + 0x14]
// 006e023a  ffd2                 call edx
// 006e023c  85c0                 test eax, eax
// 006e023e  741f                 je 0x6e025f
// 006e0240  6a00                 push 0
// 006e0242  8bce                 mov ecx, esi
// 006e0244  e801fdf4ff           call 0x62ff4a
// 006e0249  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 006e0250  0f8488000000         je 0x6e02de
// 006e0256  8bce                 mov ecx, esi
// 006e0258  e803feffff           call 0x6e0060
// 006e025d  eb7f                 jmp 0x6e02de
// 006e025f  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 006e0262  8d442408             lea eax, [esp + 8]
// 006e0266  50                   push eax
// 006e0267  51                   push ecx
// 006e0268  c744242801000000     mov dword ptr [esp + 0x28], 1
// 006e0270  ff15f4ed7700         call dword ptr [0x77edf4]
// 006e0276  6a08                 push 8
// 006e0278  ff15acec7700         call dword ptr [0x77ecac]
// 006e027e  8d542404             lea edx, [esp + 4]
// 006e0282  52                   push edx
// 006e0283  83ec10               sub esp, 0x10
// 006e0286  89442418             mov dword ptr [esp + 0x18], eax
// 006e028a  8bc4                 mov eax, esp
// 006e028c  8d4c241c             lea ecx, [esp + 0x1c]
// 006e0290  51                   push ecx
// 006e0291  50                   push eax
// 006e0292  ff15e0ed7700         call dword ptr [0x77ede0]
// 006e0298  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 006e029e  8b5020               mov edx, dword ptr [eax + 0x20]
// 006e02a1  8d4820               lea ecx, [eax + 0x20]
// 006e02a4  8b4224               mov eax, dword ptr [edx + 0x24]
// 006e02a7  56                   push esi
// 006e02a8  ffd0                 call eax
// 006e02aa  8b442404             mov eax, dword ptr [esp + 4]
// 006e02ae  85c0                 test eax, eax
// 006e02b0  7407                 je 0x6e02b9
// 006e02b2  50                   push eax
// 006e02b3  ff15b4ec7700         call dword ptr [0x77ecb4]
// 006e02b9  8b8e1c010000         mov ecx, dword ptr [esi + 0x11c]
// 006e02bf  8b5620               mov edx, dword ptr [esi + 0x20]
// 006e02c2  83c13c               add ecx, 0x3c
// 006e02c5  51                   push ecx
// 006e02c6  52                   push edx
// 006e02c7  ff15d4ed7700         call dword ptr [0x77edd4]
// 006e02cd  8b861c010000         mov eax, dword ptr [esi + 0x11c]
// 006e02d3  83c03c               add eax, 0x3c
// 006e02d6  50                   push eax
// 006e02d7  8bce                 mov ecx, esi
// 006e02d9  e81607f5ff           call 0x6309f4
// 006e02de  8d8ee4000000         lea ecx, [esi + 0xe4]
// 006e02e4  e857020000           call 0x6e0540
// 006e02e9  8bc8                 mov ecx, eax
// 006e02eb  e840e1f8ff           call 0x66e430
// 006e02f0  c786c800000000000000 mov dword ptr [esi + 0xc8], 0
// 006e02fa  5e                   pop esi
// 006e02fb  83c420               add esp, 0x20
// 006e02fe  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?RecalcLayout@CXTPDockingPaneMiniWnd@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
