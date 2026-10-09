// roc 2009-12 008dd890  unit: CXTColorWnd  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008dd890
//
// 008dd890  83ec18               sub esp, 0x18
// 008dd893  56                   push esi
// 008dd894  57                   push edi
// 008dd895  8bf1                 mov esi, ecx
// 008dd897  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008dd89a  8d442410             lea eax, [esp + 0x10]
// 008dd89e  50                   push eax
// 008dd89f  51                   push ecx
// 008dd8a0  ff1550cc9800         call dword ptr [0x98cc50]
// 008dd8a6  8b542428             mov edx, dword ptr [esp + 0x28]
// 008dd8aa  85d2                 test edx, edx
// 008dd8ac  7d06                 jge 0x8dd8b4
// 008dd8ae  33d2                 xor edx, edx
// 008dd8b0  89542428             mov dword ptr [esp + 0x28], edx
// 008dd8b4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008dd8b8  85ff                 test edi, edi
// 008dd8ba  7d06                 jge 0x8dd8c2
// 008dd8bc  33ff                 xor edi, edi
// 008dd8be  897c2424             mov dword ptr [esp + 0x24], edi
// 008dd8c2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008dd8c6  3bd0                 cmp edx, eax
// 008dd8c8  7e06                 jle 0x8dd8d0
// 008dd8ca  8bd0                 mov edx, eax
// 008dd8cc  89542428             mov dword ptr [esp + 0x28], edx
// 008dd8d0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008dd8d4  3bf9                 cmp edi, ecx
// 008dd8d6  7e06                 jle 0x8dd8de
// 008dd8d8  8bf9                 mov edi, ecx
// 008dd8da  897c2424             mov dword ptr [esp + 0x24], edi
// 008dd8de  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008dd8e2  db442424             fild dword ptr [esp + 0x24]
// 008dd8e6  2b442414             sub eax, dword ptr [esp + 0x14]
// 008dd8ea  894c2408             mov dword ptr [esp + 8], ecx
// 008dd8ee  db442408             fild dword ptr [esp + 8]
// 008dd8f2  8944240c             mov dword ptr [esp + 0xc], eax
// 008dd8f6  2bc2                 sub eax, edx
// 008dd8f8  89442408             mov dword ptr [esp + 8], eax
// 008dd8fc  def9                 fdivp st(1)
// 008dd8fe  895674               mov dword ptr [esi + 0x74], edx
// 008dd901  8b5620               mov edx, dword ptr [esi + 0x20]
// 008dd904  52                   push edx
// 008dd905  897e70               mov dword ptr [esi + 0x70], edi
// 008dd908  dd5e68               fstp qword ptr [esi + 0x68]
// 008dd90b  db44240c             fild dword ptr [esp + 0xc]
// 008dd90f  da742410             fidiv dword ptr [esp + 0x10]
// 008dd913  dd5e60               fstp qword ptr [esi + 0x60]
// 008dd916  ff15bccb9800         call dword ptr [0x98cbbc]
// 008dd91c  50                   push eax
// 008dd91d  e80862f1ff           call 0x7f3b2a
// 008dd922  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008dd925  8b5020               mov edx, dword ptr [eax + 0x20]
// 008dd928  51                   push ecx
// 008dd929  6a00                 push 0
// 008dd92b  6842270000           push 0x2742
// 008dd930  52                   push edx
// 008dd931  ff15c4cb9800         call dword ptr [0x98cbc4]
// 008dd937  8b4620               mov eax, dword ptr [esi + 0x20]
// 008dd93a  6a00                 push 0
// 008dd93c  6a00                 push 0
// 008dd93e  50                   push eax
// 008dd93f  ff15e8cb9800         call dword ptr [0x98cbe8]
// 008dd945  5f                   pop edi
// 008dd946  5e                   pop esi
// 008dd947  83c418               add esp, 0x18
// 008dd94a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?UpdateCursorPos@CXTColorWnd@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
