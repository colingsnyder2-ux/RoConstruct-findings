// roc 2007-08 005c9990  unit: seg_005c0000  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005c9990
//
// 005c9990  55                   push ebp
// 005c9991  8bec                 mov ebp, esp
// 005c9993  83e4c0               and esp, 0xffffffc0
// 005c9996  83ec34               sub esp, 0x34
// 005c9999  53                   push ebx
// 005c999a  56                   push esi
// 005c999b  57                   push edi
// 005c999c  ff15f4e87700         call dword ptr [0x77e8f4]
// 005c99a2  99                   cdq 
// 005c99a3  b9ff7f0000           mov ecx, 0x7fff
// 005c99a8  f7f9                 idiv ecx
// 005c99aa  8b7d08               mov edi, dword ptr [ebp + 8]
// 005c99ad  57                   push edi
// 005c99ae  89542434             mov dword ptr [esp + 0x34], edx
// 005c99b2  db442434             fild dword ptr [esp + 0x34]
// 005c99b6  dc0d689d7b00         fmul qword ptr [0x7b9d68]
// 005c99bc  dd5c243c             fstp qword ptr [esp + 0x3c]
// 005c99c0  e8bb3bffff           call 0x5bd580
// 005c99c5  83c404               add esp, 4
// 005c99c8  83e800               sub eax, 0
// 005c99cb  0f84af000000         je 0x5c9a80
// 005c99d1  83e801               sub eax, 1
// 005c99d4  746b                 je 0x5c9a41
// 005c99d6  83e801               sub eax, 1
// 005c99d9  7415                 je 0x5c99f0
// 005c99db  684c9d7b00           push 0x7b9d4c
// 005c99e0  57                   push edi
// 005c99e1  e8fa4effff           call 0x5be8e0
// 005c99e6  83c408               add esp, 8
// 005c99e9  5f                   pop edi
// 005c99ea  5e                   pop esi
// 005c99eb  5b                   pop ebx
// 005c99ec  8be5                 mov esp, ebp
// 005c99ee  5d                   pop ebp
// 005c99ef  c3                   ret 
// 005c99f0  6a01                 push 1
// 005c99f2  57                   push edi
// 005c99f3  e8985affff           call 0x5bf490
// 005c99f8  8bd8                 mov ebx, eax
// 005c99fa  6a02                 push 2
// 005c99fc  57                   push edi
// 005c99fd  895c2444             mov dword ptr [esp + 0x44], ebx
// 005c9a01  e88a5affff           call 0x5bf490
// 005c9a06  8bf0                 mov esi, eax
// 005c9a08  83c410               add esp, 0x10
// 005c9a0b  3bde                 cmp ebx, esi
// 005c9a0d  7e10                 jle 0x5c9a1f
// 005c9a0f  68389d7b00           push 0x7b9d38
// 005c9a14  6a02                 push 2
// 005c9a16  57                   push edi
// 005c9a17  e86457ffff           call 0x5bf180
// 005c9a1c  83c40c               add esp, 0xc
// 005c9a1f  2bf3                 sub esi, ebx
// 005c9a21  83c601               add esi, 1
// 005c9a24  89742430             mov dword ptr [esp + 0x30], esi
// 005c9a28  db442430             fild dword ptr [esp + 0x30]
// 005c9a2c  83ec08               sub esp, 8
// 005c9a2f  dc4c2440             fmul qword ptr [esp + 0x40]
// 005c9a33  dd1c24               fstp qword ptr [esp]
// 005c9a36  e8ed760600           call 0x631128
// 005c9a3b  da44243c             fiadd dword ptr [esp + 0x3c]
// 005c9a3f  eb46                 jmp 0x5c9a87
// 005c9a41  6a01                 push 1
// 005c9a43  57                   push edi
// 005c9a44  e8475affff           call 0x5bf490
// 005c9a49  83c408               add esp, 8
// 005c9a4c  83f801               cmp eax, 1
// 005c9a4f  89442434             mov dword ptr [esp + 0x34], eax
// 005c9a53  7d10                 jge 0x5c9a65
// 005c9a55  68389d7b00           push 0x7b9d38
// 005c9a5a  6a01                 push 1
// 005c9a5c  57                   push edi
// 005c9a5d  e81e57ffff           call 0x5bf180
// 005c9a62  83c40c               add esp, 0xc
// 005c9a65  db442434             fild dword ptr [esp + 0x34]
// 005c9a69  83ec08               sub esp, 8
// 005c9a6c  dc4c2440             fmul qword ptr [esp + 0x40]
// 005c9a70  dd1c24               fstp qword ptr [esp]
// 005c9a73  e8b0760600           call 0x631128
// 005c9a78  dc0598317900         fadd qword ptr [0x793198]
// 005c9a7e  eb07                 jmp 0x5c9a87
// 005c9a80  dd442438             fld qword ptr [esp + 0x38]
// 005c9a84  83ec08               sub esp, 8
// 005c9a87  dd1c24               fstp qword ptr [esp]
// 005c9a8a  57                   push edi
// 005c9a8b  e8e040ffff           call 0x5bdb70
// 005c9a90  83c40c               add esp, 0xc
// 005c9a93  5f                   pop edi
// 005c9a94  5e                   pop esi
// 005c9a95  b801000000           mov eax, 1
// 005c9a9a  5b                   pop ebx
// 005c9a9b  8be5                 mov esp, ebp
// 005c9a9d  5d                   pop ebp
// 005c9a9e  c3                   ret 
// copied from an identical function in another client (function _math_random)

// roc-cl: 50727
// roc-lang: c
// roc-flags: /O2 /GS- /MD /fp:fast
// roc-lib: lua-5.1.2-dll lmathlib.c