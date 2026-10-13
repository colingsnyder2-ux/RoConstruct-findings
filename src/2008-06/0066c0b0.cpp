// roc 2008-06 0066c0b0  unit: RBX::GroupDragTool  size: 576 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066c0b0
//
// 0066c0b0  8b442408             mov eax, dword ptr [esp + 8]
// 0066c0b4  83f80e               cmp eax, 0xe
// 0066c0b7  0f87f5010000         ja 0x66c2b2
// 0066c0bd  53                   push ebx
// 0066c0be  56                   push esi
// 0066c0bf  57                   push edi
// 0066c0c0  ff2485b4c26600       jmp dword ptr [eax*4 + 0x66c2b4]
// 0066c0c7  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066c0cb  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0066c0cf  56                   push esi
// 0066c0d0  53                   push ebx
// 0066c0d1  e8caf3ffff           call 0x66b4a0
// 0066c0d6  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0066c0da  8b4714               mov eax, dword ptr [edi + 0x14]
// 0066c0dd  50                   push eax
// 0066c0de  8d4e14               lea ecx, [esi + 0x14]
// 0066c0e1  51                   push ecx
// 0066c0e2  53                   push ebx
// 0066c0e3  e828ecffff           call 0x66ad10
// 0066c0e8  8b16                 mov edx, dword ptr [esi]
// 0066c0ea  8917                 mov dword ptr [edi], edx
// 0066c0ec  8b4604               mov eax, dword ptr [esi + 4]
// 0066c0ef  894704               mov dword ptr [edi + 4], eax
// 0066c0f2  8b4e08               mov ecx, dword ptr [esi + 8]
// 0066c0f5  894f08               mov dword ptr [edi + 8], ecx
// 0066c0f8  8b560c               mov edx, dword ptr [esi + 0xc]
// 0066c0fb  89570c               mov dword ptr [edi + 0xc], edx
// 0066c0fe  8b4610               mov eax, dword ptr [esi + 0x10]
// 0066c101  894710               mov dword ptr [edi + 0x10], eax
// 0066c104  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0066c107  83c414               add esp, 0x14
// 0066c10a  894f14               mov dword ptr [edi + 0x14], ecx
// 0066c10d  5f                   pop edi
// 0066c10e  5e                   pop esi
// 0066c10f  5b                   pop ebx
// 0066c110  c3                   ret 
// 0066c111  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066c115  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0066c119  56                   push esi
// 0066c11a  53                   push ebx
// 0066c11b  e880f3ffff           call 0x66b4a0
// 0066c120  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 0066c124  8b5710               mov edx, dword ptr [edi + 0x10]
// 0066c127  52                   push edx
// 0066c128  8d4610               lea eax, [esi + 0x10]
// 0066c12b  50                   push eax
// 0066c12c  53                   push ebx
// 0066c12d  e8deebffff           call 0x66ad10
// 0066c132  8b0e                 mov ecx, dword ptr [esi]
// 0066c134  890f                 mov dword ptr [edi], ecx
// 0066c136  8b5604               mov edx, dword ptr [esi + 4]
// 0066c139  895704               mov dword ptr [edi + 4], edx
// 0066c13c  8b4608               mov eax, dword ptr [esi + 8]
// 0066c13f  894708               mov dword ptr [edi + 8], eax
// 0066c142  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0066c145  894f0c               mov dword ptr [edi + 0xc], ecx
// 0066c148  8b5610               mov edx, dword ptr [esi + 0x10]
// 0066c14b  895710               mov dword ptr [edi + 0x10], edx
// 0066c14e  8b4614               mov eax, dword ptr [esi + 0x14]
// 0066c151  83c414               add esp, 0x14
// 0066c154  894714               mov dword ptr [edi + 0x14], eax
// 0066c157  5f                   pop edi
// 0066c158  5e                   pop esi
// 0066c159  5b                   pop ebx
// 0066c15a  c3                   ret 
// 0066c15b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0066c15f  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066c163  56                   push esi
// 0066c164  57                   push edi
// 0066c165  e896f7ffff           call 0x66b900
// 0066c16a  83c408               add esp, 8
// 0066c16d  833e0b               cmp dword ptr [esi], 0xb
// 0066c170  754d                 jne 0x66c1bf
// 0066c172  8b0f                 mov ecx, dword ptr [edi]
// 0066c174  8b410c               mov eax, dword ptr [ecx + 0xc]
// 0066c177  8b5608               mov edx, dword ptr [esi + 8]
// 0066c17a  8b0c90               mov ecx, dword ptr [eax + edx*4]
// 0066c17d  83e13f               and ecx, 0x3f
// 0066c180  80f915               cmp cl, 0x15
// 0066c183  753a                 jne 0x66c1bf
// 0066c185  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0066c189  8bc3                 mov eax, ebx
// 0066c18b  8bcf                 mov ecx, edi
// 0066c18d  e84eecffff           call 0x66ade0
// 0066c192  8b17                 mov edx, dword ptr [edi]
// 0066c194  8b4a0c               mov ecx, dword ptr [edx + 0xc]
// 0066c197  8b4608               mov eax, dword ptr [esi + 8]
// 0066c19a  8b5308               mov edx, dword ptr [ebx + 8]
// 0066c19d  8d0481               lea eax, [ecx + eax*4]
// 0066c1a0  8b08                 mov ecx, dword ptr [eax]
// 0066c1a2  c1e217               shl edx, 0x17
// 0066c1a5  81e1ffff7f00         and ecx, 0x7fffff
// 0066c1ab  0bd1                 or edx, ecx
// 0066c1ad  8910                 mov dword ptr [eax], edx
// 0066c1af  c7030b000000         mov dword ptr [ebx], 0xb
// 0066c1b5  8b5608               mov edx, dword ptr [esi + 8]
// 0066c1b8  5f                   pop edi
// 0066c1b9  5e                   pop esi
// 0066c1ba  895308               mov dword ptr [ebx + 8], edx
// 0066c1bd  5b                   pop ebx
// 0066c1be  c3                   ret 
// 0066c1bf  56                   push esi
// 0066c1c0  57                   push edi
// 0066c1c1  e86af6ffff           call 0x66b830
// 0066c1c6  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0066c1ca  56                   push esi
// 0066c1cb  6a15                 push 0x15
// 0066c1cd  e88efcffff           call 0x66be60
// 0066c1d2  83c410               add esp, 0x10
// 0066c1d5  5f                   pop edi
// 0066c1d6  5e                   pop esi
// 0066c1d7  5b                   pop ebx
// 0066c1d8  c3                   ret 
// 0066c1d9  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066c1dd  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0066c1e1  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066c1e5  50                   push eax
// 0066c1e6  6a0c                 push 0xc
// 0066c1e8  e873fcffff           call 0x66be60
// 0066c1ed  83c408               add esp, 8
// 0066c1f0  5f                   pop edi
// 0066c1f1  5e                   pop esi
// 0066c1f2  5b                   pop ebx
// 0066c1f3  c3                   ret 
// 0066c1f4  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066c1f8  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0066c1fc  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066c200  51                   push ecx
// 0066c201  6a0d                 push 0xd
// 0066c203  e858fcffff           call 0x66be60
// 0066c208  83c408               add esp, 8
// 0066c20b  5f                   pop edi
// 0066c20c  5e                   pop esi
// 0066c20d  5b                   pop ebx
// 0066c20e  c3                   ret 
// 0066c20f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0066c213  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0066c217  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066c21b  52                   push edx
// 0066c21c  6a0e                 push 0xe
// 0066c21e  e83dfcffff           call 0x66be60
// 0066c223  83c408               add esp, 8
// 0066c226  5f                   pop edi
// 0066c227  5e                   pop esi
// 0066c228  5b                   pop ebx
// 0066c229  c3                   ret 
// 0066c22a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0066c22e  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0066c232  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066c236  50                   push eax
// 0066c237  6a0f                 push 0xf
// 0066c239  e822fcffff           call 0x66be60
// 0066c23e  83c408               add esp, 8
// 0066c241  5f                   pop edi
// 0066c242  5e                   pop esi
// 0066c243  5b                   pop ebx
// 0066c244  c3                   ret 
// 0066c245  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0066c249  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0066c24d  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066c251  51                   push ecx
// 0066c252  6a10                 push 0x10
// 0066c254  e807fcffff           call 0x66be60
// 0066c259  83c408               add esp, 8
// 0066c25c  5f                   pop edi
// 0066c25d  5e                   pop esi
// 0066c25e  5b                   pop ebx
// 0066c25f  c3                   ret 
// 0066c260  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0066c264  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0066c268  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0066c26c  52                   push edx
// 0066c26d  6a11                 push 0x11
// 0066c26f  e8ecfbffff           call 0x66be60
// 0066c274  83c408               add esp, 8
// 0066c277  5f                   pop edi
// 0066c278  5e                   pop esi
// 0066c279  5b                   pop ebx
// 0066c27a  c3                   ret 
// 0066c27b  6a01                 push 1
// 0066c27d  6a17                 push 0x17
// 0066c27f  eb1a                 jmp 0x66c29b
// 0066c281  6a00                 push 0
// 0066c283  6a17                 push 0x17
// 0066c285  eb14                 jmp 0x66c29b
// 0066c287  6a01                 push 1
// 0066c289  6a18                 push 0x18
// 0066c28b  eb0e                 jmp 0x66c29b
// 0066c28d  6a01                 push 1
// 0066c28f  eb08                 jmp 0x66c299
// 0066c291  6a00                 push 0
// 0066c293  6a18                 push 0x18
// 0066c295  eb04                 jmp 0x66c29b
// 0066c297  6a00                 push 0
// 0066c299  6a19                 push 0x19
// 0066c29b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0066c29f  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0066c2a3  8b742418             mov esi, dword ptr [esp + 0x18]
// 0066c2a7  e864fcffff           call 0x66bf10
// 0066c2ac  83c408               add esp, 8
// 0066c2af  5f                   pop edi
// 0066c2b0  5e                   pop esi
// 0066c2b1  5b                   pop ebx
// 0066c2b2  c3                   ret 
// 0066c2b3  90                   nop 
// 0066c2b4  d9c1                 fld st(1)
// 0066c2b6  6600f4               add ah, dh
// 0066c2b9  c166000f             shl dword ptr [esi], 0xf
// 0066c2bd  c26600               ret 0x66
// 0066c2c0  2ac2                 sub al, dl
// 0066c2c2  660045c2             add byte ptr [ebp - 0x3e], al
// 0066c2c6  660060c2             add byte ptr [eax - 0x3e], ah
// 0066c2ca  66005bc1             add byte ptr [ebx - 0x3f], bl
// 0066c2ce  660081c266007b       add byte ptr [ecx + 0x7b0066c2], al
// 0066c2d5  c26600               ret 0x66
// 0066c2d8  87c2                 xchg edx, eax
// 0066c2da  66008dc2660091       add byte ptr [ebp - 0x6eff993e], cl
// 0066c2e1  c26600               ret 0x66
// 0066c2e4  97                   xchg edi, eax
// 0066c2e5  c26600               ret 0x66
// 0066c2e8  c7c0660011c1         mov eax, 0xc1110066
// library lua-5.1.1/lcode.c (function _luaK_posfix)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lcode.c
