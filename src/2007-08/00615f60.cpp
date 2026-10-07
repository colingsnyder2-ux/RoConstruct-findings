// roc 2007-08 00615f60  unit: seg_00610000  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00615f60
//
// 00615f60  83ec0c               sub esp, 0xc
// 00615f63  55                   push ebp
// 00615f64  56                   push esi
// 00615f65  8bf0                 mov esi, eax
// 00615f67  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 00615f6a  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00615f72  c644241201           mov byte ptr [esp + 0x12], 1
// 00615f77  8a4532               mov al, byte ptr [ebp + 0x32]
// 00615f7a  88442410             mov byte ptr [esp + 0x10], al
// 00615f7e  c644241100           mov byte ptr [esp + 0x11], 0
// 00615f83  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00615f86  8d542408             lea edx, [esp + 8]
// 00615f8a  894c2408             mov dword ptr [esp + 8], ecx
// 00615f8e  56                   push esi
// 00615f8f  895514               mov dword ptr [ebp + 0x14], edx
// 00615f92  e8592a0000           call 0x6189f0
// 00615f97  83c404               add esp, 4
// 00615f9a  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00615fa1  7424                 je 0x615fc7
// 00615fa3  681d010000           push 0x11d
// 00615fa8  56                   push esi
// 00615fa9  e812150000           call 0x6174c0
// 00615fae  50                   push eax
// 00615faf  8b4634               mov eax, dword ptr [esi + 0x34]
// 00615fb2  6870337c00           push 0x7c3370
// 00615fb7  50                   push eax
// 00615fb8  e8d38effff           call 0x60ee90
// 00615fbd  50                   push eax
// 00615fbe  56                   push esi
// 00615fbf  e8fc150000           call 0x6175c0
// 00615fc4  83c41c               add esp, 0x1c
// 00615fc7  57                   push edi
// 00615fc8  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00615fcb  56                   push esi
// 00615fcc  e81f2a0000           call 0x6189f0
// 00615fd1  8b4610               mov eax, dword ptr [esi + 0x10]
// 00615fd4  83c404               add esp, 4
// 00615fd7  83f82c               cmp eax, 0x2c
// 00615fda  742e                 je 0x61600a
// 00615fdc  83f83d               cmp eax, 0x3d
// 00615fdf  7417                 je 0x615ff8
// 00615fe1  3d0b010000           cmp eax, 0x10b
// 00615fe6  7422                 je 0x61600a
// 00615fe8  68ac357c00           push 0x7c35ac
// 00615fed  56                   push esi
// 00615fee  e8cd150000           call 0x6175c0
// 00615ff3  83c408               add esp, 8
// 00615ff6  eb1f                 jmp 0x616017
// 00615ff8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00615ffc  51                   push ecx
// 00615ffd  57                   push edi
// 00615ffe  8bfe                 mov edi, esi
// 00616000  e8abfaffff           call 0x615ab0
// 00616005  83c408               add esp, 8
// 00616008  eb0d                 jmp 0x616017
// 0061600a  53                   push ebx
// 0061600b  57                   push edi
// 0061600c  8bde                 mov ebx, esi
// 0061600e  e8cdfcffff           call 0x615ce0
// 00616013  83c404               add esp, 4
// 00616016  5b                   pop ebx
// 00616017  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0061601b  6808010000           push 0x108
// 00616020  bf06010000           mov edi, 0x106
// 00616025  e8f6daffff           call 0x613b20
// 0061602a  8b7514               mov esi, dword ptr [ebp + 0x14]
// 0061602d  8b16                 mov edx, dword ptr [esi]
// 0061602f  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00616032  895514               mov dword ptr [ebp + 0x14], edx
// 00616035  0fb65608             movzx edx, byte ptr [esi + 8]
// 00616039  83c404               add esp, 4
// 0061603c  e8bfdcffff           call 0x613d00
// 00616041  807e0900             cmp byte ptr [esi + 9], 0
// 00616045  5f                   pop edi
// 00616046  7414                 je 0x61605c
// 00616048  0fb64608             movzx eax, byte ptr [esi + 8]
// 0061604c  6a00                 push 0
// 0061604e  6a00                 push 0
// 00616050  50                   push eax
// 00616051  6a23                 push 0x23
// 00616053  55                   push ebp
// 00616054  e8272d0100           call 0x628d80
// 00616059  83c414               add esp, 0x14
// 0061605c  0fb64d32             movzx ecx, byte ptr [ebp + 0x32]
// 00616060  894d24               mov dword ptr [ebp + 0x24], ecx
// 00616063  8b5604               mov edx, dword ptr [esi + 4]
// 00616066  52                   push edx
// 00616067  55                   push ebp
// 00616068  e8732f0100           call 0x628fe0
// 0061606d  83c408               add esp, 8
// 00616070  5e                   pop esi
// 00616071  5d                   pop ebp
// 00616072  83c40c               add esp, 0xc
// 00616075  c3                   ret 
// library lua-5.1.4/lparser.c (function _forstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
