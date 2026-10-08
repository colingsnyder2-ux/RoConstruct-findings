// from server: 100% by auto
// roc 2007-08 005c9bf0  unit: seg_005c0000  size: 147 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9bf0
//
// 005c9bf0  81ec10020000         sub esp, 0x210
// 005c9bf6  53                   push ebx
// 005c9bf7  56                   push esi
// 005c9bf8  8bb4241c020000       mov esi, dword ptr [esp + 0x21c]
// 005c9bff  57                   push edi
// 005c9c00  8d44240c             lea eax, [esp + 0xc]
// 005c9c04  50                   push eax
// 005c9c05  bb01000000           mov ebx, 1
// 005c9c0a  53                   push ebx
// 005c9c0b  56                   push esi
// 005c9c0c  e83f57ffff           call 0x5bf350
// 005c9c11  8d4c241c             lea ecx, [esp + 0x1c]
// 005c9c15  51                   push ecx
// 005c9c16  56                   push esi
// 005c9c17  8bf8                 mov edi, eax
// 005c9c19  e82251ffff           call 0x5bed40
// 005c9c1e  83c414               add esp, 0x14
// 005c9c21  837c240c00           cmp dword ptr [esp + 0xc], 0
// 005c9c26  743e                 je 0x5c9c66
// 005c9c28  eb06                 jmp 0x5c9c30
// 005c9c2a  8d9b00000000         lea ebx, [ebx]
// 005c9c30  295c240c             sub dword ptr [esp + 0xc], ebx
// 005c9c34  8d94241c020000       lea edx, [esp + 0x21c]
// 005c9c3b  39542410             cmp dword ptr [esp + 0x10], edx
// 005c9c3f  720d                 jb 0x5c9c4e
// 005c9c41  8d442410             lea eax, [esp + 0x10]
// 005c9c45  50                   push eax
// 005c9c46  e8854fffff           call 0x5bebd0
// 005c9c4b  83c404               add esp, 4
// 005c9c4e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9c52  8a1439               mov dl, byte ptr [ecx + edi]
// 005c9c55  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c9c59  8810                 mov byte ptr [eax], dl
// 005c9c5b  015c2410             add dword ptr [esp + 0x10], ebx
// 005c9c5f  837c240c00           cmp dword ptr [esp + 0xc], 0
// 005c9c64  75ca                 jne 0x5c9c30
// 005c9c66  295c240c             sub dword ptr [esp + 0xc], ebx
// 005c9c6a  8d4c2410             lea ecx, [esp + 0x10]
// 005c9c6e  51                   push ecx
// 005c9c6f  e8fc4fffff           call 0x5bec70
// 005c9c74  83c404               add esp, 4
// 005c9c77  5f                   pop edi
// 005c9c78  5e                   pop esi
// 005c9c79  8bc3                 mov eax, ebx
// 005c9c7b  5b                   pop ebx
// 005c9c7c  81c410020000         add esp, 0x210
// 005c9c82  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_reverse)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
