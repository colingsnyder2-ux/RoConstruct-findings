// from server: 100% by auto
// roc 2007-08 005c9e50  unit: seg_005c0000  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9e50
//
// 005c9e50  83ec08               sub esp, 8
// 005c9e53  53                   push ebx
// 005c9e54  55                   push ebp
// 005c9e55  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 005c9e59  56                   push esi
// 005c9e5a  8d44240c             lea eax, [esp + 0xc]
// 005c9e5e  50                   push eax
// 005c9e5f  6a01                 push 1
// 005c9e61  55                   push ebp
// 005c9e62  e8e954ffff           call 0x5bf350
// 005c9e67  8b742418             mov esi, dword ptr [esp + 0x18]
// 005c9e6b  6a01                 push 1
// 005c9e6d  6a02                 push 2
// 005c9e6f  55                   push ebp
// 005c9e70  89442428             mov dword ptr [esp + 0x28], eax
// 005c9e74  e88756ffff           call 0x5bf500
// 005c9e79  83c418               add esp, 0x18
// 005c9e7c  85c0                 test eax, eax
// 005c9e7e  8bd8                 mov ebx, eax
// 005c9e80  7d04                 jge 0x5c9e86
// 005c9e82  8d5c3001             lea ebx, [eax + esi + 1]
// 005c9e86  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9e8a  53                   push ebx
// 005c9e8b  6a03                 push 3
// 005c9e8d  55                   push ebp
// 005c9e8e  e86d56ffff           call 0x5bf500
// 005c9e93  83c40c               add esp, 0xc
// 005c9e96  85c0                 test eax, eax
// 005c9e98  7d04                 jge 0x5c9e9e
// 005c9e9a  8d443001             lea eax, [eax + esi + 1]
// 005c9e9e  85db                 test ebx, ebx
// 005c9ea0  7f05                 jg 0x5c9ea7
// 005c9ea2  bb01000000           mov ebx, 1
// 005c9ea7  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c9eab  3bc1                 cmp eax, ecx
// 005c9ead  7602                 jbe 0x5c9eb1
// 005c9eaf  8bc1                 mov eax, ecx
// 005c9eb1  3bd8                 cmp ebx, eax
// 005c9eb3  7e09                 jle 0x5c9ebe
// 005c9eb5  5e                   pop esi
// 005c9eb6  5d                   pop ebp
// 005c9eb7  33c0                 xor eax, eax
// 005c9eb9  5b                   pop ebx
// 005c9eba  83c408               add esp, 8
// 005c9ebd  c3                   ret 
// 005c9ebe  8bf0                 mov esi, eax
// 005c9ec0  2bf3                 sub esi, ebx
// 005c9ec2  83c601               add esi, 1
// 005c9ec5  8d0c1e               lea ecx, [esi + ebx]
// 005c9ec8  3bc8                 cmp ecx, eax
// 005c9eca  7f0e                 jg 0x5c9eda
// 005c9ecc  68789e7b00           push 0x7b9e78
// 005c9ed1  55                   push ebp
// 005c9ed2  e8094affff           call 0x5be8e0
// 005c9ed7  83c408               add esp, 8
// 005c9eda  57                   push edi
// 005c9edb  68789e7b00           push 0x7b9e78
// 005c9ee0  56                   push esi
// 005c9ee1  55                   push ebp
// 005c9ee2  e8894affff           call 0x5be970
// 005c9ee7  83c40c               add esp, 0xc
// 005c9eea  33ff                 xor edi, edi
// 005c9eec  85f6                 test esi, esi
// 005c9eee  7e1d                 jle 0x5c9f0d
// 005c9ef0  8b542414             mov edx, dword ptr [esp + 0x14]
// 005c9ef4  8d5c13ff             lea ebx, [ebx + edx - 1]
// 005c9ef8  0fb6043b             movzx eax, byte ptr [ebx + edi]
// 005c9efc  50                   push eax
// 005c9efd  55                   push ebp
// 005c9efe  e88d3cffff           call 0x5bdb90
// 005c9f03  83c701               add edi, 1
// 005c9f06  83c408               add esp, 8
// 005c9f09  3bfe                 cmp edi, esi
// 005c9f0b  7ceb                 jl 0x5c9ef8
// 005c9f0d  5f                   pop edi
// 005c9f0e  8bc6                 mov eax, esi
// 005c9f10  5e                   pop esi
// 005c9f11  5d                   pop ebp
// 005c9f12  5b                   pop ebx
// 005c9f13  83c408               add esp, 8
// 005c9f16  c3                   ret 
// library lua-5.1.3/lstrlib.c (function _str_byte)

// roc-lang: c
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.3 lstrlib.c
