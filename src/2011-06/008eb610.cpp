// roc 2011-06 008eb610  unit: CXTColorLum  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008eb610
//
// 008eb610  6aff                 push -1
// 008eb612  6842e3a000           push 0xa0e342
// 008eb617  64a100000000         mov eax, dword ptr fs:[0]
// 008eb61d  50                   push eax
// 008eb61e  51                   push ecx
// 008eb61f  56                   push esi
// 008eb620  a12058c900           mov eax, dword ptr [0xc95820]
// 008eb625  33c4                 xor eax, esp
// 008eb627  50                   push eax
// 008eb628  8d44240c             lea eax, [esp + 0xc]
// 008eb62c  64a300000000         mov dword ptr fs:[0], eax
// 008eb632  8bf1                 mov esi, ecx
// 008eb634  89742408             mov dword ptr [esp + 8], esi
// 008eb638  c7068496ad00         mov dword ptr [esi], 0xad9684
// 008eb63e  8d8e14070000         lea ecx, [esi + 0x714]
// 008eb644  c744241413000000     mov dword ptr [esp + 0x14], 0x13
// 008eb64c  e8a90f0e00           call 0x9cc5fa
// 008eb651  8d8ec0060000         lea ecx, [esi + 0x6c0]
// 008eb657  c644241412           mov byte ptr [esp + 0x14], 0x12
// 008eb65c  e8990f0e00           call 0x9cc5fa
// 008eb661  8d8e6c060000         lea ecx, [esi + 0x66c]
// 008eb667  c644241411           mov byte ptr [esp + 0x14], 0x11
// 008eb66c  e8890f0e00           call 0x9cc5fa
// 008eb671  8d8e18060000         lea ecx, [esi + 0x618]
// 008eb677  c644241410           mov byte ptr [esp + 0x14], 0x10
// 008eb67c  e8790f0e00           call 0x9cc5fa
// 008eb681  8d8ec4050000         lea ecx, [esi + 0x5c4]
// 008eb687  c64424140f           mov byte ptr [esp + 0x14], 0xf
// 008eb68c  e8690f0e00           call 0x9cc5fa
// 008eb691  8d8e70050000         lea ecx, [esi + 0x570]
// 008eb697  c64424140e           mov byte ptr [esp + 0x14], 0xe
// 008eb69c  e8590f0e00           call 0x9cc5fa
// 008eb6a1  8d8e1c050000         lea ecx, [esi + 0x51c]
// 008eb6a7  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 008eb6ac  e86b170e00           call 0x9cce1c
// 008eb6b1  8d8ec8040000         lea ecx, [esi + 0x4c8]
// 008eb6b7  c64424140c           mov byte ptr [esp + 0x14], 0xc
// 008eb6bc  e85b170e00           call 0x9cce1c
// 008eb6c1  8d8e74040000         lea ecx, [esi + 0x474]
// 008eb6c7  c64424140b           mov byte ptr [esp + 0x14], 0xb
// 008eb6cc  e84b170e00           call 0x9cce1c
// 008eb6d1  8d8e20040000         lea ecx, [esi + 0x420]
// 008eb6d7  c64424140a           mov byte ptr [esp + 0x14], 0xa
// 008eb6dc  e83b170e00           call 0x9cce1c
// 008eb6e1  8d8ecc030000         lea ecx, [esi + 0x3cc]
// 008eb6e7  c644241409           mov byte ptr [esp + 0x14], 9
// 008eb6ec  e82b170e00           call 0x9cce1c
// 008eb6f1  8d8e78030000         lea ecx, [esi + 0x378]
// 008eb6f7  c644241408           mov byte ptr [esp + 0x14], 8
// 008eb6fc  e81b170e00           call 0x9cce1c
// 008eb701  8d8e24030000         lea ecx, [esi + 0x324]
// 008eb707  c644241407           mov byte ptr [esp + 0x14], 7
// 008eb70c  e8f1150e00           call 0x9ccd02
// 008eb711  8d8ed0020000         lea ecx, [esi + 0x2d0]
// 008eb717  c644241406           mov byte ptr [esp + 0x14], 6
// 008eb71c  e8e1150e00           call 0x9ccd02
// 008eb721  8d8e7c020000         lea ecx, [esi + 0x27c]
// 008eb727  c644241405           mov byte ptr [esp + 0x14], 5
// 008eb72c  e8d1150e00           call 0x9ccd02
// 008eb731  8d8e28020000         lea ecx, [esi + 0x228]
// 008eb737  c644241404           mov byte ptr [esp + 0x14], 4
// 008eb73c  e8c1150e00           call 0x9ccd02
// 008eb741  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 008eb747  c644241403           mov byte ptr [esp + 0x14], 3
// 008eb74c  e8b1150e00           call 0x9ccd02
// 008eb751  8d8e80010000         lea ecx, [esi + 0x180]
// 008eb757  c644241402           mov byte ptr [esp + 0x14], 2
// 008eb75c  e8a1150e00           call 0x9ccd02
// 008eb761  8d8e08010000         lea ecx, [esi + 0x108]
// 008eb767  c644241401           mov byte ptr [esp + 0x14], 1
// 008eb76c  e83febffff           call 0x8ea2b0
// 008eb771  8d8e88000000         lea ecx, [esi + 0x88]
// 008eb777  c644241400           mov byte ptr [esp + 0x14], 0
// 008eb77c  e8ffeeffff           call 0x8ea680
// 008eb781  8bce                 mov ecx, esi
// 008eb783  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008eb78b  e81a160e00           call 0x9ccdaa
// 008eb790  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008eb794  64890d00000000       mov dword ptr fs:[0], ecx
// 008eb79b  59                   pop ecx
// 008eb79c  5e                   pop esi
// 008eb79d  83c410               add esp, 0x10
// 008eb7a0  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageCustom@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp