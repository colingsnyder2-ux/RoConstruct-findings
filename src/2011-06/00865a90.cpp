// roc 2011-06 00865a90  unit: CXTPTabClientWnd  size: 186 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00865a90
//
// 00865a90  83ec10               sub esp, 0x10
// 00865a93  83b99c00000000       cmp dword ptr [ecx + 0x9c], 0
// 00865a9a  53                   push ebx
// 00865a9b  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 00865a9f  dd8398000000         fld qword ptr [ebx + 0x98]
// 00865aa5  56                   push esi
// 00865aa6  57                   push edi
// 00865aa7  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 00865aab  dc8798000000         fadd qword ptr [edi + 0x98]
// 00865ab1  8db1d0000000         lea esi, [ecx + 0xd0]
// 00865ab7  da06                 fiadd dword ptr [esi]
// 00865ab9  dd542414             fst qword ptr [esp + 0x14]
// 00865abd  754a                 jne 0x865b09
// 00865abf  8b442430             mov eax, dword ptr [esp + 0x30]
// 00865ac3  ddd8                 fstp st(0)
// 00865ac5  8b542420             mov edx, dword ptr [esp + 0x20]
// 00865ac9  2bd0                 sub edx, eax
// 00865acb  89542440             mov dword ptr [esp + 0x40], edx
// 00865acf  8b542438             mov edx, dword ptr [esp + 0x38]
// 00865ad3  db442440             fild dword ptr [esp + 0x40]
// 00865ad7  2bd0                 sub edx, eax
// 00865ad9  89542440             mov dword ptr [esp + 0x40], edx
// 00865add  db442440             fild dword ptr [esp + 0x40]
// 00865ae1  def9                 fdivp st(1)
// 00865ae3  dd5c240c             fstp qword ptr [esp + 0xc]
// 00865ae7  e8326b1600           call 0x9cc61e
// 00865aec  dd44240c             fld qword ptr [esp + 0xc]
// 00865af0  dd442414             fld qword ptr [esp + 0x14]
// 00865af4  dcc9                 fmul st(1), st(0)
// 00865af6  a900004000           test eax, 0x400000
// 00865afb  7408                 je 0x865b05
// 00865afd  d9c0                 fld st(0)
// 00865aff  dee2                 fsubrp st(2)
// 00865b01  db06                 fild dword ptr [esi]
// 00865b03  deea                 fsubp st(2)
// 00865b05  d9c9                 fxch st(1)
// 00865b07  eb24                 jmp 0x865b2d
// 00865b09  8b442434             mov eax, dword ptr [esp + 0x34]
// 00865b0d  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00865b11  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 00865b15  2bc8                 sub ecx, eax
// 00865b17  894c2440             mov dword ptr [esp + 0x40], ecx
// 00865b1b  db442440             fild dword ptr [esp + 0x40]
// 00865b1f  2bd0                 sub edx, eax
// 00865b21  89542440             mov dword ptr [esp + 0x40], edx
// 00865b25  db442440             fild dword ptr [esp + 0x40]
// 00865b29  def9                 fdivp st(1)
// 00865b2b  d8c9                 fmul st(1)
// 00865b2d  dd9f98000000         fstp qword ptr [edi + 0x98]
// 00865b33  dca798000000         fsub qword ptr [edi + 0x98]
// 00865b39  5f                   pop edi
// 00865b3a  da26                 fisub dword ptr [esi]
// 00865b3c  5e                   pop esi
// 00865b3d  dd9b98000000         fstp qword ptr [ebx + 0x98]
// 00865b43  5b                   pop ebx
// 00865b44  83c410               add esp, 0x10
// 00865b47  c22800               ret 0x28
// library xtp-11.2.2/Source\CommandBars\XTPTabClientWnd.cpp (function ?RepositionWorkspaces@CXTPTabClientWnd@@IAEXVCRect@@0PAVCWorkspace@1@1@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPTabClientWnd.cpp
