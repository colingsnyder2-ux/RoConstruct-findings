// roc 2011-06 007805f0  unit: lua_exception  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007805f0
//
// 007805f0  81ec10020000         sub esp, 0x210
// 007805f6  53                   push ebx
// 007805f7  56                   push esi
// 007805f8  8bb4241c020000       mov esi, dword ptr [esp + 0x21c]
// 007805ff  57                   push edi
// 00780600  8d44240c             lea eax, [esp + 0xc]
// 00780604  50                   push eax
// 00780605  bb01000000           mov ebx, 1
// 0078060a  53                   push ebx
// 0078060b  56                   push esi
// 0078060c  e87f3bfeff           call 0x764190
// 00780611  8d4c241c             lea ecx, [esp + 0x1c]
// 00780615  51                   push ecx
// 00780616  56                   push esi
// 00780617  8bf8                 mov edi, eax
// 00780619  e83235feff           call 0x763b50
// 0078061e  83c414               add esp, 0x14
// 00780621  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00780626  743e                 je 0x780666
// 00780628  eb06                 jmp 0x780630
// 0078062a  8d9b00000000         lea ebx, [ebx]
// 00780630  295c240c             sub dword ptr [esp + 0xc], ebx
// 00780634  8d94241c020000       lea edx, [esp + 0x21c]
// 0078063b  39542410             cmp dword ptr [esp + 0x10], edx
// 0078063f  720d                 jb 0x78064e
// 00780641  8d442410             lea eax, [esp + 0x10]
// 00780645  50                   push eax
// 00780646  e8a533feff           call 0x7639f0
// 0078064b  83c404               add esp, 4
// 0078064e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00780652  8a1439               mov dl, byte ptr [ecx + edi]
// 00780655  8b442410             mov eax, dword ptr [esp + 0x10]
// 00780659  8810                 mov byte ptr [eax], dl
// 0078065b  015c2410             add dword ptr [esp + 0x10], ebx
// 0078065f  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00780664  75ca                 jne 0x780630
// 00780666  295c240c             sub dword ptr [esp + 0xc], ebx
// 0078066a  8d4c2410             lea ecx, [esp + 0x10]
// 0078066e  51                   push ecx
// 0078066f  e81c34feff           call 0x763a90
// 00780674  83c404               add esp, 4
// 00780677  5f                   pop edi
// 00780678  5e                   pop esi
// 00780679  8bc3                 mov eax, ebx
// 0078067b  5b                   pop ebx
// 0078067c  81c410020000         add esp, 0x210
// 00780682  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_reverse)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
