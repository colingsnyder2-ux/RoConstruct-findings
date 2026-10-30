// roc 2010-06 00866d00  unit: CXTPDockingPaneTabbedContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00866d00
//
// 00866d00  83ec18               sub esp, 0x18
// 00866d03  53                   push ebx
// 00866d04  57                   push edi
// 00866d05  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 00866d09  8bd9                 mov ebx, ecx
// 00866d0b  85ff                 test edi, edi
// 00866d0d  750d                 jne 0x866d1c
// 00866d0f  5f                   pop edi
// 00866d10  b857000780           mov eax, 0x80070057
// 00866d15  5b                   pop ebx
// 00866d16  83c418               add esp, 0x18
// 00866d19  c20c00               ret 0xc
// 00866d1c  56                   push esi
// 00866d1d  33c0                 xor eax, eax
// 00866d1f  8db3c8feffff         lea esi, [ebx - 0x138]
// 00866d25  668907               mov word ptr [edi], ax
// 00866d28  85f6                 test esi, esi
// 00866d2a  7405                 je 0x866d31
// 00866d2c  394620               cmp dword ptr [esi + 0x20], eax
// 00866d2f  750e                 jne 0x866d3f
// 00866d31  5e                   pop esi
// 00866d32  5f                   pop edi
// 00866d33  b801000000           mov eax, 1
// 00866d38  5b                   pop ebx
// 00866d39  83c418               add esp, 0x18
// 00866d3c  c20c00               ret 0xc
// 00866d3f  55                   push ebp
// 00866d40  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 00866d44  56                   push esi
// 00866d45  8d4c241c             lea ecx, [esp + 0x1c]
// 00866d49  e86285f9ff           call 0x7ff2b0
// 00866d4e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00866d52  51                   push ecx
// 00866d53  55                   push ebp
// 00866d54  50                   push eax
// 00866d55  ff15e0bb9e00         call dword ptr [0x9ebbe0]
// 00866d5b  85c0                 test eax, eax
// 00866d5d  0f8486000000         je 0x866de9
// 00866d63  8b8be8feffff         mov ecx, dword ptr [ebx - 0x118]
// 00866d69  8b542430             mov edx, dword ptr [esp + 0x30]
// 00866d6d  8d442410             lea eax, [esp + 0x10]
// 00866d71  50                   push eax
// 00866d72  51                   push ecx
// 00866d73  896c2418             mov dword ptr [esp + 0x18], ebp
// 00866d77  8954241c             mov dword ptr [esp + 0x1c], edx
// 00866d7b  ff1578bc9e00         call dword ptr [0x9ebc78]
// 00866d81  8b542414             mov edx, dword ptr [esp + 0x14]
// 00866d85  8b442410             mov eax, dword ptr [esp + 0x10]
// 00866d89  52                   push edx
// 00866d8a  50                   push eax
// 00866d8b  8bce                 mov ecx, esi
// 00866d8d  e82eecffff           call 0x8659c0
// 00866d92  83f8fe               cmp eax, -2
// 00866d95  751b                 jne 0x866db2
// 00866d97  5d                   pop ebp
// 00866d98  b903000000           mov ecx, 3
// 00866d9d  5e                   pop esi
// 00866d9e  66890f               mov word ptr [edi], cx
// 00866da1  c7470800000000       mov dword ptr [edi + 8], 0
// 00866da8  5f                   pop edi
// 00866da9  33c0                 xor eax, eax
// 00866dab  5b                   pop ebx
// 00866dac  83c418               add esp, 0x18
// 00866daf  c20c00               ret 0xc
// 00866db2  83f8ff               cmp eax, -1
// 00866db5  7541                 jne 0x866df8
// 00866db7  ba09000000           mov edx, 9
// 00866dbc  668917               mov word ptr [edi], dx
// 00866dbf  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 00866dc2  85c0                 test eax, eax
// 00866dc4  7423                 je 0x866de9
// 00866dc6  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 00866dcc  83c708               add edi, 8
// 00866dcf  57                   push edi
// 00866dd0  6820cba800           push 0xa8cb20
// 00866dd5  6a00                 push 0
// 00866dd7  50                   push eax
// 00866dd8  8bcb                 mov ecx, ebx
// 00866dda  e8e197f8ff           call 0x7f05c0
// 00866ddf  5d                   pop ebp
// 00866de0  5e                   pop esi
// 00866de1  5f                   pop edi
// 00866de2  5b                   pop ebx
// 00866de3  83c418               add esp, 0x18
// 00866de6  c20c00               ret 0xc
// 00866de9  5d                   pop ebp
// 00866dea  5e                   pop esi
// 00866deb  5f                   pop edi
// 00866dec  b801000000           mov eax, 1
// 00866df1  5b                   pop ebx
// 00866df2  83c418               add esp, 0x18
// 00866df5  c20c00               ret 0xc
// 00866df8  b909000000           mov ecx, 9
// 00866dfd  6a01                 push 1
// 00866dff  66890f               mov word ptr [edi], cx
// 00866e02  50                   push eax
// 00866e03  8bce                 mov ecx, esi
// 00866e05  e8c6f6ffff           call 0x8664d0
// 00866e0a  8bc8                 mov ecx, eax
// 00866e0c  e8615f1100           call 0x97cd72
// 00866e11  5d                   pop ebp
// 00866e12  5e                   pop esi
// 00866e13  894708               mov dword ptr [edi + 8], eax
// 00866e16  5f                   pop edi
// 00866e17  33c0                 xor eax, eax
// 00866e19  5b                   pop ebx
// 00866e1a  83c418               add esp, 0x18
// 00866e1d  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleHitTest@CXTPDockingPaneTabbedContainer@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
