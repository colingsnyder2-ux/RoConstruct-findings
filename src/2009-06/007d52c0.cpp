// roc 2009-06 007d52c0  unit: CXTPDockingPaneMiniWnd  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007d52c0
//
// 007d52c0  56                   push esi
// 007d52c1  8bf1                 mov esi, ecx
// 007d52c3  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 007d52ca  0f84aa000000         je 0x7d537a
// 007d52d0  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 007d52d7  0f8f9d000000         jg 0x7d537a
// 007d52dd  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 007d52e4  7429                 je 0x7d530f
// 007d52e6  8b4620               mov eax, dword ptr [esi + 0x20]
// 007d52e9  6a03                 push 3
// 007d52eb  50                   push eax
// 007d52ec  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 007d52f6  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 007d5300  ff1584ee8900         call dword ptr [0x89ee84]
// 007d5306  6a0b                 push 0xb
// 007d5308  8bce                 mov ecx, esi
// 007d530a  e891fbffff           call 0x7d4ea0
// 007d530f  6a0c                 push 0xc
// 007d5311  8bce                 mov ecx, esi
// 007d5313  e888fbffff           call 0x7d4ea0
// 007d5318  85c0                 test eax, eax
// 007d531a  755e                 jne 0x7d537a
// 007d531c  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 007d5326  8b0de08ba200         mov ecx, dword ptr [0xa28be0]
// 007d532c  85c9                 test ecx, ecx
// 007d532e  740d                 je 0x7d533d
// 007d5330  a1e48ba200           mov eax, dword ptr [0xa28be4]
// 007d5335  99                   cdq 
// 007d5336  f7f9                 idiv ecx
// 007d5338  83f801               cmp eax, 1
// 007d533b  7d05                 jge 0x7d5342
// 007d533d  b801000000           mov eax, 1
// 007d5342  6a01                 push 1
// 007d5344  8bce                 mov ecx, esi
// 007d5346  89863c010000         mov dword ptr [esi + 0x13c], eax
// 007d534c  898640010000         mov dword ptr [esi + 0x140], eax
// 007d5352  e8f9efffff           call 0x7d4350
// 007d5357  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 007d535a  6a00                 push 0
// 007d535c  6a64                 push 0x64
// 007d535e  6a01                 push 1
// 007d5360  51                   push ecx
// 007d5361  c7864401000008000000 mov dword ptr [esi + 0x144], 8
// 007d536b  ff150cee8900         call dword ptr [0x89ee0c]
// 007d5371  6a0d                 push 0xd
// 007d5373  8bce                 mov ecx, esi
// 007d5375  e826fbffff           call 0x7d4ea0
// 007d537a  5e                   pop esi
// 007d537b  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Expand@CXTPDockingPaneMiniWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
