// roc 2007-03 00416f20  unit: seg_00410000  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00416f20
//
// 00416f20  56                   push esi
// 00416f21  57                   push edi
// 00416f22  8bf9                 mov edi, ecx
// 00416f24  8b4704               mov eax, dword ptr [edi + 4]
// 00416f27  8b30                 mov esi, dword ptr [eax]
// 00416f29  8900                 mov dword ptr [eax], eax
// 00416f2b  8b4704               mov eax, dword ptr [edi + 4]
// 00416f2e  894004               mov dword ptr [eax + 4], eax
// 00416f31  3b7704               cmp esi, dword ptr [edi + 4]
// 00416f34  c7470800000000       mov dword ptr [edi + 8], 0
// 00416f3b  7425                 je 0x416f62
// 00416f3d  53                   push ebx
// 00416f3e  8bff                 mov edi, edi
// 00416f40  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00416f43  85c9                 test ecx, ecx
// 00416f45  8b1e                 mov ebx, dword ptr [esi]
// 00416f47  7408                 je 0x416f51
// 00416f49  8b01                 mov eax, dword ptr [ecx]
// 00416f4b  8b10                 mov edx, dword ptr [eax]
// 00416f4d  6a01                 push 1
// 00416f4f  ffd2                 call edx
// 00416f51  56                   push esi
// 00416f52  e899712000           call 0x61e0f0
// 00416f57  83c404               add esp, 4
// 00416f5a  3b5f04               cmp ebx, dword ptr [edi + 4]
// 00416f5d  8bf3                 mov esi, ebx
// 00416f5f  75df                 jne 0x416f40
// 00416f61  5b                   pop ebx
// 00416f62  5f                   pop edi
// 00416f63  5e                   pop esi
// 00416f64  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ?clear@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
