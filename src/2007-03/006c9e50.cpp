// roc 2007-03 006c9e50  unit: seg_006c0000  size: 127 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006c9e50
//
// 006c9e50  56                   push esi
// 006c9e51  8bf1                 mov esi, ecx
// 006c9e53  8b46cc               mov eax, dword ptr [esi - 0x34]
// 006c9e56  85c0                 test eax, eax
// 006c9e58  57                   push edi
// 006c9e59  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006c9e5d  897e14               mov dword ptr [esi + 0x14], edi
// 006c9e60  742d                 je 0x6c9e8f
// 006c9e62  50                   push eax
// 006c9e63  ff15c8ec7700         call dword ptr [0x77ecc8]
// 006c9e69  50                   push eax
// 006c9e6a  e8df47f5ff           call 0x61e64e
// 006c9e6f  3bc7                 cmp eax, edi
// 006c9e71  741c                 je 0x6c9e8f
// 006c9e73  85ff                 test edi, edi
// 006c9e75  7504                 jne 0x6c9e7b
// 006c9e77  33c0                 xor eax, eax
// 006c9e79  eb03                 jmp 0x6c9e7e
// 006c9e7b  8b4720               mov eax, dword ptr [edi + 0x20]
// 006c9e7e  50                   push eax
// 006c9e7f  8b46cc               mov eax, dword ptr [esi - 0x34]
// 006c9e82  50                   push eax
// 006c9e83  ff1574ef7700         call dword ptr [0x77ef74]
// 006c9e89  50                   push eax
// 006c9e8a  e8bf47f5ff           call 0x61e64e
// 006c9e8f  8bce                 mov ecx, esi
// 006c9e91  e85a18faff           call 0x66b6f0
// 006c9e96  85c0                 test eax, eax
// 006c9e98  8944240c             mov dword ptr [esp + 0xc], eax
// 006c9e9c  742c                 je 0x6c9eca
// 006c9e9e  8bff                 mov edi, edi
// 006c9ea0  8d4c240c             lea ecx, [esp + 0xc]
// 006c9ea4  51                   push ecx
// 006c9ea5  8bce                 mov ecx, esi
// 006c9ea7  e874b30400           call 0x715220
// 006c9eac  85c0                 test eax, eax
// 006c9eae  7405                 je 0x6c9eb5
// 006c9eb0  83c0e0               add eax, -0x20
// 006c9eb3  eb02                 jmp 0x6c9eb7
// 006c9eb5  33c0                 xor eax, eax
// 006c9eb7  8b5020               mov edx, dword ptr [eax + 0x20]
// 006c9eba  8d4820               lea ecx, [eax + 0x20]
// 006c9ebd  8b422c               mov eax, dword ptr [edx + 0x2c]
// 006c9ec0  57                   push edi
// 006c9ec1  ffd0                 call eax
// 006c9ec3  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006c9ec8  75d6                 jne 0x6c9ea0
// 006c9eca  5f                   pop edi
// 006c9ecb  5e                   pop esi
// 006c9ecc  c20400               ret 4
// library xtp-11.2.2-vc8/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?SetDockingSite@CXTPDockingPaneTabbedContainer@@MAEXPAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
