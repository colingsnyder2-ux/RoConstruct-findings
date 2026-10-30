// roc 2009-06 00802da0  unit: CXTColorWnd  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00802da0
//
// 00802da0  83ec18               sub esp, 0x18
// 00802da3  56                   push esi
// 00802da4  57                   push edi
// 00802da5  8bf1                 mov esi, ecx
// 00802da7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00802daa  8d442410             lea eax, [esp + 0x10]
// 00802dae  50                   push eax
// 00802daf  51                   push ecx
// 00802db0  ff1514ee8900         call dword ptr [0x89ee14]
// 00802db6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00802dba  85d2                 test edx, edx
// 00802dbc  7d06                 jge 0x802dc4
// 00802dbe  33d2                 xor edx, edx
// 00802dc0  89542428             mov dword ptr [esp + 0x28], edx
// 00802dc4  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00802dc8  85ff                 test edi, edi
// 00802dca  7d06                 jge 0x802dd2
// 00802dcc  33ff                 xor edi, edi
// 00802dce  897c2424             mov dword ptr [esp + 0x24], edi
// 00802dd2  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00802dd6  3bd0                 cmp edx, eax
// 00802dd8  7e06                 jle 0x802de0
// 00802dda  8bd0                 mov edx, eax
// 00802ddc  89542428             mov dword ptr [esp + 0x28], edx
// 00802de0  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00802de4  3bf9                 cmp edi, ecx
// 00802de6  7e06                 jle 0x802dee
// 00802de8  8bf9                 mov edi, ecx
// 00802dea  897c2424             mov dword ptr [esp + 0x24], edi
// 00802dee  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00802df2  db442424             fild dword ptr [esp + 0x24]
// 00802df6  2b442414             sub eax, dword ptr [esp + 0x14]
// 00802dfa  894c2408             mov dword ptr [esp + 8], ecx
// 00802dfe  db442408             fild dword ptr [esp + 8]
// 00802e02  8944240c             mov dword ptr [esp + 0xc], eax
// 00802e06  2bc2                 sub eax, edx
// 00802e08  89442408             mov dword ptr [esp + 8], eax
// 00802e0c  def9                 fdivp st(1)
// 00802e0e  895674               mov dword ptr [esi + 0x74], edx
// 00802e11  8b5620               mov edx, dword ptr [esi + 0x20]
// 00802e14  52                   push edx
// 00802e15  897e70               mov dword ptr [esi + 0x70], edi
// 00802e18  dd5e68               fstp qword ptr [esi + 0x68]
// 00802e1b  db44240c             fild dword ptr [esp + 0xc]
// 00802e1f  da742410             fidiv dword ptr [esp + 0x10]
// 00802e23  dd5e60               fstp qword ptr [esi + 0x60]
// 00802e26  ff1598ee8900         call dword ptr [0x89ee98]
// 00802e2c  50                   push eax
// 00802e2d  e8d05ef1ff           call 0x718d02
// 00802e32  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00802e35  8b5020               mov edx, dword ptr [eax + 0x20]
// 00802e38  51                   push ecx
// 00802e39  6a00                 push 0
// 00802e3b  6842270000           push 0x2742
// 00802e40  52                   push edx
// 00802e41  ff1590ee8900         call dword ptr [0x89ee90]
// 00802e47  8b4620               mov eax, dword ptr [esi + 0x20]
// 00802e4a  6a00                 push 0
// 00802e4c  6a00                 push 0
// 00802e4e  50                   push eax
// 00802e4f  ff157cee8900         call dword ptr [0x89ee7c]
// 00802e55  5f                   pop edi
// 00802e56  5e                   pop esi
// 00802e57  83c418               add esp, 0x18
// 00802e5a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?UpdateCursorPos@CXTColorWnd@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
