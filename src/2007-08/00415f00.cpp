// roc 2007-08 00415f00  unit: RBX::VInstance::?$NonFactoryProduct  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415f00
//
// 00415f00  56                   push esi
// 00415f01  57                   push edi
// 00415f02  8bf9                 mov edi, ecx
// 00415f04  8b4704               mov eax, dword ptr [edi + 4]
// 00415f07  8b30                 mov esi, dword ptr [eax]
// 00415f09  8900                 mov dword ptr [eax], eax
// 00415f0b  8b4704               mov eax, dword ptr [edi + 4]
// 00415f0e  894004               mov dword ptr [eax + 4], eax
// 00415f11  3b7704               cmp esi, dword ptr [edi + 4]
// 00415f14  c7470800000000       mov dword ptr [edi + 8], 0
// 00415f1b  7425                 je 0x415f42
// 00415f1d  53                   push ebx
// 00415f1e  8bff                 mov edi, edi
// 00415f20  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00415f23  85c9                 test ecx, ecx
// 00415f25  8b1e                 mov ebx, dword ptr [esi]
// 00415f27  7408                 je 0x415f31
// 00415f29  8b01                 mov eax, dword ptr [ecx]
// 00415f2b  8b10                 mov edx, dword ptr [eax]
// 00415f2d  6a01                 push 1
// 00415f2f  ffd2                 call edx
// 00415f31  56                   push esi
// 00415f32  e82b9d2100           call 0x62fc62
// 00415f37  83c404               add esp, 4
// 00415f3a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00415f3d  8bf3                 mov esi, ebx
// 00415f3f  75df                 jne 0x415f20
// 00415f41  5b                   pop ebx
// 00415f42  5f                   pop edi
// 00415f43  5e                   pop esi
// 00415f44  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?clear@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
