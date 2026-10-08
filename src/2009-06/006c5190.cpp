// from server: 100% by auto
// roc 2009-06 006c5190  unit: lua_exception  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c5190
//
// 006c5190  81ec10020000         sub esp, 0x210
// 006c5196  53                   push ebx
// 006c5197  56                   push esi
// 006c5198  57                   push edi
// 006c5199  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 006c51a0  8d44240c             lea eax, [esp + 0xc]
// 006c51a4  50                   push eax
// 006c51a5  6a01                 push 1
// 006c51a7  57                   push edi
// 006c51a8  e8135bffff           call 0x6bacc0
// 006c51ad  6a02                 push 2
// 006c51af  57                   push edi
// 006c51b0  8bd8                 mov ebx, eax
// 006c51b2  e8495cffff           call 0x6bae00
// 006c51b7  8d4c2424             lea ecx, [esp + 0x24]
// 006c51bb  51                   push ecx
// 006c51bc  57                   push edi
// 006c51bd  8bf0                 mov esi, eax
// 006c51bf  e8bc54ffff           call 0x6ba680
// 006c51c4  83c41c               add esp, 0x1c
// 006c51c7  85f6                 test esi, esi
// 006c51c9  7e1d                 jle 0x6c51e8
// 006c51cb  eb03                 jmp 0x6c51d0
// 006c51cd  8d4900               lea ecx, [ecx]
// 006c51d0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006c51d4  52                   push edx
// 006c51d5  8d442414             lea eax, [esp + 0x14]
// 006c51d9  53                   push ebx
// 006c51da  50                   push eax
// 006c51db  4e                   dec esi
// 006c51dc  e87f53ffff           call 0x6ba560
// 006c51e1  83c40c               add esp, 0xc
// 006c51e4  85f6                 test esi, esi
// 006c51e6  7fe8                 jg 0x6c51d0
// 006c51e8  8d4c2410             lea ecx, [esp + 0x10]
// 006c51ec  51                   push ecx
// 006c51ed  e8ce53ffff           call 0x6ba5c0
// 006c51f2  83c404               add esp, 4
// 006c51f5  5f                   pop edi
// 006c51f6  5e                   pop esi
// 006c51f7  b801000000           mov eax, 1
// 006c51fc  5b                   pop ebx
// 006c51fd  81c410020000         add esp, 0x210
// 006c5203  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_rep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
