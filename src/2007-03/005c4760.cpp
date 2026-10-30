// roc 2007-03 005c4760  unit: seg_005c0000  size: 271 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005c4760
//
// 005c4760  55                   push ebp
// 005c4761  8bec                 mov ebp, esp
// 005c4763  83e4c0               and esp, 0xffffffc0
// 005c4766  83ec34               sub esp, 0x34
// 005c4769  53                   push ebx
// 005c476a  56                   push esi
// 005c476b  57                   push edi
// 005c476c  ff1518e97700         call dword ptr [0x77e918]
// 005c4772  99                   cdq 
// 005c4773  b9ff7f0000           mov ecx, 0x7fff
// 005c4778  f7f9                 idiv ecx
// 005c477a  8b7d08               mov edi, dword ptr [ebp + 8]
// 005c477d  57                   push edi
// 005c477e  89542434             mov dword ptr [esp + 0x34], edx
// 005c4782  db442434             fild dword ptr [esp + 0x34]
// 005c4786  dc0d109e7b00         fmul qword ptr [0x7b9e10]
// 005c478c  dd5c243c             fstp qword ptr [esp + 0x3c]
// 005c4790  e8bb42ffff           call 0x5b8a50
// 005c4795  83c404               add esp, 4
// 005c4798  83e800               sub eax, 0
// 005c479b  0f84af000000         je 0x5c4850
// 005c47a1  83e801               sub eax, 1
// 005c47a4  746b                 je 0x5c4811
// 005c47a6  83e801               sub eax, 1
// 005c47a9  7415                 je 0x5c47c0
// 005c47ab  68f49d7b00           push 0x7b9df4
// 005c47b0  57                   push edi
// 005c47b1  e89a53ffff           call 0x5b9b50
// 005c47b6  83c408               add esp, 8
// 005c47b9  5f                   pop edi
// 005c47ba  5e                   pop esi
// 005c47bb  5b                   pop ebx
// 005c47bc  8be5                 mov esp, ebp
// 005c47be  5d                   pop ebp
// 005c47bf  c3                   ret 
// 005c47c0  6a01                 push 1
// 005c47c2  57                   push edi
// 005c47c3  e8385fffff           call 0x5ba700
// 005c47c8  8bd8                 mov ebx, eax
// 005c47ca  6a02                 push 2
// 005c47cc  57                   push edi
// 005c47cd  895c2444             mov dword ptr [esp + 0x44], ebx
// 005c47d1  e82a5fffff           call 0x5ba700
// 005c47d6  8bf0                 mov esi, eax
// 005c47d8  83c410               add esp, 0x10
// 005c47db  3bde                 cmp ebx, esi
// 005c47dd  7e10                 jle 0x5c47ef
// 005c47df  68e09d7b00           push 0x7b9de0
// 005c47e4  6a02                 push 2
// 005c47e6  57                   push edi
// 005c47e7  e8045cffff           call 0x5ba3f0
// 005c47ec  83c40c               add esp, 0xc
// 005c47ef  2bf3                 sub esi, ebx
// 005c47f1  83c601               add esi, 1
// 005c47f4  89742430             mov dword ptr [esp + 0x30], esi
// 005c47f8  db442430             fild dword ptr [esp + 0x30]
// 005c47fc  83ec08               sub esp, 8
// 005c47ff  dc4c2440             fmul qword ptr [esp + 0x40]
// 005c4803  dd1c24               fstp qword ptr [esp]
// 005c4806  e8bdad0500           call 0x61f5c8
// 005c480b  da44243c             fiadd dword ptr [esp + 0x3c]
// 005c480f  eb46                 jmp 0x5c4857
// 005c4811  6a01                 push 1
// 005c4813  57                   push edi
// 005c4814  e8e75effff           call 0x5ba700
// 005c4819  83c408               add esp, 8
// 005c481c  83f801               cmp eax, 1
// 005c481f  89442434             mov dword ptr [esp + 0x34], eax
// 005c4823  7d10                 jge 0x5c4835
// 005c4825  68e09d7b00           push 0x7b9de0
// 005c482a  6a01                 push 1
// 005c482c  57                   push edi
// 005c482d  e8be5bffff           call 0x5ba3f0
// 005c4832  83c40c               add esp, 0xc
// 005c4835  db442434             fild dword ptr [esp + 0x34]
// 005c4839  83ec08               sub esp, 8
// 005c483c  dc4c2440             fmul qword ptr [esp + 0x40]
// 005c4840  dd1c24               fstp qword ptr [esp]
// 005c4843  e880ad0500           call 0x61f5c8
// 005c4848  dc05a81f7900         fadd qword ptr [0x791fa8]
// 005c484e  eb07                 jmp 0x5c4857
// 005c4850  dd442438             fld qword ptr [esp + 0x38]
// 005c4854  83ec08               sub esp, 8
// 005c4857  dd1c24               fstp qword ptr [esp]
// 005c485a  57                   push edi
// 005c485b  e8e047ffff           call 0x5b9040
// 005c4860  83c40c               add esp, 0xc
// 005c4863  5f                   pop edi
// 005c4864  5e                   pop esi
// 005c4865  b801000000           mov eax, 1
// 005c486a  5b                   pop ebx
// 005c486b  8be5                 mov esp, ebp
// 005c486d  5d                   pop ebp
// 005c486e  c3                   ret 
// copied from an identical function in another client (function _math_random)

// roc-cl: 50727
// roc-lang: c
// roc-flags: /O2 /GS- /MD /fp:fast
// roc-lib: lua-5.1.2-dll lmathlib.c