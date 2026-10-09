// roc 2009-12 008bd540  unit: CXTPDockingPaneContext  size: 224 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008bd540
//
// 008bd540  83ec10               sub esp, 0x10
// 008bd543  53                   push ebx
// 008bd544  8bd9                 mov ebx, ecx
// 008bd546  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 008bd54c  83b8e000000000       cmp dword ptr [eax + 0xe0], 0
// 008bd553  0f84c0000000         je 0x8bd619
// 008bd559  56                   push esi
// 008bd55a  8b742424             mov esi, dword ptr [esp + 0x24]
// 008bd55e  57                   push edi
// 008bd55f  56                   push esi
// 008bd560  8d4c2410             lea ecx, [esp + 0x10]
// 008bd564  51                   push ecx
// 008bd565  ff1564cc9800         call dword ptr [0x98cc64]
// 008bd56b  8b931c010000         mov edx, dword ptr [ebx + 0x11c]
// 008bd571  8b8acc000000         mov ecx, dword ptr [edx + 0xcc]
// 008bd577  e8f68e0600           call 0x926472
// 008bd57c  a900000021           test eax, 0x21000000
// 008bd581  751e                 jne 0x8bd5a1
// 008bd583  8b831c010000         mov eax, dword ptr [ebx + 0x11c]
// 008bd589  8b88cc000000         mov ecx, dword ptr [eax + 0xcc]
// 008bd58f  8b442424             mov eax, dword ptr [esp + 0x24]
// 008bd593  51                   push ecx
// 008bd594  8d542410             lea edx, [esp + 0x10]
// 008bd598  52                   push edx
// 008bd599  50                   push eax
// 008bd59a  8bcb                 mov ecx, ebx
// 008bd59c  e85ffeffff           call 0x8bd400
// 008bd5a1  8b8b1c010000         mov ecx, dword ptr [ebx + 0x11c]
// 008bd5a7  e8c4b0f7ff           call 0x838670
// 008bd5ac  8b7804               mov edi, dword ptr [eax + 4]
// 008bd5af  85ff                 test edi, edi
// 008bd5b1  7449                 je 0x8bd5fc
// 008bd5b3  8bc7                 mov eax, edi
// 008bd5b5  8b4008               mov eax, dword ptr [eax + 8]
// 008bd5b8  83781803             cmp dword ptr [eax + 0x18], 3
// 008bd5bc  8b3f                 mov edi, dword ptr [edi]
// 008bd5be  7534                 jne 0x8bd5f4
// 008bd5c0  8db008ffffff         lea esi, [eax - 0xf8]
// 008bd5c6  85f6                 test esi, esi
// 008bd5c8  742a                 je 0x8bd5f4
// 008bd5ca  8b4620               mov eax, dword ptr [esi + 0x20]
// 008bd5cd  85c0                 test eax, eax
// 008bd5cf  7423                 je 0x8bd5f4
// 008bd5d1  50                   push eax
// 008bd5d2  ff1564ca9800         call dword ptr [0x98ca64]
// 008bd5d8  85c0                 test eax, eax
// 008bd5da  7418                 je 0x8bd5f4
// 008bd5dc  39742420             cmp dword ptr [esp + 0x20], esi
// 008bd5e0  7412                 je 0x8bd5f4
// 008bd5e2  8b542424             mov edx, dword ptr [esp + 0x24]
// 008bd5e6  56                   push esi
// 008bd5e7  8d4c2410             lea ecx, [esp + 0x10]
// 008bd5eb  51                   push ecx
// 008bd5ec  52                   push edx
// 008bd5ed  8bcb                 mov ecx, ebx
// 008bd5ef  e80cfeffff           call 0x8bd400
// 008bd5f4  85ff                 test edi, edi
// 008bd5f6  75bb                 jne 0x8bd5b3
// 008bd5f8  8b742428             mov esi, dword ptr [esp + 0x28]
// 008bd5fc  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008bd600  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008bd604  8b542414             mov edx, dword ptr [esp + 0x14]
// 008bd608  8906                 mov dword ptr [esi], eax
// 008bd60a  8b442418             mov eax, dword ptr [esp + 0x18]
// 008bd60e  894e04               mov dword ptr [esi + 4], ecx
// 008bd611  895608               mov dword ptr [esi + 8], edx
// 008bd614  5f                   pop edi
// 008bd615  89460c               mov dword ptr [esi + 0xc], eax
// 008bd618  5e                   pop esi
// 008bd619  5b                   pop ebx
// 008bd61a  83c410               add esp, 0x10
// 008bd61d  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneContext.cpp (function ?OnSizingFloatingFrame@CXTPDockingPaneContext@@UAEXPAVCXTPDockingPaneMiniWnd@@IPAUtagRECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneContext.cpp
