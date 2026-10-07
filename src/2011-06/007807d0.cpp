// roc 2011-06 007807d0  unit: lua_exception  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007807d0
//
// 007807d0  81ec10020000         sub esp, 0x210
// 007807d6  53                   push ebx
// 007807d7  56                   push esi
// 007807d8  57                   push edi
// 007807d9  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 007807e0  8d44240c             lea eax, [esp + 0xc]
// 007807e4  50                   push eax
// 007807e5  6a01                 push 1
// 007807e7  57                   push edi
// 007807e8  e8a339feff           call 0x764190
// 007807ed  6a02                 push 2
// 007807ef  57                   push edi
// 007807f0  8bd8                 mov ebx, eax
// 007807f2  e8d93afeff           call 0x7642d0
// 007807f7  8d4c2424             lea ecx, [esp + 0x24]
// 007807fb  51                   push ecx
// 007807fc  57                   push edi
// 007807fd  8bf0                 mov esi, eax
// 007807ff  e84c33feff           call 0x763b50
// 00780804  83c41c               add esp, 0x1c
// 00780807  85f6                 test esi, esi
// 00780809  7e1d                 jle 0x780828
// 0078080b  eb03                 jmp 0x780810
// 0078080d  8d4900               lea ecx, [ecx]
// 00780810  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00780814  52                   push edx
// 00780815  8d442414             lea eax, [esp + 0x14]
// 00780819  53                   push ebx
// 0078081a  50                   push eax
// 0078081b  4e                   dec esi
// 0078081c  e80f32feff           call 0x763a30
// 00780821  83c40c               add esp, 0xc
// 00780824  85f6                 test esi, esi
// 00780826  7fe8                 jg 0x780810
// 00780828  8d4c2410             lea ecx, [esp + 0x10]
// 0078082c  51                   push ecx
// 0078082d  e85e32feff           call 0x763a90
// 00780832  83c404               add esp, 4
// 00780835  5f                   pop edi
// 00780836  5e                   pop esi
// 00780837  b801000000           mov eax, 1
// 0078083c  5b                   pop ebx
// 0078083d  81c410020000         add esp, 0x210
// 00780843  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_rep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
