// roc 2009-12 008f16a0  unit: CXTPRibbonControlTab  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008f16a0
//
// 008f16a0  6aff                 push -1
// 008f16a2  6898039600           push 0x960398
// 008f16a7  64a100000000         mov eax, dword ptr fs:[0]
// 008f16ad  50                   push eax
// 008f16ae  83ec10               sub esp, 0x10
// 008f16b1  56                   push esi
// 008f16b2  a10052b600           mov eax, dword ptr [0xb65200]
// 008f16b7  33c4                 xor eax, esp
// 008f16b9  50                   push eax
// 008f16ba  8d442418             lea eax, [esp + 0x18]
// 008f16be  64a300000000         mov dword ptr fs:[0], eax
// 008f16c4  8bf1                 mov esi, ecx
// 008f16c6  8b46fc               mov eax, dword ptr [esi - 4]
// 008f16c9  50                   push eax
// 008f16ca  8d4c240c             lea ecx, [esp + 0xc]
// 008f16ce  e85d24f0ff           call 0x7f3b30
// 008f16d3  8d4c2428             lea ecx, [esp + 0x28]
// 008f16d7  51                   push ecx
// 008f16d8  8bce                 mov ecx, esi
// 008f16da  c744242400000000     mov dword ptr [esp + 0x24], 0
// 008f16e2  e8b9a2f4ff           call 0x83b9a0
// 008f16e7  85c0                 test eax, eax
// 008f16e9  7568                 jne 0x8f1753
// 008f16eb  8b542428             mov edx, dword ptr [esp + 0x28]
// 008f16ef  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f16f3  83ec10               sub esp, 0x10
// 008f16f6  8bc4                 mov eax, esp
// 008f16f8  8910                 mov dword ptr [eax], edx
// 008f16fa  8b542440             mov edx, dword ptr [esp + 0x40]
// 008f16fe  894804               mov dword ptr [eax + 4], ecx
// 008f1701  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 008f1705  895008               mov dword ptr [eax + 8], edx
// 008f1708  89480c               mov dword ptr [eax + 0xc], ecx
// 008f170b  8bce                 mov ecx, esi
// 008f170d  e8ae5ef0ff           call 0x7f75c0
// 008f1712  8bf0                 mov esi, eax
// 008f1714  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f1718  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008f1720  85c0                 test eax, eax
// 008f1722  7407                 je 0x8f172b
// 008f1724  8b542408             mov edx, dword ptr [esp + 8]
// 008f1728  895004               mov dword ptr [eax + 4], edx
// 008f172b  837c241400           cmp dword ptr [esp + 0x14], 0
// 008f1730  740c                 je 0x8f173e
// 008f1732  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f1736  50                   push eax
// 008f1737  6a00                 push 0
// 008f1739  e8e623f0ff           call 0x7f3b24
// 008f173e  8bc6                 mov eax, esi
// 008f1740  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f1744  64890d00000000       mov dword ptr fs:[0], ecx
// 008f174b  59                   pop ecx
// 008f174c  5e                   pop esi
// 008f174d  83c41c               add esp, 0x1c
// 008f1750  c21000               ret 0x10
// 008f1753  83c0ff               add eax, -1
// 008f1756  7817                 js 0x8f176f
// 008f1758  3b86c0010000         cmp eax, dword ptr [esi + 0x1c0]
// 008f175e  7d0f                 jge 0x8f176f
// 008f1760  8b8ebc010000         mov ecx, dword ptr [esi + 0x1bc]
// 008f1766  8d0481               lea eax, [ecx + eax*4]
// 008f1769  8b08                 mov ecx, dword ptr [eax]
// 008f176b  85c9                 test ecx, ecx
// 008f176d  7542                 jne 0x8f17b1
// 008f176f  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f1773  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008f177b  85c0                 test eax, eax
// 008f177d  7407                 je 0x8f1786
// 008f177f  8b542408             mov edx, dword ptr [esp + 8]
// 008f1783  895004               mov dword ptr [eax + 4], edx
// 008f1786  837c241400           cmp dword ptr [esp + 0x14], 0
// 008f178b  740c                 je 0x8f1799
// 008f178d  8b442410             mov eax, dword ptr [esp + 0x10]
// 008f1791  50                   push eax
// 008f1792  6a00                 push 0
// 008f1794  e88b23f0ff           call 0x7f3b24
// 008f1799  b857000780           mov eax, 0x80070057
// 008f179e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f17a2  64890d00000000       mov dword ptr fs:[0], ecx
// 008f17a9  59                   pop ecx
// 008f17aa  5e                   pop esi
// 008f17ab  83c41c               add esp, 0x1c
// 008f17ae  c21000               ret 0x10
// 008f17b1  e85ac8fdff           call 0x8ce010
// 008f17b6  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f17ba  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 008f17c2  85c0                 test eax, eax
// 008f17c4  7407                 je 0x8f17cd
// 008f17c6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008f17ca  894804               mov dword ptr [eax + 4], ecx
// 008f17cd  837c241400           cmp dword ptr [esp + 0x14], 0
// 008f17d2  740c                 je 0x8f17e0
// 008f17d4  8b542410             mov edx, dword ptr [esp + 0x10]
// 008f17d8  52                   push edx
// 008f17d9  6a00                 push 0
// 008f17db  e84423f0ff           call 0x7f3b24
// 008f17e0  33c0                 xor eax, eax
// 008f17e2  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008f17e6  64890d00000000       mov dword ptr fs:[0], ecx
// 008f17ed  59                   pop ecx
// 008f17ee  5e                   pop esi
// 008f17ef  83c41c               add esp, 0x1c
// 008f17f2  c21000               ret 0x10
// copied from an identical function in another client (function ?AccessibleDoDefaultAction@CXTPRibbonControlTab@@MAEJUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Ribbon\XTPRibbonControlTab.cpp