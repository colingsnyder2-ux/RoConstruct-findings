// from server: 100% by auto
// roc 2008-06 006624a0  unit: RBX::FilterStairs  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006624a0
//
// 006624a0  83ec34               sub esp, 0x34
// 006624a3  55                   push ebp
// 006624a4  8b6b30               mov ebp, dword ptr [ebx + 0x30]
// 006624a7  56                   push esi
// 006624a8  57                   push edi
// 006624a9  55                   push ebp
// 006624aa  e821860000           call 0x66aad0
// 006624af  c644242a01           mov byte ptr [esp + 0x2a], 1
// 006624b4  89442410             mov dword ptr [esp + 0x10], eax
// 006624b8  83c8ff               or eax, 0xffffffff
// 006624bb  89442424             mov dword ptr [esp + 0x24], eax
// 006624bf  8a4d32               mov cl, byte ptr [ebp + 0x32]
// 006624c2  884c2428             mov byte ptr [esp + 0x28], cl
// 006624c6  c644242900           mov byte ptr [esp + 0x29], 0
// 006624cb  8b5514               mov edx, dword ptr [ebp + 0x14]
// 006624ce  89542420             mov dword ptr [esp + 0x20], edx
// 006624d2  8d4c2420             lea ecx, [esp + 0x20]
// 006624d6  894d14               mov dword ptr [ebp + 0x14], ecx
// 006624d9  89442418             mov dword ptr [esp + 0x18], eax
// 006624dd  c644241e00           mov byte ptr [esp + 0x1e], 0
// 006624e2  8a5532               mov dl, byte ptr [ebp + 0x32]
// 006624e5  8854241c             mov byte ptr [esp + 0x1c], dl
// 006624e9  c644241d00           mov byte ptr [esp + 0x1d], 0
// 006624ee  8b4514               mov eax, dword ptr [ebp + 0x14]
// 006624f1  8d4c2414             lea ecx, [esp + 0x14]
// 006624f5  89442414             mov dword ptr [esp + 0x14], eax
// 006624f9  53                   push ebx
// 006624fa  894d14               mov dword ptr [ebp + 0x14], ecx
// 006624fd  e8fe300000           call 0x665600
// 00662502  53                   push ebx
// 00662503  e8a80f0000           call 0x6634b0
// 00662508  8b442450             mov eax, dword ptr [esp + 0x50]
// 0066250c  6810010000           push 0x110
// 00662511  bf14010000           mov edi, 0x114
// 00662516  8bf3                 mov esi, ebx
// 00662518  e803e3ffff           call 0x660820
// 0066251d  6a00                 push 0
// 0066251f  8d54243c             lea edx, [esp + 0x3c]
// 00662523  52                   push edx
// 00662524  53                   push ebx
// 00662525  e8c6faffff           call 0x661ff0
// 0066252a  83c41c               add esp, 0x1c
// 0066252d  837c242801           cmp dword ptr [esp + 0x28], 1
// 00662532  7508                 jne 0x66253c
// 00662534  c744242803000000     mov dword ptr [esp + 0x28], 3
// 0066253c  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 0066253f  8d442428             lea eax, [esp + 0x28]
// 00662543  50                   push eax
// 00662544  51                   push ecx
// 00662545  e806970000           call 0x66bc50
// 0066254a  83c408               add esp, 8
// 0066254d  807c241900           cmp byte ptr [esp + 0x19], 0
// 00662552  7517                 jne 0x66256b
// 00662554  8bf5                 mov esi, ebp
// 00662556  e8c5e7ffff           call 0x660d20
// 0066255b  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0066255f  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00662563  8b4b30               mov ecx, dword ptr [ebx + 0x30]
// 00662566  52                   push edx
// 00662567  50                   push eax
// 00662568  51                   push ecx
// 00662569  eb32                 jmp 0x66259d
// 0066256b  8bc3                 mov eax, ebx
// 0066256d  e89efdffff           call 0x662310
// 00662572  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00662576  8b4330               mov eax, dword ptr [ebx + 0x30]
// 00662579  52                   push edx
// 0066257a  50                   push eax
// 0066257b  e8008f0000           call 0x66b480
// 00662580  83c408               add esp, 8
// 00662583  8bf5                 mov esi, ebp
// 00662585  e896e7ffff           call 0x660d20
// 0066258a  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0066258e  51                   push ecx
// 0066258f  55                   push ebp
// 00662590  e81b8e0000           call 0x66b3b0
// 00662595  8b5330               mov edx, dword ptr [ebx + 0x30]
// 00662598  83c404               add esp, 4
// 0066259b  50                   push eax
// 0066259c  52                   push edx
// 0066259d  e84e9d0000           call 0x66c2f0
// 006625a2  8b7514               mov esi, dword ptr [ebp + 0x14]
// 006625a5  8b06                 mov eax, dword ptr [esi]
// 006625a7  894514               mov dword ptr [ebp + 0x14], eax
// 006625aa  0fb65608             movzx edx, byte ptr [esi + 8]
// 006625ae  8b450c               mov eax, dword ptr [ebp + 0xc]
// 006625b1  83c40c               add esp, 0xc
// 006625b4  e837e4ffff           call 0x6609f0
// 006625b9  807e0900             cmp byte ptr [esi + 9], 0
// 006625bd  7414                 je 0x6625d3
// 006625bf  0fb64e08             movzx ecx, byte ptr [esi + 8]
// 006625c3  6a00                 push 0
// 006625c5  6a00                 push 0
// 006625c7  51                   push ecx
// 006625c8  6a23                 push 0x23
// 006625ca  55                   push ebp
// 006625cb  e8608c0000           call 0x66b230
// 006625d0  83c414               add esp, 0x14
// 006625d3  0fb65532             movzx edx, byte ptr [ebp + 0x32]
// 006625d7  895524               mov dword ptr [ebp + 0x24], edx
// 006625da  8b4604               mov eax, dword ptr [esi + 4]
// 006625dd  50                   push eax
// 006625de  55                   push ebp
// 006625df  e89c8e0000           call 0x66b480
// 006625e4  83c408               add esp, 8
// 006625e7  5f                   pop edi
// 006625e8  5e                   pop esi
// 006625e9  5d                   pop ebp
// 006625ea  83c434               add esp, 0x34
// 006625ed  c3                   ret 
// library lua-5.1.4/lparser.c (function _repeatstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
