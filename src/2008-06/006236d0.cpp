// roc 2008-06 006236d0  unit: lua_exception  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006236d0
//
// 006236d0  83ec3c               sub esp, 0x3c
// 006236d3  56                   push esi
// 006236d4  8b7714               mov esi, dword ptr [edi + 0x14]
// 006236d7  8b4604               mov eax, dword ptr [esi + 4]
// 006236da  83780806             cmp dword ptr [eax + 8], 6
// 006236de  7559                 jne 0x623739
// 006236e0  8b00                 mov eax, dword ptr [eax]
// 006236e2  80780600             cmp byte ptr [eax + 6], 0
// 006236e6  7551                 jne 0x623739
// 006236e8  53                   push ebx
// 006236e9  8bc6                 mov eax, esi
// 006236eb  8bd7                 mov edx, edi
// 006236ed  e83ef5ffff           call 0x622c30
// 006236f2  8b7604               mov esi, dword ptr [esi + 4]
// 006236f5  837e0806             cmp dword ptr [esi + 8], 6
// 006236f9  8bd8                 mov ebx, eax
// 006236fb  750d                 jne 0x62370a
// 006236fd  8b36                 mov esi, dword ptr [esi]
// 006236ff  807e0600             cmp byte ptr [esi + 6], 0
// 00623703  7505                 jne 0x62370a
// 00623705  8b4610               mov eax, dword ptr [esi + 0x10]
// 00623708  eb02                 jmp 0x62370c
// 0062370a  33c0                 xor eax, eax
// 0062370c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0062370f  6a3c                 push 0x3c
// 00623711  83c110               add ecx, 0x10
// 00623714  51                   push ecx
// 00623715  8d542410             lea edx, [esp + 0x10]
// 00623719  52                   push edx
// 0062371a  e8c1f3ffff           call 0x622ae0
// 0062371f  8b442454             mov eax, dword ptr [esp + 0x54]
// 00623723  50                   push eax
// 00623724  53                   push ebx
// 00623725  8d4c241c             lea ecx, [esp + 0x1c]
// 00623729  51                   push ecx
// 0062372a  68104a8400           push 0x844a10
// 0062372f  57                   push edi
// 00623730  e88bf3ffff           call 0x622ac0
// 00623735  83c420               add esp, 0x20
// 00623738  5b                   pop ebx
// 00623739  5e                   pop esi
// 0062373a  83c43c               add esp, 0x3c
// 0062373d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _addinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
