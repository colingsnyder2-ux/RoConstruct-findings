// from server: 100% by auto
// roc 2007-08 006130c0  unit: seg_00610000  size: 159 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006130c0
//
// 006130c0  56                   push esi
// 006130c1  8b742408             mov esi, dword ptr [esp + 8]
// 006130c5  8b4668               mov eax, dword ptr [esi + 0x68]
// 006130c8  85c0                 test eax, eax
// 006130ca  57                   push edi
// 006130cb  8b7e10               mov edi, dword ptr [esi + 0x10]
// 006130ce  0f8488000000         je 0x61315c
// 006130d4  55                   push ebp
// 006130d5  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 006130d9  53                   push ebx
// 006130da  8d9b00000000         lea ebx, [ebx]
// 006130e0  396808               cmp dword ptr [eax + 8], ebp
// 006130e3  7275                 jb 0x61315a
// 006130e5  8b08                 mov ecx, dword ptr [eax]
// 006130e7  894e68               mov dword ptr [esi + 0x68], ecx
// 006130ea  0fb65005             movzx edx, byte ptr [eax + 5]
// 006130ee  0fb64f14             movzx ecx, byte ptr [edi + 0x14]
// 006130f2  f7d1                 not ecx
// 006130f4  83e203               and edx, 3
// 006130f7  84d1                 test cl, dl
// 006130f9  8d4810               lea ecx, [eax + 0x10]
// 006130fc  7425                 je 0x613123
// 006130fe  394808               cmp dword ptr [eax + 8], ecx
// 00613101  7410                 je 0x613113
// 00613103  8b5014               mov edx, dword ptr [eax + 0x14]
// 00613106  8b19                 mov ebx, dword ptr [ecx]
// 00613108  895a10               mov dword ptr [edx + 0x10], ebx
// 0061310b  8b09                 mov ecx, dword ptr [ecx]
// 0061310d  8b5014               mov edx, dword ptr [eax + 0x14]
// 00613110  895114               mov dword ptr [ecx + 0x14], edx
// 00613113  6a00                 push 0
// 00613115  6a20                 push 0x20
// 00613117  50                   push eax
// 00613118  56                   push esi
// 00613119  e8d2080000           call 0x6139f0
// 0061311e  83c410               add esp, 0x10
// 00613121  eb30                 jmp 0x613153
// 00613123  8b5014               mov edx, dword ptr [eax + 0x14]
// 00613126  8b19                 mov ebx, dword ptr [ecx]
// 00613128  895a10               mov dword ptr [edx + 0x10], ebx
// 0061312b  8b11                 mov edx, dword ptr [ecx]
// 0061312d  8b5814               mov ebx, dword ptr [eax + 0x14]
// 00613130  895a14               mov dword ptr [edx + 0x14], ebx
// 00613133  8b5008               mov edx, dword ptr [eax + 8]
// 00613136  8b1a                 mov ebx, dword ptr [edx]
// 00613138  8919                 mov dword ptr [ecx], ebx
// 0061313a  8b5a04               mov ebx, dword ptr [edx + 4]
// 0061313d  895904               mov dword ptr [ecx + 4], ebx
// 00613140  8b5208               mov edx, dword ptr [edx + 8]
// 00613143  50                   push eax
// 00613144  895108               mov dword ptr [ecx + 8], edx
// 00613147  56                   push esi
// 00613148  894808               mov dword ptr [eax + 8], ecx
// 0061314b  e830ceffff           call 0x60ff80
// 00613150  83c408               add esp, 8
// 00613153  8b4668               mov eax, dword ptr [esi + 0x68]
// 00613156  85c0                 test eax, eax
// 00613158  7586                 jne 0x6130e0
// 0061315a  5b                   pop ebx
// 0061315b  5d                   pop ebp
// 0061315c  5f                   pop edi
// 0061315d  5e                   pop esi
// 0061315e  c3                   ret 
// library lua-5.1.1/lfunc.c (function _luaF_close)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.1 lfunc.c
