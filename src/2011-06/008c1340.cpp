// roc 2011-06 008c1340  unit: CXTPDockingPaneMiniWnd  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1340
//
// 008c1340  56                   push esi
// 008c1341  8bf1                 mov esi, ecx
// 008c1343  83be4801000000       cmp dword ptr [esi + 0x148], 0
// 008c134a  0f84aa000000         je 0x8c13fa
// 008c1350  83be4001000000       cmp dword ptr [esi + 0x140], 0
// 008c1357  0f8f9d000000         jg 0x8c13fa
// 008c135d  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008c1364  7429                 je 0x8c138f
// 008c1366  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c1369  6a03                 push 3
// 008c136b  50                   push eax
// 008c136c  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 008c1376  c7864c01000000000000 mov dword ptr [esi + 0x14c], 0
// 008c1380  ff15d019a400         call dword ptr [0xa419d0]
// 008c1386  6a0b                 push 0xb
// 008c1388  8bce                 mov ecx, esi
// 008c138a  e891fbffff           call 0x8c0f20
// 008c138f  6a0c                 push 0xc
// 008c1391  8bce                 mov ecx, esi
// 008c1393  e888fbffff           call 0x8c0f20
// 008c1398  85c0                 test eax, eax
// 008c139a  755e                 jne 0x8c13fa
// 008c139c  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 008c13a6  8b0d2893c900         mov ecx, dword ptr [0xc99328]
// 008c13ac  85c9                 test ecx, ecx
// 008c13ae  740d                 je 0x8c13bd
// 008c13b0  a12c93c900           mov eax, dword ptr [0xc9932c]
// 008c13b5  99                   cdq 
// 008c13b6  f7f9                 idiv ecx
// 008c13b8  83f801               cmp eax, 1
// 008c13bb  7d05                 jge 0x8c13c2
// 008c13bd  b801000000           mov eax, 1
// 008c13c2  6a01                 push 1
// 008c13c4  8bce                 mov ecx, esi
// 008c13c6  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008c13cc  898640010000         mov dword ptr [esi + 0x140], eax
// 008c13d2  e8d9efffff           call 0x8c03b0
// 008c13d7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c13da  6a00                 push 0
// 008c13dc  6a64                 push 0x64
// 008c13de  6a01                 push 1
// 008c13e0  51                   push ecx
// 008c13e1  c7864401000008000000 mov dword ptr [esi + 0x144], 8
// 008c13eb  ff15741ca400         call dword ptr [0xa41c74]
// 008c13f1  6a0d                 push 0xd
// 008c13f3  8bce                 mov ecx, esi
// 008c13f5  e826fbffff           call 0x8c0f20
// 008c13fa  5e                   pop esi
// 008c13fb  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Expand@CXTPDockingPaneMiniWnd@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
