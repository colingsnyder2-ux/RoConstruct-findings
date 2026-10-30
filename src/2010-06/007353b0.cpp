// roc 2010-06 007353b0  unit: seg_00730000  size: 269 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007353b0
//
// 007353b0  55                   push ebp
// 007353b1  8bec                 mov ebp, esp
// 007353b3  83e4c0               and esp, 0xffffffc0
// 007353b6  83ec34               sub esp, 0x34
// 007353b9  53                   push ebx
// 007353ba  56                   push esi
// 007353bb  57                   push edi
// 007353bc  ff1568a79e00         call dword ptr [0x9ea768]
// 007353c2  99                   cdq 
// 007353c3  b9ff7f0000           mov ecx, 0x7fff
// 007353c8  f7f9                 idiv ecx
// 007353ca  8b7d08               mov edi, dword ptr [ebp + 8]
// 007353cd  57                   push edi
// 007353ce  89542434             mov dword ptr [esp + 0x34], edx
// 007353d2  db442434             fild dword ptr [esp + 0x34]
// 007353d6  dc0dd80ba200         fmul qword ptr [0xa20bd8]
// 007353dc  dd5c243c             fstp qword ptr [esp + 0x3c]
// 007353e0  e86bbbfeff           call 0x720f50
// 007353e5  83c404               add esp, 4
// 007353e8  83e800               sub eax, 0
// 007353eb  0f84ad000000         je 0x73549e
// 007353f1  83e801               sub eax, 1
// 007353f4  7469                 je 0x73545f
// 007353f6  83e801               sub eax, 1
// 007353f9  7415                 je 0x735410
// 007353fb  68ace1a400           push 0xa4e1ac
// 00735400  57                   push edi
// 00735401  e89ad0feff           call 0x7224a0
// 00735406  83c408               add esp, 8
// 00735409  5f                   pop edi
// 0073540a  5e                   pop esi
// 0073540b  5b                   pop ebx
// 0073540c  8be5                 mov esp, ebp
// 0073540e  5d                   pop ebp
// 0073540f  c3                   ret 
// 00735410  6a01                 push 1
// 00735412  57                   push edi
// 00735413  e848dcfeff           call 0x723060
// 00735418  8bd8                 mov ebx, eax
// 0073541a  6a02                 push 2
// 0073541c  57                   push edi
// 0073541d  895c2444             mov dword ptr [esp + 0x44], ebx
// 00735421  e83adcfeff           call 0x723060
// 00735426  8bf0                 mov esi, eax
// 00735428  83c410               add esp, 0x10
// 0073542b  3bde                 cmp ebx, esi
// 0073542d  7e10                 jle 0x73543f
// 0073542f  6898e1a400           push 0xa4e198
// 00735434  6a02                 push 2
// 00735436  57                   push edi
// 00735437  e8f4d8feff           call 0x722d30
// 0073543c  83c40c               add esp, 0xc
// 0073543f  2bf3                 sub esi, ebx
// 00735441  46                   inc esi
// 00735442  89742430             mov dword ptr [esp + 0x30], esi
// 00735446  db442430             fild dword ptr [esp + 0x30]
// 0073544a  83ec08               sub esp, 8
// 0073544d  dc4c2440             fmul qword ptr [esp + 0x40]
// 00735451  dd1c24               fstp qword ptr [esp]
// 00735454  e8973d0700           call 0x7a91f0
// 00735459  da44243c             fiadd dword ptr [esp + 0x3c]
// 0073545d  eb46                 jmp 0x7354a5
// 0073545f  6a01                 push 1
// 00735461  57                   push edi
// 00735462  e8f9dbfeff           call 0x723060
// 00735467  83c408               add esp, 8
// 0073546a  83f801               cmp eax, 1
// 0073546d  89442434             mov dword ptr [esp + 0x34], eax
// 00735471  7d10                 jge 0x735483
// 00735473  6898e1a400           push 0xa4e198
// 00735478  6a01                 push 1
// 0073547a  57                   push edi
// 0073547b  e8b0d8feff           call 0x722d30
// 00735480  83c40c               add esp, 0xc
// 00735483  db442434             fild dword ptr [esp + 0x34]
// 00735487  83ec08               sub esp, 8
// 0073548a  dc4c2440             fmul qword ptr [esp + 0x40]
// 0073548e  dd1c24               fstp qword ptr [esp]
// 00735491  e85a3d0700           call 0x7a91f0
// 00735496  dc054052a000         fadd qword ptr [0xa05240]
// 0073549c  eb07                 jmp 0x7354a5
// 0073549e  dd442438             fld qword ptr [esp + 0x38]
// 007354a2  83ec08               sub esp, 8
// 007354a5  dd1c24               fstp qword ptr [esp]
// 007354a8  57                   push edi
// 007354a9  e862c0feff           call 0x721510
// 007354ae  83c40c               add esp, 0xc
// 007354b1  5f                   pop edi
// 007354b2  5e                   pop esi
// 007354b3  b801000000           mov eax, 1
// 007354b8  5b                   pop ebx
// 007354b9  8be5                 mov esp, ebp
// 007354bb  5d                   pop ebp
// 007354bc  c3                   ret 
// copied from an identical function in another client (function _math_random)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD /fp:fast
// roc-lib: lua-5.1.2-dll lmathlib.c