// from server: 100% by auto
// roc 2008-06 00662c30  unit: RBX::FilterStairs  size: 278 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662c30
//
// 00662c30  83ec0c               sub esp, 0xc
// 00662c33  55                   push ebp
// 00662c34  56                   push esi
// 00662c35  8bf0                 mov esi, eax
// 00662c37  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 00662c3a  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00662c42  c644241201           mov byte ptr [esp + 0x12], 1
// 00662c47  8a4532               mov al, byte ptr [ebp + 0x32]
// 00662c4a  88442410             mov byte ptr [esp + 0x10], al
// 00662c4e  c644241100           mov byte ptr [esp + 0x11], 0
// 00662c53  8b4d14               mov ecx, dword ptr [ebp + 0x14]
// 00662c56  8d542408             lea edx, [esp + 8]
// 00662c5a  894c2408             mov dword ptr [esp + 8], ecx
// 00662c5e  56                   push esi
// 00662c5f  895514               mov dword ptr [ebp + 0x14], edx
// 00662c62  e899290000           call 0x665600
// 00662c67  83c404               add esp, 4
// 00662c6a  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 00662c71  7424                 je 0x662c97
// 00662c73  681d010000           push 0x11d
// 00662c78  56                   push esi
// 00662c79  e892140000           call 0x664110
// 00662c7e  50                   push eax
// 00662c7f  8b4634               mov eax, dword ptr [esi + 0x34]
// 00662c82  68c0c48400           push 0x84c4c0
// 00662c87  50                   push eax
// 00662c88  e833fefbff           call 0x622ac0
// 00662c8d  50                   push eax
// 00662c8e  56                   push esi
// 00662c8f  e87c150000           call 0x664210
// 00662c94  83c41c               add esp, 0x1c
// 00662c97  57                   push edi
// 00662c98  8b7e18               mov edi, dword ptr [esi + 0x18]
// 00662c9b  56                   push esi
// 00662c9c  e85f290000           call 0x665600
// 00662ca1  8b4610               mov eax, dword ptr [esi + 0x10]
// 00662ca4  83c404               add esp, 4
// 00662ca7  83f82c               cmp eax, 0x2c
// 00662caa  742e                 je 0x662cda
// 00662cac  83f83d               cmp eax, 0x3d
// 00662caf  7417                 je 0x662cc8
// 00662cb1  3d0b010000           cmp eax, 0x10b
// 00662cb6  7422                 je 0x662cda
// 00662cb8  68fcc68400           push 0x84c6fc
// 00662cbd  56                   push esi
// 00662cbe  e84d150000           call 0x664210
// 00662cc3  83c408               add esp, 8
// 00662cc6  eb1f                 jmp 0x662ce7
// 00662cc8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00662ccc  51                   push ecx
// 00662ccd  57                   push edi
// 00662cce  8bfe                 mov edi, esi
// 00662cd0  e8bbfaffff           call 0x662790
// 00662cd5  83c408               add esp, 8
// 00662cd8  eb0d                 jmp 0x662ce7
// 00662cda  53                   push ebx
// 00662cdb  57                   push edi
// 00662cdc  8bde                 mov ebx, esi
// 00662cde  e8ddfcffff           call 0x6629c0
// 00662ce3  83c404               add esp, 4
// 00662ce6  5b                   pop ebx
// 00662ce7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00662ceb  6808010000           push 0x108
// 00662cf0  bf06010000           mov edi, 0x106
// 00662cf5  e826dbffff           call 0x660820
// 00662cfa  8b7514               mov esi, dword ptr [ebp + 0x14]
// 00662cfd  8b16                 mov edx, dword ptr [esi]
// 00662cff  8b450c               mov eax, dword ptr [ebp + 0xc]
// 00662d02  895514               mov dword ptr [ebp + 0x14], edx
// 00662d05  0fb65608             movzx edx, byte ptr [esi + 8]
// 00662d09  83c404               add esp, 4
// 00662d0c  e8dfdcffff           call 0x6609f0
// 00662d11  807e0900             cmp byte ptr [esi + 9], 0
// 00662d15  5f                   pop edi
// 00662d16  7414                 je 0x662d2c
// 00662d18  0fb64608             movzx eax, byte ptr [esi + 8]
// 00662d1c  6a00                 push 0
// 00662d1e  6a00                 push 0
// 00662d20  50                   push eax
// 00662d21  6a23                 push 0x23
// 00662d23  55                   push ebp
// 00662d24  e807850000           call 0x66b230
// 00662d29  83c414               add esp, 0x14
// 00662d2c  0fb64d32             movzx ecx, byte ptr [ebp + 0x32]
// 00662d30  894d24               mov dword ptr [ebp + 0x24], ecx
// 00662d33  8b5604               mov edx, dword ptr [esi + 4]
// 00662d36  52                   push edx
// 00662d37  55                   push ebp
// 00662d38  e843870000           call 0x66b480
// 00662d3d  83c408               add esp, 8
// 00662d40  5e                   pop esi
// 00662d41  5d                   pop ebp
// 00662d42  83c40c               add esp, 0xc
// 00662d45  c3                   ret 
// library lua-5.1.4/lparser.c (function _forstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
