// from server: 100% by auto
// roc 2008-06 00702f20  unit: CXTPTabClientWnd  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00702f20
//
// 00702f20  83ec10               sub esp, 0x10
// 00702f23  83b99c00000000       cmp dword ptr [ecx + 0x9c], 0
// 00702f2a  53                   push ebx
// 00702f2b  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00702f2f  dd8398000000         fld qword ptr [ebx + 0x98]
// 00702f35  56                   push esi
// 00702f36  57                   push edi
// 00702f37  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00702f3b  dc8798000000         fadd qword ptr [edi + 0x98]
// 00702f41  8db1d0000000         lea esi, [ecx + 0xd0]
// 00702f47  da06                 fiadd dword ptr [esi]
// 00702f49  dd542414             fst qword ptr [esp + 0x14]
// 00702f4d  754a                 jne 0x702f99
// 00702f4f  8b442430             mov eax, dword ptr [esp + 0x30]
// 00702f53  ddd8                 fstp st(0)
// 00702f55  8b542420             mov edx, dword ptr [esp + 0x20]
// 00702f59  2bd0                 sub edx, eax
// 00702f5b  89542440             mov dword ptr [esp + 0x40], edx
// 00702f5f  8b542438             mov edx, dword ptr [esp + 0x38]
// 00702f63  db442440             fild dword ptr [esp + 0x40]
// 00702f67  2bd0                 sub edx, eax
// 00702f69  89542440             mov dword ptr [esp + 0x40], edx
// 00702f6d  db442440             fild dword ptr [esp + 0x40]
// 00702f71  def9                 fdivp st(1)
// 00702f73  dd5c240c             fstp qword ptr [esp + 0xc]
// 00702f77  e81c900b00           call 0x7bbf98
// 00702f7c  dd44240c             fld qword ptr [esp + 0xc]
// 00702f80  dd442414             fld qword ptr [esp + 0x14]
// 00702f84  dcc9                 fmul st(1), st(0)
// 00702f86  a900004000           test eax, 0x400000
// 00702f8b  7408                 je 0x702f95
// 00702f8d  d9c0                 fld st(0)
// 00702f8f  dee2                 fsubrp st(2)
// 00702f91  db06                 fild dword ptr [esi]
// 00702f93  deea                 fsubp st(2)
// 00702f95  d9c9                 fxch st(1)
// 00702f97  eb24                 jmp 0x702fbd
// 00702f99  8b442434             mov eax, dword ptr [esp + 0x34]
// 00702f9d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00702fa1  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00702fa5  2bc8                 sub ecx, eax
// 00702fa7  894c2440             mov dword ptr [esp + 0x40], ecx
// 00702fab  db442440             fild dword ptr [esp + 0x40]
// 00702faf  2bd0                 sub edx, eax
// 00702fb1  89542440             mov dword ptr [esp + 0x40], edx
// 00702fb5  db442440             fild dword ptr [esp + 0x40]
// 00702fb9  def9                 fdivp st(1)
// 00702fbb  d8c9                 fmul st(1)
// 00702fbd  dd9f98000000         fstp qword ptr [edi + 0x98]
// 00702fc3  dca798000000         fsub qword ptr [edi + 0x98]
// 00702fc9  5f                   pop edi
// 00702fca  da26                 fisub dword ptr [esi]
// 00702fcc  5e                   pop esi
// 00702fcd  dd9b98000000         fstp qword ptr [ebx + 0x98]
// 00702fd3  5b                   pop ebx
// 00702fd4  83c410               add esp, 0x10
// 00702fd7  c22800               ret 0x28
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RepositionWorkspaces@CXTPTabClientWnd@@IAEXVCRect@@0PAVCWorkspace@1@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
