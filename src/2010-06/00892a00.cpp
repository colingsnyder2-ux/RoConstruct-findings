// roc 2010-06 00892a00  unit: CXTColorLum  size: 401 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00892a00
//
// 00892a00  6aff                 push -1
// 00892a02  6822b89b00           push 0x9bb822
// 00892a07  64a100000000         mov eax, dword ptr fs:[0]
// 00892a0d  50                   push eax
// 00892a0e  51                   push ecx
// 00892a0f  56                   push esi
// 00892a10  a1b05fbe00           mov eax, dword ptr [0xbe5fb0]
// 00892a15  33c4                 xor eax, esp
// 00892a17  50                   push eax
// 00892a18  8d44240c             lea eax, [esp + 0xc]
// 00892a1c  64a300000000         mov dword ptr fs:[0], eax
// 00892a22  8bf1                 mov esi, ecx
// 00892a24  89742408             mov dword ptr [esp + 8], esi
// 00892a28  c7065cfba600         mov dword ptr [esi], 0xa6fb5c
// 00892a2e  8d8e14070000         lea ecx, [esi + 0x714]
// 00892a34  c744241413000000     mov dword ptr [esp + 0x14], 0x13
// 00892a3c  e87fa30e00           call 0x97cdc0
// 00892a41  8d8ec0060000         lea ecx, [esi + 0x6c0]
// 00892a47  c644241412           mov byte ptr [esp + 0x14], 0x12
// 00892a4c  e86fa30e00           call 0x97cdc0
// 00892a51  8d8e6c060000         lea ecx, [esi + 0x66c]
// 00892a57  c644241411           mov byte ptr [esp + 0x14], 0x11
// 00892a5c  e85fa30e00           call 0x97cdc0
// 00892a61  8d8e18060000         lea ecx, [esi + 0x618]
// 00892a67  c644241410           mov byte ptr [esp + 0x14], 0x10
// 00892a6c  e84fa30e00           call 0x97cdc0
// 00892a71  8d8ec4050000         lea ecx, [esi + 0x5c4]
// 00892a77  c64424140f           mov byte ptr [esp + 0x14], 0xf
// 00892a7c  e83fa30e00           call 0x97cdc0
// 00892a81  8d8e70050000         lea ecx, [esi + 0x570]
// 00892a87  c64424140e           mov byte ptr [esp + 0x14], 0xe
// 00892a8c  e82fa30e00           call 0x97cdc0
// 00892a91  8d8e1c050000         lea ecx, [esi + 0x51c]
// 00892a97  c64424140d           mov byte ptr [esp + 0x14], 0xd
// 00892a9c  e855ac0e00           call 0x97d6f6
// 00892aa1  8d8ec8040000         lea ecx, [esi + 0x4c8]
// 00892aa7  c64424140c           mov byte ptr [esp + 0x14], 0xc
// 00892aac  e845ac0e00           call 0x97d6f6
// 00892ab1  8d8e74040000         lea ecx, [esi + 0x474]
// 00892ab7  c64424140b           mov byte ptr [esp + 0x14], 0xb
// 00892abc  e835ac0e00           call 0x97d6f6
// 00892ac1  8d8e20040000         lea ecx, [esi + 0x420]
// 00892ac7  c64424140a           mov byte ptr [esp + 0x14], 0xa
// 00892acc  e825ac0e00           call 0x97d6f6
// 00892ad1  8d8ecc030000         lea ecx, [esi + 0x3cc]
// 00892ad7  c644241409           mov byte ptr [esp + 0x14], 9
// 00892adc  e815ac0e00           call 0x97d6f6
// 00892ae1  8d8e78030000         lea ecx, [esi + 0x378]
// 00892ae7  c644241408           mov byte ptr [esp + 0x14], 8
// 00892aec  e805ac0e00           call 0x97d6f6
// 00892af1  8d8e24030000         lea ecx, [esi + 0x324]
// 00892af7  c644241407           mov byte ptr [esp + 0x14], 7
// 00892afc  e849a60e00           call 0x97d14a
// 00892b01  8d8ed0020000         lea ecx, [esi + 0x2d0]
// 00892b07  c644241406           mov byte ptr [esp + 0x14], 6
// 00892b0c  e839a60e00           call 0x97d14a
// 00892b11  8d8e7c020000         lea ecx, [esi + 0x27c]
// 00892b17  c644241405           mov byte ptr [esp + 0x14], 5
// 00892b1c  e829a60e00           call 0x97d14a
// 00892b21  8d8e28020000         lea ecx, [esi + 0x228]
// 00892b27  c644241404           mov byte ptr [esp + 0x14], 4
// 00892b2c  e819a60e00           call 0x97d14a
// 00892b31  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 00892b37  c644241403           mov byte ptr [esp + 0x14], 3
// 00892b3c  e809a60e00           call 0x97d14a
// 00892b41  8d8e80010000         lea ecx, [esi + 0x180]
// 00892b47  c644241402           mov byte ptr [esp + 0x14], 2
// 00892b4c  e8f9a50e00           call 0x97d14a
// 00892b51  8d8e08010000         lea ecx, [esi + 0x108]
// 00892b57  c644241401           mov byte ptr [esp + 0x14], 1
// 00892b5c  e83febffff           call 0x8916a0
// 00892b61  8d8e88000000         lea ecx, [esi + 0x88]
// 00892b67  c644241400           mov byte ptr [esp + 0x14], 0
// 00892b6c  e8ffeeffff           call 0x891a70
// 00892b71  8bce                 mov ecx, esi
// 00892b73  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 00892b7b  e818a60e00           call 0x97d198
// 00892b80  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00892b84  64890d00000000       mov dword ptr fs:[0], ecx
// 00892b8b  59                   pop ecx
// 00892b8c  5e                   pop esi
// 00892b8d  83c410               add esp, 0x10
// 00892b90  c3                   ret 
// copied from an identical function in another client (function ??1CXTColorPageCustom@@UAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib Source\Controls\XTColorPageCustom.cpp