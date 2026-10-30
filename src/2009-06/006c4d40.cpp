// roc 2009-06 006c4d40  unit: lua_exception  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006c4d40
//
// 006c4d40  55                   push ebp
// 006c4d41  8bec                 mov ebp, esp
// 006c4d43  83e4c0               and esp, 0xffffffc0
// 006c4d46  83ec34               sub esp, 0x34
// 006c4d49  53                   push ebx
// 006c4d4a  56                   push esi
// 006c4d4b  57                   push edi
// 006c4d4c  ff15dce88900         call dword ptr [0x89e8dc]
// 006c4d52  99                   cdq 
// 006c4d53  b9ff7f0000           mov ecx, 0x7fff
// 006c4d58  f7f9                 idiv ecx
// 006c4d5a  8b7d08               mov edi, dword ptr [ebp + 8]
// 006c4d5d  57                   push edi
// 006c4d5e  89542434             mov dword ptr [esp + 0x34], edx
// 006c4d62  db442434             fild dword ptr [esp + 0x34]
// 006c4d66  dc0d30b88c00         fmul qword ptr [0x8cb830]
// 006c4d6c  dd5c243c             fstp qword ptr [esp + 0x3c]
// 006c4d70  e80b40ffff           call 0x6b8d80
// 006c4d75  83c404               add esp, 4
// 006c4d78  83e800               sub eax, 0
// 006c4d7b  0f84ad000000         je 0x6c4e2e
// 006c4d81  83e801               sub eax, 1
// 006c4d84  7469                 je 0x6c4def
// 006c4d86  83e801               sub eax, 1
// 006c4d89  7415                 je 0x6c4da0
// 006c4d8b  682cba8e00           push 0x8eba2c
// 006c4d90  57                   push edi
// 006c4d91  e8aa54ffff           call 0x6ba240
// 006c4d96  83c408               add esp, 8
// 006c4d99  5f                   pop edi
// 006c4d9a  5e                   pop esi
// 006c4d9b  5b                   pop ebx
// 006c4d9c  8be5                 mov esp, ebp
// 006c4d9e  5d                   pop ebp
// 006c4d9f  c3                   ret 
// 006c4da0  6a01                 push 1
// 006c4da2  57                   push edi
// 006c4da3  e85860ffff           call 0x6bae00
// 006c4da8  8bd8                 mov ebx, eax
// 006c4daa  6a02                 push 2
// 006c4dac  57                   push edi
// 006c4dad  895c2444             mov dword ptr [esp + 0x44], ebx
// 006c4db1  e84a60ffff           call 0x6bae00
// 006c4db6  8bf0                 mov esi, eax
// 006c4db8  83c410               add esp, 0x10
// 006c4dbb  3bde                 cmp ebx, esi
// 006c4dbd  7e10                 jle 0x6c4dcf
// 006c4dbf  6818ba8e00           push 0x8eba18
// 006c4dc4  6a02                 push 2
// 006c4dc6  57                   push edi
// 006c4dc7  e8045dffff           call 0x6baad0
// 006c4dcc  83c40c               add esp, 0xc
// 006c4dcf  2bf3                 sub esi, ebx
// 006c4dd1  46                   inc esi
// 006c4dd2  89742430             mov dword ptr [esp + 0x30], esi
// 006c4dd6  db442430             fild dword ptr [esp + 0x30]
// 006c4dda  83ec08               sub esp, 8
// 006c4ddd  dc4c2440             fmul qword ptr [esp + 0x40]
// 006c4de1  dd1c24               fstp qword ptr [esp]
// 006c4de4  e897540500           call 0x71a280
// 006c4de9  da44243c             fiadd dword ptr [esp + 0x3c]
// 006c4ded  eb46                 jmp 0x6c4e35
// 006c4def  6a01                 push 1
// 006c4df1  57                   push edi
// 006c4df2  e80960ffff           call 0x6bae00
// 006c4df7  83c408               add esp, 8
// 006c4dfa  83f801               cmp eax, 1
// 006c4dfd  89442434             mov dword ptr [esp + 0x34], eax
// 006c4e01  7d10                 jge 0x6c4e13
// 006c4e03  6818ba8e00           push 0x8eba18
// 006c4e08  6a01                 push 1
// 006c4e0a  57                   push edi
// 006c4e0b  e8c05cffff           call 0x6baad0
// 006c4e10  83c40c               add esp, 0xc
// 006c4e13  db442434             fild dword ptr [esp + 0x34]
// 006c4e17  83ec08               sub esp, 8
// 006c4e1a  dc4c2440             fmul qword ptr [esp + 0x40]
// 006c4e1e  dd1c24               fstp qword ptr [esp]
// 006c4e21  e85a540500           call 0x71a280
// 006c4e26  dc05c0178b00         fadd qword ptr [0x8b17c0]
// 006c4e2c  eb07                 jmp 0x6c4e35
// 006c4e2e  dd442438             fld qword ptr [esp + 0x38]
// 006c4e32  83ec08               sub esp, 8
// 006c4e35  dd1c24               fstp qword ptr [esp]
// 006c4e38  57                   push edi
// 006c4e39  e80245ffff           call 0x6b9340
// 006c4e3e  83c40c               add esp, 0xc
// 006c4e41  5f                   pop edi
// 006c4e42  5e                   pop esi
// 006c4e43  b801000000           mov eax, 1
// 006c4e48  5b                   pop ebx
// 006c4e49  8be5                 mov esp, ebp
// 006c4e4b  5d                   pop ebp
// 006c4e4c  c3                   ret 
// copied from an identical function in another client (function _math_random)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /fp:fast
// roc-lib: lua-5.1.2-dll lmathlib.c