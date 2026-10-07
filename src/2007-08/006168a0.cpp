// roc 2007-08 006168a0  unit: seg_00610000  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006168a0
//
// 006168a0  81ec84020000         sub esp, 0x284
// 006168a6  8b842490020000       mov eax, dword ptr [esp + 0x290]
// 006168ad  8b942494020000       mov edx, dword ptr [esp + 0x294]
// 006168b4  53                   push ebx
// 006168b5  89442440             mov dword ptr [esp + 0x40], eax
// 006168b9  8bc2                 mov eax, edx
// 006168bb  56                   push esi
// 006168bc  8d7001               lea esi, [eax + 1]
// 006168bf  90                   nop 
// 006168c0  8a08                 mov cl, byte ptr [eax]
// 006168c2  83c001               add eax, 1
// 006168c5  84c9                 test cl, cl
// 006168c7  75f7                 jne 0x6168c0
// 006168c9  2bc6                 sub eax, esi
// 006168cb  8bb42490020000       mov esi, dword ptr [esp + 0x290]
// 006168d2  50                   push eax
// 006168d3  52                   push edx
// 006168d4  56                   push esi
// 006168d5  e896c4ffff           call 0x612d70
// 006168da  8b8c24a0020000       mov ecx, dword ptr [esp + 0x2a0]
// 006168e1  50                   push eax
// 006168e2  51                   push ecx
// 006168e3  8d54241c             lea edx, [esp + 0x1c]
// 006168e7  52                   push edx
// 006168e8  56                   push esi
// 006168e9  e8d20d0000           call 0x6176c0
// 006168ee  8d44246c             lea eax, [esp + 0x6c]
// 006168f2  8d5c2424             lea ebx, [esp + 0x24]
// 006168f6  e8a5d8ffff           call 0x6141a0
// 006168fb  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 006168ff  8bcb                 mov ecx, ebx
// 00616901  51                   push ecx
// 00616902  c6404a02             mov byte ptr [eax + 0x4a], 2
// 00616906  e8e5200000           call 0x6189f0
// 0061690b  8bd3                 mov edx, ebx
// 0061690d  52                   push edx
// 0061690e  e8ddfeffff           call 0x6167f0
// 00616913  83c424               add esp, 0x24
// 00616916  817c24181f010000     cmp dword ptr [esp + 0x18], 0x11f
// 0061691e  5e                   pop esi
// 0061691f  5b                   pop ebx
// 00616920  742c                 je 0x61694e
// 00616922  8d0424               lea eax, [esp]
// 00616925  681f010000           push 0x11f
// 0061692a  50                   push eax
// 0061692b  e8900b0000           call 0x6174c0
// 00616930  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00616934  50                   push eax
// 00616935  6870337c00           push 0x7c3370
// 0061693a  51                   push ecx
// 0061693b  e85085ffff           call 0x60ee90
// 00616940  50                   push eax
// 00616941  8d542418             lea edx, [esp + 0x18]
// 00616945  52                   push edx
// 00616946  e8750c0000           call 0x6175c0
// 0061694b  83c41c               add esp, 0x1c
// 0061694e  8d0424               lea eax, [esp]
// 00616951  50                   push eax
// 00616952  e8f9d8ffff           call 0x614250
// 00616957  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0061695b  81c488020000         add esp, 0x288
// 00616961  c3                   ret 
// library lua-5.1.4/lparser.c (function _luaY_parser)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
