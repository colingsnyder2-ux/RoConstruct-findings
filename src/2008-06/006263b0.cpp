// roc 2008-06 006263b0  unit: seg_00620000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006263b0
//
// 006263b0  81ec10020000         sub esp, 0x210
// 006263b6  53                   push ebx
// 006263b7  56                   push esi
// 006263b8  8bb4241c020000       mov esi, dword ptr [esp + 0x21c]
// 006263bf  57                   push edi
// 006263c0  8d44240c             lea eax, [esp + 0xc]
// 006263c4  50                   push eax
// 006263c5  bb01000000           mov ebx, 1
// 006263ca  53                   push ebx
// 006263cb  56                   push esi
// 006263cc  e8efb2feff           call 0x6116c0
// 006263d1  8d4c241c             lea ecx, [esp + 0x1c]
// 006263d5  51                   push ecx
// 006263d6  56                   push esi
// 006263d7  8bf8                 mov edi, eax
// 006263d9  e8c2acfeff           call 0x6110a0
// 006263de  83c414               add esp, 0x14
// 006263e1  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006263e6  743e                 je 0x626426
// 006263e8  eb06                 jmp 0x6263f0
// 006263ea  8d9b00000000         lea ebx, [ebx]
// 006263f0  295c240c             sub dword ptr [esp + 0xc], ebx
// 006263f4  8d94241c020000       lea edx, [esp + 0x21c]
// 006263fb  39542410             cmp dword ptr [esp + 0x10], edx
// 006263ff  720d                 jb 0x62640e
// 00626401  8d442410             lea eax, [esp + 0x10]
// 00626405  50                   push eax
// 00626406  e835abfeff           call 0x610f40
// 0062640b  83c404               add esp, 4
// 0062640e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00626412  8a1439               mov dl, byte ptr [ecx + edi]
// 00626415  8b442410             mov eax, dword ptr [esp + 0x10]
// 00626419  8810                 mov byte ptr [eax], dl
// 0062641b  015c2410             add dword ptr [esp + 0x10], ebx
// 0062641f  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00626424  75ca                 jne 0x6263f0
// 00626426  295c240c             sub dword ptr [esp + 0xc], ebx
// 0062642a  8d4c2410             lea ecx, [esp + 0x10]
// 0062642e  51                   push ecx
// 0062642f  e8acabfeff           call 0x610fe0
// 00626434  83c404               add esp, 4
// 00626437  5f                   pop edi
// 00626438  5e                   pop esi
// 00626439  8bc3                 mov eax, ebx
// 0062643b  5b                   pop ebx
// 0062643c  81c410020000         add esp, 0x210
// 00626442  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_reverse)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
