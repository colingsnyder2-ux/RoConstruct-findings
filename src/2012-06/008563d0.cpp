// roc 2012-06 008563d0  unit: lua_exception  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 008563d0
//
// 008563d0  81ec10020000         sub esp, 0x210
// 008563d6  53                   push ebx
// 008563d7  56                   push esi
// 008563d8  8bb4241c020000       mov esi, dword ptr [esp + 0x21c]
// 008563df  57                   push edi
// 008563e0  8d44240c             lea eax, [esp + 0xc]
// 008563e4  50                   push eax
// 008563e5  bb01000000           mov ebx, 1
// 008563ea  53                   push ebx
// 008563eb  56                   push esi
// 008563ec  e82fd5fdff           call 0x833920
// 008563f1  8d4c241c             lea ecx, [esp + 0x1c]
// 008563f5  51                   push ecx
// 008563f6  56                   push esi
// 008563f7  8bf8                 mov edi, eax
// 008563f9  e8e2cefdff           call 0x8332e0
// 008563fe  83c414               add esp, 0x14
// 00856401  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00856406  743e                 je 0x856446
// 00856408  eb06                 jmp 0x856410
// 0085640a  8d9b00000000         lea ebx, [ebx]
// 00856410  295c240c             sub dword ptr [esp + 0xc], ebx
// 00856414  8d94241c020000       lea edx, [esp + 0x21c]
// 0085641b  39542410             cmp dword ptr [esp + 0x10], edx
// 0085641f  720d                 jb 0x85642e
// 00856421  8d442410             lea eax, [esp + 0x10]
// 00856425  50                   push eax
// 00856426  e855cdfdff           call 0x833180
// 0085642b  83c404               add esp, 4
// 0085642e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00856432  8a1439               mov dl, byte ptr [ecx + edi]
// 00856435  8b442410             mov eax, dword ptr [esp + 0x10]
// 00856439  8810                 mov byte ptr [eax], dl
// 0085643b  015c2410             add dword ptr [esp + 0x10], ebx
// 0085643f  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00856444  75ca                 jne 0x856410
// 00856446  295c240c             sub dword ptr [esp + 0xc], ebx
// 0085644a  8d4c2410             lea ecx, [esp + 0x10]
// 0085644e  51                   push ecx
// 0085644f  e8cccdfdff           call 0x833220
// 00856454  83c404               add esp, 4
// 00856457  5f                   pop edi
// 00856458  5e                   pop esi
// 00856459  8bc3                 mov eax, ebx
// 0085645b  5b                   pop ebx
// 0085645c  81c410020000         add esp, 0x210
// 00856462  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_reverse)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
