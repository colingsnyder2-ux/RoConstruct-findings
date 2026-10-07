// roc 2009-06 006c52f0  unit: lua_exception  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c52f0
//
// 006c52f0  81ec0c020000         sub esp, 0x20c
// 006c52f6  55                   push ebp
// 006c52f7  56                   push esi
// 006c52f8  57                   push edi
// 006c52f9  8bbc241c020000       mov edi, dword ptr [esp + 0x21c]
// 006c5300  57                   push edi
// 006c5301  e87a3affff           call 0x6b8d80
// 006c5306  8be8                 mov ebp, eax
// 006c5308  8d442410             lea eax, [esp + 0x10]
// 006c530c  50                   push eax
// 006c530d  57                   push edi
// 006c530e  e86d53ffff           call 0x6ba680
// 006c5313  be01000000           mov esi, 1
// 006c5318  83c40c               add esp, 0xc
// 006c531b  3bee                 cmp ebp, esi
// 006c531d  7c4d                 jl 0x6c536c
// 006c531f  53                   push ebx
// 006c5320  56                   push esi
// 006c5321  57                   push edi
// 006c5322  e8d95affff           call 0x6bae00
// 006c5327  8bd8                 mov ebx, eax
// 006c5329  0fb6cb               movzx ecx, bl
// 006c532c  83c408               add esp, 8
// 006c532f  3bcb                 cmp ecx, ebx
// 006c5331  740f                 je 0x6c5342
// 006c5333  6858bb8e00           push 0x8ebb58
// 006c5338  56                   push esi
// 006c5339  57                   push edi
// 006c533a  e89157ffff           call 0x6baad0
// 006c533f  83c40c               add esp, 0xc
// 006c5342  8d94241c020000       lea edx, [esp + 0x21c]
// 006c5349  39542410             cmp dword ptr [esp + 0x10], edx
// 006c534d  720d                 jb 0x6c535c
// 006c534f  8d442410             lea eax, [esp + 0x10]
// 006c5353  50                   push eax
// 006c5354  e8c751ffff           call 0x6ba520
// 006c5359  83c404               add esp, 4
// 006c535c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006c5360  8819                 mov byte ptr [ecx], bl
// 006c5362  ff442410             inc dword ptr [esp + 0x10]
// 006c5366  46                   inc esi
// 006c5367  3bf5                 cmp esi, ebp
// 006c5369  7eb5                 jle 0x6c5320
// 006c536b  5b                   pop ebx
// 006c536c  8d54240c             lea edx, [esp + 0xc]
// 006c5370  52                   push edx
// 006c5371  e84a52ffff           call 0x6ba5c0
// 006c5376  83c404               add esp, 4
// 006c5379  5f                   pop edi
// 006c537a  5e                   pop esi
// 006c537b  b801000000           mov eax, 1
// 006c5380  5d                   pop ebp
// 006c5381  81c40c020000         add esp, 0x20c
// 006c5387  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_char)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
