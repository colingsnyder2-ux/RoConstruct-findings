// roc 2009-06 006c4160  unit: lua_exception  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4160
//
// 006c4160  81ec10020000         sub esp, 0x210
// 006c4166  53                   push ebx
// 006c4167  55                   push ebp
// 006c4168  56                   push esi
// 006c4169  8bb42420020000       mov esi, dword ptr [esp + 0x220]
// 006c4170  57                   push edi
// 006c4171  8d442410             lea eax, [esp + 0x10]
// 006c4175  50                   push eax
// 006c4176  6816d28a00           push 0x8ad216
// 006c417b  6a02                 push 2
// 006c417d  56                   push esi
// 006c417e  e89d6bffff           call 0x6bad20
// 006c4183  6a05                 push 5
// 006c4185  6a01                 push 1
// 006c4187  56                   push esi
// 006c4188  8be8                 mov ebp, eax
// 006c418a  e8b16affff           call 0x6bac40
// 006c418f  6a01                 push 1
// 006c4191  6a03                 push 3
// 006c4193  56                   push esi
// 006c4194  e8d76cffff           call 0x6bae70
// 006c4199  6a04                 push 4
// 006c419b  56                   push esi
// 006c419c  8bf8                 mov edi, eax
// 006c419e  e8cd4dffff           call 0x6b8f70
// 006c41a3  83c430               add esp, 0x30
// 006c41a6  85c0                 test eax, eax
// 006c41a8  7f0a                 jg 0x6c41b4
// 006c41aa  6a01                 push 1
// 006c41ac  56                   push esi
// 006c41ad  e83e50ffff           call 0x6b91f0
// 006c41b2  eb08                 jmp 0x6c41bc
// 006c41b4  6a04                 push 4
// 006c41b6  56                   push esi
// 006c41b7  e8446cffff           call 0x6bae00
// 006c41bc  83c408               add esp, 8
// 006c41bf  8d4c2414             lea ecx, [esp + 0x14]
// 006c41c3  51                   push ecx
// 006c41c4  56                   push esi
// 006c41c5  8bd8                 mov ebx, eax
// 006c41c7  e8b464ffff           call 0x6ba680
// 006c41cc  83c408               add esp, 8
// 006c41cf  3bfb                 cmp edi, ebx
// 006c41d1  7d5c                 jge 0x6c422f
// 006c41d3  57                   push edi
// 006c41d4  6a01                 push 1
// 006c41d6  56                   push esi
// 006c41d7  e89454ffff           call 0x6b9670
// 006c41dc  6aff                 push -1
// 006c41de  56                   push esi
// 006c41df  e83c4effff           call 0x6b9020
// 006c41e4  83c414               add esp, 0x14
// 006c41e7  85c0                 test eax, eax
// 006c41e9  7522                 jne 0x6c420d
// 006c41eb  57                   push edi
// 006c41ec  6aff                 push -1
// 006c41ee  56                   push esi
// 006c41ef  e87c4dffff           call 0x6b8f70
// 006c41f4  50                   push eax
// 006c41f5  56                   push esi
// 006c41f6  e8954dffff           call 0x6b8f90
// 006c41fb  83c410               add esp, 0x10
// 006c41fe  50                   push eax
// 006c41ff  6814b88e00           push 0x8eb814
// 006c4204  56                   push esi
// 006c4205  e83660ffff           call 0x6ba240
// 006c420a  83c410               add esp, 0x10
// 006c420d  8d542414             lea edx, [esp + 0x14]
// 006c4211  52                   push edx
// 006c4212  e8e963ffff           call 0x6ba600
// 006c4217  8b442414             mov eax, dword ptr [esp + 0x14]
// 006c421b  50                   push eax
// 006c421c  8d4c241c             lea ecx, [esp + 0x1c]
// 006c4220  55                   push ebp
// 006c4221  51                   push ecx
// 006c4222  e83963ffff           call 0x6ba560
// 006c4227  47                   inc edi
// 006c4228  83c410               add esp, 0x10
// 006c422b  3bfb                 cmp edi, ebx
// 006c422d  7ca4                 jl 0x6c41d3
// 006c422f  7547                 jne 0x6c4278
// 006c4231  57                   push edi
// 006c4232  6a01                 push 1
// 006c4234  56                   push esi
// 006c4235  e83654ffff           call 0x6b9670
// 006c423a  6aff                 push -1
// 006c423c  56                   push esi
// 006c423d  e8de4dffff           call 0x6b9020
// 006c4242  83c414               add esp, 0x14
// 006c4245  85c0                 test eax, eax
// 006c4247  7522                 jne 0x6c426b
// 006c4249  57                   push edi
// 006c424a  6aff                 push -1
// 006c424c  56                   push esi
// 006c424d  e81e4dffff           call 0x6b8f70
// 006c4252  50                   push eax
// 006c4253  56                   push esi
// 006c4254  e8374dffff           call 0x6b8f90
// 006c4259  83c410               add esp, 0x10
// 006c425c  50                   push eax
// 006c425d  6814b88e00           push 0x8eb814
// 006c4262  56                   push esi
// 006c4263  e8d85fffff           call 0x6ba240
// 006c4268  83c410               add esp, 0x10
// 006c426b  8d542414             lea edx, [esp + 0x14]
// 006c426f  52                   push edx
// 006c4270  e88b63ffff           call 0x6ba600
// 006c4275  83c404               add esp, 4
// 006c4278  8d442414             lea eax, [esp + 0x14]
// 006c427c  50                   push eax
// 006c427d  e83e63ffff           call 0x6ba5c0
// 006c4282  83c404               add esp, 4
// 006c4285  5f                   pop edi
// 006c4286  5e                   pop esi
// 006c4287  5d                   pop ebp
// 006c4288  b801000000           mov eax, 1
// 006c428d  5b                   pop ebx
// 006c428e  81c410020000         add esp, 0x210
// 006c4294  c3                   ret 
// library lua-5.1.4/ltablib.c (function _tconcat)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 ltablib.c
