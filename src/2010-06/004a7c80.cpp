// roc 2010-06 004a7c80  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004a7c80
//
// 004a7c80  56                   push esi
// 004a7c81  57                   push edi
// 004a7c82  8bf9                 mov edi, ecx
// 004a7c84  8b4714               mov eax, dword ptr [edi + 0x14]
// 004a7c87  8b30                 mov esi, dword ptr [eax]
// 004a7c89  8900                 mov dword ptr [eax], eax
// 004a7c8b  8b4714               mov eax, dword ptr [edi + 0x14]
// 004a7c8e  894004               mov dword ptr [eax + 4], eax
// 004a7c91  c7471800000000       mov dword ptr [edi + 0x18], 0
// 004a7c98  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004a7c9b  7425                 je 0x4a7cc2
// 004a7c9d  53                   push ebx
// 004a7c9e  8bff                 mov edi, edi
// 004a7ca0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004a7ca3  8b1e                 mov ebx, dword ptr [esi]
// 004a7ca5  85c9                 test ecx, ecx
// 004a7ca7  7408                 je 0x4a7cb1
// 004a7ca9  8b01                 mov eax, dword ptr [ecx]
// 004a7cab  8b10                 mov edx, dword ptr [eax]
// 004a7cad  6a01                 push 1
// 004a7caf  ffd2                 call edx
// 004a7cb1  56                   push esi
// 004a7cb2  e8e3fc2f00           call 0x7a799a
// 004a7cb7  83c404               add esp, 4
// 004a7cba  8bf3                 mov esi, ebx
// 004a7cbc  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 004a7cbf  75df                 jne 0x4a7ca0
// 004a7cc1  5b                   pop ebx
// 004a7cc2  5f                   pop edi
// 004a7cc3  5e                   pop esi
// 004a7cc4  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?clear@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
