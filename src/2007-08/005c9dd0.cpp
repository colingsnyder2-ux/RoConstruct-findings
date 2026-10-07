// roc 2007-08 005c9dd0  unit: seg_005c0000  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9dd0
//
// 005c9dd0  81ec10020000         sub esp, 0x210
// 005c9dd6  53                   push ebx
// 005c9dd7  56                   push esi
// 005c9dd8  57                   push edi
// 005c9dd9  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 005c9de0  8d44240c             lea eax, [esp + 0xc]
// 005c9de4  50                   push eax
// 005c9de5  6a01                 push 1
// 005c9de7  57                   push edi
// 005c9de8  e86355ffff           call 0x5bf350
// 005c9ded  6a02                 push 2
// 005c9def  57                   push edi
// 005c9df0  8bd8                 mov ebx, eax
// 005c9df2  e89956ffff           call 0x5bf490
// 005c9df7  8d4c2424             lea ecx, [esp + 0x24]
// 005c9dfb  51                   push ecx
// 005c9dfc  57                   push edi
// 005c9dfd  8bf0                 mov esi, eax
// 005c9dff  e83c4fffff           call 0x5bed40
// 005c9e04  83c41c               add esp, 0x1c
// 005c9e07  85f6                 test esi, esi
// 005c9e09  7e1f                 jle 0x5c9e2a
// 005c9e0b  eb03                 jmp 0x5c9e10
// 005c9e0d  8d4900               lea ecx, [ecx]
// 005c9e10  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005c9e14  52                   push edx
// 005c9e15  8d442414             lea eax, [esp + 0x14]
// 005c9e19  53                   push ebx
// 005c9e1a  50                   push eax
// 005c9e1b  83ee01               sub esi, 1
// 005c9e1e  e8ed4dffff           call 0x5bec10
// 005c9e23  83c40c               add esp, 0xc
// 005c9e26  85f6                 test esi, esi
// 005c9e28  7fe6                 jg 0x5c9e10
// 005c9e2a  8d4c2410             lea ecx, [esp + 0x10]
// 005c9e2e  51                   push ecx
// 005c9e2f  e83c4effff           call 0x5bec70
// 005c9e34  83c404               add esp, 4
// 005c9e37  5f                   pop edi
// 005c9e38  5e                   pop esi
// 005c9e39  b801000000           mov eax, 1
// 005c9e3e  5b                   pop ebx
// 005c9e3f  81c410020000         add esp, 0x210
// 005c9e45  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_rep)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
