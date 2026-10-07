// roc 2009-06 006c4020  unit: lua_exception  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4020
//
// 006c4020  55                   push ebp
// 006c4021  56                   push esi
// 006c4022  57                   push edi
// 006c4023  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006c4027  6a05                 push 5
// 006c4029  6a01                 push 1
// 006c402b  57                   push edi
// 006c402c  e80f6cffff           call 0x6bac40
// 006c4031  6a01                 push 1
// 006c4033  57                   push edi
// 006c4034  e8b751ffff           call 0x6b91f0
// 006c4039  8bf0                 mov esi, eax
// 006c403b  57                   push edi
// 006c403c  46                   inc esi
// 006c403d  e83e4dffff           call 0x6b8d80
// 006c4042  83c418               add esp, 0x18
// 006c4045  83e802               sub eax, 2
// 006c4048  7467                 je 0x6c40b1
// 006c404a  83e801               sub eax, 1
// 006c404d  7412                 je 0x6c4061
// 006c404f  68ecb78e00           push 0x8eb7ec
// 006c4054  57                   push edi
// 006c4055  e8e661ffff           call 0x6ba240
// 006c405a  83c408               add esp, 8
// 006c405d  5f                   pop edi
// 006c405e  5e                   pop esi
// 006c405f  5d                   pop ebp
// 006c4060  c3                   ret 
// 006c4061  6a02                 push 2
// 006c4063  57                   push edi
// 006c4064  e8976dffff           call 0x6bae00
// 006c4069  8be8                 mov ebp, eax
// 006c406b  83c408               add esp, 8
// 006c406e  3bf5                 cmp esi, ebp
// 006c4070  7d04                 jge 0x6c4076
// 006c4072  8bf5                 mov esi, ebp
// 006c4074  3bf5                 cmp esi, ebp
// 006c4076  7e3b                 jle 0x6c40b3
// 006c4078  53                   push ebx
// 006c4079  8da42400000000       lea esp, [esp]
// 006c4080  8d5eff               lea ebx, [esi - 1]
// 006c4083  53                   push ebx
// 006c4084  6a01                 push 1
// 006c4086  57                   push edi
// 006c4087  e8e455ffff           call 0x6b9670
// 006c408c  56                   push esi
// 006c408d  6a01                 push 1
// 006c408f  57                   push edi
// 006c4090  e85b58ffff           call 0x6b98f0
// 006c4095  8bf3                 mov esi, ebx
// 006c4097  83c418               add esp, 0x18
// 006c409a  3bf5                 cmp esi, ebp
// 006c409c  7fe2                 jg 0x6c4080
// 006c409e  5b                   pop ebx
// 006c409f  55                   push ebp
// 006c40a0  6a01                 push 1
// 006c40a2  57                   push edi
// 006c40a3  e84858ffff           call 0x6b98f0
// 006c40a8  83c40c               add esp, 0xc
// 006c40ab  5f                   pop edi
// 006c40ac  5e                   pop esi
// 006c40ad  33c0                 xor eax, eax
// 006c40af  5d                   pop ebp
// 006c40b0  c3                   ret 
// 006c40b1  8bee                 mov ebp, esi
// 006c40b3  55                   push ebp
// 006c40b4  6a01                 push 1
// 006c40b6  57                   push edi
// 006c40b7  e83458ffff           call 0x6b98f0
// 006c40bc  83c40c               add esp, 0xc
// 006c40bf  5f                   pop edi
// 006c40c0  5e                   pop esi
// 006c40c1  33c0                 xor eax, eax
// 006c40c3  5d                   pop ebp
// 006c40c4  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tinsert)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
