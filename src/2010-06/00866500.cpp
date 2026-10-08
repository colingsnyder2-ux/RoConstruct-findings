// roc 2010-06 00866500  unit: CXTPDockingPaneTabbedContainer  size: 179 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00866500
//
// 00866500  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00866504  56                   push esi
// 00866505  6a01                 push 1
// 00866507  8bf1                 mov esi, ecx
// 00866509  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0086650d  8b5620               mov edx, dword ptr [esi + 0x20]
// 00866510  50                   push eax
// 00866511  51                   push ecx
// 00866512  52                   push edx
// 00866513  8d8ea8000000         lea ecx, [esi + 0xa8]
// 00866519  e8c2e20100           call 0x8847e0
// 0086651e  85c0                 test eax, eax
// 00866520  7562                 jne 0x866584
// 00866522  8b442410             mov eax, dword ptr [esp + 0x10]
// 00866526  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0086652a  50                   push eax
// 0086652b  51                   push ecx
// 0086652c  8bce                 mov ecx, esi
// 0086652e  e8bdf7ffff           call 0x865cf0
// 00866533  85c0                 test eax, eax
// 00866535  754d                 jne 0x866584
// 00866537  8b542410             mov edx, dword ptr [esp + 0x10]
// 0086653b  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0086653f  52                   push edx
// 00866540  50                   push eax
// 00866541  8bce                 mov ecx, esi
// 00866543  e878f4ffff           call 0x8659c0
// 00866548  83f8fe               cmp eax, -2
// 0086654b  753b                 jne 0x866588
// 0086654d  8b5654               mov edx, dword ptr [esi + 0x54]
// 00866550  8b421c               mov eax, dword ptr [edx + 0x1c]
// 00866553  57                   push edi
// 00866554  8bbea4010000         mov edi, dword ptr [esi + 0x1a4]
// 0086655a  83c654               add esi, 0x54
// 0086655d  8bce                 mov ecx, esi
// 0086655f  ffd0                 call eax
// 00866561  85c0                 test eax, eax
// 00866563  740f                 je 0x866574
// 00866565  85ff                 test edi, edi
// 00866567  740b                 je 0x866574
// 00866569  8bcf                 mov ecx, edi
// 0086656b  e8e0a5faff           call 0x810b50
// 00866570  a802                 test al, 2
// 00866572  750f                 jne 0x866583
// 00866574  56                   push esi
// 00866575  8bce                 mov ecx, esi
// 00866577  e894e3ffff           call 0x864910
// 0086657c  8bc8                 mov ecx, eax
// 0086657e  e83d84f8ff           call 0x7ee9c0
// 00866583  5f                   pop edi
// 00866584  5e                   pop esi
// 00866585  c20c00               ret 0xc
// 00866588  85c0                 test eax, eax
// 0086658a  7cf8                 jl 0x866584
// 0086658c  50                   push eax
// 0086658d  8bce                 mov ecx, esi
// 0086658f  e83cffffff           call 0x8664d0
// 00866594  85c0                 test eax, eax
// 00866596  7405                 je 0x86659d
// 00866598  83c020               add eax, 0x20
// 0086659b  eb02                 jmp 0x86659f
// 0086659d  33c0                 xor eax, eax
// 0086659f  50                   push eax
// 008665a0  8d4e54               lea ecx, [esi + 0x54]
// 008665a3  e868e3ffff           call 0x864910
// 008665a8  8bc8                 mov ecx, eax
// 008665aa  e81184f8ff           call 0x7ee9c0
// 008665af  5e                   pop esi
// 008665b0  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnLButtonDblClk@CXTPDockingPaneTabbedContainer@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
