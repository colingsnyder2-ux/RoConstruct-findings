// roc 2010-06 0085e210  unit: CXTPDockingPaneAutoHideWnd  size: 656 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0085e210
//
// 0085e210  83ec18               sub esp, 0x18
// 0085e213  56                   push esi
// 0085e214  8bf1                 mov esi, ecx
// 0085e216  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0085e21a  83f904               cmp ecx, 4
// 0085e21d  750e                 jne 0x85e22d
// 0085e21f  8bce                 mov ecx, esi
// 0085e221  e83affffff           call 0x85e160
// 0085e226  5e                   pop esi
// 0085e227  83c418               add esp, 0x18
// 0085e22a  c20400               ret 4
// 0085e22d  83bef800000000       cmp dword ptr [esi + 0xf8], 0
// 0085e234  0f845f020000         je 0x85e499
// 0085e23a  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0085e240  85c0                 test eax, eax
// 0085e242  740c                 je 0x85e250
// 0085e244  39b0a8000000         cmp dword ptr [eax + 0xa8], esi
// 0085e24a  0f8549020000         jne 0x85e499
// 0085e250  83f901               cmp ecx, 1
// 0085e253  0f8564010000         jne 0x85e3bd
// 0085e259  83be2801000000       cmp dword ptr [esi + 0x128], 0
// 0085e260  0f8533020000         jne 0x85e499
// 0085e266  8d442404             lea eax, [esp + 4]
// 0085e26a  50                   push eax
// 0085e26b  ff1574bc9e00         call dword ptr [0x9ebc74]
// 0085e271  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0085e277  83b99401000000       cmp dword ptr [ecx + 0x194], 0
// 0085e27e  0f85f1000000         jne 0x85e375
// 0085e284  8b542408             mov edx, dword ptr [esp + 8]
// 0085e288  8b442404             mov eax, dword ptr [esp + 4]
// 0085e28c  52                   push edx
// 0085e28d  50                   push eax
// 0085e28e  56                   push esi
// 0085e28f  8d4c2418             lea ecx, [esp + 0x18]
// 0085e293  e81810faff           call 0x7ff2b0
// 0085e298  8bc8                 mov ecx, eax
// 0085e29a  e81154bfff           call 0x4536b0
// 0085e29f  85c0                 test eax, eax
// 0085e2a1  0f85ce000000         jne 0x85e375
// 0085e2a7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085e2ab  8b542404             mov edx, dword ptr [esp + 4]
// 0085e2af  8b86fc000000         mov eax, dword ptr [esi + 0xfc]
// 0085e2b5  51                   push ecx
// 0085e2b6  52                   push edx
// 0085e2b7  50                   push eax
// 0085e2b8  8d4c2418             lea ecx, [esp + 0x18]
// 0085e2bc  e8ef0ffaff           call 0x7ff2b0
// 0085e2c1  8bc8                 mov ecx, eax
// 0085e2c3  e8e853bfff           call 0x4536b0
// 0085e2c8  85c0                 test eax, eax
// 0085e2ca  0f85a5000000         jne 0x85e375
// 0085e2d0  398610010000         cmp dword ptr [esi + 0x110], eax
// 0085e2d6  0f85bd010000         jne 0x85e499
// 0085e2dc  ff8e24010000         dec dword ptr [esi + 0x124]
// 0085e2e2  398624010000         cmp dword ptr [esi + 0x124], eax
// 0085e2e8  0f8fab010000         jg 0x85e499
// 0085e2ee  8d4e04               lea ecx, [esi + 4]
// 0085e2f1  51                   push ecx
// 0085e2f2  898624010000         mov dword ptr [esi + 0x124], eax
// 0085e2f8  ff1580a39e00         call dword ptr [0x9ea380]
// 0085e2fe  833d709cbe0000       cmp dword ptr [0xbe9c70], 0
// 0085e305  7456                 je 0x85e35d
// 0085e307  8b96f8000000         mov edx, dword ptr [esi + 0xf8]
// 0085e30d  8b82a4010000         mov eax, dword ptr [edx + 0x1a4]
// 0085e313  6a00                 push 0
// 0085e315  6a00                 push 0
// 0085e317  50                   push eax
// 0085e318  6a0a                 push 0xa
// 0085e31a  8bce                 mov ecx, esi
// 0085e31c  e8aff9ffff           call 0x85dcd0
// 0085e321  8bc8                 mov ecx, eax
// 0085e323  e818e4f8ff           call 0x7ec740
// 0085e328  85c0                 test eax, eax
// 0085e32a  7531                 jne 0x85e35d
// 0085e32c  8b4620               mov eax, dword ptr [esi + 0x20]
// 0085e32f  c7861001000001000000 mov dword ptr [esi + 0x110], 1
// 0085e339  85c0                 test eax, eax
// 0085e33b  742a                 je 0x85e367
// 0085e33d  8b0d689cbe00         mov ecx, dword ptr [0xbe9c68]
// 0085e343  6a00                 push 0
// 0085e345  51                   push ecx
// 0085e346  6a03                 push 3
// 0085e348  50                   push eax
// 0085e349  ff1554bc9e00         call dword ptr [0x9ebc54]
// 0085e34f  8bce                 mov ecx, esi
// 0085e351  e8c69bf4ff           call 0x7a7f1c
// 0085e356  5e                   pop esi
// 0085e357  83c418               add esp, 0x18
// 0085e35a  c20400               ret 4
// 0085e35d  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 0085e367  8bce                 mov ecx, esi
// 0085e369  e8ae9bf4ff           call 0x7a7f1c
// 0085e36e  5e                   pop esi
// 0085e36f  83c418               add esp, 0x18
// 0085e372  c20400               ret 4
// 0085e375  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0085e37c  c7862401000006000000 mov dword ptr [esi + 0x124], 6
// 0085e386  0f840d010000         je 0x85e499
// 0085e38c  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085e38f  6a03                 push 3
// 0085e391  52                   push edx
// 0085e392  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0085e39c  ff1560ba9e00         call dword ptr [0x9eba60]
// 0085e3a2  a1689cbe00           mov eax, dword ptr [0xbe9c68]
// 0085e3a7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0085e3aa  6a00                 push 0
// 0085e3ac  50                   push eax
// 0085e3ad  6a02                 push 2
// 0085e3af  51                   push ecx
// 0085e3b0  ff1554bc9e00         call dword ptr [0x9ebc54]
// 0085e3b6  5e                   pop esi
// 0085e3b7  83c418               add esp, 0x18
// 0085e3ba  c20400               ret 4
// 0085e3bd  83f903               cmp ecx, 3
// 0085e3c0  7571                 jne 0x85e433
// 0085e3c2  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0085e3c9  0f84ca000000         je 0x85e499
// 0085e3cf  ff8e08010000         dec dword ptr [esi + 0x108]
// 0085e3d5  83be08010000ff       cmp dword ptr [esi + 0x108], -1
// 0085e3dc  7f79                 jg 0x85e457
// 0085e3de  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085e3e1  51                   push ecx
// 0085e3e2  52                   push edx
// 0085e3e3  c7861001000000000000 mov dword ptr [esi + 0x110], 0
// 0085e3ed  ff1560ba9e00         call dword ptr [0x9eba60]
// 0085e3f3  8d4604               lea eax, [esi + 4]
// 0085e3f6  50                   push eax
// 0085e3f7  ff1580a39e00         call dword ptr [0x9ea380]
// 0085e3fd  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 0085e403  8b81a4010000         mov eax, dword ptr [ecx + 0x1a4]
// 0085e409  6a00                 push 0
// 0085e40b  6a00                 push 0
// 0085e40d  50                   push eax
// 0085e40e  6a0b                 push 0xb
// 0085e410  8bce                 mov ecx, esi
// 0085e412  e8b9f8ffff           call 0x85dcd0
// 0085e417  8bc8                 mov ecx, eax
// 0085e419  e822e3f8ff           call 0x7ec740
// 0085e41e  8bce                 mov ecx, esi
// 0085e420  e83bfdffff           call 0x85e160
// 0085e425  8bce                 mov ecx, esi
// 0085e427  e8f09af4ff           call 0x7a7f1c
// 0085e42c  5e                   pop esi
// 0085e42d  83c418               add esp, 0x18
// 0085e430  c20400               ret 4
// 0085e433  83f902               cmp ecx, 2
// 0085e436  7561                 jne 0x85e499
// 0085e438  83be1001000000       cmp dword ptr [esi + 0x110], 0
// 0085e43f  7558                 jne 0x85e499
// 0085e441  ff8608010000         inc dword ptr [esi + 0x108]
// 0085e447  8b8e08010000         mov ecx, dword ptr [esi + 0x108]
// 0085e44d  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0085e453  3bc8                 cmp ecx, eax
// 0085e455  7d0e                 jge 0x85e465
// 0085e457  8bce                 mov ecx, esi
// 0085e459  e8c2faffff           call 0x85df20
// 0085e45e  5e                   pop esi
// 0085e45f  83c418               add esp, 0x18
// 0085e462  c20400               ret 4
// 0085e465  8b5620               mov edx, dword ptr [esi + 0x20]
// 0085e468  6a02                 push 2
// 0085e46a  48                   dec eax
// 0085e46b  52                   push edx
// 0085e46c  898608010000         mov dword ptr [esi + 0x108], eax
// 0085e472  ff1560ba9e00         call dword ptr [0x9eba60]
// 0085e478  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0085e47e  8b80a4010000         mov eax, dword ptr [eax + 0x1a4]
// 0085e484  6a00                 push 0
// 0085e486  6a00                 push 0
// 0085e488  50                   push eax
// 0085e489  6a0d                 push 0xd
// 0085e48b  8bce                 mov ecx, esi
// 0085e48d  e83ef8ffff           call 0x85dcd0
// 0085e492  8bc8                 mov ecx, eax
// 0085e494  e8a7e2f8ff           call 0x7ec740
// 0085e499  5e                   pop esi
// 0085e49a  83c418               add esp, 0x18
// 0085e49d  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneAutoHidePanel.cpp (function ?OnTimer@CXTPDockingPaneAutoHideWnd@@IAEXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneAutoHidePanel.cpp
