// from server: 100% by auto
// roc 2009-06 006c4f00  unit: lua_exception  size: 173 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4f00
//
// 006c4f00  51                   push ecx
// 006c4f01  55                   push ebp
// 006c4f02  56                   push esi
// 006c4f03  57                   push edi
// 006c4f04  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 006c4f08  8d44240c             lea eax, [esp + 0xc]
// 006c4f0c  50                   push eax
// 006c4f0d  6a01                 push 1
// 006c4f0f  57                   push edi
// 006c4f10  e8ab5dffff           call 0x6bacc0
// 006c4f15  8b742418             mov esi, dword ptr [esp + 0x18]
// 006c4f19  6a02                 push 2
// 006c4f1b  57                   push edi
// 006c4f1c  8be8                 mov ebp, eax
// 006c4f1e  e8dd5effff           call 0x6bae00
// 006c4f23  83c414               add esp, 0x14
// 006c4f26  85c0                 test eax, eax
// 006c4f28  7d04                 jge 0x6c4f2e
// 006c4f2a  8d443001             lea eax, [eax + esi + 1]
// 006c4f2e  33c9                 xor ecx, ecx
// 006c4f30  85c0                 test eax, eax
// 006c4f32  0f9cc1               setl cl
// 006c4f35  53                   push ebx
// 006c4f36  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 006c4f3a  6aff                 push -1
// 006c4f3c  6a03                 push 3
// 006c4f3e  57                   push edi
// 006c4f3f  49                   dec ecx
// 006c4f40  23c8                 and ecx, eax
// 006c4f42  8bf1                 mov esi, ecx
// 006c4f44  e8275fffff           call 0x6bae70
// 006c4f49  83c40c               add esp, 0xc
// 006c4f4c  85c0                 test eax, eax
// 006c4f4e  7d04                 jge 0x6c4f54
// 006c4f50  8d441801             lea eax, [eax + ebx + 1]
// 006c4f54  33d2                 xor edx, edx
// 006c4f56  85c0                 test eax, eax
// 006c4f58  0f9cc2               setl dl
// 006c4f5b  5b                   pop ebx
// 006c4f5c  4a                   dec edx
// 006c4f5d  23c2                 and eax, edx
// 006c4f5f  83fe01               cmp esi, 1
// 006c4f62  7d05                 jge 0x6c4f69
// 006c4f64  be01000000           mov esi, 1
// 006c4f69  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006c4f6d  3bc1                 cmp eax, ecx
// 006c4f6f  7e02                 jle 0x6c4f73
// 006c4f71  8bc1                 mov eax, ecx
// 006c4f73  3bf0                 cmp esi, eax
// 006c4f75  7f1c                 jg 0x6c4f93
// 006c4f77  2bc6                 sub eax, esi
// 006c4f79  40                   inc eax
// 006c4f7a  50                   push eax
// 006c4f7b  8d442eff             lea eax, [esi + ebp - 1]
// 006c4f7f  50                   push eax
// 006c4f80  57                   push edi
// 006c4f81  e8fa43ffff           call 0x6b9380
// 006c4f86  83c40c               add esp, 0xc
// 006c4f89  5f                   pop edi
// 006c4f8a  5e                   pop esi
// 006c4f8b  b801000000           mov eax, 1
// 006c4f90  5d                   pop ebp
// 006c4f91  59                   pop ecx
// 006c4f92  c3                   ret 
// 006c4f93  6a00                 push 0
// 006c4f95  6816d28a00           push 0x8ad216
// 006c4f9a  57                   push edi
// 006c4f9b  e8e043ffff           call 0x6b9380
// 006c4fa0  83c40c               add esp, 0xc
// 006c4fa3  5f                   pop edi
// 006c4fa4  5e                   pop esi
// 006c4fa5  b801000000           mov eax, 1
// 006c4faa  5d                   pop ebp
// 006c4fab  59                   pop ecx
// 006c4fac  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _str_sub)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
