// from server: 100% by auto
// roc 2008-06 006608b0  unit: RBX::FilterStairs  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006608b0
//
// 006608b0  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 006608b7  7424                 je 0x6608dd
// 006608b9  681d010000           push 0x11d
// 006608be  56                   push esi
// 006608bf  e84c380000           call 0x664110
// 006608c4  50                   push eax
// 006608c5  8b4634               mov eax, dword ptr [esi + 0x34]
// 006608c8  68c0c48400           push 0x84c4c0
// 006608cd  50                   push eax
// 006608ce  e8ed21fcff           call 0x622ac0
// 006608d3  50                   push eax
// 006608d4  56                   push esi
// 006608d5  e836390000           call 0x664210
// 006608da  83c41c               add esp, 0x1c
// 006608dd  53                   push ebx
// 006608de  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 006608e1  56                   push esi
// 006608e2  e8194d0000           call 0x665600
// 006608e7  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 006608ea  53                   push ebx
// 006608eb  51                   push ecx
// 006608ec  e8efa50000           call 0x66aee0
// 006608f1  83c9ff               or ecx, 0xffffffff
// 006608f4  83c40c               add esp, 0xc
// 006608f7  894f10               mov dword ptr [edi + 0x10], ecx
// 006608fa  894f14               mov dword ptr [edi + 0x14], ecx
// 006608fd  c70704000000         mov dword ptr [edi], 4
// 00660903  894708               mov dword ptr [edi + 8], eax
// 00660906  5b                   pop ebx
// 00660907  c3                   ret 
// library lua-5.1.4/lparser.c (function _checkname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
