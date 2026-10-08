// roc 2009-12 0061a150  unit: seg_00610000  size: 223 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0061a150
//
// 0061a150  53                   push ebx
// 0061a151  56                   push esi
// 0061a152  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0061a156  80beb100000000       cmp byte ptr [esi + 0xb1], 0
// 0061a15d  57                   push edi
// 0061a15e  8bbe4c010000         mov edi, dword ptr [esi + 0x14c]
// 0061a164  897c2410             mov dword ptr [esp + 0x10], edi
// 0061a168  0f8581000000         jne 0x61a1ef
// 0061a16e  55                   push ebp
// 0061a16f  33ed                 xor ebp, ebp
// 0061a171  39aee4000000         cmp dword ptr [esi + 0xe4], ebp
// 0061a177  7e75                 jle 0x61a1ee
// 0061a179  8d9ee8000000         lea ebx, [esi + 0xe8]
// 0061a17f  90                   nop 
// 0061a180  80bed400000000       cmp byte ptr [esi + 0xd4], 0
// 0061a187  8b3b                 mov edi, dword ptr [ebx]
// 0061a189  7436                 je 0x61a1c1
// 0061a18b  83be2c01000000       cmp dword ptr [esi + 0x12c], 0
// 0061a192  751b                 jne 0x61a1af
// 0061a194  83be3401000000       cmp dword ptr [esi + 0x134], 0
// 0061a19b  7541                 jne 0x61a1de
// 0061a19d  8b4714               mov eax, dword ptr [edi + 0x14]
// 0061a1a0  6a00                 push 0
// 0061a1a2  50                   push eax
// 0061a1a3  8bc6                 mov eax, esi
// 0061a1a5  e8d6f5ffff           call 0x619780
// 0061a1aa  83c408               add esp, 8
// 0061a1ad  eb2f                 jmp 0x61a1de
// 0061a1af  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 0061a1b2  6a01                 push 1
// 0061a1b4  51                   push ecx
// 0061a1b5  8bc6                 mov eax, esi
// 0061a1b7  e8c4f5ffff           call 0x619780
// 0061a1bc  83c408               add esp, 8
// 0061a1bf  eb1d                 jmp 0x61a1de
// 0061a1c1  8b5714               mov edx, dword ptr [edi + 0x14]
// 0061a1c4  6a00                 push 0
// 0061a1c6  52                   push edx
// 0061a1c7  8bc6                 mov eax, esi
// 0061a1c9  e8b2f5ffff           call 0x619780
// 0061a1ce  8b4718               mov eax, dword ptr [edi + 0x18]
// 0061a1d1  6a01                 push 1
// 0061a1d3  50                   push eax
// 0061a1d4  8bc6                 mov eax, esi
// 0061a1d6  e8a5f5ffff           call 0x619780
// 0061a1db  83c410               add esp, 0x10
// 0061a1de  45                   inc ebp
// 0061a1df  83c304               add ebx, 4
// 0061a1e2  3baee4000000         cmp ebp, dword ptr [esi + 0xe4]
// 0061a1e8  7c96                 jl 0x61a180
// 0061a1ea  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0061a1ee  5d                   pop ebp
// 0061a1ef  8b8ebc000000         mov ecx, dword ptr [esi + 0xbc]
// 0061a1f5  3b4f1c               cmp ecx, dword ptr [edi + 0x1c]
// 0061a1f8  742b                 je 0x61a225
// 0061a1fa  68dd000000           push 0xdd
// 0061a1ff  e8bcf2ffff           call 0x6194c0
// 0061a204  83c404               add esp, 4
// 0061a207  bb04000000           mov ebx, 4
// 0061a20c  e81ff3ffff           call 0x619530
// 0061a211  8b9ebc000000         mov ebx, dword ptr [esi + 0xbc]
// 0061a217  e814f3ffff           call 0x619530
// 0061a21c  8b96bc000000         mov edx, dword ptr [esi + 0xbc]
// 0061a222  89571c               mov dword ptr [edi + 0x1c], edx
// 0061a225  5f                   pop edi
// 0061a226  8bc6                 mov eax, esi
// 0061a228  5e                   pop esi
// 0061a229  5b                   pop ebx
// 0061a22a  e931f8ffff           jmp 0x619a60
// library jpeg-6b/jcmarker.c (function _write_scan_header)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jcmarker.c
