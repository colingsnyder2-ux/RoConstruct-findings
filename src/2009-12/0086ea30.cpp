// roc 2009-12 0086ea30  unit: CXTPResourceManager  size: 194 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0086ea30
//
// 0086ea30  6aff                 push -1
// 0086ea32  6858fa9500           push 0x95fa58
// 0086ea37  64a100000000         mov eax, dword ptr fs:[0]
// 0086ea3d  50                   push eax
// 0086ea3e  83ec08               sub esp, 8
// 0086ea41  53                   push ebx
// 0086ea42  55                   push ebp
// 0086ea43  56                   push esi
// 0086ea44  57                   push edi
// 0086ea45  a10052b600           mov eax, dword ptr [0xb65200]
// 0086ea4a  33c4                 xor eax, esp
// 0086ea4c  50                   push eax
// 0086ea4d  8d44241c             lea eax, [esp + 0x1c]
// 0086ea51  64a300000000         mov dword ptr fs:[0], eax
// 0086ea57  e864f6ffff           call 0x86e0c0
// 0086ea5c  8b6c2430             mov ebp, dword ptr [esp + 0x30]
// 0086ea60  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 0086ea64  8b1d4ccc9800         mov ebx, dword ptr [0x98cc4c]
// 0086ea6a  85c0                 test eax, eax
// 0086ea6c  7457                 je 0x86eac5
// 0086ea6e  0fb7f5               movzx esi, bp
// 0086ea71  6a04                 push 4
// 0086ea73  56                   push esi
// 0086ea74  50                   push eax
// 0086ea75  ff15ecb19800         call dword ptr [0x98b1ec]
// 0086ea7b  85c0                 test eax, eax
// 0086ea7d  7446                 je 0x86eac5
// 0086ea7f  8d4c2414             lea ecx, [esp + 0x14]
// 0086ea83  e878ffffff           call 0x86ea00
// 0086ea88  56                   push esi
// 0086ea89  6a04                 push 4
// 0086ea8b  56                   push esi
// 0086ea8c  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0086ea94  e84557f8ff           call 0x7f41de
// 0086ea99  50                   push eax
// 0086ea9a  ffd3                 call ebx
// 0086ea9c  50                   push eax
// 0086ea9d  8bcf                 mov ecx, edi
// 0086ea9f  e83457f8ff           call 0x7f41d8
// 0086eaa4  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0086eaac  8d4c2414             lea ecx, [esp + 0x14]
// 0086eab0  85c0                 test eax, eax
// 0086eab2  740c                 je 0x86eac0
// 0086eab4  e887fbffff           call 0x86e640
// 0086eab9  b801000000           mov eax, 1
// 0086eabe  eb1c                 jmp 0x86eadc
// 0086eac0  e87bfbffff           call 0x86e640
// 0086eac5  0fb7c5               movzx eax, bp
// 0086eac8  50                   push eax
// 0086eac9  6a04                 push 4
// 0086eacb  50                   push eax
// 0086eacc  e80d57f8ff           call 0x7f41de
// 0086ead1  50                   push eax
// 0086ead2  ffd3                 call ebx
// 0086ead4  50                   push eax
// 0086ead5  8bcf                 mov ecx, edi
// 0086ead7  e8fc56f8ff           call 0x7f41d8
// 0086eadc  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0086eae0  64890d00000000       mov dword ptr fs:[0], ecx
// 0086eae7  59                   pop ecx
// 0086eae8  5f                   pop edi
// 0086eae9  5e                   pop esi
// 0086eaea  5d                   pop ebp
// 0086eaeb  5b                   pop ebx
// 0086eaec  83c414               add esp, 0x14
// 0086eaef  c20800               ret 8
// copied from an identical function in another client (function ?LoadMenuA@CXTPResourceManager@@UAEHPAVCMenu@@I@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Common\XTPResourceManager.cpp