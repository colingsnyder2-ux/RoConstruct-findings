// roc 2007-08 005ce120  unit: RBX::BlockBlockContact  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ce120
//
// 005ce120  53                   push ebx
// 005ce121  55                   push ebp
// 005ce122  56                   push esi
// 005ce123  8bd9                 mov ebx, ecx
// 005ce125  57                   push edi
// 005ce126  8b7b08               mov edi, dword ptr [ebx + 8]
// 005ce129  3b7b0c               cmp edi, dword ptr [ebx + 0xc]
// 005ce12c  7606                 jbe 0x5ce134
// 005ce12e  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ce134  85db                 test ebx, ebx
// 005ce136  7506                 jne 0x5ce13e
// 005ce138  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ce13e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005ce142  8b542424             mov edx, dword ptr [esp + 0x24]
// 005ce146  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005ce14a  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 005ce14e  8bf0                 mov esi, eax
// 005ce150  2bf7                 sub esi, edi
// 005ce152  52                   push edx
// 005ce153  c1fe02               sar esi, 2
// 005ce156  6a01                 push 1
// 005ce158  c1e605               shl esi, 5
// 005ce15b  83ec0c               sub esp, 0xc
// 005ce15e  8bfc                 mov edi, esp
// 005ce160  03f1                 add esi, ecx
// 005ce162  85ed                 test ebp, ebp
// 005ce164  c70700000000         mov dword ptr [edi], 0
// 005ce16a  894704               mov dword ptr [edi + 4], eax
// 005ce16d  894f08               mov dword ptr [edi + 8], ecx
// 005ce170  7506                 jne 0x5ce178
// 005ce172  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ce178  8bcb                 mov ecx, ebx
// 005ce17a  892f                 mov dword ptr [edi], ebp
// 005ce17c  e86ff0f3ff           call 0x50d1f0
// 005ce181  8b7b08               mov edi, dword ptr [ebx + 8]
// 005ce184  3b7b0c               cmp edi, dword ptr [ebx + 0xc]
// 005ce187  7606                 jbe 0x5ce18f
// 005ce189  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ce18f  85db                 test ebx, ebx
// 005ce191  897c241c             mov dword ptr [esp + 0x1c], edi
// 005ce195  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005ce19d  7506                 jne 0x5ce1a5
// 005ce19f  ff15d8e67700         call dword ptr [0x77e6d8]
// 005ce1a5  56                   push esi
// 005ce1a6  8b742418             mov esi, dword ptr [esp + 0x18]
// 005ce1aa  56                   push esi
// 005ce1ab  8d4c2420             lea ecx, [esp + 0x20]
// 005ce1af  895c2420             mov dword ptr [esp + 0x20], ebx
// 005ce1b3  e8f8e4f3ff           call 0x50c6b0
// 005ce1b8  5f                   pop edi
// 005ce1b9  8bc6                 mov eax, esi
// 005ce1bb  5e                   pop esi
// 005ce1bc  5d                   pop ebp
// 005ce1bd  5b                   pop ebx
// 005ce1be  c21400               ret 0x14
// library rbxgs/v8world\Contact.cpp (function ?insert@?$vector@_NV?$allocator@_N@std@@@std@@QAE?AV?$_Vb_iterator@V?$vector@_NV?$allocator@_N@std@@@std@@@2@V32@_N@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
