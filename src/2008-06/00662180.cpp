// from server: 100% by auto
// roc 2008-06 00662180  unit: RBX::FilterStairs  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662180
//
// 00662180  56                   push esi
// 00662181  8b7130               mov esi, dword ptr [ecx + 0x30]
// 00662184  8b5624               mov edx, dword ptr [esi + 0x24]
// 00662187  33c9                 xor ecx, ecx
// 00662189  85c0                 test eax, eax
// 0066218b  7450                 je 0x6621dd
// 0066218d  55                   push ebp
// 0066218e  8bff                 mov edi, edi
// 00662190  83780809             cmp dword ptr [eax + 8], 9
// 00662194  7520                 jne 0x6621b6
// 00662196  8b6810               mov ebp, dword ptr [eax + 0x10]
// 00662199  3b6f08               cmp ebp, dword ptr [edi + 8]
// 0066219c  7508                 jne 0x6621a6
// 0066219e  b901000000           mov ecx, 1
// 006621a3  895010               mov dword ptr [eax + 0x10], edx
// 006621a6  8b6814               mov ebp, dword ptr [eax + 0x14]
// 006621a9  3b6f08               cmp ebp, dword ptr [edi + 8]
// 006621ac  7508                 jne 0x6621b6
// 006621ae  b901000000           mov ecx, 1
// 006621b3  895014               mov dword ptr [eax + 0x14], edx
// 006621b6  8b00                 mov eax, dword ptr [eax]
// 006621b8  85c0                 test eax, eax
// 006621ba  75d4                 jne 0x662190
// 006621bc  5d                   pop ebp
// 006621bd  85c9                 test ecx, ecx
// 006621bf  741c                 je 0x6621dd
// 006621c1  8b5708               mov edx, dword ptr [edi + 8]
// 006621c4  50                   push eax
// 006621c5  8b4624               mov eax, dword ptr [esi + 0x24]
// 006621c8  52                   push edx
// 006621c9  50                   push eax
// 006621ca  6a00                 push 0
// 006621cc  56                   push esi
// 006621cd  e85e900000           call 0x66b230
// 006621d2  6a01                 push 1
// 006621d4  56                   push esi
// 006621d5  e8c68b0000           call 0x66ada0
// 006621da  83c41c               add esp, 0x1c
// 006621dd  5e                   pop esi
// 006621de  c3                   ret 
// library lua-5.1.4/lparser.c (function _check_conflict)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
