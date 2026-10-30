// roc 2011-06 008c4150  unit: CXTPDockingPaneTabbedContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c4150
//
// 008c4150  83ec18               sub esp, 0x18
// 008c4153  53                   push ebx
// 008c4154  57                   push edi
// 008c4155  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 008c4159  8bd9                 mov ebx, ecx
// 008c415b  85ff                 test edi, edi
// 008c415d  750d                 jne 0x8c416c
// 008c415f  5f                   pop edi
// 008c4160  b857000780           mov eax, 0x80070057
// 008c4165  5b                   pop ebx
// 008c4166  83c418               add esp, 0x18
// 008c4169  c20c00               ret 0xc
// 008c416c  56                   push esi
// 008c416d  33c0                 xor eax, eax
// 008c416f  8db3c8feffff         lea esi, [ebx - 0x138]
// 008c4175  668907               mov word ptr [edi], ax
// 008c4178  85f6                 test esi, esi
// 008c417a  7405                 je 0x8c4181
// 008c417c  394620               cmp dword ptr [esi + 0x20], eax
// 008c417f  750e                 jne 0x8c418f
// 008c4181  5e                   pop esi
// 008c4182  5f                   pop edi
// 008c4183  b801000000           mov eax, 1
// 008c4188  5b                   pop ebx
// 008c4189  83c418               add esp, 0x18
// 008c418c  c20c00               ret 0xc
// 008c418f  55                   push ebp
// 008c4190  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 008c4194  56                   push esi
// 008c4195  8d4c241c             lea ecx, [esp + 0x1c]
// 008c4199  e8928bf9ff           call 0x85cd30
// 008c419e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 008c41a2  51                   push ecx
// 008c41a3  55                   push ebp
// 008c41a4  50                   push eax
// 008c41a5  ff15101ca400         call dword ptr [0xa41c10]
// 008c41ab  85c0                 test eax, eax
// 008c41ad  0f8486000000         je 0x8c4239
// 008c41b3  8b8be8feffff         mov ecx, dword ptr [ebx - 0x118]
// 008c41b9  8b542430             mov edx, dword ptr [esp + 0x30]
// 008c41bd  8d442410             lea eax, [esp + 0x10]
// 008c41c1  50                   push eax
// 008c41c2  51                   push ecx
// 008c41c3  896c2418             mov dword ptr [esp + 0x18], ebp
// 008c41c7  8954241c             mov dword ptr [esp + 0x1c], edx
// 008c41cb  ff15f419a400         call dword ptr [0xa419f4]
// 008c41d1  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c41d5  8b442410             mov eax, dword ptr [esp + 0x10]
// 008c41d9  52                   push edx
// 008c41da  50                   push eax
// 008c41db  8bce                 mov ecx, esi
// 008c41dd  e82eecffff           call 0x8c2e10
// 008c41e2  83f8fe               cmp eax, -2
// 008c41e5  751b                 jne 0x8c4202
// 008c41e7  5d                   pop ebp
// 008c41e8  b903000000           mov ecx, 3
// 008c41ed  5e                   pop esi
// 008c41ee  66890f               mov word ptr [edi], cx
// 008c41f1  c7470800000000       mov dword ptr [edi + 8], 0
// 008c41f8  5f                   pop edi
// 008c41f9  33c0                 xor eax, eax
// 008c41fb  5b                   pop ebx
// 008c41fc  83c418               add esp, 0x18
// 008c41ff  c20c00               ret 0xc
// 008c4202  83f8ff               cmp eax, -1
// 008c4205  7541                 jne 0x8c4248
// 008c4207  ba09000000           mov edx, 9
// 008c420c  668917               mov word ptr [edi], dx
// 008c420f  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 008c4212  85c0                 test eax, eax
// 008c4214  7423                 je 0x8c4239
// 008c4216  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 008c421c  83c708               add edi, 8
// 008c421f  57                   push edi
// 008c4220  68a091af00           push 0xaf91a0
// 008c4225  6a00                 push 0
// 008c4227  50                   push eax
// 008c4228  8bcb                 mov ecx, ebx
// 008c422a  e8d1dbf8ff           call 0x851e00
// 008c422f  5d                   pop ebp
// 008c4230  5e                   pop esi
// 008c4231  5f                   pop edi
// 008c4232  5b                   pop ebx
// 008c4233  83c418               add esp, 0x18
// 008c4236  c20c00               ret 0xc
// 008c4239  5d                   pop ebp
// 008c423a  5e                   pop esi
// 008c423b  5f                   pop edi
// 008c423c  b801000000           mov eax, 1
// 008c4241  5b                   pop ebx
// 008c4242  83c418               add esp, 0x18
// 008c4245  c20c00               ret 0xc
// 008c4248  b909000000           mov ecx, 9
// 008c424d  6a01                 push 1
// 008c424f  66890f               mov word ptr [edi], cx
// 008c4252  50                   push eax
// 008c4253  8bce                 mov ecx, esi
// 008c4255  e8c6f6ffff           call 0x8c3920
// 008c425a  8bc8                 mov ecx, eax
// 008c425c  e85d831000           call 0x9cc5be
// 008c4261  5d                   pop ebp
// 008c4262  5e                   pop esi
// 008c4263  894708               mov dword ptr [edi + 8], eax
// 008c4266  5f                   pop edi
// 008c4267  33c0                 xor eax, eax
// 008c4269  5b                   pop ebx
// 008c426a  83c418               add esp, 0x18
// 008c426d  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleHitTest@CXTPDockingPaneTabbedContainer@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
