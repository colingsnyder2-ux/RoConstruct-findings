// roc 2010-06 00891ae0  unit: CXTColorWnd  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00891ae0
//
// 00891ae0  83ec18               sub esp, 0x18
// 00891ae3  56                   push esi
// 00891ae4  57                   push edi
// 00891ae5  8bf1                 mov esi, ecx
// 00891ae7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00891aea  8d442410             lea eax, [esp + 0x10]
// 00891aee  50                   push eax
// 00891aef  51                   push ecx
// 00891af0  ff155cbc9e00         call dword ptr [0x9ebc5c]
// 00891af6  8b542428             mov edx, dword ptr [esp + 0x28]
// 00891afa  85d2                 test edx, edx
// 00891afc  7d06                 jge 0x891b04
// 00891afe  33d2                 xor edx, edx
// 00891b00  89542428             mov dword ptr [esp + 0x28], edx
// 00891b04  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00891b08  85ff                 test edi, edi
// 00891b0a  7d06                 jge 0x891b12
// 00891b0c  33ff                 xor edi, edi
// 00891b0e  897c2424             mov dword ptr [esp + 0x24], edi
// 00891b12  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00891b16  3bd0                 cmp edx, eax
// 00891b18  7e06                 jle 0x891b20
// 00891b1a  8bd0                 mov edx, eax
// 00891b1c  89542428             mov dword ptr [esp + 0x28], edx
// 00891b20  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00891b24  3bf9                 cmp edi, ecx
// 00891b26  7e06                 jle 0x891b2e
// 00891b28  8bf9                 mov edi, ecx
// 00891b2a  897c2424             mov dword ptr [esp + 0x24], edi
// 00891b2e  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 00891b32  db442424             fild dword ptr [esp + 0x24]
// 00891b36  2b442414             sub eax, dword ptr [esp + 0x14]
// 00891b3a  894c2408             mov dword ptr [esp + 8], ecx
// 00891b3e  db442408             fild dword ptr [esp + 8]
// 00891b42  8944240c             mov dword ptr [esp + 0xc], eax
// 00891b46  2bc2                 sub eax, edx
// 00891b48  89442408             mov dword ptr [esp + 8], eax
// 00891b4c  def9                 fdivp st(1)
// 00891b4e  895674               mov dword ptr [esi + 0x74], edx
// 00891b51  8b5620               mov edx, dword ptr [esi + 0x20]
// 00891b54  52                   push edx
// 00891b55  897e70               mov dword ptr [esi + 0x70], edi
// 00891b58  dd5e68               fstp qword ptr [esi + 0x68]
// 00891b5b  db44240c             fild dword ptr [esp + 0xc]
// 00891b5f  da742410             fidiv dword ptr [esp + 0x10]
// 00891b63  dd5e60               fstp qword ptr [esi + 0x60]
// 00891b66  ff154cba9e00         call dword ptr [0x9eba4c]
// 00891b6c  50                   push eax
// 00891b6d  e8f860f1ff           call 0x7a7c6a
// 00891b72  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00891b75  8b5020               mov edx, dword ptr [eax + 0x20]
// 00891b78  51                   push ecx
// 00891b79  6a00                 push 0
// 00891b7b  6842270000           push 0x2742
// 00891b80  52                   push edx
// 00891b81  ff1554ba9e00         call dword ptr [0x9eba54]
// 00891b87  8b4620               mov eax, dword ptr [esi + 0x20]
// 00891b8a  6a00                 push 0
// 00891b8c  6a00                 push 0
// 00891b8e  50                   push eax
// 00891b8f  ff1578ba9e00         call dword ptr [0x9eba78]
// 00891b95  5f                   pop edi
// 00891b96  5e                   pop esi
// 00891b97  83c418               add esp, 0x18
// 00891b9a  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?UpdateCursorPos@CXTColorWnd@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
