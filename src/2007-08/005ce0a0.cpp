// roc 2007-08 005ce0a0  unit: RBX::BlockBlockContact  size: 124 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ce0a0
//
// 005ce0a0  83ec18               sub esp, 0x18
// 005ce0a3  53                   push ebx
// 005ce0a4  8b1dd8e67700         mov ebx, dword ptr [0x77e6d8]
// 005ce0aa  56                   push esi
// 005ce0ab  8bf1                 mov esi, ecx
// 005ce0ad  57                   push edi
// 005ce0ae  8b7e08               mov edi, dword ptr [esi + 8]
// 005ce0b1  3b7e0c               cmp edi, dword ptr [esi + 0xc]
// 005ce0b4  7602                 jbe 0x5ce0b8
// 005ce0b6  ffd3                 call ebx
// 005ce0b8  85f6                 test esi, esi
// 005ce0ba  897c2410             mov dword ptr [esp + 0x10], edi
// 005ce0be  c744241400000000     mov dword ptr [esp + 0x14], 0
// 005ce0c6  7502                 jne 0x5ce0ca
// 005ce0c8  ffd3                 call ebx
// 005ce0ca  8974240c             mov dword ptr [esp + 0xc], esi
// 005ce0ce  8b36                 mov esi, dword ptr [esi]
// 005ce0d0  85f6                 test esi, esi
// 005ce0d2  760a                 jbe 0x5ce0de
// 005ce0d4  56                   push esi
// 005ce0d5  8d4c2410             lea ecx, [esp + 0x10]
// 005ce0d9  e802e4f3ff           call 0x50c4e0
// 005ce0de  6a01                 push 1
// 005ce0e0  8d44241c             lea eax, [esp + 0x1c]
// 005ce0e4  50                   push eax
// 005ce0e5  8d4c2414             lea ecx, [esp + 0x14]
// 005ce0e9  e832e6f3ff           call 0x50c720
// 005ce0ee  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 005ce0f2  8bf0                 mov esi, eax
// 005ce0f4  833e00               cmp dword ptr [esi], 0
// 005ce0f7  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ce0fa  8b5608               mov edx, dword ptr [esi + 8]
// 005ce0fd  c70700000000         mov dword ptr [edi], 0
// 005ce103  894f04               mov dword ptr [edi + 4], ecx
// 005ce106  895708               mov dword ptr [edi + 8], edx
// 005ce109  7502                 jne 0x5ce10d
// 005ce10b  ffd3                 call ebx
// 005ce10d  8b06                 mov eax, dword ptr [esi]
// 005ce10f  8907                 mov dword ptr [edi], eax
// 005ce111  8bc7                 mov eax, edi
// 005ce113  5f                   pop edi
// 005ce114  5e                   pop esi
// 005ce115  5b                   pop ebx
// 005ce116  83c418               add esp, 0x18
// 005ce119  c20400               ret 4
// library rbxgs/v8world\Contact.cpp (function ?back@?$vector@_NV?$allocator@_N@std@@@std@@QAE?AV?$_Vb_reference@V?$vector@_NV?$allocator@_N@std@@@std@@@2@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Contact.cpp
