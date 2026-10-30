// roc 2009-12 0079cb50  unit: seg_00790000  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0079cb50
//
// 0079cb50  55                   push ebp
// 0079cb51  8bec                 mov ebp, esp
// 0079cb53  83e4c0               and esp, 0xffffffc0
// 0079cb56  83ec34               sub esp, 0x34
// 0079cb59  53                   push ebx
// 0079cb5a  56                   push esi
// 0079cb5b  57                   push edi
// 0079cb5c  ff153cb89800         call dword ptr [0x98b83c]
// 0079cb62  99                   cdq 
// 0079cb63  b9ff7f0000           mov ecx, 0x7fff
// 0079cb68  f7f9                 idiv ecx
// 0079cb6a  8b7d08               mov edi, dword ptr [ebp + 8]
// 0079cb6d  57                   push edi
// 0079cb6e  89542434             mov dword ptr [esp + 0x34], edx
// 0079cb72  db442434             fild dword ptr [esp + 0x34]
// 0079cb76  dc0df8259c00         fmul qword ptr [0x9c25f8]
// 0079cb7c  dd5c243c             fstp qword ptr [esp + 0x3c]
// 0079cb80  e81bbcfeff           call 0x7887a0
// 0079cb85  83c404               add esp, 4
// 0079cb88  83e800               sub eax, 0
// 0079cb8b  0f84ad000000         je 0x79cc3e
// 0079cb91  83e801               sub eax, 1
// 0079cb94  7469                 je 0x79cbff
// 0079cb96  83e801               sub eax, 1
// 0079cb99  7415                 je 0x79cbb0
// 0079cb9b  685caf9e00           push 0x9eaf5c
// 0079cba0  57                   push edi
// 0079cba1  e84ad1feff           call 0x789cf0
// 0079cba6  83c408               add esp, 8
// 0079cba9  5f                   pop edi
// 0079cbaa  5e                   pop esi
// 0079cbab  5b                   pop ebx
// 0079cbac  8be5                 mov esp, ebp
// 0079cbae  5d                   pop ebp
// 0079cbaf  c3                   ret 
// 0079cbb0  6a01                 push 1
// 0079cbb2  57                   push edi
// 0079cbb3  e8f8dcfeff           call 0x78a8b0
// 0079cbb8  8bd8                 mov ebx, eax
// 0079cbba  6a02                 push 2
// 0079cbbc  57                   push edi
// 0079cbbd  895c2444             mov dword ptr [esp + 0x44], ebx
// 0079cbc1  e8eadcfeff           call 0x78a8b0
// 0079cbc6  8bf0                 mov esi, eax
// 0079cbc8  83c410               add esp, 0x10
// 0079cbcb  3bde                 cmp ebx, esi
// 0079cbcd  7e10                 jle 0x79cbdf
// 0079cbcf  6848af9e00           push 0x9eaf48
// 0079cbd4  6a02                 push 2
// 0079cbd6  57                   push edi
// 0079cbd7  e8a4d9feff           call 0x78a580
// 0079cbdc  83c40c               add esp, 0xc
// 0079cbdf  2bf3                 sub esi, ebx
// 0079cbe1  46                   inc esi
// 0079cbe2  89742430             mov dword ptr [esp + 0x30], esi
// 0079cbe6  db442430             fild dword ptr [esp + 0x30]
// 0079cbea  83ec08               sub esp, 8
// 0079cbed  dc4c2440             fmul qword ptr [esp + 0x40]
// 0079cbf1  dd1c24               fstp qword ptr [esp]
// 0079cbf4  e8bd840500           call 0x7f50b6
// 0079cbf9  da44243c             fiadd dword ptr [esp + 0x3c]
// 0079cbfd  eb46                 jmp 0x79cc45
// 0079cbff  6a01                 push 1
// 0079cc01  57                   push edi
// 0079cc02  e8a9dcfeff           call 0x78a8b0
// 0079cc07  83c408               add esp, 8
// 0079cc0a  83f801               cmp eax, 1
// 0079cc0d  89442434             mov dword ptr [esp + 0x34], eax
// 0079cc11  7d10                 jge 0x79cc23
// 0079cc13  6848af9e00           push 0x9eaf48
// 0079cc18  6a01                 push 1
// 0079cc1a  57                   push edi
// 0079cc1b  e860d9feff           call 0x78a580
// 0079cc20  83c40c               add esp, 0xc
// 0079cc23  db442434             fild dword ptr [esp + 0x34]
// 0079cc27  83ec08               sub esp, 8
// 0079cc2a  dc4c2440             fmul qword ptr [esp + 0x40]
// 0079cc2e  dd1c24               fstp qword ptr [esp]
// 0079cc31  e880840500           call 0x7f50b6
// 0079cc36  dc05c8449a00         fadd qword ptr [0x9a44c8]
// 0079cc3c  eb07                 jmp 0x79cc45
// 0079cc3e  dd442438             fld qword ptr [esp + 0x38]
// 0079cc42  83ec08               sub esp, 8
// 0079cc45  dd1c24               fstp qword ptr [esp]
// 0079cc48  57                   push edi
// 0079cc49  e812c1feff           call 0x788d60
// 0079cc4e  83c40c               add esp, 0xc
// 0079cc51  5f                   pop edi
// 0079cc52  5e                   pop esi
// 0079cc53  b801000000           mov eax, 1
// 0079cc58  5b                   pop ebx
// 0079cc59  8be5                 mov esp, ebp
// 0079cc5b  5d                   pop ebp
// 0079cc5c  c3                   ret 
// copied from an identical function in another client (function _math_random)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /fp:fast
// roc-lib: lua-5.1.2-dll lmathlib.c