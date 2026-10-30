// roc 2009-12 008060e0  unit: CXTPControlComboBoxPopupBar  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008060e0
//
// 008060e0  8b442408             mov eax, dword ptr [esp + 8]
// 008060e4  83ec10               sub esp, 0x10
// 008060e7  53                   push ebx
// 008060e8  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 008060ec  55                   push ebp
// 008060ed  8b6c2424             mov ebp, dword ptr [esp + 0x24]
// 008060f1  56                   push esi
// 008060f2  57                   push edi
// 008060f3  8bf9                 mov edi, ecx
// 008060f5  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 008060f9  c70300000000         mov dword ptr [ebx], 0
// 008060ff  c7450000000000       mov dword ptr [ebp], 0
// 00806106  8d77a4               lea esi, [edi - 0x5c]
// 00806109  c70000000000         mov dword ptr [eax], 0
// 0080610f  c70100000000         mov dword ptr [ecx], 0
// 00806115  85f6                 test esi, esi
// 00806117  0f8490000000         je 0x8061ad
// 0080611d  837e2000             cmp dword ptr [esi + 0x20], 0
// 00806121  0f8486000000         je 0x8061ad
// 00806127  8b47c4               mov eax, dword ptr [edi - 0x3c]
// 0080612a  8d542410             lea edx, [esp + 0x10]
// 0080612e  52                   push edx
// 0080612f  50                   push eax
// 00806130  ff1570cc9800         call dword ptr [0x98cc70]
// 00806136  8d4c2434             lea ecx, [esp + 0x34]
// 0080613a  51                   push ecx
// 0080613b  8bcf                 mov ecx, edi
// 0080613d  e85e580300           call 0x83b9a0
// 00806142  8bd0                 mov edx, eax
// 00806144  85d2                 test edx, edx
// 00806146  7e40                 jle 0x806188
// 00806148  8bce                 mov ecx, esi
// 0080614a  e801f1ffff           call 0x805250
// 0080614f  3bd0                 cmp edx, eax
// 00806151  7f35                 jg 0x806188
// 00806153  4a                   dec edx
// 00806154  52                   push edx
// 00806155  e806f1ffff           call 0x805260
// 0080615a  8b90c0000000         mov edx, dword ptr [eax + 0xc0]
// 00806160  8b88c8000000         mov ecx, dword ptr [eax + 0xc8]
// 00806166  8bb0c4000000         mov esi, dword ptr [eax + 0xc4]
// 0080616c  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00806170  8b80cc000000         mov eax, dword ptr [eax + 0xcc]
// 00806176  2bca                 sub ecx, edx
// 00806178  03d7                 add edx, edi
// 0080617a  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0080617e  2bc6                 sub eax, esi
// 00806180  03f7                 add esi, edi
// 00806182  03ca                 add ecx, edx
// 00806184  03c6                 add eax, esi
// 00806186  eb10                 jmp 0x806198
// 00806188  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0080618c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00806190  8b742414             mov esi, dword ptr [esp + 0x14]
// 00806194  8b542410             mov edx, dword ptr [esp + 0x10]
// 00806198  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0080619c  8917                 mov dword ptr [edi], edx
// 0080619e  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 008061a2  2bca                 sub ecx, edx
// 008061a4  8937                 mov dword ptr [edi], esi
// 008061a6  2bc6                 sub eax, esi
// 008061a8  894d00               mov dword ptr [ebp], ecx
// 008061ab  8903                 mov dword ptr [ebx], eax
// 008061ad  5f                   pop edi
// 008061ae  5e                   pop esi
// 008061af  5d                   pop ebp
// 008061b0  33c0                 xor eax, eax
// 008061b2  5b                   pop ebx
// 008061b3  83c410               add esp, 0x10
// 008061b6  c22000               ret 0x20
// copied from an identical function in another client (function ?AccessibleLocation@CXTPCommandBar@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp