// from server: 100% by auto
// roc 2008-06 005299b0  unit: G3D::Line  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005299b0
//
// 005299b0  83ec10               sub esp, 0x10
// 005299b3  55                   push ebp
// 005299b4  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005299b8  8b556c               mov edx, dword ptr [ebp + 0x6c]
// 005299bb  56                   push esi
// 005299bc  8b742420             mov esi, dword ptr [esp + 0x20]
// 005299c0  f7c200000c00         test edx, 0xc0000
// 005299c6  746a                 je 0x529a32
// 005299c8  803e23               cmp byte ptr [esi], 0x23
// 005299cb  754f                 jne 0x529a1c
// 005299cd  b801000000           mov eax, 1
// 005299d2  b120                 mov cl, 0x20
// 005299d4  380c30               cmp byte ptr [eax + esi], cl
// 005299d7  7411                 je 0x5299ea
// 005299d9  384c3001             cmp byte ptr [eax + esi + 1], cl
// 005299dd  740a                 je 0x5299e9
// 005299df  83c002               add eax, 2
// 005299e2  83f80f               cmp eax, 0xf
// 005299e5  7ced                 jl 0x5299d4
// 005299e7  eb01                 jmp 0x5299ea
// 005299e9  40                   inc eax
// 005299ea  f7c200000800         test edx, 0x80000
// 005299f0  7426                 je 0x529a18
// 005299f2  57                   push edi
// 005299f3  8d78ff               lea edi, [eax - 1]
// 005299f6  33c9                 xor ecx, ecx
// 005299f8  85ff                 test edi, edi
// 005299fa  7e14                 jle 0x529a10
// 005299fc  8d4601               lea eax, [esi + 1]
// 005299ff  57                   push edi
// 00529a00  50                   push eax
// 00529a01  8d442414             lea eax, [esp + 0x14]
// 00529a05  50                   push eax
// 00529a06  e8d57d1700           call 0x6a17e0
// 00529a0b  83c40c               add esp, 0xc
// 00529a0e  8bcf                 mov ecx, edi
// 00529a10  c6440c0c00           mov byte ptr [esp + ecx + 0xc], 0
// 00529a15  5f                   pop edi
// 00529a16  eb16                 jmp 0x529a2e
// 00529a18  03f0                 add esi, eax
// 00529a1a  eb16                 jmp 0x529a32
// 00529a1c  f7c200000800         test edx, 0x80000
// 00529a22  740e                 je 0x529a32
// 00529a24  c644240830           mov byte ptr [esp + 8], 0x30
// 00529a29  c644240900           mov byte ptr [esp + 9], 0
// 00529a2e  8d742408             lea esi, [esp + 8]
// 00529a32  8b4540               mov eax, dword ptr [ebp + 0x40]
// 00529a35  85c0                 test eax, eax
// 00529a37  7407                 je 0x529a40
// 00529a39  56                   push esi
// 00529a3a  55                   push ebp
// 00529a3b  ffd0                 call eax
// 00529a3d  83c408               add esp, 8
// 00529a40  55                   push ebp
// 00529a41  8bc6                 mov eax, esi
// 00529a43  e818fdffff           call 0x529760
// 00529a48  5e                   pop esi
// 00529a49  5d                   pop ebp
// library libpng-1.2.5/pngerror.c (function _png_error)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: libpng-1.2.5 pngerror.c
