// roc 2009-12 008b1840  unit: CXTPDockingPaneTabbedContainer  size: 150 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1840
//
// 008b1840  83ec18               sub esp, 0x18
// 008b1843  56                   push esi
// 008b1844  8bf1                 mov esi, ecx
// 008b1846  57                   push edi
// 008b1847  8d7e54               lea edi, [esi + 0x54]
// 008b184a  8bcf                 mov ecx, edi
// 008b184c  e8efefffff           call 0x8b0840
// 008b1851  83b8bc00000000       cmp dword ptr [eax + 0xbc], 0
// 008b1858  746d                 je 0x8b18c7
// 008b185a  53                   push ebx
// 008b185b  8d44240c             lea eax, [esp + 0xc]
// 008b185f  50                   push eax
// 008b1860  ff1538cc9800         call dword ptr [0x98cc38]
// 008b1866  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b1869  8d4c240c             lea ecx, [esp + 0xc]
// 008b186d  51                   push ecx
// 008b186e  52                   push edx
// 008b186f  ff1534cc9800         call dword ptr [0x98cc34]
// 008b1875  8bcf                 mov ecx, edi
// 008b1877  e8d4efffff           call 0x8b0850
// 008b187c  8b10                 mov edx, dword ptr [eax]
// 008b187e  8b5274               mov edx, dword ptr [edx + 0x74]
// 008b1881  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 008b1885  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008b1889  56                   push esi
// 008b188a  8d4c2418             lea ecx, [esp + 0x18]
// 008b188e  51                   push ecx
// 008b188f  8bc8                 mov ecx, eax
// 008b1891  ffd2                 call edx
// 008b1893  53                   push ebx
// 008b1894  57                   push edi
// 008b1895  50                   push eax
// 008b1896  ff155cca9800         call dword ptr [0x98ca5c]
// 008b189c  5b                   pop ebx
// 008b189d  85c0                 test eax, eax
// 008b189f  7426                 je 0x8b18c7
// 008b18a1  e87822f4ff           call 0x7f3b1e
// 008b18a6  68867f0000           push 0x7f86
// 008b18ab  6a00                 push 0
// 008b18ad  ff1548ca9800         call dword ptr [0x98ca48]
// 008b18b3  50                   push eax
// 008b18b4  ff1520ca9800         call dword ptr [0x98ca20]
// 008b18ba  5f                   pop edi
// 008b18bb  b801000000           mov eax, 1
// 008b18c0  5e                   pop esi
// 008b18c1  83c418               add esp, 0x18
// 008b18c4  c20c00               ret 0xc
// 008b18c7  8bce                 mov ecx, esi
// 008b18c9  e86225f4ff           call 0x7f3e30
// 008b18ce  5f                   pop edi
// 008b18cf  5e                   pop esi
// 008b18d0  83c418               add esp, 0x18
// 008b18d3  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSetCursor@CXTPDockingPaneTabbedContainer@@IAEHPAVCWnd@@II@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPaneTabbedContainer.cpp