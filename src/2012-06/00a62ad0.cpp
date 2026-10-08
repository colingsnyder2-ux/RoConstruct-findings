// roc 2012-06 00a62ad0  unit: CXTColorWnd  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a62ad0
//
// 00a62ad0  83ec18               sub esp, 0x18
// 00a62ad3  56                   push esi
// 00a62ad4  57                   push edi
// 00a62ad5  8bf1                 mov esi, ecx
// 00a62ad7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a62ada  8d442410             lea eax, [esp + 0x10]
// 00a62ade  50                   push eax
// 00a62adf  51                   push ecx
// 00a62ae0  ff15d83ab200         call dword ptr [0xb23ad8]
// 00a62ae6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00a62aea  85d2                 test edx, edx
// 00a62aec  7d06                 jge 0xa62af4
// 00a62aee  33d2                 xor edx, edx
// 00a62af0  89542428             mov dword ptr [esp + 0x28], edx
// 00a62af4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a62af8  85ff                 test edi, edi
// 00a62afa  7d06                 jge 0xa62b02
// 00a62afc  33ff                 xor edi, edi
// 00a62afe  897c2424             mov dword ptr [esp + 0x24], edi
// 00a62b02  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a62b06  3bd0                 cmp edx, eax
// 00a62b08  7e06                 jle 0xa62b10
// 00a62b0a  8bd0                 mov edx, eax
// 00a62b0c  89542428             mov dword ptr [esp + 0x28], edx
// 00a62b10  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00a62b14  3bf9                 cmp edi, ecx
// 00a62b16  7e06                 jle 0xa62b1e
// 00a62b18  8bf9                 mov edi, ecx
// 00a62b1a  897c2424             mov dword ptr [esp + 0x24], edi
// 00a62b1e  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00a62b22  db442424             fild dword ptr [esp + 0x24]
// 00a62b26  2b442414             sub eax, dword ptr [esp + 0x14]
// 00a62b2a  894c2408             mov dword ptr [esp + 8], ecx
// 00a62b2e  db442408             fild dword ptr [esp + 8]
// 00a62b32  8944240c             mov dword ptr [esp + 0xc], eax
// 00a62b36  2bc2                 sub eax, edx
// 00a62b38  89442408             mov dword ptr [esp + 8], eax
// 00a62b3c  def9                 fdivp st(1)
// 00a62b3e  895674               mov dword ptr [esi + 0x74], edx
// 00a62b41  8b5620               mov edx, dword ptr [esi + 0x20]
// 00a62b44  52                   push edx
// 00a62b45  897e70               mov dword ptr [esi + 0x70], edi
// 00a62b48  dd5e68               fstp qword ptr [esi + 0x68]
// 00a62b4b  db44240c             fild dword ptr [esp + 0xc]
// 00a62b4f  da742410             fidiv dword ptr [esp + 0x10]
// 00a62b53  dd5e60               fstp qword ptr [esi + 0x60]
// 00a62b56  ff15503ab200         call dword ptr [0xb23a50]
// 00a62b5c  50                   push eax
// 00a62b5d  e804fbf1ff           call 0x982666
// 00a62b62  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00a62b65  8b5020               mov edx, dword ptr [eax + 0x20]
// 00a62b68  51                   push ecx
// 00a62b69  6a00                 push 0
// 00a62b6b  6842270000           push 0x2742
// 00a62b70  52                   push edx
// 00a62b71  ff15043cb200         call dword ptr [0xb23c04]
// 00a62b77  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a62b7a  6a00                 push 0
// 00a62b7c  6a00                 push 0
// 00a62b7e  50                   push eax
// 00a62b7f  ff15ec3bb200         call dword ptr [0xb23bec]
// 00a62b85  5f                   pop edi
// 00a62b86  5e                   pop esi
// 00a62b87  83c418               add esp, 0x18
// 00a62b8a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?UpdateCursorPos@CXTColorWnd@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
