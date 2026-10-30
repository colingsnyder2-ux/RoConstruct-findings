// from server: 100% by auto
// roc 2008-06 0078a4d0  unit: CXTColorWnd  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078a4d0
//
// 0078a4d0  83ec18               sub esp, 0x18
// 0078a4d3  56                   push esi
// 0078a4d4  57                   push edi
// 0078a4d5  8bf1                 mov esi, ecx
// 0078a4d7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078a4da  8d442410             lea eax, [esp + 0x10]
// 0078a4de  50                   push eax
// 0078a4df  51                   push ecx
// 0078a4e0  ff15842d8000         call dword ptr [0x802d84]
// 0078a4e6  8b542428             mov edx, dword ptr [esp + 0x28]
// 0078a4ea  85d2                 test edx, edx
// 0078a4ec  7d06                 jge 0x78a4f4
// 0078a4ee  33d2                 xor edx, edx
// 0078a4f0  89542428             mov dword ptr [esp + 0x28], edx
// 0078a4f4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0078a4f8  85ff                 test edi, edi
// 0078a4fa  7d06                 jge 0x78a502
// 0078a4fc  33ff                 xor edi, edi
// 0078a4fe  897c2424             mov dword ptr [esp + 0x24], edi
// 0078a502  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078a506  3bd0                 cmp edx, eax
// 0078a508  7e06                 jle 0x78a510
// 0078a50a  8bd0                 mov edx, eax
// 0078a50c  89542428             mov dword ptr [esp + 0x28], edx
// 0078a510  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0078a514  3bf9                 cmp edi, ecx
// 0078a516  7e06                 jle 0x78a51e
// 0078a518  8bf9                 mov edi, ecx
// 0078a51a  897c2424             mov dword ptr [esp + 0x24], edi
// 0078a51e  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 0078a522  db442424             fild dword ptr [esp + 0x24]
// 0078a526  2b442414             sub eax, dword ptr [esp + 0x14]
// 0078a52a  894c2408             mov dword ptr [esp + 8], ecx
// 0078a52e  db442408             fild dword ptr [esp + 8]
// 0078a532  8944240c             mov dword ptr [esp + 0xc], eax
// 0078a536  2bc2                 sub eax, edx
// 0078a538  89442408             mov dword ptr [esp + 8], eax
// 0078a53c  def9                 fdivp st(1)
// 0078a53e  895674               mov dword ptr [esi + 0x74], edx
// 0078a541  8b5620               mov edx, dword ptr [esi + 0x20]
// 0078a544  52                   push edx
// 0078a545  897e70               mov dword ptr [esi + 0x70], edi
// 0078a548  dd5e68               fstp qword ptr [esi + 0x68]
// 0078a54b  db44240c             fild dword ptr [esp + 0xc]
// 0078a54f  da742410             fidiv dword ptr [esp + 0x10]
// 0078a553  dd5e60               fstp qword ptr [esi + 0x60]
// 0078a556  ff15f82d8000         call dword ptr [0x802df8]
// 0078a55c  50                   push eax
// 0078a55d  e87c66f1ff           call 0x6a0bde
// 0078a562  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 0078a565  8b5020               mov edx, dword ptr [eax + 0x20]
// 0078a568  51                   push ecx
// 0078a569  6a00                 push 0
// 0078a56b  6842270000           push 0x2742
// 0078a570  52                   push edx
// 0078a571  ff15142e8000         call dword ptr [0x802e14]
// 0078a577  8b4620               mov eax, dword ptr [esi + 0x20]
// 0078a57a  6a00                 push 0
// 0078a57c  6a00                 push 0
// 0078a57e  50                   push eax
// 0078a57f  ff15182e8000         call dword ptr [0x802e18]
// 0078a585  5f                   pop edi
// 0078a586  5e                   pop esi
// 0078a587  83c418               add esp, 0x18
// 0078a58a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?UpdateCursorPos@CXTColorWnd@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
