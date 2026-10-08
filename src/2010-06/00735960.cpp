// from server: 100% by auto
// roc 2010-06 00735960  unit: seg_00730000  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00735960
//
// 00735960  81ec0c020000         sub esp, 0x20c
// 00735966  55                   push ebp
// 00735967  56                   push esi
// 00735968  57                   push edi
// 00735969  8bbc241c020000       mov edi, dword ptr [esp + 0x21c]
// 00735970  57                   push edi
// 00735971  e8dab5feff           call 0x720f50
// 00735976  8be8                 mov ebp, eax
// 00735978  8d442410             lea eax, [esp + 0x10]
// 0073597c  50                   push eax
// 0073597d  57                   push edi
// 0073597e  e85dcffeff           call 0x7228e0
// 00735983  be01000000           mov esi, 1
// 00735988  83c40c               add esp, 0xc
// 0073598b  3bee                 cmp ebp, esi
// 0073598d  7c4d                 jl 0x7359dc
// 0073598f  53                   push ebx
// 00735990  56                   push esi
// 00735991  57                   push edi
// 00735992  e8c9d6feff           call 0x723060
// 00735997  8bd8                 mov ebx, eax
// 00735999  0fb6cb               movzx ecx, bl
// 0073599c  83c408               add esp, 8
// 0073599f  3bcb                 cmp ecx, ebx
// 007359a1  740f                 je 0x7359b2
// 007359a3  68d8e2a400           push 0xa4e2d8
// 007359a8  56                   push esi
// 007359a9  57                   push edi
// 007359aa  e881d3feff           call 0x722d30
// 007359af  83c40c               add esp, 0xc
// 007359b2  8d94241c020000       lea edx, [esp + 0x21c]
// 007359b9  39542410             cmp dword ptr [esp + 0x10], edx
// 007359bd  720d                 jb 0x7359cc
// 007359bf  8d442410             lea eax, [esp + 0x10]
// 007359c3  50                   push eax
// 007359c4  e8b7cdfeff           call 0x722780
// 007359c9  83c404               add esp, 4
// 007359cc  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007359d0  8819                 mov byte ptr [ecx], bl
// 007359d2  ff442410             inc dword ptr [esp + 0x10]
// 007359d6  46                   inc esi
// 007359d7  3bf5                 cmp esi, ebp
// 007359d9  7eb5                 jle 0x735990
// 007359db  5b                   pop ebx
// 007359dc  8d54240c             lea edx, [esp + 0xc]
// 007359e0  52                   push edx
// 007359e1  e83acefeff           call 0x722820
// 007359e6  83c404               add esp, 4
// 007359e9  5f                   pop edi
// 007359ea  5e                   pop esi
// 007359eb  b801000000           mov eax, 1
// 007359f0  5d                   pop ebp
// 007359f1  81c40c020000         add esp, 0x20c
// 007359f7  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_char)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
