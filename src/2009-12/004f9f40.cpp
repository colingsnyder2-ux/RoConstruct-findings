// roc 2009-12 004f9f40  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004f9f40
//
// 004f9f40  56                   push esi
// 004f9f41  57                   push edi
// 004f9f42  8bf9                 mov edi, ecx
// 004f9f44  8b4714               mov eax, dword ptr [edi + 0x14]
// 004f9f47  8b30                 mov esi, dword ptr [eax]
// 004f9f49  8900                 mov dword ptr [eax], eax
// 004f9f4b  8b4714               mov eax, dword ptr [edi + 0x14]
// 004f9f4e  894004               mov dword ptr [eax + 4], eax
// 004f9f51  c7471800000000       mov dword ptr [edi + 0x18], 0
// 004f9f58  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004f9f5b  7425                 je 0x4f9f82
// 004f9f5d  53                   push ebx
// 004f9f5e  8bff                 mov edi, edi
// 004f9f60  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004f9f63  8b1e                 mov ebx, dword ptr [esi]
// 004f9f65  85c9                 test ecx, ecx
// 004f9f67  7408                 je 0x4f9f71
// 004f9f69  8b01                 mov eax, dword ptr [ecx]
// 004f9f6b  8b10                 mov edx, dword ptr [eax]
// 004f9f6d  6a01                 push 1
// 004f9f6f  ffd2                 call edx
// 004f9f71  56                   push esi
// 004f9f72  e8e3982f00           call 0x7f385a
// 004f9f77  83c404               add esp, 4
// 004f9f7a  8bf3                 mov esi, ebx
// 004f9f7c  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 004f9f7f  75df                 jne 0x4f9f60
// 004f9f81  5b                   pop ebx
// 004f9f82  5f                   pop edi
// 004f9f83  5e                   pop esi
// 004f9f84  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?clear@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
