// roc 2009-06 0077b830  unit: CXTPTabClientWnd  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0077b830
//
// 0077b830  83ec10               sub esp, 0x10
// 0077b833  83b99c00000000       cmp dword ptr [ecx + 0x9c], 0
// 0077b83a  53                   push ebx
// 0077b83b  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0077b83f  dd8398000000         fld qword ptr [ebx + 0x98]
// 0077b845  56                   push esi
// 0077b846  57                   push edi
// 0077b847  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0077b84b  dc8798000000         fadd qword ptr [edi + 0x98]
// 0077b851  8db1d0000000         lea esi, [ecx + 0xd0]
// 0077b857  da06                 fiadd dword ptr [esi]
// 0077b859  dd542414             fst qword ptr [esp + 0x14]
// 0077b85d  754a                 jne 0x77b8a9
// 0077b85f  8b442430             mov eax, dword ptr [esp + 0x30]
// 0077b863  ddd8                 fstp st(0)
// 0077b865  8b542420             mov edx, dword ptr [esp + 0x20]
// 0077b869  2bd0                 sub edx, eax
// 0077b86b  89542440             mov dword ptr [esp + 0x40], edx
// 0077b86f  8b542438             mov edx, dword ptr [esp + 0x38]
// 0077b873  db442440             fild dword ptr [esp + 0x40]
// 0077b877  2bd0                 sub edx, eax
// 0077b879  89542440             mov dword ptr [esp + 0x40], edx
// 0077b87d  db442440             fild dword ptr [esp + 0x40]
// 0077b881  def9                 fdivp st(1)
// 0077b883  dd5c240c             fstp qword ptr [esp + 0xc]
// 0077b887  e856060d00           call 0x84bee2
// 0077b88c  dd44240c             fld qword ptr [esp + 0xc]
// 0077b890  dd442414             fld qword ptr [esp + 0x14]
// 0077b894  dcc9                 fmul st(1), st(0)
// 0077b896  a900004000           test eax, 0x400000
// 0077b89b  7408                 je 0x77b8a5
// 0077b89d  d9c0                 fld st(0)
// 0077b89f  dee2                 fsubrp st(2)
// 0077b8a1  db06                 fild dword ptr [esi]
// 0077b8a3  deea                 fsubp st(2)
// 0077b8a5  d9c9                 fxch st(1)
// 0077b8a7  eb24                 jmp 0x77b8cd
// 0077b8a9  8b442434             mov eax, dword ptr [esp + 0x34]
// 0077b8ad  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0077b8b1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0077b8b5  2bc8                 sub ecx, eax
// 0077b8b7  894c2440             mov dword ptr [esp + 0x40], ecx
// 0077b8bb  db442440             fild dword ptr [esp + 0x40]
// 0077b8bf  2bd0                 sub edx, eax
// 0077b8c1  89542440             mov dword ptr [esp + 0x40], edx
// 0077b8c5  db442440             fild dword ptr [esp + 0x40]
// 0077b8c9  def9                 fdivp st(1)
// 0077b8cb  d8c9                 fmul st(1)
// 0077b8cd  dd9f98000000         fstp qword ptr [edi + 0x98]
// 0077b8d3  dca798000000         fsub qword ptr [edi + 0x98]
// 0077b8d9  5f                   pop edi
// 0077b8da  da26                 fisub dword ptr [esi]
// 0077b8dc  5e                   pop esi
// 0077b8dd  dd9b98000000         fstp qword ptr [ebx + 0x98]
// 0077b8e3  5b                   pop ebx
// 0077b8e4  83c410               add esp, 0x10
// 0077b8e7  c22800               ret 0x28
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RepositionWorkspaces@CXTPTabClientWnd@@IAEXVCRect@@0PAVCWorkspace@1@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
