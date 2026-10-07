// roc 2008-06 00626590  unit: seg_00620000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00626590
//
// 00626590  81ec10020000         sub esp, 0x210
// 00626596  53                   push ebx
// 00626597  56                   push esi
// 00626598  57                   push edi
// 00626599  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 006265a0  8d44240c             lea eax, [esp + 0xc]
// 006265a4  50                   push eax
// 006265a5  6a01                 push 1
// 006265a7  57                   push edi
// 006265a8  e813b1feff           call 0x6116c0
// 006265ad  6a02                 push 2
// 006265af  57                   push edi
// 006265b0  8bd8                 mov ebx, eax
// 006265b2  e849b2feff           call 0x611800
// 006265b7  8d4c2424             lea ecx, [esp + 0x24]
// 006265bb  51                   push ecx
// 006265bc  57                   push edi
// 006265bd  8bf0                 mov esi, eax
// 006265bf  e8dcaafeff           call 0x6110a0
// 006265c4  83c41c               add esp, 0x1c
// 006265c7  85f6                 test esi, esi
// 006265c9  7e1d                 jle 0x6265e8
// 006265cb  eb03                 jmp 0x6265d0
// 006265cd  8d4900               lea ecx, [ecx]
// 006265d0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006265d4  52                   push edx
// 006265d5  8d442414             lea eax, [esp + 0x14]
// 006265d9  53                   push ebx
// 006265da  50                   push eax
// 006265db  4e                   dec esi
// 006265dc  e89fa9feff           call 0x610f80
// 006265e1  83c40c               add esp, 0xc
// 006265e4  85f6                 test esi, esi
// 006265e6  7fe8                 jg 0x6265d0
// 006265e8  8d4c2410             lea ecx, [esp + 0x10]
// 006265ec  51                   push ecx
// 006265ed  e8eea9feff           call 0x610fe0
// 006265f2  83c404               add esp, 4
// 006265f5  5f                   pop edi
// 006265f6  5e                   pop esi
// 006265f7  b801000000           mov eax, 1
// 006265fc  5b                   pop ebx
// 006265fd  81c410020000         add esp, 0x210
// 00626603  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_rep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
