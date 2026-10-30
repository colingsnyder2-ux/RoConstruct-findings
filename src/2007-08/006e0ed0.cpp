// from server: 100% by auto
// roc 2007-08 006e0ed0  unit: CXTPDockingPaneTabbedContainer  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006e0ed0
//
// 006e0ed0  56                   push esi
// 006e0ed1  8bf1                 mov esi, ecx
// 006e0ed3  8b46cc               mov eax, dword ptr [esi - 0x34]
// 006e0ed6  85c0                 test eax, eax
// 006e0ed8  57                   push edi
// 006e0ed9  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006e0edd  897e14               mov dword ptr [esi + 0x14], edi
// 006e0ee0  742d                 je 0x6e0f0f
// 006e0ee2  50                   push eax
// 006e0ee3  ff15f8eb7700         call dword ptr [0x77ebf8]
// 006e0ee9  50                   push eax
// 006e0eea  e8d1f2f4ff           call 0x6301c0
// 006e0eef  3bc7                 cmp eax, edi
// 006e0ef1  741c                 je 0x6e0f0f
// 006e0ef3  85ff                 test edi, edi
// 006e0ef5  7504                 jne 0x6e0efb
// 006e0ef7  33c0                 xor eax, eax
// 006e0ef9  eb03                 jmp 0x6e0efe
// 006e0efb  8b4720               mov eax, dword ptr [edi + 0x20]
// 006e0efe  50                   push eax
// 006e0eff  8b46cc               mov eax, dword ptr [esi - 0x34]
// 006e0f02  50                   push eax
// 006e0f03  ff15acee7700         call dword ptr [0x77eeac]
// 006e0f09  50                   push eax
// 006e0f0a  e8b1f2f4ff           call 0x6301c0
// 006e0f0f  8bce                 mov ecx, esi
// 006e0f11  e84ad6f7ff           call 0x65e560
// 006e0f16  85c0                 test eax, eax
// 006e0f18  8944240c             mov dword ptr [esp + 0xc], eax
// 006e0f1c  742c                 je 0x6e0f4a
// 006e0f1e  8bff                 mov edi, edi
// 006e0f20  8d4c240c             lea ecx, [esp + 0xc]
// 006e0f24  51                   push ecx
// 006e0f25  8bce                 mov ecx, esi
// 006e0f27  e834eb0300           call 0x71fa60
// 006e0f2c  85c0                 test eax, eax
// 006e0f2e  7405                 je 0x6e0f35
// 006e0f30  83c0e0               add eax, -0x20
// 006e0f33  eb02                 jmp 0x6e0f37
// 006e0f35  33c0                 xor eax, eax
// 006e0f37  8b5020               mov edx, dword ptr [eax + 0x20]
// 006e0f3a  8d4820               lea ecx, [eax + 0x20]
// 006e0f3d  8b422c               mov eax, dword ptr [edx + 0x2c]
// 006e0f40  57                   push edi
// 006e0f41  ffd0                 call eax
// 006e0f43  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006e0f48  75d6                 jne 0x6e0f20
// 006e0f4a  5f                   pop edi
// 006e0f4b  5e                   pop esi
// 006e0f4c  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?SetDockingSite@CXTPDockingPaneTabbedContainer@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
