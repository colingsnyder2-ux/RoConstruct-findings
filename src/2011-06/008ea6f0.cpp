// roc 2011-06 008ea6f0  unit: CXTColorWnd  size: 189 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ea6f0
//
// 008ea6f0  83ec18               sub esp, 0x18
// 008ea6f3  56                   push esi
// 008ea6f4  57                   push edi
// 008ea6f5  8bf1                 mov esi, ecx
// 008ea6f7  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008ea6fa  8d442410             lea eax, [esp + 0x10]
// 008ea6fe  50                   push eax
// 008ea6ff  51                   push ecx
// 008ea700  ff157c1ca400         call dword ptr [0xa41c7c]
// 008ea706  8b542428             mov edx, dword ptr [esp + 0x28]
// 008ea70a  85d2                 test edx, edx
// 008ea70c  7d06                 jge 0x8ea714
// 008ea70e  33d2                 xor edx, edx
// 008ea710  89542428             mov dword ptr [esp + 0x28], edx
// 008ea714  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 008ea718  85ff                 test edi, edi
// 008ea71a  7d06                 jge 0x8ea722
// 008ea71c  33ff                 xor edi, edi
// 008ea71e  897c2424             mov dword ptr [esp + 0x24], edi
// 008ea722  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ea726  3bd0                 cmp edx, eax
// 008ea728  7e06                 jle 0x8ea730
// 008ea72a  8bd0                 mov edx, eax
// 008ea72c  89542428             mov dword ptr [esp + 0x28], edx
// 008ea730  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008ea734  3bf9                 cmp edi, ecx
// 008ea736  7e06                 jle 0x8ea73e
// 008ea738  8bf9                 mov edi, ecx
// 008ea73a  897c2424             mov dword ptr [esp + 0x24], edi
// 008ea73e  2b4c2410             sub ecx, dword ptr [esp + 0x10]
// 008ea742  db442424             fild dword ptr [esp + 0x24]
// 008ea746  2b442414             sub eax, dword ptr [esp + 0x14]
// 008ea74a  894c2408             mov dword ptr [esp + 8], ecx
// 008ea74e  db442408             fild dword ptr [esp + 8]
// 008ea752  8944240c             mov dword ptr [esp + 0xc], eax
// 008ea756  2bc2                 sub eax, edx
// 008ea758  89442408             mov dword ptr [esp + 8], eax
// 008ea75c  def9                 fdivp st(1)
// 008ea75e  895674               mov dword ptr [esi + 0x74], edx
// 008ea761  8b5620               mov edx, dword ptr [esi + 0x20]
// 008ea764  52                   push edx
// 008ea765  897e70               mov dword ptr [esi + 0x70], edi
// 008ea768  dd5e68               fstp qword ptr [esi + 0x68]
// 008ea76b  db44240c             fild dword ptr [esp + 0xc]
// 008ea76f  da742410             fidiv dword ptr [esp + 0x10]
// 008ea773  dd5e60               fstp qword ptr [esi + 0x60]
// 008ea776  ff15b819a400         call dword ptr [0xa419b8]
// 008ea77c  50                   push eax
// 008ea77d  e8a6fbf1ff           call 0x80a328
// 008ea782  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 008ea785  8b5020               mov edx, dword ptr [eax + 0x20]
// 008ea788  51                   push ecx
// 008ea789  6a00                 push 0
// 008ea78b  6842270000           push 0x2742
// 008ea790  52                   push edx
// 008ea791  ff15c019a400         call dword ptr [0xa419c0]
// 008ea797  8b4620               mov eax, dword ptr [esi + 0x20]
// 008ea79a  6a00                 push 0
// 008ea79c  6a00                 push 0
// 008ea79e  50                   push eax
// 008ea79f  ff15ec19a400         call dword ptr [0xa419ec]
// 008ea7a5  5f                   pop edi
// 008ea7a6  5e                   pop esi
// 008ea7a7  83c418               add esp, 0x18
// 008ea7aa  c20800               ret 8
// library xtp-11.2.2/Source\Controls\XTColorPageCustom.cpp (function ?UpdateCursorPos@CXTColorWnd@@UAEXVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTColorPageCustom.cpp
