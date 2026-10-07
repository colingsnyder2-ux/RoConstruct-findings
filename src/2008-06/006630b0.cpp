// roc 2008-06 006630b0  unit: RBX::FilterStairs  size: 218 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006630b0
//
// 006630b0  83ec18               sub esp, 0x18
// 006630b3  53                   push ebx
// 006630b4  55                   push ebp
// 006630b5  56                   push esi
// 006630b6  8bf1                 mov esi, ecx
// 006630b8  8bd8                 mov ebx, eax
// 006630ba  57                   push edi
// 006630bb  8bc6                 mov eax, esi
// 006630bd  e88edbffff           call 0x660c50
// 006630c2  837e102e             cmp dword ptr [esi + 0x10], 0x2e
// 006630c6  757f                 jne 0x663147
// 006630c8  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 006630cb  53                   push ebx
// 006630cc  55                   push ebp
// 006630cd  e8de870000           call 0x66b8b0
// 006630d2  56                   push esi
// 006630d3  e828250000           call 0x665600
// 006630d8  83c40c               add esp, 0xc
// 006630db  817e101d010000       cmp dword ptr [esi + 0x10], 0x11d
// 006630e2  7424                 je 0x663108
// 006630e4  681d010000           push 0x11d
// 006630e9  56                   push esi
// 006630ea  e821100000           call 0x664110
// 006630ef  50                   push eax
// 006630f0  8b4634               mov eax, dword ptr [esi + 0x34]
// 006630f3  68c0c48400           push 0x84c4c0
// 006630f8  50                   push eax
// 006630f9  e8c2f9fbff           call 0x622ac0
// 006630fe  50                   push eax
// 006630ff  56                   push esi
// 00663100  e80b110000           call 0x664210
// 00663105  83c41c               add esp, 0x1c
// 00663108  8b7e18               mov edi, dword ptr [esi + 0x18]
// 0066310b  56                   push esi
// 0066310c  e8ef240000           call 0x665600
// 00663111  8b4e30               mov ecx, dword ptr [esi + 0x30]
// 00663114  57                   push edi
// 00663115  51                   push ecx
// 00663116  e8c57d0000           call 0x66aee0
// 0066311b  8d54241c             lea edx, [esp + 0x1c]
// 0066311f  52                   push edx
// 00663120  83c9ff               or ecx, 0xffffffff
// 00663123  53                   push ebx
// 00663124  55                   push ebp
// 00663125  894c2438             mov dword ptr [esp + 0x38], ecx
// 00663129  894c243c             mov dword ptr [esp + 0x3c], ecx
// 0066312d  c744242804000000     mov dword ptr [esp + 0x28], 4
// 00663135  89442430             mov dword ptr [esp + 0x30], eax
// 00663139  e8028d0000           call 0x66be40
// 0066313e  83c418               add esp, 0x18
// 00663141  837e102e             cmp dword ptr [esi + 0x10], 0x2e
// 00663145  7481                 je 0x6630c8
// 00663147  837e103a             cmp dword ptr [esi + 0x10], 0x3a
// 0066314b  7533                 jne 0x663180
// 0066314d  8b6e30               mov ebp, dword ptr [esi + 0x30]
// 00663150  53                   push ebx
// 00663151  55                   push ebp
// 00663152  e859870000           call 0x66b8b0
// 00663157  56                   push esi
// 00663158  e8a3240000           call 0x665600
// 0066315d  8d7c241c             lea edi, [esp + 0x1c]
// 00663161  e84ad7ffff           call 0x6608b0
// 00663166  8bc7                 mov eax, edi
// 00663168  50                   push eax
// 00663169  53                   push ebx
// 0066316a  55                   push ebp
// 0066316b  e8d08c0000           call 0x66be40
// 00663170  83c418               add esp, 0x18
// 00663173  5f                   pop edi
// 00663174  5e                   pop esi
// 00663175  5d                   pop ebp
// 00663176  b801000000           mov eax, 1
// 0066317b  5b                   pop ebx
// 0066317c  83c418               add esp, 0x18
// 0066317f  c3                   ret 
// 00663180  5f                   pop edi
// 00663181  5e                   pop esi
// 00663182  5d                   pop ebp
// 00663183  33c0                 xor eax, eax
// 00663185  5b                   pop ebx
// 00663186  83c418               add esp, 0x18
// 00663189  c3                   ret 
// library lua-5.1.4/lparser.c (function _funcname)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
