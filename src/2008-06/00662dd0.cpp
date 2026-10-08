// from server: 100% by auto
// roc 2008-06 00662dd0  unit: RBX::FilterStairs  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00662dd0
//
// 00662dd0  51                   push ecx
// 00662dd1  53                   push ebx
// 00662dd2  56                   push esi
// 00662dd3  8bf0                 mov esi, eax
// 00662dd5  57                   push edi
// 00662dd6  8b7e30               mov edi, dword ptr [esi + 0x30]
// 00662dd9  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 00662de1  e86affffff           call 0x662d50
// 00662de6  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 00662ded  8bd8                 mov ebx, eax
// 00662def  752c                 jne 0x662e1d
// 00662df1  57                   push edi
// 00662df2  e8b9850000           call 0x66b3b0
// 00662df7  50                   push eax
// 00662df8  8d442414             lea eax, [esp + 0x14]
// 00662dfc  50                   push eax
// 00662dfd  57                   push edi
// 00662dfe  e80d7f0000           call 0x66ad10
// 00662e03  53                   push ebx
// 00662e04  57                   push edi
// 00662e05  e876860000           call 0x66b480
// 00662e0a  83c418               add esp, 0x18
// 00662e0d  e83effffff           call 0x662d50
// 00662e12  817e1005010000       cmp dword ptr [esi + 0x10], 0x105
// 00662e19  8bd8                 mov ebx, eax
// 00662e1b  74d4                 je 0x662df1
// 00662e1d  817e1004010000       cmp dword ptr [esi + 0x10], 0x104
// 00662e24  752b                 jne 0x662e51
// 00662e26  57                   push edi
// 00662e27  e884850000           call 0x66b3b0
// 00662e2c  50                   push eax
// 00662e2d  8d4c2414             lea ecx, [esp + 0x14]
// 00662e31  51                   push ecx
// 00662e32  57                   push edi
// 00662e33  e8d87e0000           call 0x66ad10
// 00662e38  53                   push ebx
// 00662e39  57                   push edi
// 00662e3a  e841860000           call 0x66b480
// 00662e3f  56                   push esi
// 00662e40  e8bb270000           call 0x665600
// 00662e45  83c41c               add esp, 0x1c
// 00662e48  8bc6                 mov eax, esi
// 00662e4a  e8b1f2ffff           call 0x662100
// 00662e4f  eb0f                 jmp 0x662e60
// 00662e51  53                   push ebx
// 00662e52  8d542410             lea edx, [esp + 0x10]
// 00662e56  52                   push edx
// 00662e57  57                   push edi
// 00662e58  e8b37e0000           call 0x66ad10
// 00662e5d  83c40c               add esp, 0xc
// 00662e60  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00662e64  50                   push eax
// 00662e65  57                   push edi
// 00662e66  e815860000           call 0x66b480
// 00662e6b  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00662e6f  680a010000           push 0x10a
// 00662e74  bf06010000           mov edi, 0x106
// 00662e79  e8a2d9ffff           call 0x660820
// 00662e7e  83c40c               add esp, 0xc
// 00662e81  5f                   pop edi
// 00662e82  5e                   pop esi
// 00662e83  5b                   pop ebx
// 00662e84  59                   pop ecx
// 00662e85  c3                   ret 
// library lua-5.1.4/lparser.c (function _ifstat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
