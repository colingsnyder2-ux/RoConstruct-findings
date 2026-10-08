// from server: 100% by auto
// roc 2009-06 006c40d0  unit: lua_exception  size: 131 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c40d0
//
// 006c40d0  55                   push ebp
// 006c40d1  56                   push esi
// 006c40d2  57                   push edi
// 006c40d3  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 006c40d7  6a05                 push 5
// 006c40d9  6a01                 push 1
// 006c40db  57                   push edi
// 006c40dc  e85f6bffff           call 0x6bac40
// 006c40e1  6a01                 push 1
// 006c40e3  57                   push edi
// 006c40e4  e80751ffff           call 0x6b91f0
// 006c40e9  8be8                 mov ebp, eax
// 006c40eb  55                   push ebp
// 006c40ec  6a02                 push 2
// 006c40ee  57                   push edi
// 006c40ef  e87c6dffff           call 0x6bae70
// 006c40f4  8bf0                 mov esi, eax
// 006c40f6  83c420               add esp, 0x20
// 006c40f9  83fe01               cmp esi, 1
// 006c40fc  7c4f                 jl 0x6c414d
// 006c40fe  3bf5                 cmp esi, ebp
// 006c4100  7f4b                 jg 0x6c414d
// 006c4102  56                   push esi
// 006c4103  6a01                 push 1
// 006c4105  57                   push edi
// 006c4106  e86555ffff           call 0x6b9670
// 006c410b  83c40c               add esp, 0xc
// 006c410e  3bf5                 cmp esi, ebp
// 006c4110  7d20                 jge 0x6c4132
// 006c4112  53                   push ebx
// 006c4113  8d5e01               lea ebx, [esi + 1]
// 006c4116  53                   push ebx
// 006c4117  6a01                 push 1
// 006c4119  57                   push edi
// 006c411a  e85155ffff           call 0x6b9670
// 006c411f  56                   push esi
// 006c4120  6a01                 push 1
// 006c4122  57                   push edi
// 006c4123  e8c857ffff           call 0x6b98f0
// 006c4128  8bf3                 mov esi, ebx
// 006c412a  83c418               add esp, 0x18
// 006c412d  3bf5                 cmp esi, ebp
// 006c412f  7ce2                 jl 0x6c4113
// 006c4131  5b                   pop ebx
// 006c4132  57                   push edi
// 006c4133  e8e851ffff           call 0x6b9320
// 006c4138  55                   push ebp
// 006c4139  6a01                 push 1
// 006c413b  57                   push edi
// 006c413c  e8af57ffff           call 0x6b98f0
// 006c4141  83c410               add esp, 0x10
// 006c4144  5f                   pop edi
// 006c4145  5e                   pop esi
// 006c4146  b801000000           mov eax, 1
// 006c414b  5d                   pop ebp
// 006c414c  c3                   ret 
// 006c414d  5f                   pop edi
// 006c414e  5e                   pop esi
// 006c414f  33c0                 xor eax, eax
// 006c4151  5d                   pop ebp
// 006c4152  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tremove)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
