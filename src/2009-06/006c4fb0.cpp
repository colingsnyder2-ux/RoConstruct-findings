// roc 2009-06 006c4fb0  unit: lua_exception  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4fb0
//
// 006c4fb0  81ec10020000         sub esp, 0x210
// 006c4fb6  53                   push ebx
// 006c4fb7  56                   push esi
// 006c4fb8  8bb4241c020000       mov esi, dword ptr [esp + 0x21c]
// 006c4fbf  57                   push edi
// 006c4fc0  8d44240c             lea eax, [esp + 0xc]
// 006c4fc4  50                   push eax
// 006c4fc5  bb01000000           mov ebx, 1
// 006c4fca  53                   push ebx
// 006c4fcb  56                   push esi
// 006c4fcc  e8ef5cffff           call 0x6bacc0
// 006c4fd1  8d4c241c             lea ecx, [esp + 0x1c]
// 006c4fd5  51                   push ecx
// 006c4fd6  56                   push esi
// 006c4fd7  8bf8                 mov edi, eax
// 006c4fd9  e8a256ffff           call 0x6ba680
// 006c4fde  83c414               add esp, 0x14
// 006c4fe1  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006c4fe6  743e                 je 0x6c5026
// 006c4fe8  eb06                 jmp 0x6c4ff0
// 006c4fea  8d9b00000000         lea ebx, [ebx]
// 006c4ff0  295c240c             sub dword ptr [esp + 0xc], ebx
// 006c4ff4  8d94241c020000       lea edx, [esp + 0x21c]
// 006c4ffb  39542410             cmp dword ptr [esp + 0x10], edx
// 006c4fff  720d                 jb 0x6c500e
// 006c5001  8d442410             lea eax, [esp + 0x10]
// 006c5005  50                   push eax
// 006c5006  e81555ffff           call 0x6ba520
// 006c500b  83c404               add esp, 4
// 006c500e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c5012  8a1439               mov dl, byte ptr [ecx + edi]
// 006c5015  8b442410             mov eax, dword ptr [esp + 0x10]
// 006c5019  8810                 mov byte ptr [eax], dl
// 006c501b  015c2410             add dword ptr [esp + 0x10], ebx
// 006c501f  837c240c00           cmp dword ptr [esp + 0xc], 0
// 006c5024  75ca                 jne 0x6c4ff0
// 006c5026  295c240c             sub dword ptr [esp + 0xc], ebx
// 006c502a  8d4c2410             lea ecx, [esp + 0x10]
// 006c502e  51                   push ecx
// 006c502f  e88c55ffff           call 0x6ba5c0
// 006c5034  83c404               add esp, 4
// 006c5037  5f                   pop edi
// 006c5038  5e                   pop esi
// 006c5039  8bc3                 mov eax, ebx
// 006c503b  5b                   pop ebx
// 006c503c  81c410020000         add esp, 0x210
// 006c5042  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_reverse)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
