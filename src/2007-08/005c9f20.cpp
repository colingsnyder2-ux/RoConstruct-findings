// roc 2007-08 005c9f20  unit: seg_005c0000  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9f20
//
// 005c9f20  81ec0c020000         sub esp, 0x20c
// 005c9f26  55                   push ebp
// 005c9f27  56                   push esi
// 005c9f28  57                   push edi
// 005c9f29  8bbc241c020000       mov edi, dword ptr [esp + 0x21c]
// 005c9f30  57                   push edi
// 005c9f31  e84a36ffff           call 0x5bd580
// 005c9f36  8be8                 mov ebp, eax
// 005c9f38  8d442410             lea eax, [esp + 0x10]
// 005c9f3c  50                   push eax
// 005c9f3d  57                   push edi
// 005c9f3e  e8fd4dffff           call 0x5bed40
// 005c9f43  be01000000           mov esi, 1
// 005c9f48  83c40c               add esp, 0xc
// 005c9f4b  3bee                 cmp ebp, esi
// 005c9f4d  7c50                 jl 0x5c9f9f
// 005c9f4f  53                   push ebx
// 005c9f50  56                   push esi
// 005c9f51  57                   push edi
// 005c9f52  e83955ffff           call 0x5bf490
// 005c9f57  8bd8                 mov ebx, eax
// 005c9f59  0fb6cb               movzx ecx, bl
// 005c9f5c  83c408               add esp, 8
// 005c9f5f  3bcb                 cmp ecx, ebx
// 005c9f61  740f                 je 0x5c9f72
// 005c9f63  68909e7b00           push 0x7b9e90
// 005c9f68  56                   push esi
// 005c9f69  57                   push edi
// 005c9f6a  e81152ffff           call 0x5bf180
// 005c9f6f  83c40c               add esp, 0xc
// 005c9f72  8d94241c020000       lea edx, [esp + 0x21c]
// 005c9f79  39542410             cmp dword ptr [esp + 0x10], edx
// 005c9f7d  720d                 jb 0x5c9f8c
// 005c9f7f  8d442410             lea eax, [esp + 0x10]
// 005c9f83  50                   push eax
// 005c9f84  e8474cffff           call 0x5bebd0
// 005c9f89  83c404               add esp, 4
// 005c9f8c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005c9f90  8819                 mov byte ptr [ecx], bl
// 005c9f92  8344241001           add dword ptr [esp + 0x10], 1
// 005c9f97  83c601               add esi, 1
// 005c9f9a  3bf5                 cmp esi, ebp
// 005c9f9c  7eb2                 jle 0x5c9f50
// 005c9f9e  5b                   pop ebx
// 005c9f9f  8d54240c             lea edx, [esp + 0xc]
// 005c9fa3  52                   push edx
// 005c9fa4  e8c74cffff           call 0x5bec70
// 005c9fa9  83c404               add esp, 4
// 005c9fac  5f                   pop edi
// 005c9fad  5e                   pop esi
// 005c9fae  b801000000           mov eax, 1
// 005c9fb3  5d                   pop ebp
// 005c9fb4  81c40c020000         add esp, 0x20c
// 005c9fba  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_char)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
