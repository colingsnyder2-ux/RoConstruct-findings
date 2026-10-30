// roc 2009-12 008b2410  unit: CXTPDockingPaneTabbedContainer  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b2410
//
// 008b2410  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b2414  56                   push esi
// 008b2415  6a01                 push 1
// 008b2417  8bf1                 mov esi, ecx
// 008b2419  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008b241d  8b5620               mov edx, dword ptr [esi + 0x20]
// 008b2420  50                   push eax
// 008b2421  51                   push ecx
// 008b2422  52                   push edx
// 008b2423  8d8ea8000000         lea ecx, [esi + 0xa8]
// 008b2429  e8f2e10100           call 0x8d0620
// 008b242e  85c0                 test eax, eax
// 008b2430  7562                 jne 0x8b2494
// 008b2432  8b442410             mov eax, dword ptr [esp + 0x10]
// 008b2436  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b243a  50                   push eax
// 008b243b  51                   push ecx
// 008b243c  8bce                 mov ecx, esi
// 008b243e  e8cdf7ffff           call 0x8b1c10
// 008b2443  85c0                 test eax, eax
// 008b2445  754d                 jne 0x8b2494
// 008b2447  8b542410             mov edx, dword ptr [esp + 0x10]
// 008b244b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008b244f  52                   push edx
// 008b2450  50                   push eax
// 008b2451  8bce                 mov ecx, esi
// 008b2453  e888f4ffff           call 0x8b18e0
// 008b2458  83f8fe               cmp eax, -2
// 008b245b  753b                 jne 0x8b2498
// 008b245d  8b5654               mov edx, dword ptr [esi + 0x54]
// 008b2460  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008b2463  57                   push edi
// 008b2464  8bbea4010000         mov edi, dword ptr [esi + 0x1a4]
// 008b246a  83c654               add esi, 0x54
// 008b246d  8bce                 mov ecx, esi
// 008b246f  ffd0                 call eax
// 008b2471  85c0                 test eax, eax
// 008b2473  740f                 je 0x8b2484
// 008b2475  85ff                 test edi, edi
// 008b2477  740b                 je 0x8b2484
// 008b2479  8bcf                 mov ecx, edi
// 008b247b  e800a7faff           call 0x85cb80
// 008b2480  a802                 test al, 2
// 008b2482  750f                 jne 0x8b2493
// 008b2484  56                   push esi
// 008b2485  8bce                 mov ecx, esi
// 008b2487  e8b4e3ffff           call 0x8b0840
// 008b248c  8bc8                 mov ecx, eax
// 008b248e  e8cd83f8ff           call 0x83a860
// 008b2493  5f                   pop edi
// 008b2494  5e                   pop esi
// 008b2495  c20c00               ret 0xc
// 008b2498  85c0                 test eax, eax
// 008b249a  7cf8                 jl 0x8b2494
// 008b249c  50                   push eax
// 008b249d  8bce                 mov ecx, esi
// 008b249f  e83cffffff           call 0x8b23e0
// 008b24a4  85c0                 test eax, eax
// 008b24a6  7405                 je 0x8b24ad
// 008b24a8  83c020               add eax, 0x20
// 008b24ab  eb02                 jmp 0x8b24af
// 008b24ad  33c0                 xor eax, eax
// 008b24af  50                   push eax
// 008b24b0  8d4e54               lea ecx, [esi + 0x54]
// 008b24b3  e888e3ffff           call 0x8b0840
// 008b24b8  8bc8                 mov ecx, eax
// 008b24ba  e8a183f8ff           call 0x83a860
// 008b24bf  5e                   pop esi
// 008b24c0  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonDblClk@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
