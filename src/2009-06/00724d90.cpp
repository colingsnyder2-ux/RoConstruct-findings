// roc 2009-06 00724d90  unit: CXTPPaintManager  size: 509 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00724d90
//
// 00724d90  81ecd0010000         sub esp, 0x1d0
// 00724d96  a1304fa200           mov eax, dword ptr [0xa24f30]
// 00724d9b  33c4                 xor eax, esp
// 00724d9d  898424cc010000       mov dword ptr [esp + 0x1cc], eax
// 00724da4  53                   push ebx
// 00724da5  56                   push esi
// 00724da6  57                   push edi
// 00724da7  8bf9                 mov edi, ecx
// 00724da9  8d8c2484000000       lea ecx, [esp + 0x84]
// 00724db0  e85b390600           call 0x788710
// 00724db5  837f7400             cmp dword ptr [edi + 0x74], 0
// 00724db9  740d                 je 0x724dc8
// 00724dbb  e880630700           call 0x79b140
// 00724dc0  8b400c               mov eax, dword ptr [eax + 0xc]
// 00724dc3  8a5818               mov bl, byte ptr [eax + 0x18]
// 00724dc6  eb07                 jmp 0x724dcf
// 00724dc8  8a9c243b010000       mov bl, byte ptr [esp + 0x13b]
// 00724dcf  83bf2001000000       cmp dword ptr [edi + 0x120], 0
// 00724dd6  0f848b000000         je 0x724e67
// 00724ddc  8d4c240c             lea ecx, [esp + 0xc]
// 00724de0  e83bd9ffff           call 0x722720
// 00724de5  8b842424010000       mov eax, dword ptr [esp + 0x124]
// 00724dec  85c0                 test eax, eax
// 00724dee  7d0d                 jge 0x724dfd
// 00724df0  83f8f5               cmp eax, -0xb
// 00724df3  c744240cf5ffffff     mov dword ptr [esp + 0xc], 0xfffffff5
// 00724dfb  7f04                 jg 0x724e01
// 00724dfd  8944240c             mov dword ptr [esp + 0xc], eax
// 00724e01  8b8c2434010000       mov ecx, dword ptr [esp + 0x134]
// 00724e08  8a942438010000       mov dl, byte ptr [esp + 0x138]
// 00724e0f  8a84243e010000       mov al, byte ptr [esp + 0x13e]
// 00724e16  894c241c             mov dword ptr [esp + 0x1c], ecx
// 00724e1a  8d8c2440010000       lea ecx, [esp + 0x140]
// 00724e21  51                   push ecx
// 00724e22  88542424             mov byte ptr [esp + 0x24], dl
// 00724e26  8d54242c             lea edx, [esp + 0x2c]
// 00724e2a  6a20                 push 0x20
// 00724e2c  52                   push edx
// 00724e2d  885c242f             mov byte ptr [esp + 0x2f], bl
// 00724e31  88442432             mov byte ptr [esp + 0x32], al
// 00724e35  ff1550e98900         call dword ptr [0x89e950]
// 00724e3b  83c40c               add esp, 0xc
// 00724e3e  837f7000             cmp dword ptr [edi + 0x70], 0
// 00724e42  7415                 je 0x724e59
// 00724e44  e807bb0300           call 0x760950
// 00724e49  8bc8                 mov ecx, eax
// 00724e4b  e840c40300           call 0x761290
// 00724e50  85c0                 test eax, eax
// 00724e52  7405                 je 0x724e59
// 00724e54  c644242605           mov byte ptr [esp + 0x26], 5
// 00724e59  6a01                 push 1
// 00724e5b  8d442410             lea eax, [esp + 0x10]
// 00724e5f  50                   push eax
// 00724e60  8bcf                 mov ecx, edi
// 00724e62  e819fdffff           call 0x724b80
// 00724e67  6a00                 push 0
// 00724e69  8d4c244c             lea ecx, [esp + 0x4c]
// 00724e6d  51                   push ecx
// 00724e6e  6a3c                 push 0x3c
// 00724e70  6a1f                 push 0x1f
// 00724e72  ff1564ee8900         call dword ptr [0x89ee64]
// 00724e78  837f7000             cmp dword ptr [edi + 0x70], 0
// 00724e7c  7425                 je 0x724ea3
// 00724e7e  e8cdba0300           call 0x760950
// 00724e83  8bc8                 mov ecx, eax
// 00724e85  e806c40300           call 0x761290
// 00724e8a  85c0                 test eax, eax
// 00724e8c  7415                 je 0x724ea3
// 00724e8e  c644246205           mov byte ptr [esp + 0x62], 5
// 00724e93  c68424fa00000005     mov byte ptr [esp + 0xfa], 5
// 00724e9b  c684247a01000005     mov byte ptr [esp + 0x17a], 5
// 00724ea3  83bfa000000000       cmp dword ptr [edi + 0xa0], 0
// 00724eaa  8db798000000         lea esi, [edi + 0x98]
// 00724eb0  885c245f             mov byte ptr [esp + 0x5f], bl
// 00724eb4  889c24f7000000       mov byte ptr [esp + 0xf7], bl
// 00724ebb  889c2477010000       mov byte ptr [esp + 0x177], bl
// 00724ec2  8b1dece08900         mov ebx, dword ptr [0x89e0ec]
// 00724ec8  7506                 jne 0x724ed0
// 00724eca  837e0400             cmp dword ptr [esi + 4], 0
// 00724ece  7519                 jne 0x724ee9
// 00724ed0  8bce                 mov ecx, esi
// 00724ed2  e81f41ffff           call 0x718ff6
// 00724ed7  8d9424e0000000       lea edx, [esp + 0xe0]
// 00724ede  52                   push edx
// 00724edf  ffd3                 call ebx
// 00724ee1  50                   push eax
// 00724ee2  8bce                 mov ecx, esi
// 00724ee4  e81941ffff           call 0x719002
// 00724ee9  83bfac00000000       cmp dword ptr [edi + 0xac], 0
// 00724ef0  8db7a4000000         lea esi, [edi + 0xa4]
// 00724ef6  7506                 jne 0x724efe
// 00724ef8  837e0400             cmp dword ptr [esi + 4], 0
// 00724efc  7516                 jne 0x724f14
// 00724efe  8bce                 mov ecx, esi
// 00724f00  e8f140ffff           call 0x718ff6
// 00724f05  8d442448             lea eax, [esp + 0x48]
// 00724f09  50                   push eax
// 00724f0a  ffd3                 call ebx
// 00724f0c  50                   push eax
// 00724f0d  8bce                 mov ecx, esi
// 00724f0f  e8ee40ffff           call 0x719002
// 00724f14  83bfb800000000       cmp dword ptr [edi + 0xb8], 0
// 00724f1b  8db7b0000000         lea esi, [edi + 0xb0]
// 00724f21  c7442458bc020000     mov dword ptr [esp + 0x58], 0x2bc
// 00724f29  7506                 jne 0x724f31
// 00724f2b  837e0400             cmp dword ptr [esi + 4], 0
// 00724f2f  7516                 jne 0x724f47
// 00724f31  8bce                 mov ecx, esi
// 00724f33  e8be40ffff           call 0x718ff6
// 00724f38  8d4c2448             lea ecx, [esp + 0x48]
// 00724f3c  51                   push ecx
// 00724f3d  ffd3                 call ebx
// 00724f3f  50                   push eax
// 00724f40  8bce                 mov ecx, esi
// 00724f42  e8bb40ffff           call 0x719002
// 00724f47  83bfc400000000       cmp dword ptr [edi + 0xc4], 0
// 00724f4e  8db7bc000000         lea esi, [edi + 0xbc]
// 00724f54  7506                 jne 0x724f5c
// 00724f56  837e0400             cmp dword ptr [esi + 4], 0
// 00724f5a  7519                 jne 0x724f75
// 00724f5c  8bce                 mov ecx, esi
// 00724f5e  e89340ffff           call 0x718ff6
// 00724f63  8d942460010000       lea edx, [esp + 0x160]
// 00724f6a  52                   push edx
// 00724f6b  ffd3                 call ebx
// 00724f6d  50                   push eax
// 00724f6e  8bce                 mov ecx, esi
// 00724f70  e88d40ffff           call 0x719002
// 00724f75  8b8c24d8010000       mov ecx, dword ptr [esp + 0x1d8]
// 00724f7c  5f                   pop edi
// 00724f7d  5e                   pop esi
// 00724f7e  5b                   pop ebx
// 00724f7f  33cc                 xor ecx, esp
// 00724f81  e8f455ffff           call 0x71a57a
// 00724f86  81c4d0010000         add esp, 0x1d0
// 00724f8c  c3                   ret 
// copied from an identical function in another client (function ?UpdateFonts@CXTPPaintManager@@UAEXXZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPPaintManager.cpp