// roc 2009-12 00856890  unit: CXTPTabClientWnd  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00856890
//
// 00856890  83ec10               sub esp, 0x10
// 00856893  83b99c00000000       cmp dword ptr [ecx + 0x9c], 0
// 0085689a  53                   push ebx
// 0085689b  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0085689f  dd8398000000         fld qword ptr [ebx + 0x98]
// 008568a5  56                   push esi
// 008568a6  57                   push edi
// 008568a7  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 008568ab  dc8798000000         fadd qword ptr [edi + 0x98]
// 008568b1  8db1d0000000         lea esi, [ecx + 0xd0]
// 008568b7  da06                 fiadd dword ptr [esi]
// 008568b9  dd542414             fst qword ptr [esp + 0x14]
// 008568bd  754a                 jne 0x856909
// 008568bf  8b442430             mov eax, dword ptr [esp + 0x30]
// 008568c3  ddd8                 fstp st(0)
// 008568c5  8b542420             mov edx, dword ptr [esp + 0x20]
// 008568c9  2bd0                 sub edx, eax
// 008568cb  89542440             mov dword ptr [esp + 0x40], edx
// 008568cf  8b542438             mov edx, dword ptr [esp + 0x38]
// 008568d3  db442440             fild dword ptr [esp + 0x40]
// 008568d7  2bd0                 sub edx, eax
// 008568d9  89542440             mov dword ptr [esp + 0x40], edx
// 008568dd  db442440             fild dword ptr [esp + 0x40]
// 008568e1  def9                 fdivp st(1)
// 008568e3  dd5c240c             fstp qword ptr [esp + 0xc]
// 008568e7  e88cfb0c00           call 0x926478
// 008568ec  dd44240c             fld qword ptr [esp + 0xc]
// 008568f0  dd442414             fld qword ptr [esp + 0x14]
// 008568f4  dcc9                 fmul st(1), st(0)
// 008568f6  a900004000           test eax, 0x400000
// 008568fb  7408                 je 0x856905
// 008568fd  d9c0                 fld st(0)
// 008568ff  dee2                 fsubrp st(2)
// 00856901  db06                 fild dword ptr [esi]
// 00856903  deea                 fsubp st(2)
// 00856905  d9c9                 fxch st(1)
// 00856907  eb24                 jmp 0x85692d
// 00856909  8b442434             mov eax, dword ptr [esp + 0x34]
// 0085690d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00856911  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00856915  2bc8                 sub ecx, eax
// 00856917  894c2440             mov dword ptr [esp + 0x40], ecx
// 0085691b  db442440             fild dword ptr [esp + 0x40]
// 0085691f  2bd0                 sub edx, eax
// 00856921  89542440             mov dword ptr [esp + 0x40], edx
// 00856925  db442440             fild dword ptr [esp + 0x40]
// 00856929  def9                 fdivp st(1)
// 0085692b  d8c9                 fmul st(1)
// 0085692d  dd9f98000000         fstp qword ptr [edi + 0x98]
// 00856933  dca798000000         fsub qword ptr [edi + 0x98]
// 00856939  5f                   pop edi
// 0085693a  da26                 fisub dword ptr [esi]
// 0085693c  5e                   pop esi
// 0085693d  dd9b98000000         fstp qword ptr [ebx + 0x98]
// 00856943  5b                   pop ebx
// 00856944  83c410               add esp, 0x10
// 00856947  c22800               ret 0x28
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RepositionWorkspaces@CXTPTabClientWnd@@IAEXVCRect@@0PAVCWorkspace@1@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
