// roc 2008-06 00663560  unit: RBX::FilterStairs  size: 192 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00663560
//
// 00663560  81ec84020000         sub esp, 0x284
// 00663566  8b842490020000       mov eax, dword ptr [esp + 0x290]
// 0066356d  8b942494020000       mov edx, dword ptr [esp + 0x294]
// 00663574  53                   push ebx
// 00663575  89442440             mov dword ptr [esp + 0x40], eax
// 00663579  8bc2                 mov eax, edx
// 0066357b  56                   push esi
// 0066357c  8d7001               lea esi, [eax + 1]
// 0066357f  90                   nop 
// 00663580  8a08                 mov cl, byte ptr [eax]
// 00663582  40                   inc eax
// 00663583  84c9                 test cl, cl
// 00663585  75f9                 jne 0x663580
// 00663587  2bc6                 sub eax, esi
// 00663589  8bb42490020000       mov esi, dword ptr [esp + 0x290]
// 00663590  50                   push eax
// 00663591  52                   push edx
// 00663592  56                   push esi
// 00663593  e868bdffff           call 0x65f300
// 00663598  8b8c24a0020000       mov ecx, dword ptr [esp + 0x2a0]
// 0066359f  50                   push eax
// 006635a0  51                   push ecx
// 006635a1  8d54241c             lea edx, [esp + 0x1c]
// 006635a5  52                   push edx
// 006635a6  56                   push esi
// 006635a7  e8640d0000           call 0x664310
// 006635ac  8d44246c             lea eax, [esp + 0x6c]
// 006635b0  8d5c2424             lea ebx, [esp + 0x24]
// 006635b4  e8b7d8ffff           call 0x660e70
// 006635b9  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006635bd  8bcb                 mov ecx, ebx
// 006635bf  51                   push ecx
// 006635c0  c6404a02             mov byte ptr [eax + 0x4a], 2
// 006635c4  e837200000           call 0x665600
// 006635c9  8bd3                 mov edx, ebx
// 006635cb  52                   push edx
// 006635cc  e8dffeffff           call 0x6634b0
// 006635d1  83c424               add esp, 0x24
// 006635d4  817c24181f010000     cmp dword ptr [esp + 0x18], 0x11f
// 006635dc  5e                   pop esi
// 006635dd  5b                   pop ebx
// 006635de  742c                 je 0x66360c
// 006635e0  8d0424               lea eax, [esp]
// 006635e3  681f010000           push 0x11f
// 006635e8  50                   push eax
// 006635e9  e8220b0000           call 0x664110
// 006635ee  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 006635f2  50                   push eax
// 006635f3  68c0c48400           push 0x84c4c0
// 006635f8  51                   push ecx
// 006635f9  e8c2f4fbff           call 0x622ac0
// 006635fe  50                   push eax
// 006635ff  8d542418             lea edx, [esp + 0x18]
// 00663603  52                   push edx
// 00663604  e8070c0000           call 0x664210
// 00663609  83c41c               add esp, 0x1c
// 0066360c  8d0424               lea eax, [esp]
// 0066360f  50                   push eax
// 00663610  e80bd9ffff           call 0x660f20
// 00663615  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 00663619  81c488020000         add esp, 0x288
// 0066361f  c3                   ret 
// library lua-5.1.4/lparser.c (function _luaY_parser)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
