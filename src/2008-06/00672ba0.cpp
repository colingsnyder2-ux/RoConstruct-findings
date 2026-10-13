// roc 2008-06 00672ba0  unit: RBX::AdornRbxGfx  size: 931 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00672ba0
//
// 00672ba0  6aff                 push -1
// 00672ba2  6860ca7d00           push 0x7dca60
// 00672ba7  64a100000000         mov eax, dword ptr fs:[0]
// 00672bad  50                   push eax
// 00672bae  64892500000000       mov dword ptr fs:[0], esp
// 00672bb5  81ec44010000         sub esp, 0x144
// 00672bbb  53                   push ebx
// 00672bbc  55                   push ebp
// 00672bbd  56                   push esi
// 00672bbe  8bf1                 mov esi, ecx
// 00672bc0  57                   push edi
// 00672bc1  8d8c24e8000000       lea ecx, [esp + 0xe8]
// 00672bc8  e863320100           call 0x685e30
// 00672bcd  8b842468010000       mov eax, dword ptr [esp + 0x168]
// 00672bd4  d900                 fld dword ptr [eax]
// 00672bd6  33ed                 xor ebp, ebp
// 00672bd8  d905489b8100         fld dword ptr [0x819b48]
// 00672bde  55                   push ebp
// 00672bdf  dcc9                 fmul st(1), st(0)
// 00672be1  8bce                 mov ecx, esi
// 00672be3  d94004               fld dword ptr [eax + 4]
// 00672be6  d8c9                 fmul st(1)
// 00672be8  d94008               fld dword ptr [eax + 8]
// 00672beb  d8ca                 fmul st(2)
// 00672bed  d9400c               fld dword ptr [eax + 0xc]
// 00672bf0  8d442420             lea eax, [esp + 0x20]
// 00672bf4  decb                 fmulp st(3)
// 00672bf6  50                   push eax
// 00672bf7  d9cb                 fxch st(3)
// 00672bf9  d95c2424             fstp dword ptr [esp + 0x24]
// 00672bfd  d95c2428             fstp dword ptr [esp + 0x28]
// 00672c01  d9c9                 fxch st(1)
// 00672c03  d95c242c             fstp dword ptr [esp + 0x2c]
// 00672c07  d95c2430             fstp dword ptr [esp + 0x30]
// 00672c0b  e8f0d7ffff           call 0x670400
// 00672c10  6860d28400           push 0x84d260
// 00672c15  8d4c2460             lea ecx, [esp + 0x60]
// 00672c19  ff1558248000         call dword ptr [0x802458]
// 00672c1f  83ec1c               sub esp, 0x1c
// 00672c22  8d542478             lea edx, [esp + 0x78]
// 00672c26  8bcc                 mov ecx, esp
// 00672c28  89642448             mov dword ptr [esp + 0x48], esp
// 00672c2c  52                   push edx
// 00672c2d  89ac247c010000       mov dword ptr [esp + 0x17c], ebp
// 00672c34  ff155c248000         call dword ptr [0x80245c]
// 00672c3a  8d44242c             lea eax, [esp + 0x2c]
// 00672c3e  50                   push eax
// 00672c3f  8bce                 mov ecx, esi
// 00672c41  e89ae6ffff           call 0x6712e0
// 00672c46  c684245c01000001     mov byte ptr [esp + 0x15c], 1
// 00672c4e  396c2414             cmp dword ptr [esp + 0x14], ebp
// 00672c52  0f852a020000         jne 0x672e82
// 00672c58  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00672c5f  51                   push ecx
// 00672c60  8bce                 mov ecx, esi
// 00672c62  e899cfffff           call 0x66fc00
// 00672c67  50                   push eax
// 00672c68  8d542444             lea edx, [esp + 0x44]
// 00672c6c  685cd28400           push 0x84d25c
// 00672c71  b302                 mov bl, 2
// 00672c73  52                   push edx
// 00672c74  889c2468010000       mov byte ptr [esp + 0x168], bl
// 00672c7b  ff1568238000         call dword ptr [0x802368]
// 00672c81  83c40c               add esp, 0xc
// 00672c84  d9e8                 fld1 
// 00672c86  8b4e04               mov ecx, dword ptr [esi + 4]
// 00672c89  8b4904               mov ecx, dword ptr [ecx + 4]
// 00672c8c  6a11                 push 0x11
// 00672c8e  6a11                 push 0x11
// 00672c90  51                   push ecx
// 00672c91  d91c24               fstp dword ptr [esp]
// 00672c94  55                   push ebp
// 00672c95  50                   push eax
// 00672c96  51                   push ecx
// 00672c97  8d8c2400010000       lea ecx, [esp + 0x100]
// 00672c9e  c684247401000003     mov byte ptr [esp + 0x174], 3
// 00672ca6  e825660100           call 0x6892d0
// 00672cab  8d4c2440             lea ecx, [esp + 0x40]
// 00672caf  8bf8                 mov edi, eax
// 00672cb1  889c245c010000       mov byte ptr [esp + 0x15c], bl
// 00672cb8  ff1568248000         call dword ptr [0x802468]
// 00672cbe  8d8c24cc000000       lea ecx, [esp + 0xcc]
// 00672cc5  c684245c01000001     mov byte ptr [esp + 0x15c], 1
// 00672ccd  ff1568248000         call dword ptr [0x802468]
// 00672cd3  8b1d94448000         mov ebx, dword ptr [0x804494]
// 00672cd9  8bcf                 mov ecx, edi
// 00672cdb  ffd3                 call ebx
// 00672cdd  85c0                 test eax, eax
// 00672cdf  7e1d                 jle 0x672cfe
// 00672ce1  8b4628               mov eax, dword ptr [esi + 0x28]
// 00672ce4  8b17                 mov edx, dword ptr [edi]
// 00672ce6  83c024               add eax, 0x24
// 00672ce9  50                   push eax
// 00672cea  8b822c010000         mov eax, dword ptr [edx + 0x12c]
// 00672cf0  55                   push ebp
// 00672cf1  8bcf                 mov ecx, edi
// 00672cf3  ffd0                 call eax
// 00672cf5  8bcf                 mov ecx, edi
// 00672cf7  45                   inc ebp
// 00672cf8  ffd3                 call ebx
// 00672cfa  3be8                 cmp ebp, eax
// 00672cfc  7ce3                 jl 0x672ce1
// 00672cfe  8b8694000000         mov eax, dword ptr [esi + 0x94]
// 00672d04  6a00                 push 0
// 00672d06  6a20                 push 0x20
// 00672d08  6a00                 push 0
// 00672d0a  50                   push eax
// 00672d0b  8d8c24a4000000       lea ecx, [esp + 0xa4]
// 00672d12  51                   push ecx
// 00672d13  ff152c4f8000         call dword ptr [0x804f2c]
// 00672d19  8be8                 mov ebp, eax
// 00672d1b  8b5604               mov edx, dword ptr [esi + 4]
// 00672d1e  8b4204               mov eax, dword ptr [edx + 4]
// 00672d21  83c004               add eax, 4
// 00672d24  6854d28400           push 0x84d254
// 00672d29  50                   push eax
// 00672d2a  8d842494000000       lea eax, [esp + 0x94]
// 00672d31  50                   push eax
// 00672d32  c684247c01000004     mov byte ptr [esp + 0x17c], 4
// 00672d3a  ff15e4238000         call dword ptr [0x8023e4]
// 00672d40  55                   push ebp
// 00672d41  50                   push eax
// 00672d42  8d8c24d8000000       lea ecx, [esp + 0xd8]
// 00672d49  51                   push ecx
// 00672d4a  c684248801000005     mov byte ptr [esp + 0x188], 5
// 00672d52  ff15a8248000         call dword ptr [0x8024a8]
// 00672d58  83c42c               add esp, 0x2c
// 00672d5b  8b0d684e8000         mov ecx, dword ptr [0x804e68]
// 00672d61  8b17                 mov edx, dword ptr [edi]
// 00672d63  8b9230010000         mov edx, dword ptr [edx + 0x130]
// 00672d69  51                   push ecx
// 00672d6a  50                   push eax
// 00672d6b  8d442424             lea eax, [esp + 0x24]
// 00672d6f  b306                 mov bl, 6
// 00672d71  50                   push eax
// 00672d72  8bcf                 mov ecx, edi
// 00672d74  889c2468010000       mov byte ptr [esp + 0x168], bl
// 00672d7b  ffd2                 call edx
// 00672d7d  50                   push eax
// 00672d7e  8d4c2414             lea ecx, [esp + 0x14]
// 00672d82  c684246001000007     mov byte ptr [esp + 0x160], 7
// 00672d8a  ff15a04c8000         call dword ptr [0x804ca0]
// 00672d90  8d4c241c             lea ecx, [esp + 0x1c]
// 00672d94  889c245c010000       mov byte ptr [esp + 0x15c], bl
// 00672d9b  ff15a44c8000         call dword ptr [0x804ca4]
// 00672da1  8d8c24b0000000       lea ecx, [esp + 0xb0]
// 00672da8  c684245c01000005     mov byte ptr [esp + 0x15c], 5
// 00672db0  ff1568248000         call dword ptr [0x802468]
// 00672db6  8d4c2478             lea ecx, [esp + 0x78]
// 00672dba  c684245c01000004     mov byte ptr [esp + 0x15c], 4
// 00672dc2  ff1568248000         call dword ptr [0x802468]
// 00672dc8  8d8c2494000000       lea ecx, [esp + 0x94]
// 00672dcf  c684245c01000001     mov byte ptr [esp + 0x15c], 1
// 00672dd7  ff1568248000         call dword ptr [0x802468]
// 00672ddd  8d442410             lea eax, [esp + 0x10]
// 00672de1  50                   push eax
// 00672de2  8d4c2460             lea ecx, [esp + 0x60]
// 00672de6  51                   push ecx
// 00672de7  8d4e78               lea ecx, [esi + 0x78]
// 00672dea  e801ecffff           call 0x6719f0
// 00672def  8bc8                 mov ecx, eax
// 00672df1  ff15a04c8000         call dword ptr [0x804ca0]
// 00672df7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00672dfb  8bf9                 mov edi, ecx
// 00672dfd  ff1554428000         call dword ptr [0x804254]
// 00672e03  d95c242c             fstp dword ptr [esp + 0x2c]
// 00672e07  8d54241c             lea edx, [esp + 0x1c]
// 00672e0b  52                   push edx
// 00672e0c  8bcf                 mov ecx, edi
// 00672e0e  ff1558428000         call dword ptr [0x804258]
// 00672e14  8bc8                 mov ecx, eax
// 00672e16  ff155c428000         call dword ptr [0x80425c]
// 00672e1c  d944242c             fld dword ptr [esp + 0x2c]
// 00672e20  d95c2430             fstp dword ptr [esp + 0x30]
// 00672e24  d900                 fld dword ptr [eax]
// 00672e26  d95c2434             fstp dword ptr [esp + 0x34]
// 00672e2a  d94004               fld dword ptr [eax + 4]
// 00672e2d  d95c2438             fstp dword ptr [esp + 0x38]
// 00672e31  d94008               fld dword ptr [eax + 8]
// 00672e34  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00672e38  d95c243c             fstp dword ptr [esp + 0x3c]
// 00672e3c  8b1db84c8000         mov ebx, dword ptr [0x804cb8]
// 00672e42  33ff                 xor edi, edi
// 00672e44  ffd3                 call ebx
// 00672e46  33c9                 xor ecx, ecx
// 00672e48  663bc8               cmp cx, ax
// 00672e4b  7335                 jae 0x672e82
// 00672e4d  8d4900               lea ecx, [ecx]
// 00672e50  8b5634               mov edx, dword ptr [esi + 0x34]
// 00672e53  8b2a                 mov ebp, dword ptr [edx]
// 00672e55  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00672e59  8d442430             lea eax, [esp + 0x30]
// 00672e5d  50                   push eax
// 00672e5e  57                   push edi
// 00672e5f  81c5c4010000         add ebp, 0x1c4
// 00672e65  ff15bc4c8000         call dword ptr [0x804cbc]
// 00672e6b  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 00672e6e  8b5500               mov edx, dword ptr [ebp]
// 00672e71  50                   push eax
// 00672e72  ffd2                 call edx
// 00672e74  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00672e78  47                   inc edi
// 00672e79  ffd3                 call ebx
// 00672e7b  0fb7c0               movzx eax, ax
// 00672e7e  3bf8                 cmp edi, eax
// 00672e80  7cce                 jl 0x672e50
// 00672e82  d9e8                 fld1 
// 00672e84  8b842464010000       mov eax, dword ptr [esp + 0x164]
// 00672e8b  d95c2440             fstp dword ptr [esp + 0x40]
// 00672e8f  8d4c2440             lea ecx, [esp + 0x40]
// 00672e93  d9ee                 fldz 
// 00672e95  51                   push ecx
// 00672e96  d9542448             fst dword ptr [esp + 0x48]
// 00672e9a  8d542434             lea edx, [esp + 0x34]
// 00672e9e  d954244c             fst dword ptr [esp + 0x4c]
// 00672ea2  52                   push edx
// 00672ea3  d95c2454             fstp dword ptr [esp + 0x54]
// 00672ea7  8d8c241c010000       lea ecx, [esp + 0x11c]
// 00672eae  d94010               fld dword ptr [eax + 0x10]
// 00672eb1  d94010               fld dword ptr [eax + 0x10]
// 00672eb4  d94010               fld dword ptr [eax + 0x10]
// 00672eb7  d9ca                 fxch st(2)
// 00672eb9  d95c2438             fstp dword ptr [esp + 0x38]
// 00672ebd  d95c243c             fstp dword ptr [esp + 0x3c]
// 00672ec1  d95c2440             fstp dword ptr [esp + 0x40]
// 00672ec5  d94004               fld dword ptr [eax + 4]
// 00672ec8  d94008               fld dword ptr [eax + 8]
// 00672ecb  d9400c               fld dword ptr [eax + 0xc]
// 00672ece  8d442424             lea eax, [esp + 0x24]
// 00672ed2  d9ca                 fxch st(2)
// 00672ed4  50                   push eax
// 00672ed5  d95c2428             fstp dword ptr [esp + 0x28]
// 00672ed9  51                   push ecx
// 00672eda  8bce                 mov ecx, esi
// 00672edc  d95c2430             fstp dword ptr [esp + 0x30]
// 00672ee0  d95c2434             fstp dword ptr [esp + 0x34]
// 00672ee4  e807ccffff           call 0x66faf0
// 00672ee9  8d5624               lea edx, [esi + 0x24]
// 00672eec  52                   push edx
// 00672eed  8d842418010000       lea eax, [esp + 0x118]
// 00672ef4  50                   push eax
// 00672ef5  8d4c2418             lea ecx, [esp + 0x18]
// 00672ef9  51                   push ecx
// 00672efa  8bce                 mov ecx, esi
// 00672efc  e8ffefffff           call 0x671f00
// 00672f01  8d4c2410             lea ecx, [esp + 0x10]
// 00672f05  c684245c01000000     mov byte ptr [esp + 0x15c], 0
// 00672f0d  ff15a44c8000         call dword ptr [0x804ca4]
// 00672f13  8d4c245c             lea ecx, [esp + 0x5c]
// 00672f17  c784245c010000ffffffff mov dword ptr [esp + 0x15c], 0xffffffff
// 00672f22  ff1568248000         call dword ptr [0x802468]
// 00672f28  8b8c2454010000       mov ecx, dword ptr [esp + 0x154]
// 00672f2f  5f                   pop edi
// 00672f30  5e                   pop esi
// 00672f31  5d                   pop ebp
// 00672f32  64890d00000000       mov dword ptr fs:[0], ecx
// 00672f39  5b                   pop ebx
// 00672f3a  81c450010000         add esp, 0x150
// 00672f40  c20c00               ret 0xc

void func_00672ba0()
{
}
