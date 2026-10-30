// roc 2009-12 0088b120  unit: CXTPCustomizeSheet::CCustomizeEdit  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0088b120
//
// 0088b120  6aff                 push -1
// 0088b122  68850d9600           push 0x960d85
// 0088b127  64a100000000         mov eax, dword ptr fs:[0]
// 0088b12d  50                   push eax
// 0088b12e  51                   push ecx
// 0088b12f  56                   push esi
// 0088b130  a10052b600           mov eax, dword ptr [0xb65200]
// 0088b135  33c4                 xor eax, esp
// 0088b137  50                   push eax
// 0088b138  8d44240c             lea eax, [esp + 0xc]
// 0088b13c  64a300000000         mov dword ptr fs:[0], eax
// 0088b142  8bf1                 mov esi, ecx
// 0088b144  89742408             mov dword ptr [esp + 8], esi
// 0088b148  c706942da000         mov dword ptr [esi], 0xa02d94
// 0088b14e  c74620342da000       mov dword ptr [esi + 0x20], 0xa02d34
// 0088b155  8b8674010000         mov eax, dword ptr [esi + 0x174]
// 0088b15b  c744241403000000     mov dword ptr [esp + 0x14], 3
// 0088b163  85c0                 test eax, eax
// 0088b165  741a                 je 0x88b181
// 0088b167  c7406000000000       mov dword ptr [eax + 0x60], 0
// 0088b16e  8b8e74010000         mov ecx, dword ptr [esi + 0x174]
// 0088b174  85c9                 test ecx, ecx
// 0088b176  7409                 je 0x88b181
// 0088b178  8b01                 mov eax, dword ptr [ecx]
// 0088b17a  8b5004               mov edx, dword ptr [eax + 4]
// 0088b17d  6a01                 push 1
// 0088b17f  ffd2                 call edx
// 0088b181  8b8ea0010000         mov ecx, dword ptr [esi + 0x1a0]
// 0088b187  85c9                 test ecx, ecx
// 0088b189  7412                 je 0x88b19d
// 0088b18b  8b01                 mov eax, dword ptr [ecx]
// 0088b18d  8b10                 mov edx, dword ptr [eax]
// 0088b18f  6a01                 push 1
// 0088b191  ffd2                 call edx
// 0088b193  c786a001000000000000 mov dword ptr [esi + 0x1a0], 0
// 0088b19d  8d8e98010000         lea ecx, [esi + 0x198]
// 0088b1a3  ff15c0de9800         call dword ptr [0x98dec0]
// 0088b1a9  8d8e94010000         lea ecx, [esi + 0x194]
// 0088b1af  ff15c0de9800         call dword ptr [0x98dec0]
// 0088b1b5  8d8e8c010000         lea ecx, [esi + 0x18c]
// 0088b1bb  ff15c0de9800         call dword ptr [0x98dec0]
// 0088b1c1  8bce                 mov ecx, esi
// 0088b1c3  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 0088b1cb  e800cef6ff           call 0x7f7fd0
// 0088b1d0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0088b1d4  64890d00000000       mov dword ptr fs:[0], ecx
// 0088b1db  59                   pop ecx
// 0088b1dc  5e                   pop esi
// 0088b1dd  83c410               add esp, 0x10
// 0088b1e0  c3                   ret 
// copied from an identical function in another client (function ??1CXTPControlEdit@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlEdit.cpp