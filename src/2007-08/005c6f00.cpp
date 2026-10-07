// roc 2007-08 005c6f00  unit: lua_exception  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c6f00
//
// 005c6f00  83ec3c               sub esp, 0x3c
// 005c6f03  56                   push esi
// 005c6f04  8b7714               mov esi, dword ptr [edi + 0x14]
// 005c6f07  8b4604               mov eax, dword ptr [esi + 4]
// 005c6f0a  83780806             cmp dword ptr [eax + 8], 6
// 005c6f0e  7559                 jne 0x5c6f69
// 005c6f10  8b00                 mov eax, dword ptr [eax]
// 005c6f12  80780600             cmp byte ptr [eax + 6], 0
// 005c6f16  7551                 jne 0x5c6f69
// 005c6f18  53                   push ebx
// 005c6f19  8bc6                 mov eax, esi
// 005c6f1b  8bd7                 mov edx, edi
// 005c6f1d  e89ef6ffff           call 0x5c65c0
// 005c6f22  8b7604               mov esi, dword ptr [esi + 4]
// 005c6f25  837e0806             cmp dword ptr [esi + 8], 6
// 005c6f29  8bd8                 mov ebx, eax
// 005c6f2b  750d                 jne 0x5c6f3a
// 005c6f2d  8b36                 mov esi, dword ptr [esi]
// 005c6f2f  807e0600             cmp byte ptr [esi + 6], 0
// 005c6f33  7505                 jne 0x5c6f3a
// 005c6f35  8b4610               mov eax, dword ptr [esi + 0x10]
// 005c6f38  eb02                 jmp 0x5c6f3c
// 005c6f3a  33c0                 xor eax, eax
// 005c6f3c  8b4820               mov ecx, dword ptr [eax + 0x20]
// 005c6f3f  6a3c                 push 0x3c
// 005c6f41  83c110               add ecx, 0x10
// 005c6f44  51                   push ecx
// 005c6f45  8d542410             lea edx, [esp + 0x10]
// 005c6f49  52                   push edx
// 005c6f4a  e8617f0400           call 0x60eeb0
// 005c6f4f  8b442454             mov eax, dword ptr [esp + 0x54]
// 005c6f53  50                   push eax
// 005c6f54  53                   push ebx
// 005c6f55  8d4c241c             lea ecx, [esp + 0x1c]
// 005c6f59  51                   push ecx
// 005c6f5a  6878977b00           push 0x7b9778
// 005c6f5f  57                   push edi
// 005c6f60  e82b7f0400           call 0x60ee90
// 005c6f65  83c420               add esp, 0x20
// 005c6f68  5b                   pop ebx
// 005c6f69  5e                   pop esi
// 005c6f6a  83c43c               add esp, 0x3c
// 005c6f6d  c3                   ret 
// library lua-5.1.4/ldebug.c (function _addinfo)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
