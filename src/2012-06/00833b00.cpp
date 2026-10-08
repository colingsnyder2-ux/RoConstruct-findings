// from server: 100% by auto
// roc 2012-06 00833b00  unit: RBX::PAVPrimitive::$$A6AXU?$pair::?$signal::Vslot::?$callable  size: 283 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00833b00
//
// 00833b00  53                   push ebx
// 00833b01  55                   push ebp
// 00833b02  8b6c2410             mov ebp, dword ptr [esp + 0x10]
// 00833b06  56                   push esi
// 00833b07  8b742410             mov esi, dword ptr [esp + 0x10]
// 00833b0b  57                   push edi
// 00833b0c  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00833b10  85ed                 test ebp, ebp
// 00833b12  0f8498000000         je 0x833bb0
// 00833b18  33db                 xor ebx, ebx
// 00833b1a  8bc7                 mov eax, edi
// 00833b1c  391f                 cmp dword ptr [edi], ebx
// 00833b1e  7409                 je 0x833b29
// 00833b20  83c008               add eax, 8
// 00833b23  43                   inc ebx
// 00833b24  833800               cmp dword ptr [eax], 0
// 00833b27  75f7                 jne 0x833b20
// 00833b29  6a01                 push 1
// 00833b2b  68180bbd00           push 0xbd0b18
// 00833b30  68f0d8ffff           push 0xffffd8f0
// 00833b35  56                   push esi
// 00833b36  e8e5f4ffff           call 0x833020
// 00833b3b  55                   push ebp
// 00833b3c  6aff                 push -1
// 00833b3e  56                   push esi
// 00833b3f  e8fce7ffff           call 0x832340
// 00833b44  6aff                 push -1
// 00833b46  56                   push esi
// 00833b47  e894e1ffff           call 0x831ce0
// 00833b4c  83c424               add esp, 0x24
// 00833b4f  83f805               cmp eax, 5
// 00833b52  743f                 je 0x833b93
// 00833b54  6afe                 push -2
// 00833b56  56                   push esi
// 00833b57  e8a4dfffff           call 0x831b00
// 00833b5c  53                   push ebx
// 00833b5d  55                   push ebp
// 00833b5e  68eed8ffff           push 0xffffd8ee
// 00833b63  56                   push esi
// 00833b64  e8b7f4ffff           call 0x833020
// 00833b69  83c418               add esp, 0x18
// 00833b6c  85c0                 test eax, eax
// 00833b6e  740f                 je 0x833b7f
// 00833b70  55                   push ebp
// 00833b71  68f80abd00           push 0xbd0af8
// 00833b76  56                   push esi
// 00833b77  e824f3ffff           call 0x832ea0
// 00833b7c  83c40c               add esp, 0xc
// 00833b7f  6aff                 push -1
// 00833b81  56                   push esi
// 00833b82  e829e1ffff           call 0x831cb0
// 00833b87  55                   push ebp
// 00833b88  6afd                 push -3
// 00833b8a  56                   push esi
// 00833b8b  e8f0e9ffff           call 0x832580
// 00833b90  83c414               add esp, 0x14
// 00833b93  6afe                 push -2
// 00833b95  56                   push esi
// 00833b96  e8b5dfffff           call 0x831b50
// 00833b9b  8b6c2428             mov ebp, dword ptr [esp + 0x28]
// 00833b9f  83c8ff               or eax, 0xffffffff
// 00833ba2  2bc5                 sub eax, ebp
// 00833ba4  50                   push eax
// 00833ba5  56                   push esi
// 00833ba6  e8f5dfffff           call 0x831ba0
// 00833bab  83c410               add esp, 0x10
// 00833bae  eb04                 jmp 0x833bb4
// 00833bb0  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00833bb4  833f00               cmp dword ptr [edi], 0
// 00833bb7  744e                 je 0x833c07
// 00833bb9  b8feffffff           mov eax, 0xfffffffe
// 00833bbe  2bc5                 sub eax, ebp
// 00833bc0  89442418             mov dword ptr [esp + 0x18], eax
// 00833bc4  85ed                 test ebp, ebp
// 00833bc6  7e1b                 jle 0x833be3
// 00833bc8  8bdd                 mov ebx, ebp
// 00833bca  f7db                 neg ebx
// 00833bcc  8d642400             lea esp, [esp]
// 00833bd0  53                   push ebx
// 00833bd1  56                   push esi
// 00833bd2  e8d9e0ffff           call 0x831cb0
// 00833bd7  83c408               add esp, 8
// 00833bda  83ed01               sub ebp, 1
// 00833bdd  75f1                 jne 0x833bd0
// 00833bdf  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00833be3  8b4f04               mov ecx, dword ptr [edi + 4]
// 00833be6  55                   push ebp
// 00833be7  51                   push ecx
// 00833be8  56                   push esi
// 00833be9  e812e6ffff           call 0x832200
// 00833bee  8b17                 mov edx, dword ptr [edi]
// 00833bf0  8b442424             mov eax, dword ptr [esp + 0x24]
// 00833bf4  52                   push edx
// 00833bf5  50                   push eax
// 00833bf6  56                   push esi
// 00833bf7  e884e9ffff           call 0x832580
// 00833bfc  83c708               add edi, 8
// 00833bff  83c418               add esp, 0x18
// 00833c02  833f00               cmp dword ptr [edi], 0
// 00833c05  75bd                 jne 0x833bc4
// 00833c07  83c9ff               or ecx, 0xffffffff
// 00833c0a  2bcd                 sub ecx, ebp
// 00833c0c  51                   push ecx
// 00833c0d  56                   push esi
// 00833c0e  e8eddeffff           call 0x831b00
// 00833c13  83c408               add esp, 8
// 00833c16  5f                   pop edi
// 00833c17  5e                   pop esi
// 00833c18  5d                   pop ebp
// 00833c19  5b                   pop ebx
// 00833c1a  c3                   ret 
// library lua-5.1.4/lauxlib.c (function _luaL_openlib)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lauxlib.c
