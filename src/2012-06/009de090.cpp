// roc 2012-06 009de090  unit: CXTPTabClientWnd  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009de090
//
// 009de090  83ec10               sub esp, 0x10
// 009de093  83b99c00000000       cmp dword ptr [ecx + 0x9c], 0
// 009de09a  53                   push ebx
// 009de09b  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 009de09f  dd8398000000         fld qword ptr [ebx + 0x98]
// 009de0a5  56                   push esi
// 009de0a6  57                   push edi
// 009de0a7  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 009de0ab  dc8798000000         fadd qword ptr [edi + 0x98]
// 009de0b1  8db1d0000000         lea esi, [ecx + 0xd0]
// 009de0b7  da06                 fiadd dword ptr [esi]
// 009de0b9  dd542414             fst qword ptr [esp + 0x14]
// 009de0bd  754a                 jne 0x9de109
// 009de0bf  8b442430             mov eax, dword ptr [esp + 0x30]
// 009de0c3  ddd8                 fstp st(0)
// 009de0c5  8b542420             mov edx, dword ptr [esp + 0x20]
// 009de0c9  2bd0                 sub edx, eax
// 009de0cb  89542440             mov dword ptr [esp + 0x40], edx
// 009de0cf  8b542438             mov edx, dword ptr [esp + 0x38]
// 009de0d3  db442440             fild dword ptr [esp + 0x40]
// 009de0d7  2bd0                 sub edx, eax
// 009de0d9  89542440             mov dword ptr [esp + 0x40], edx
// 009de0dd  db442440             fild dword ptr [esp + 0x40]
// 009de0e1  def9                 fdivp st(1)
// 009de0e3  dd5c240c             fstp qword ptr [esp + 0xc]
// 009de0e7  e8ecb40b00           call 0xa995d8
// 009de0ec  dd44240c             fld qword ptr [esp + 0xc]
// 009de0f0  dd442414             fld qword ptr [esp + 0x14]
// 009de0f4  dcc9                 fmul st(1), st(0)
// 009de0f6  a900004000           test eax, 0x400000
// 009de0fb  7408                 je 0x9de105
// 009de0fd  d9c0                 fld st(0)
// 009de0ff  dee2                 fsubrp st(2)
// 009de101  db06                 fild dword ptr [esi]
// 009de103  deea                 fsubp st(2)
// 009de105  d9c9                 fxch st(1)
// 009de107  eb24                 jmp 0x9de12d
// 009de109  8b442434             mov eax, dword ptr [esp + 0x34]
// 009de10d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 009de111  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 009de115  2bc8                 sub ecx, eax
// 009de117  894c2440             mov dword ptr [esp + 0x40], ecx
// 009de11b  db442440             fild dword ptr [esp + 0x40]
// 009de11f  2bd0                 sub edx, eax
// 009de121  89542440             mov dword ptr [esp + 0x40], edx
// 009de125  db442440             fild dword ptr [esp + 0x40]
// 009de129  def9                 fdivp st(1)
// 009de12b  d8c9                 fmul st(1)
// 009de12d  dd9f98000000         fstp qword ptr [edi + 0x98]
// 009de133  dca798000000         fsub qword ptr [edi + 0x98]
// 009de139  5f                   pop edi
// 009de13a  da26                 fisub dword ptr [esi]
// 009de13c  5e                   pop esi
// 009de13d  dd9b98000000         fstp qword ptr [ebx + 0x98]
// 009de143  5b                   pop ebx
// 009de144  83c410               add esp, 0x10
// 009de147  c22800               ret 0x28
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RepositionWorkspaces@CXTPTabClientWnd@@IAEXVCRect@@0PAVCWorkspace@1@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
