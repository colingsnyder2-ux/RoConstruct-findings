// roc 2010-06 0080a7c0  unit: CXTPTabClientWnd  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0080a7c0
//
// 0080a7c0  83ec10               sub esp, 0x10
// 0080a7c3  83b99c00000000       cmp dword ptr [ecx + 0x9c], 0
// 0080a7ca  53                   push ebx
// 0080a7cb  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0080a7cf  dd8398000000         fld qword ptr [ebx + 0x98]
// 0080a7d5  56                   push esi
// 0080a7d6  57                   push edi
// 0080a7d7  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0080a7db  dc8798000000         fadd qword ptr [edi + 0x98]
// 0080a7e1  8db1d0000000         lea esi, [ecx + 0xd0]
// 0080a7e7  da06                 fiadd dword ptr [esi]
// 0080a7e9  dd542414             fst qword ptr [esp + 0x14]
// 0080a7ed  754a                 jne 0x80a839
// 0080a7ef  8b442430             mov eax, dword ptr [esp + 0x30]
// 0080a7f3  ddd8                 fstp st(0)
// 0080a7f5  8b542420             mov edx, dword ptr [esp + 0x20]
// 0080a7f9  2bd0                 sub edx, eax
// 0080a7fb  89542440             mov dword ptr [esp + 0x40], edx
// 0080a7ff  8b542438             mov edx, dword ptr [esp + 0x38]
// 0080a803  db442440             fild dword ptr [esp + 0x40]
// 0080a807  2bd0                 sub edx, eax
// 0080a809  89542440             mov dword ptr [esp + 0x40], edx
// 0080a80d  db442440             fild dword ptr [esp + 0x40]
// 0080a811  def9                 fdivp st(1)
// 0080a813  dd5c240c             fstp qword ptr [esp + 0xc]
// 0080a817  e8c8251700           call 0x97cde4
// 0080a81c  dd44240c             fld qword ptr [esp + 0xc]
// 0080a820  dd442414             fld qword ptr [esp + 0x14]
// 0080a824  dcc9                 fmul st(1), st(0)
// 0080a826  a900004000           test eax, 0x400000
// 0080a82b  7408                 je 0x80a835
// 0080a82d  d9c0                 fld st(0)
// 0080a82f  dee2                 fsubrp st(2)
// 0080a831  db06                 fild dword ptr [esi]
// 0080a833  deea                 fsubp st(2)
// 0080a835  d9c9                 fxch st(1)
// 0080a837  eb24                 jmp 0x80a85d
// 0080a839  8b442434             mov eax, dword ptr [esp + 0x34]
// 0080a83d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0080a841  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0080a845  2bc8                 sub ecx, eax
// 0080a847  894c2440             mov dword ptr [esp + 0x40], ecx
// 0080a84b  db442440             fild dword ptr [esp + 0x40]
// 0080a84f  2bd0                 sub edx, eax
// 0080a851  89542440             mov dword ptr [esp + 0x40], edx
// 0080a855  db442440             fild dword ptr [esp + 0x40]
// 0080a859  def9                 fdivp st(1)
// 0080a85b  d8c9                 fmul st(1)
// 0080a85d  dd9f98000000         fstp qword ptr [edi + 0x98]
// 0080a863  dca798000000         fsub qword ptr [edi + 0x98]
// 0080a869  5f                   pop edi
// 0080a86a  da26                 fisub dword ptr [esi]
// 0080a86c  5e                   pop esi
// 0080a86d  dd9b98000000         fstp qword ptr [ebx + 0x98]
// 0080a873  5b                   pop ebx
// 0080a874  83c410               add esp, 0x10
// 0080a877  c22800               ret 0x28
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RepositionWorkspaces@CXTPTabClientWnd@@IAEXVCRect@@0PAVCWorkspace@1@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
