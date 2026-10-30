// roc 2009-06 00803cc0  unit: CXTColorLum  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00803cc0
//
// 00803cc0  6aff                 push -1
// 00803cc2  6852178800           push 0x881752
// 00803cc7  64a100000000         mov eax, dword ptr fs:[0]
// 00803ccd  50                   push eax
// 00803cce  51                   push ecx
// 00803ccf  56                   push esi
// 00803cd0  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00803cd5  33c4                 xor eax, esp
// 00803cd7  50                   push eax
// 00803cd8  8d44240c             lea eax, [esp + 0xc]
// 00803cdc  64a300000000         mov dword ptr fs:[0], eax
// 00803ce2  8bf1                 mov esi, ecx
// 00803ce4  89742408             mov dword ptr [esp + 8], esi
// 00803ce8  c706f4b39000         mov dword ptr [esi], 0x90b3f4
// 00803cee  8d8e14070000         lea ecx, [esi + 0x714]
// 00803cf4  c744241413000000     mov dword ptr [esp + 0x14], 0x13
// 00803cfc  e8b1810400           call 0x84beb2
// 00803d01  8d8ec0060000         lea ecx, [esi + 0x6c0]
// 00803d07  c644241412           mov byte ptr [esp + 0x14], 0x12
// 00803d0c  e8a1810400           call 0x84beb2
// 00803d11  8d8e6c060000         lea ecx, [esi + 0x66c]
// 00803d17  c644241411           mov byte ptr [esp + 0x14], 0x11
// 00803d1c  e891810400           call 0x84beb2
// 00803d21  8d8e18060000         lea ecx, [esi + 0x618]
// 00803d27  c644241410           mov byte ptr [esp + 0x14], 0x10
// 00803d2c  e881810400           call 0x84beb2
// 00803d31  8d8ec4050000         lea ecx, [esi + 0x5c4]
// 00803d37  c64424140f           mov byte ptr [esp + 0x14], 0xf
// 00803d3c  e871810400           call 0x84beb2
// 00803d41  8d8e70050000         lea ecx, [esi + 0x570]
// 00803d47  c64424140e           mov byte ptr [esp + 0x14], 0xe
// 00803d4c  e861810400           call 0x84beb2
// 00803d51  8d8e1c050000         lea ecx, [esi + 0x51c]
// 00803d57  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 00803d5c  e8e78a0400           call 0x84c848
// 00803d61  8d8ec8040000         lea ecx, [esi + 0x4c8]
// 00803d67  c64424140c           mov byte ptr [esp + 0x14], 0xc
// 00803d6c  e8d78a0400           call 0x84c848
// 00803d71  8d8e74040000         lea ecx, [esi + 0x474]
// 00803d77  c64424140b           mov byte ptr [esp + 0x14], 0xb
// 00803d7c  e8c78a0400           call 0x84c848
// 00803d81  8d8e20040000         lea ecx, [esi + 0x420]
// 00803d87  c64424140a           mov byte ptr [esp + 0x14], 0xa
// 00803d8c  e8b78a0400           call 0x84c848
// 00803d91  8d8ecc030000         lea ecx, [esi + 0x3cc]
// 00803d97  c644241409           mov byte ptr [esp + 0x14], 9
// 00803d9c  e8a78a0400           call 0x84c848
// 00803da1  8d8e78030000         lea ecx, [esi + 0x378]
// 00803da7  c644241408           mov byte ptr [esp + 0x14], 8
// 00803dac  e8978a0400           call 0x84c848
// 00803db1  8d8e24030000         lea ecx, [esi + 0x324]
// 00803db7  c644241407           mov byte ptr [esp + 0x14], 7
// 00803dbc  e8e1840400           call 0x84c2a2
// 00803dc1  8d8ed0020000         lea ecx, [esi + 0x2d0]
// 00803dc7  c644241406           mov byte ptr [esp + 0x14], 6
// 00803dcc  e8d1840400           call 0x84c2a2
// 00803dd1  8d8e7c020000         lea ecx, [esi + 0x27c]
// 00803dd7  c644241405           mov byte ptr [esp + 0x14], 5
// 00803ddc  e8c1840400           call 0x84c2a2
// 00803de1  8d8e28020000         lea ecx, [esi + 0x228]
// 00803de7  c644241404           mov byte ptr [esp + 0x14], 4
// 00803dec  e8b1840400           call 0x84c2a2
// 00803df1  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 00803df7  c644241403           mov byte ptr [esp + 0x14], 3
// 00803dfc  e8a1840400           call 0x84c2a2
// 00803e01  8d8e80010000         lea ecx, [esi + 0x180]
// 00803e07  c644241402           mov byte ptr [esp + 0x14], 2
// 00803e0c  e891840400           call 0x84c2a2
// 00803e11  8d8e08010000         lea ecx, [esi + 0x108]
// 00803e17  c644241401           mov byte ptr [esp + 0x14], 1
// 00803e1c  e83febffff           call 0x802960
// 00803e21  8d8e88000000         lea ecx, [esi + 0x88]
// 00803e27  c644241400           mov byte ptr [esp + 0x14], 0
// 00803e2c  e8ffeeffff           call 0x802d30
// 00803e31  8bce                 mov ecx, esi
// 00803e33  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00803e3b  e8b0840400           call 0x84c2f0
// 00803e40  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00803e44  64890d00000000       mov dword ptr fs:[0], ecx
// 00803e4b  59                   pop ecx
// 00803e4c  5e                   pop esi
// 00803e4d  83c410               add esp, 0x10
// 00803e50  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageCustom@@UAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp