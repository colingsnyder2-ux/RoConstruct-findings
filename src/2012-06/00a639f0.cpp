// roc 2012-06 00a639f0  unit: CXTColorLum  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a639f0
//
// 00a639f0  6aff                 push -1
// 00a639f2  68727fae00           push 0xae7f72
// 00a639f7  64a100000000         mov eax, dword ptr fs:[0]
// 00a639fd  50                   push eax
// 00a639fe  51                   push ecx
// 00a639ff  56                   push esi
// 00a63a00  a1d027e000           mov eax, dword ptr [0xe027d0]
// 00a63a05  33c4                 xor eax, esp
// 00a63a07  50                   push eax
// 00a63a08  8d44240c             lea eax, [esp + 0xc]
// 00a63a0c  64a300000000         mov dword ptr fs:[0], eax
// 00a63a12  8bf1                 mov esi, ecx
// 00a63a14  89742408             mov dword ptr [esp + 8], esi
// 00a63a18  c7061c4dc200         mov dword ptr [esi], 0xc24d1c
// 00a63a1e  8d8e14070000         lea ecx, [esi + 0x714]
// 00a63a24  c744241413000000     mov dword ptr [esp + 0x14], 0x13
// 00a63a2c  e8835b0300           call 0xa995b4
// 00a63a31  8d8ec0060000         lea ecx, [esi + 0x6c0]
// 00a63a37  c644241412           mov byte ptr [esp + 0x14], 0x12
// 00a63a3c  e8735b0300           call 0xa995b4
// 00a63a41  8d8e6c060000         lea ecx, [esi + 0x66c]
// 00a63a47  c644241411           mov byte ptr [esp + 0x14], 0x11
// 00a63a4c  e8635b0300           call 0xa995b4
// 00a63a51  8d8e18060000         lea ecx, [esi + 0x618]
// 00a63a57  c644241410           mov byte ptr [esp + 0x14], 0x10
// 00a63a5c  e8535b0300           call 0xa995b4
// 00a63a61  8d8ec4050000         lea ecx, [esi + 0x5c4]
// 00a63a67  c64424140f           mov byte ptr [esp + 0x14], 0xf
// 00a63a6c  e8435b0300           call 0xa995b4
// 00a63a71  8d8e70050000         lea ecx, [esi + 0x570]
// 00a63a77  c64424140e           mov byte ptr [esp + 0x14], 0xe
// 00a63a7c  e8335b0300           call 0xa995b4
// 00a63a81  8d8e1c050000         lea ecx, [esi + 0x51c]
// 00a63a87  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 00a63a8c  e839630300           call 0xa99dca
// 00a63a91  8d8ec8040000         lea ecx, [esi + 0x4c8]
// 00a63a97  c64424140c           mov byte ptr [esp + 0x14], 0xc
// 00a63a9c  e829630300           call 0xa99dca
// 00a63aa1  8d8e74040000         lea ecx, [esi + 0x474]
// 00a63aa7  c64424140b           mov byte ptr [esp + 0x14], 0xb
// 00a63aac  e819630300           call 0xa99dca
// 00a63ab1  8d8e20040000         lea ecx, [esi + 0x420]
// 00a63ab7  c64424140a           mov byte ptr [esp + 0x14], 0xa
// 00a63abc  e809630300           call 0xa99dca
// 00a63ac1  8d8ecc030000         lea ecx, [esi + 0x3cc]
// 00a63ac7  c644241409           mov byte ptr [esp + 0x14], 9
// 00a63acc  e8f9620300           call 0xa99dca
// 00a63ad1  8d8e78030000         lea ecx, [esi + 0x378]
// 00a63ad7  c644241408           mov byte ptr [esp + 0x14], 8
// 00a63adc  e8e9620300           call 0xa99dca
// 00a63ae1  8d8e24030000         lea ecx, [esi + 0x324]
// 00a63ae7  c644241407           mov byte ptr [esp + 0x14], 7
// 00a63aec  e8bf610300           call 0xa99cb0
// 00a63af1  8d8ed0020000         lea ecx, [esi + 0x2d0]
// 00a63af7  c644241406           mov byte ptr [esp + 0x14], 6
// 00a63afc  e8af610300           call 0xa99cb0
// 00a63b01  8d8e7c020000         lea ecx, [esi + 0x27c]
// 00a63b07  c644241405           mov byte ptr [esp + 0x14], 5
// 00a63b0c  e89f610300           call 0xa99cb0
// 00a63b11  8d8e28020000         lea ecx, [esi + 0x228]
// 00a63b17  c644241404           mov byte ptr [esp + 0x14], 4
// 00a63b1c  e88f610300           call 0xa99cb0
// 00a63b21  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 00a63b27  c644241403           mov byte ptr [esp + 0x14], 3
// 00a63b2c  e87f610300           call 0xa99cb0
// 00a63b31  8d8e80010000         lea ecx, [esi + 0x180]
// 00a63b37  c644241402           mov byte ptr [esp + 0x14], 2
// 00a63b3c  e86f610300           call 0xa99cb0
// 00a63b41  8d8e08010000         lea ecx, [esi + 0x108]
// 00a63b47  c644241401           mov byte ptr [esp + 0x14], 1
// 00a63b4c  e83febffff           call 0xa62690
// 00a63b51  8d8e88000000         lea ecx, [esi + 0x88]
// 00a63b57  c644241400           mov byte ptr [esp + 0x14], 0
// 00a63b5c  e8ffeeffff           call 0xa62a60
// 00a63b61  8bce                 mov ecx, esi
// 00a63b63  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00a63b6b  e8e8610300           call 0xa99d58
// 00a63b70  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a63b74  64890d00000000       mov dword ptr fs:[0], ecx
// 00a63b7b  59                   pop ecx
// 00a63b7c  5e                   pop esi
// 00a63b7d  83c410               add esp, 0x10
// 00a63b80  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageCustom@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp