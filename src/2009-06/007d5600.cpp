// roc 2009-06 007d5600  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d5600
//
// 007d5600  56                   push esi
// 007d5601  8bf1                 mov esi, ecx
// 007d5603  8b0de08ba200         mov ecx, dword ptr [0xa28be0]
// 007d5609  57                   push edi
// 007d560a  85c9                 test ecx, ecx
// 007d560c  740d                 je 0x7d561b
// 007d560e  a1e48ba200           mov eax, dword ptr [0xa28be4]
// 007d5613  99                   cdq 
// 007d5614  f7f9                 idiv ecx
// 007d5616  83f801               cmp eax, 1
// 007d5619  7d05                 jge 0x7d5620
// 007d561b  b801000000           mov eax, 1
// 007d5620  89863c010000         mov dword ptr [esi + 0x13c], eax
// 007d5626  898640010000         mov dword ptr [esi + 0x140], eax
// 007d562c  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d562f  8dbe14010000         lea edi, [esi + 0x114]
// 007d5635  57                   push edi
// 007d5636  50                   push eax
// 007d5637  ff15f4ed8900         call dword ptr [0x89edf4]
// 007d563d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 007d5640  2b4f04               sub ecx, dword ptr [edi + 4]
// 007d5643  837c240c00           cmp dword ptr [esp + 0xc], 0
// 007d5648  898e38010000         mov dword ptr [esi + 0x138], ecx
// 007d564e  c7864801000001000000 mov dword ptr [esi + 0x148], 1
// 007d5658  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 007d5662  753f                 jne 0x7d56a3
// 007d5664  6a0a                 push 0xa
// 007d5666  8bce                 mov ecx, esi
// 007d5668  e833f8ffff           call 0x7d4ea0
// 007d566d  85c0                 test eax, eax
// 007d566f  7532                 jne 0x7d56a3
// 007d5671  50                   push eax
// 007d5672  8bce                 mov ecx, esi
// 007d5674  898640010000         mov dword ptr [esi + 0x140], eax
// 007d567a  e8d1ecffff           call 0x7d4350
// 007d567f  8b5620               mov edx, dword ptr [esi + 0x20]
// 007d5682  8b3d84ee8900         mov edi, dword ptr [0x89ee84]
// 007d5688  6a03                 push 3
// 007d568a  52                   push edx
// 007d568b  ffd7                 call edi
// 007d568d  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d5690  6a01                 push 1
// 007d5692  50                   push eax
// 007d5693  ffd7                 call edi
// 007d5695  6a0b                 push 0xb
// 007d5697  8bce                 mov ecx, esi
// 007d5699  e802f8ffff           call 0x7d4ea0
// 007d569e  5f                   pop edi
// 007d569f  5e                   pop esi
// 007d56a0  c20400               ret 4
// 007d56a3  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 007d56aa  741f                 je 0x7d56cb
// 007d56ac  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007d56af  6a03                 push 3
// 007d56b1  51                   push ecx
// 007d56b2  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 007d56bc  ff1584ee8900         call dword ptr [0x89ee84]
// 007d56c2  6a0b                 push 0xb
// 007d56c4  8bce                 mov ecx, esi
// 007d56c6  e8d5f7ffff           call 0x7d4ea0
// 007d56cb  8b5620               mov edx, dword ptr [esi + 0x20]
// 007d56ce  6a00                 push 0
// 007d56d0  6a64                 push 0x64
// 007d56d2  6a01                 push 1
// 007d56d4  52                   push edx
// 007d56d5  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 007d56df  ff150cee8900         call dword ptr [0x89ee0c]
// 007d56e5  5f                   pop edi
// 007d56e6  5e                   pop esi
// 007d56e7  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Collapse@CXTPDockingPaneMiniWnd@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
