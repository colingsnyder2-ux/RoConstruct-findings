// roc 2012-06 00856710  unit: lua_exception  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00856710
//
// 00856710  81ec0c020000         sub esp, 0x20c
// 00856716  55                   push ebp
// 00856717  56                   push esi
// 00856718  57                   push edi
// 00856719  8bbc241c020000       mov edi, dword ptr [esp + 0x21c]
// 00856720  57                   push edi
// 00856721  e8cab3fdff           call 0x831af0
// 00856726  8be8                 mov ebp, eax
// 00856728  8d442410             lea eax, [esp + 0x10]
// 0085672c  50                   push eax
// 0085672d  57                   push edi
// 0085672e  e8adcbfdff           call 0x8332e0
// 00856733  be01000000           mov esi, 1
// 00856738  83c40c               add esp, 0xc
// 0085673b  3bee                 cmp ebp, esi
// 0085673d  7c4d                 jl 0x85678c
// 0085673f  53                   push ebx
// 00856740  56                   push esi
// 00856741  57                   push edi
// 00856742  e819d3fdff           call 0x833a60
// 00856747  8bd8                 mov ebx, eax
// 00856749  0fb6cb               movzx ecx, bl
// 0085674c  83c408               add esp, 8
// 0085674f  3bcb                 cmp ecx, ebx
// 00856751  740f                 je 0x856762
// 00856753  68983dbd00           push 0xbd3d98
// 00856758  56                   push esi
// 00856759  57                   push edi
// 0085675a  e8d1cffdff           call 0x833730
// 0085675f  83c40c               add esp, 0xc
// 00856762  8d94241c020000       lea edx, [esp + 0x21c]
// 00856769  39542410             cmp dword ptr [esp + 0x10], edx
// 0085676d  720d                 jb 0x85677c
// 0085676f  8d442410             lea eax, [esp + 0x10]
// 00856773  50                   push eax
// 00856774  e807cafdff           call 0x833180
// 00856779  83c404               add esp, 4
// 0085677c  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00856780  8819                 mov byte ptr [ecx], bl
// 00856782  ff442410             inc dword ptr [esp + 0x10]
// 00856786  46                   inc esi
// 00856787  3bf5                 cmp esi, ebp
// 00856789  7eb5                 jle 0x856740
// 0085678b  5b                   pop ebx
// 0085678c  8d54240c             lea edx, [esp + 0xc]
// 00856790  52                   push edx
// 00856791  e88acafdff           call 0x833220
// 00856796  83c404               add esp, 4
// 00856799  5f                   pop edi
// 0085679a  5e                   pop esi
// 0085679b  b801000000           mov eax, 1
// 008567a0  5d                   pop ebp
// 008567a1  81c40c020000         add esp, 0x20c
// 008567a7  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_char)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
