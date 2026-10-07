// roc 2007-08 005c7230  unit: lua_exception  size: 140 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c7230
//
// 005c7230  51                   push ecx
// 005c7231  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005c7235  8b4808               mov ecx, dword ptr [eax + 8]
// 005c7238  53                   push ebx
// 005c7239  8b1c8d48317c00       mov ebx, dword ptr [ecx*4 + 0x7c3148]
// 005c7240  56                   push esi
// 005c7241  57                   push edi
// 005c7242  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 005c7246  8b5714               mov edx, dword ptr [edi + 0x14]
// 005c7249  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005c7251  8b0a                 mov ecx, dword ptr [edx]
// 005c7253  8b7208               mov esi, dword ptr [edx + 8]
// 005c7256  3bce                 cmp ecx, esi
// 005c7258  7311                 jae 0x5c726b
// 005c725a  8d9b00000000         lea ebx, [ebx]
// 005c7260  3bc1                 cmp eax, ecx
// 005c7262  7420                 je 0x5c7284
// 005c7264  83c110               add ecx, 0x10
// 005c7267  3bce                 cmp ecx, esi
// 005c7269  72f5                 jb 0x5c7260
// 005c726b  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005c726f  53                   push ebx
// 005c7270  51                   push ecx
// 005c7271  68a8977b00           push 0x7b97a8
// 005c7276  57                   push edi
// 005c7277  e884fdffff           call 0x5c7000
// 005c727c  83c410               add esp, 0x10
// 005c727f  5f                   pop edi
// 005c7280  5e                   pop esi
// 005c7281  5b                   pop ebx
// 005c7282  59                   pop ecx
// 005c7283  c3                   ret 
// 005c7284  2b470c               sub eax, dword ptr [edi + 0xc]
// 005c7287  8d4c240c             lea ecx, [esp + 0xc]
// 005c728b  51                   push ecx
// 005c728c  52                   push edx
// 005c728d  c1f804               sar eax, 4
// 005c7290  57                   push edi
// 005c7291  e84afaffff           call 0x5c6ce0
// 005c7296  83c40c               add esp, 0xc
// 005c7299  85c0                 test eax, eax
// 005c729b  74ce                 je 0x5c726b
// 005c729d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005c72a1  53                   push ebx
// 005c72a2  52                   push edx
// 005c72a3  50                   push eax
// 005c72a4  8b442428             mov eax, dword ptr [esp + 0x28]
// 005c72a8  50                   push eax
// 005c72a9  6884977b00           push 0x7b9784
// 005c72ae  57                   push edi
// 005c72af  e84cfdffff           call 0x5c7000
// 005c72b4  83c418               add esp, 0x18
// 005c72b7  5f                   pop edi
// 005c72b8  5e                   pop esi
// 005c72b9  5b                   pop ebx
// 005c72ba  59                   pop ecx
// 005c72bb  c3                   ret 
// library lua-5.1.4/ldebug.c (function _luaG_typeerror)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ldebug.c
