// roc 2009-12 008e1720  unit: CXTPOffice2007Image  size: 211 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e1720
//
// 008e1720  6aff                 push -1
// 008e1722  68a85c9600           push 0x965ca8
// 008e1727  64a100000000         mov eax, dword ptr fs:[0]
// 008e172d  50                   push eax
// 008e172e  83ec08               sub esp, 8
// 008e1731  53                   push ebx
// 008e1732  55                   push ebp
// 008e1733  56                   push esi
// 008e1734  57                   push edi
// 008e1735  a10052b600           mov eax, dword ptr [0xb65200]
// 008e173a  33c4                 xor eax, esp
// 008e173c  50                   push eax
// 008e173d  8d44241c             lea eax, [esp + 0x1c]
// 008e1741  64a300000000         mov dword ptr fs:[0], eax
// 008e1747  8bf9                 mov edi, ecx
// 008e1749  8d6f14               lea ebp, [edi + 0x14]
// 008e174c  55                   push ebp
// 008e174d  8d4c241c             lea ecx, [esp + 0x1c]
// 008e1751  e8baacf5ff           call 0x83c410
// 008e1756  33c0                 xor eax, eax
// 008e1758  89442424             mov dword ptr [esp + 0x24], eax
// 008e175c  394704               cmp dword ptr [edi + 4], eax
// 008e175f  7515                 jne 0x8e1776
// 008e1761  8d4c2418             lea ecx, [esp + 0x18]
// 008e1765  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008e176d  e8beacf5ff           call 0x83c430
// 008e1772  33c0                 xor eax, eax
// 008e1774  eb67                 jmp 0x8e17dd
// 008e1776  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 008e177a  3bf0                 cmp esi, eax
// 008e177c  74e3                 je 0x8e1761
// 008e177e  89442414             mov dword ptr [esp + 0x14], eax
// 008e1782  8d442414             lea eax, [esp + 0x14]
// 008e1786  50                   push eax
// 008e1787  8d5f2c               lea ebx, [edi + 0x2c]
// 008e178a  56                   push esi
// 008e178b  8bcb                 mov ecx, ebx
// 008e178d  e858560400           call 0x926dea
// 008e1792  85c0                 test eax, eax
// 008e1794  7530                 jne 0x8e17c6
// 008e1796  51                   push ecx
// 008e1797  8bcc                 mov ecx, esp
// 008e1799  89642430             mov dword ptr [esp + 0x30], esp
// 008e179d  56                   push esi
// 008e179e  ff15b8de9800         call dword ptr [0x98deb8]
// 008e17a4  8bcf                 mov ecx, edi
// 008e17a6  e875feffff           call 0x8e1620
// 008e17ab  89442414             mov dword ptr [esp + 0x14], eax
// 008e17af  85c0                 test eax, eax
// 008e17b1  74ae                 je 0x8e1761
// 008e17b3  56                   push esi
// 008e17b4  8bcb                 mov ecx, ebx
// 008e17b6  8bf8                 mov edi, eax
// 008e17b8  e809560400           call 0x926dc6
// 008e17bd  8938                 mov dword ptr [eax], edi
// 008e17bf  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008e17c3  896934               mov dword ptr [ecx + 0x34], ebp
// 008e17c6  8b742414             mov esi, dword ptr [esp + 0x14]
// 008e17ca  8d4c2418             lea ecx, [esp + 0x18]
// 008e17ce  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 008e17d6  e855acf5ff           call 0x83c430
// 008e17db  8bc6                 mov eax, esi
// 008e17dd  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 008e17e1  64890d00000000       mov dword ptr fs:[0], ecx
// 008e17e8  59                   pop ecx
// 008e17e9  5f                   pop edi
// 008e17ea  5e                   pop esi
// 008e17eb  5d                   pop ebp
// 008e17ec  5b                   pop ebx
// 008e17ed  83c414               add esp, 0x14
// 008e17f0  c20400               ret 4
// copied from an identical function in another client (function ?LoadFile@CXTPOffice2007Images@@QAEPAVCXTPOffice2007Image@@PBD@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPOffice2007Image.cpp