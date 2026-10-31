// from server: 100% by auto
// roc 2008-06 00621920  unit: lua_exception  size: 188 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00621920
//
// 00621920  55                   push ebp
// 00621921  8bec                 mov ebp, esp
// 00621923  6aff                 push -1
// 00621925  6860977d00           push 0x7d9760
// 0062192a  64a100000000         mov eax, dword ptr fs:[0]
// 00621930  50                   push eax
// 00621931  64892500000000       mov dword ptr fs:[0], esp
// 00621938  83ec1c               sub esp, 0x1c
// 0062193b  53                   push ebx
// 0062193c  56                   push esi
// 0062193d  8b7508               mov esi, dword ptr [ebp + 8]
// 00621940  8b4e70               mov ecx, dword ptr [esi + 0x70]
// 00621943  33c0                 xor eax, eax
// 00621945  57                   push edi
// 00621946  8945e0               mov dword ptr [ebp - 0x20], eax
// 00621949  8945fc               mov dword ptr [ebp - 4], eax
// 0062194c  8b4510               mov eax, dword ptr [ebp + 0x10]
// 0062194f  8965f0               mov dword ptr [ebp - 0x10], esp
// 00621952  50                   push eax
// 00621953  8d55d8               lea edx, [ebp - 0x28]
// 00621956  56                   push esi
// 00621957  894dd8               mov dword ptr [ebp - 0x28], ecx
// 0062195a  895670               mov dword ptr [esi + 0x70], edx
// 0062195d  ff550c               call dword ptr [ebp + 0xc]
// 00621960  83c408               add esp, 8
// 00621963  eb5d                 jmp 0x6219c2
// 00621965  8b4dec               mov ecx, dword ptr [ebp - 0x14]
// 00621968  c6411401             mov byte ptr [ecx + 0x14], 1
// 0062196c  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 0062196f  85d2                 test edx, edx
// 00621971  7507                 jne 0x62197a
// 00621973  c745e0ffffffff       mov dword ptr [ebp - 0x20], 0xffffffff
// 0062197a  b8bf196200           mov eax, 0x6219bf
// 0062197f  c3                   ret 
// 00621980  8b4de8               mov ecx, dword ptr [ebp - 0x18]
// 00621983  8b01                 mov eax, dword ptr [ecx]
// 00621985  8b5004               mov edx, dword ptr [eax + 4]
// 00621988  8965f0               mov dword ptr [ebp - 0x10], esp
// 0062198b  c645fc02             mov byte ptr [ebp - 4], 2
// 0062198f  ffd2                 call edx
// 00621991  50                   push eax
// 00621992  8b4508               mov eax, dword ptr [ebp + 8]
// 00621995  50                   push eax
// 00621996  e8351e0000           call 0x6237d0
// 0062199b  83c408               add esp, 8
// 0062199e  b8bf196200           mov eax, 0x6219bf
// 006219a3  c3                   ret 
// 006219a4  8b4de4               mov ecx, dword ptr [ebp - 0x1c]
// 006219a7  c6411401             mov byte ptr [ecx + 0x14], 1
// 006219ab  8b55e0               mov edx, dword ptr [ebp - 0x20]
// 006219ae  85d2                 test edx, edx
// 006219b0  7507                 jne 0x6219b9
// 006219b2  c745e0ffffffff       mov dword ptr [ebp - 0x20], 0xffffffff
// 006219b9  b89e196200           mov eax, 0x62199e
// 006219be  c3                   ret 
// 006219bf  8b7508               mov esi, dword ptr [ebp + 8]
// 006219c2  8b45d8               mov eax, dword ptr [ebp - 0x28]
// 006219c5  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 006219c8  894670               mov dword ptr [esi + 0x70], eax
// 006219cb  8b45e0               mov eax, dword ptr [ebp - 0x20]
// 006219ce  5f                   pop edi
// 006219cf  5e                   pop esi
// 006219d0  64890d00000000       mov dword ptr fs:[0], ecx
// 006219d7  5b                   pop ebx
// 006219d8  8be5                 mov esp, ebp
// 006219da  5d                   pop ebp
// 006219db  c3                   ret 

// from server: 100% by colin
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lang: cpp
// roc-lib: lua-5.1.2 roc_unit_f1a645ffa1da17e2.cpp
