// roc 2011-06 00780930  unit: lua_exception  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00780930
//
// 00780930  81ec0c020000         sub esp, 0x20c
// 00780936  55                   push ebp
// 00780937  56                   push esi
// 00780938  57                   push edi
// 00780939  8bbc241c020000       mov edi, dword ptr [esp + 0x21c]
// 00780940  57                   push edi
// 00780941  e81a1afeff           call 0x762360
// 00780946  8be8                 mov ebp, eax
// 00780948  8d442410             lea eax, [esp + 0x10]
// 0078094c  50                   push eax
// 0078094d  57                   push edi
// 0078094e  e8fd31feff           call 0x763b50
// 00780953  be01000000           mov esi, 1
// 00780958  83c40c               add esp, 0xc
// 0078095b  3bee                 cmp ebp, esi
// 0078095d  7c4d                 jl 0x7809ac
// 0078095f  53                   push ebx
// 00780960  56                   push esi
// 00780961  57                   push edi
// 00780962  e86939feff           call 0x7642d0
// 00780967  8bd8                 mov ebx, eax
// 00780969  0fb6cb               movzx ecx, bl
// 0078096c  83c408               add esp, 8
// 0078096f  3bcb                 cmp ecx, ebx
// 00780971  740f                 je 0x780982
// 00780973  68e87cab00           push 0xab7ce8
// 00780978  56                   push esi
// 00780979  57                   push edi
// 0078097a  e82136feff           call 0x763fa0
// 0078097f  83c40c               add esp, 0xc
// 00780982  8d94241c020000       lea edx, [esp + 0x21c]
// 00780989  39542410             cmp dword ptr [esp + 0x10], edx
// 0078098d  720d                 jb 0x78099c
// 0078098f  8d442410             lea eax, [esp + 0x10]
// 00780993  50                   push eax
// 00780994  e85730feff           call 0x7639f0
// 00780999  83c404               add esp, 4
// 0078099c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007809a0  8819                 mov byte ptr [ecx], bl
// 007809a2  ff442410             inc dword ptr [esp + 0x10]
// 007809a6  46                   inc esi
// 007809a7  3bf5                 cmp esi, ebp
// 007809a9  7eb5                 jle 0x780960
// 007809ab  5b                   pop ebx
// 007809ac  8d54240c             lea edx, [esp + 0xc]
// 007809b0  52                   push edx
// 007809b1  e8da30feff           call 0x763a90
// 007809b6  83c404               add esp, 4
// 007809b9  5f                   pop edi
// 007809ba  5e                   pop esi
// 007809bb  b801000000           mov eax, 1
// 007809c0  5d                   pop ebp
// 007809c1  81c40c020000         add esp, 0x20c
// 007809c7  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_char)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
