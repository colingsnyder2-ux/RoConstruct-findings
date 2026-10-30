// roc 2009-12 0085cc60  unit: CXTPDockingPane  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0085cc60
//
// 0085cc60  6aff                 push -1
// 0085cc62  6899869500           push 0x958699
// 0085cc67  64a100000000         mov eax, dword ptr fs:[0]
// 0085cc6d  50                   push eax
// 0085cc6e  51                   push ecx
// 0085cc6f  56                   push esi
// 0085cc70  a10052b600           mov eax, dword ptr [0xb65200]
// 0085cc75  33c4                 xor eax, esp
// 0085cc77  50                   push eax
// 0085cc78  8d44240c             lea eax, [esp + 0xc]
// 0085cc7c  64a300000000         mov dword ptr fs:[0], eax
// 0085cc82  8bf1                 mov esi, ecx
// 0085cc84  8d44241c             lea eax, [esp + 0x1c]
// 0085cc88  50                   push eax
// 0085cc89  e812edfdff           call 0x83b9a0
// 0085cc8e  85c0                 test eax, eax
// 0085cc90  7418                 je 0x85ccaa
// 0085cc92  b857000780           mov eax, 0x80070057
// 0085cc97  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085cc9b  64890d00000000       mov dword ptr fs:[0], ecx
// 0085cca2  59                   pop ecx
// 0085cca3  5e                   pop esi
// 0085cca4  83c410               add esp, 0x10
// 0085cca7  c21400               ret 0x14
// 0085ccaa  8b56a8               mov edx, dword ptr [esi - 0x58]
// 0085ccad  8b525c               mov edx, dword ptr [edx + 0x5c]
// 0085ccb0  8d4ea8               lea ecx, [esi - 0x58]
// 0085ccb3  8d442408             lea eax, [esp + 8]
// 0085ccb7  50                   push eax
// 0085ccb8  ffd2                 call edx
// 0085ccba  8bc8                 mov ecx, eax
// 0085ccbc  c744241400000000     mov dword ptr [esp + 0x14], 0
// 0085ccc4  ff156cd69800         call dword ptr [0x98d66c]
// 0085ccca  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0085ccce  8901                 mov dword ptr [ecx], eax
// 0085ccd0  8d4c2408             lea ecx, [esp + 8]
// 0085ccd4  ff15c0de9800         call dword ptr [0x98dec0]
// 0085ccda  33c0                 xor eax, eax
// 0085ccdc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0085cce0  64890d00000000       mov dword ptr fs:[0], ecx
// 0085cce7  59                   pop ecx
// 0085cce8  5e                   pop esi
// 0085cce9  83c410               add esp, 0x10
// 0085ccec  c21400               ret 0x14
// copied from an identical function in another client (function ?GetAccessibleDescription@CXTPDockingPane@@MAEJUtagVARIANT@@PAPA_W@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPane.cpp