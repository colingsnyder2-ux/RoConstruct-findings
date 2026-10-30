// from server: 100% by auto
// roc 2008-06 0075f8c0  unit: CXTPDockingPaneTabbedContainer  size: 288 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0075f8c0
//
// 0075f8c0  83ec18               sub esp, 0x18
// 0075f8c3  53                   push ebx
// 0075f8c4  57                   push edi
// 0075f8c5  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0075f8c9  8bd9                 mov ebx, ecx
// 0075f8cb  85ff                 test edi, edi
// 0075f8cd  750d                 jne 0x75f8dc
// 0075f8cf  5f                   pop edi
// 0075f8d0  b857000780           mov eax, 0x80070057
// 0075f8d5  5b                   pop ebx
// 0075f8d6  83c418               add esp, 0x18
// 0075f8d9  c20c00               ret 0xc
// 0075f8dc  56                   push esi
// 0075f8dd  33c0                 xor eax, eax
// 0075f8df  8db3c8feffff         lea esi, [ebx - 0x138]
// 0075f8e5  668907               mov word ptr [edi], ax
// 0075f8e8  85f6                 test esi, esi
// 0075f8ea  7405                 je 0x75f8f1
// 0075f8ec  394620               cmp dword ptr [esi + 0x20], eax
// 0075f8ef  750e                 jne 0x75f8ff
// 0075f8f1  5e                   pop esi
// 0075f8f2  5f                   pop edi
// 0075f8f3  b801000000           mov eax, 1
// 0075f8f8  5b                   pop ebx
// 0075f8f9  83c418               add esp, 0x18
// 0075f8fc  c20c00               ret 0xc
// 0075f8ff  55                   push ebp
// 0075f900  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 0075f904  56                   push esi
// 0075f905  8d4c241c             lea ecx, [esp + 0x1c]
// 0075f909  e8c281f9ff           call 0x6f7ad0
// 0075f90e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 0075f912  51                   push ecx
// 0075f913  55                   push ebp
// 0075f914  50                   push eax
// 0075f915  ff152c2d8000         call dword ptr [0x802d2c]
// 0075f91b  85c0                 test eax, eax
// 0075f91d  0f8486000000         je 0x75f9a9
// 0075f923  8b8be8feffff         mov ecx, dword ptr [ebx - 0x118]
// 0075f929  8b542430             mov edx, dword ptr [esp + 0x30]
// 0075f92d  8d442410             lea eax, [esp + 0x10]
// 0075f931  50                   push eax
// 0075f932  51                   push ecx
// 0075f933  896c2418             mov dword ptr [esp + 0x18], ebp
// 0075f937  8954241c             mov dword ptr [esp + 0x1c], edx
// 0075f93b  ff15a02d8000         call dword ptr [0x802da0]
// 0075f941  8b542414             mov edx, dword ptr [esp + 0x14]
// 0075f945  8b442410             mov eax, dword ptr [esp + 0x10]
// 0075f949  52                   push edx
// 0075f94a  50                   push eax
// 0075f94b  8bce                 mov ecx, esi
// 0075f94d  e82eecffff           call 0x75e580
// 0075f952  83f8fe               cmp eax, -2
// 0075f955  751b                 jne 0x75f972
// 0075f957  5d                   pop ebp
// 0075f958  b903000000           mov ecx, 3
// 0075f95d  5e                   pop esi
// 0075f95e  66890f               mov word ptr [edi], cx
// 0075f961  c7470800000000       mov dword ptr [edi + 8], 0
// 0075f968  5f                   pop edi
// 0075f969  33c0                 xor eax, eax
// 0075f96b  5b                   pop ebx
// 0075f96c  83c418               add esp, 0x18
// 0075f96f  c20c00               ret 0xc
// 0075f972  83f8ff               cmp eax, -1
// 0075f975  7541                 jne 0x75f9b8
// 0075f977  ba09000000           mov edx, 9
// 0075f97c  668917               mov word ptr [edi], dx
// 0075f97f  8b436c               mov eax, dword ptr [ebx + 0x6c]
// 0075f982  85c0                 test eax, eax
// 0075f984  7423                 je 0x75f9a9
// 0075f986  8b80b4000000         mov eax, dword ptr [eax + 0xb4]
// 0075f98c  83c708               add edi, 8
// 0075f98f  57                   push edi
// 0075f990  681c028500           push 0x85021c
// 0075f995  6a00                 push 0
// 0075f997  50                   push eax
// 0075f998  8bcb                 mov ecx, ebx
// 0075f99a  e8d193f8ff           call 0x6e8d70
// 0075f99f  5d                   pop ebp
// 0075f9a0  5e                   pop esi
// 0075f9a1  5f                   pop edi
// 0075f9a2  5b                   pop ebx
// 0075f9a3  83c418               add esp, 0x18
// 0075f9a6  c20c00               ret 0xc
// 0075f9a9  5d                   pop ebp
// 0075f9aa  5e                   pop esi
// 0075f9ab  5f                   pop edi
// 0075f9ac  b801000000           mov eax, 1
// 0075f9b1  5b                   pop ebx
// 0075f9b2  83c418               add esp, 0x18
// 0075f9b5  c20c00               ret 0xc
// 0075f9b8  b909000000           mov ecx, 9
// 0075f9bd  6a01                 push 1
// 0075f9bf  66890f               mov word ptr [edi], cx
// 0075f9c2  50                   push eax
// 0075f9c3  8bce                 mov ecx, esi
// 0075f9c5  e8c6f6ffff           call 0x75f090
// 0075f9ca  8bc8                 mov ecx, eax
// 0075f9cc  e869c60500           call 0x7bc03a
// 0075f9d1  5d                   pop ebp
// 0075f9d2  5e                   pop esi
// 0075f9d3  894708               mov dword ptr [edi + 8], eax
// 0075f9d6  5f                   pop edi
// 0075f9d7  33c0                 xor eax, eax
// 0075f9d9  5b                   pop ebx
// 0075f9da  83c418               add esp, 0x18
// 0075f9dd  c20c00               ret 0xc
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?AccessibleHitTest@CXTPDockingPaneTabbedContainer@@MAEJJJPAUtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
