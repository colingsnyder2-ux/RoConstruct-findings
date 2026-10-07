// roc 2010-06 00735800  unit: seg_00730000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735800
//
// 00735800  81ec10020000         sub esp, 0x210
// 00735806  53                   push ebx
// 00735807  56                   push esi
// 00735808  57                   push edi
// 00735809  8bbc2420020000       mov edi, dword ptr [esp + 0x220]
// 00735810  8d44240c             lea eax, [esp + 0xc]
// 00735814  50                   push eax
// 00735815  6a01                 push 1
// 00735817  57                   push edi
// 00735818  e803d7feff           call 0x722f20
// 0073581d  6a02                 push 2
// 0073581f  57                   push edi
// 00735820  8bd8                 mov ebx, eax
// 00735822  e839d8feff           call 0x723060
// 00735827  8d4c2424             lea ecx, [esp + 0x24]
// 0073582b  51                   push ecx
// 0073582c  57                   push edi
// 0073582d  8bf0                 mov esi, eax
// 0073582f  e8acd0feff           call 0x7228e0
// 00735834  83c41c               add esp, 0x1c
// 00735837  85f6                 test esi, esi
// 00735839  7e1d                 jle 0x735858
// 0073583b  eb03                 jmp 0x735840
// 0073583d  8d4900               lea ecx, [ecx]
// 00735840  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00735844  52                   push edx
// 00735845  8d442414             lea eax, [esp + 0x14]
// 00735849  53                   push ebx
// 0073584a  50                   push eax
// 0073584b  4e                   dec esi
// 0073584c  e86fcffeff           call 0x7227c0
// 00735851  83c40c               add esp, 0xc
// 00735854  85f6                 test esi, esi
// 00735856  7fe8                 jg 0x735840
// 00735858  8d4c2410             lea ecx, [esp + 0x10]
// 0073585c  51                   push ecx
// 0073585d  e8becffeff           call 0x722820
// 00735862  83c404               add esp, 4
// 00735865  5f                   pop edi
// 00735866  5e                   pop esi
// 00735867  b801000000           mov eax, 1
// 0073586c  5b                   pop ebx
// 0073586d  81c410020000         add esp, 0x210
// 00735873  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_rep)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
