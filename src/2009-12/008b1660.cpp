// roc 2009-12 008b1660  unit: CXTPDockingPaneTabbedContainer  size: 358 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1660
//
// 008b1660  6aff                 push -1
// 008b1662  6852649600           push 0x966452
// 008b1667  64a100000000         mov eax, dword ptr fs:[0]
// 008b166d  50                   push eax
// 008b166e  83ec0c               sub esp, 0xc
// 008b1671  53                   push ebx
// 008b1672  55                   push ebp
// 008b1673  56                   push esi
// 008b1674  57                   push edi
// 008b1675  a10052b600           mov eax, dword ptr [0xb65200]
// 008b167a  33c4                 xor eax, esp
// 008b167c  50                   push eax
// 008b167d  8d442420             lea eax, [esp + 0x20]
// 008b1681  64a300000000         mov dword ptr fs:[0], eax
// 008b1687  8bd9                 mov ebx, ecx
// 008b1689  837b2000             cmp dword ptr [ebx + 0x20], 0
// 008b168d  0f841f010000         je 0x8b17b2
// 008b1693  ff839c010000         inc dword ptr [ebx + 0x19c]
// 008b1699  8daba8000000         lea ebp, [ebx + 0xa8]
// 008b169f  8bcd                 mov ecx, ebp
// 008b16a1  e8cadd0100           call 0x8cf470
// 008b16a6  8d4b54               lea ecx, [ebx + 0x54]
// 008b16a9  e8e290faff           call 0x85a790
// 008b16ae  89442414             mov dword ptr [esp + 0x14], eax
// 008b16b2  85c0                 test eax, eax
// 008b16b4  0f84e0000000         je 0x8b179a
// 008b16ba  8d442414             lea eax, [esp + 0x14]
// 008b16be  50                   push eax
// 008b16bf  8d4b54               lea ecx, [ebx + 0x54]
// 008b16c2  e849180400           call 0x8f2f10
// 008b16c7  85c0                 test eax, eax
// 008b16c9  7405                 je 0x8b16d0
// 008b16cb  8d70e0               lea esi, [eax - 0x20]
// 008b16ce  eb02                 jmp 0x8b16d2
// 008b16d0  33f6                 xor esi, esi
// 008b16d2  8b8304010000         mov eax, dword ptr [ebx + 0x104]
// 008b16d8  6a00                 push 0
// 008b16da  50                   push eax
// 008b16db  8bcd                 mov ecx, ebp
// 008b16dd  e8fedd0100           call 0x8cf4e0
// 008b16e2  8bf8                 mov edi, eax
// 008b16e4  39b3a4010000         cmp dword ptr [ebx + 0x1a4], esi
// 008b16ea  750b                 jne 0x8b16f7
// 008b16ec  8b5500               mov edx, dword ptr [ebp]
// 008b16ef  8b4220               mov eax, dword ptr [edx + 0x20]
// 008b16f2  57                   push edi
// 008b16f3  8bcd                 mov ecx, ebp
// 008b16f5  ffd0                 call eax
// 008b16f7  8b16                 mov edx, dword ptr [esi]
// 008b16f9  8b5260               mov edx, dword ptr [edx + 0x60]
// 008b16fc  8d442418             lea eax, [esp + 0x18]
// 008b1700  50                   push eax
// 008b1701  8bce                 mov ecx, esi
// 008b1703  ffd2                 call edx
// 008b1705  8bc8                 mov ecx, eax
// 008b1707  c744242800000000     mov dword ptr [esp + 0x28], 0
// 008b170f  ff1580de9800         call dword ptr [0x98de80]
// 008b1715  50                   push eax
// 008b1716  8bcf                 mov ecx, edi
// 008b1718  e813cd0100           call 0x8ce430
// 008b171d  8d4c2418             lea ecx, [esp + 0x18]
// 008b1721  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 008b1729  ff15c0de9800         call dword ptr [0x98dec0]
// 008b172f  8b06                 mov eax, dword ptr [esi]
// 008b1731  8b5068               mov edx, dword ptr [eax + 0x68]
// 008b1734  8bce                 mov ecx, esi
// 008b1736  ffd2                 call edx
// 008b1738  50                   push eax
// 008b1739  8bcf                 mov ecx, edi
// 008b173b  e820cd0100           call 0x8ce460
// 008b1740  8b06                 mov eax, dword ptr [esi]
// 008b1742  8b505c               mov edx, dword ptr [eax + 0x5c]
// 008b1745  8d4c241c             lea ecx, [esp + 0x1c]
// 008b1749  51                   push ecx
// 008b174a  8bce                 mov ecx, esi
// 008b174c  ffd2                 call edx
// 008b174e  8bc8                 mov ecx, eax
// 008b1750  c744242801000000     mov dword ptr [esp + 0x28], 1
// 008b1758  ff1580de9800         call dword ptr [0x98de80]
// 008b175e  50                   push eax
// 008b175f  8d4f58               lea ecx, [edi + 0x58]
// 008b1762  ff155cde9800         call dword ptr [0x98de5c]
// 008b1768  8d4c241c             lea ecx, [esp + 0x1c]
// 008b176c  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 008b1774  ff15c0de9800         call dword ptr [0x98dec0]
// 008b177a  8bce                 mov ecx, esi
// 008b177c  e8af5feaff           call 0x757730
// 008b1781  83e001               and eax, 1
// 008b1784  50                   push eax
// 008b1785  8bcf                 mov ecx, edi
// 008b1787  e8b4c80100           call 0x8ce040
// 008b178c  897740               mov dword ptr [edi + 0x40], esi
// 008b178f  837c241400           cmp dword ptr [esp + 0x14], 0
// 008b1794  0f8520ffffff         jne 0x8b16ba
// 008b179a  83c8ff               or eax, 0xffffffff
// 008b179d  0bc8                 or ecx, eax
// 008b179f  51                   push ecx
// 008b17a0  8b8b80000000         mov ecx, dword ptr [ebx + 0x80]
// 008b17a6  50                   push eax
// 008b17a7  e8e4f0ffff           call 0x8b0890
// 008b17ac  ff8b9c010000         dec dword ptr [ebx + 0x19c]
// 008b17b2  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008b17b6  64890d00000000       mov dword ptr fs:[0], ecx
// 008b17bd  59                   pop ecx
// 008b17be  5f                   pop edi
// 008b17bf  5e                   pop esi
// 008b17c0  5d                   pop ebp
// 008b17c1  5b                   pop ebx
// 008b17c2  83c418               add esp, 0x18
// 008b17c5  c3                   ret 
// copied from an identical function in another client (function ?OnTabsChanged@CXTPDockingPaneTabbedContainer@@MAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\DockingPane\XTPDockingPaneTabbedContainer.cpp