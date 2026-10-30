// roc 2009-12 00805de0  unit: CXTPControlComboBoxPopupBar  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00805de0
//
// 00805de0  53                   push ebx
// 00805de1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00805de5  56                   push esi
// 00805de6  57                   push edi
// 00805de7  8bf9                 mov edi, ecx
// 00805de9  8d77a4               lea esi, [edi - 0x5c]
// 00805dec  56                   push esi
// 00805ded  c70300000000         mov dword ptr [ebx], 0
// 00805df3  e888bb0300           call 0x841980
// 00805df8  50                   push eax
// 00805df9  e840defeff           call 0x7f3c3e
// 00805dfe  83c408               add esp, 8
// 00805e01  85c0                 test eax, eax
// 00805e03  741d                 je 0x805e22
// 00805e05  8b8080010000         mov eax, dword ptr [eax + 0x180]
// 00805e0b  85c0                 test eax, eax
// 00805e0d  743a                 je 0x805e49
// 00805e0f  6a01                 push 1
// 00805e11  8bc8                 mov ecx, eax
// 00805e13  e81e061200           call 0x926436
// 00805e18  5f                   pop edi
// 00805e19  8903                 mov dword ptr [ebx], eax
// 00805e1b  5e                   pop esi
// 00805e1c  33c0                 xor eax, eax
// 00805e1e  5b                   pop ebx
// 00805e1f  c20400               ret 4
// 00805e22  85f6                 test esi, esi
// 00805e24  7423                 je 0x805e49
// 00805e26  837e2000             cmp dword ptr [esi + 0x20], 0
// 00805e2a  741d                 je 0x805e49
// 00805e2c  85f6                 test esi, esi
// 00805e2e  7403                 je 0x805e33
// 00805e30  8b7620               mov esi, dword ptr [esi + 0x20]
// 00805e33  53                   push ebx
// 00805e34  68a04ba200           push 0xa24ba0
// 00805e39  6a00                 push 0
// 00805e3b  56                   push esi
// 00805e3c  8bcf                 mov ecx, edi
// 00805e3e  e81d660300           call 0x83c460
// 00805e43  5f                   pop edi
// 00805e44  5e                   pop esi
// 00805e45  5b                   pop ebx
// 00805e46  c20400               ret 4
// 00805e49  5f                   pop edi
// 00805e4a  5e                   pop esi
// 00805e4b  b805400080           mov eax, 0x80004005
// 00805e50  5b                   pop ebx
// 00805e51  c20400               ret 4
// copied from an identical function in another client (function ?GetAccessibleParent@CXTPCommandBar@@MAEJPAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-internals Source\CommandBars\XTPCommandBar.cpp