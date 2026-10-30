// roc 2011-06 008c1660  unit: CXTPDockingPaneMiniWnd  size: 234 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c1660
//
// 008c1660  56                   push esi
// 008c1661  8bf1                 mov esi, ecx
// 008c1663  8b0d2893c900         mov ecx, dword ptr [0xc99328]
// 008c1669  57                   push edi
// 008c166a  85c9                 test ecx, ecx
// 008c166c  740d                 je 0x8c167b
// 008c166e  a12c93c900           mov eax, dword ptr [0xc9932c]
// 008c1673  99                   cdq 
// 008c1674  f7f9                 idiv ecx
// 008c1676  83f801               cmp eax, 1
// 008c1679  7d05                 jge 0x8c1680
// 008c167b  b801000000           mov eax, 1
// 008c1680  89863c010000         mov dword ptr [esi + 0x13c], eax
// 008c1686  898640010000         mov dword ptr [esi + 0x140], eax
// 008c168c  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c168f  8dbe14010000         lea edi, [esi + 0x114]
// 008c1695  57                   push edi
// 008c1696  50                   push eax
// 008c1697  ff155c1ca400         call dword ptr [0xa41c5c]
// 008c169d  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 008c16a0  2b4f04               sub ecx, dword ptr [edi + 4]
// 008c16a3  837c240c00           cmp dword ptr [esp + 0xc], 0
// 008c16a8  898e38010000         mov dword ptr [esi + 0x138], ecx
// 008c16ae  c7864801000001000000 mov dword ptr [esi + 0x148], 1
// 008c16b8  c7864c01000001000000 mov dword ptr [esi + 0x14c], 1
// 008c16c2  753f                 jne 0x8c1703
// 008c16c4  6a0a                 push 0xa
// 008c16c6  8bce                 mov ecx, esi
// 008c16c8  e853f8ffff           call 0x8c0f20
// 008c16cd  85c0                 test eax, eax
// 008c16cf  7532                 jne 0x8c1703
// 008c16d1  50                   push eax
// 008c16d2  8bce                 mov ecx, esi
// 008c16d4  898640010000         mov dword ptr [esi + 0x140], eax
// 008c16da  e8d1ecffff           call 0x8c03b0
// 008c16df  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c16e2  8b3dd019a400         mov edi, dword ptr [0xa419d0]
// 008c16e8  6a03                 push 3
// 008c16ea  52                   push edx
// 008c16eb  ffd7                 call edi
// 008c16ed  8b4620               mov eax, dword ptr [esi + 0x20]
// 008c16f0  6a01                 push 1
// 008c16f2  50                   push eax
// 008c16f3  ffd7                 call edi
// 008c16f5  6a0b                 push 0xb
// 008c16f7  8bce                 mov ecx, esi
// 008c16f9  e822f8ffff           call 0x8c0f20
// 008c16fe  5f                   pop edi
// 008c16ff  5e                   pop esi
// 008c1700  c20400               ret 4
// 008c1703  83be5001000000       cmp dword ptr [esi + 0x150], 0
// 008c170a  741f                 je 0x8c172b
// 008c170c  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008c170f  6a03                 push 3
// 008c1711  51                   push ecx
// 008c1712  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 008c171c  ff15d019a400         call dword ptr [0xa419d0]
// 008c1722  6a0b                 push 0xb
// 008c1724  8bce                 mov ecx, esi
// 008c1726  e8f5f7ffff           call 0x8c0f20
// 008c172b  8b5620               mov edx, dword ptr [esi + 0x20]
// 008c172e  6a00                 push 0
// 008c1730  6a64                 push 0x64
// 008c1732  6a01                 push 1
// 008c1734  52                   push edx
// 008c1735  c7864401000006000000 mov dword ptr [esi + 0x144], 6
// 008c173f  ff15741ca400         call dword ptr [0xa41c74]
// 008c1745  5f                   pop edi
// 008c1746  5e                   pop esi
// 008c1747  c20400               ret 4
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneMiniWnd.cpp (function ?Collapse@CXTPDockingPaneMiniWnd@@QAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneMiniWnd.cpp
