// roc 2009-06 004b7190  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004b7190
//
// 004b7190  56                   push esi
// 004b7191  57                   push edi
// 004b7192  8bf9                 mov edi, ecx
// 004b7194  8b4714               mov eax, dword ptr [edi + 0x14]
// 004b7197  8b30                 mov esi, dword ptr [eax]
// 004b7199  8900                 mov dword ptr [eax], eax
// 004b719b  8b4714               mov eax, dword ptr [edi + 0x14]
// 004b719e  894004               mov dword ptr [eax + 4], eax
// 004b71a1  c7471800000000       mov dword ptr [edi + 0x18], 0
// 004b71a8  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004b71ab  7425                 je 0x4b71d2
// 004b71ad  53                   push ebx
// 004b71ae  8bff                 mov edi, edi
// 004b71b0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004b71b3  8b1e                 mov ebx, dword ptr [esi]
// 004b71b5  85c9                 test ecx, ecx
// 004b71b7  7408                 je 0x4b71c1
// 004b71b9  8b01                 mov eax, dword ptr [ecx]
// 004b71bb  8b10                 mov edx, dword ptr [eax]
// 004b71bd  6a01                 push 1
// 004b71bf  ffd2                 call edx
// 004b71c1  56                   push esi
// 004b71c2  e86b182600           call 0x718a32
// 004b71c7  83c404               add esp, 4
// 004b71ca  8bf3                 mov esi, ebx
// 004b71cc  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 004b71cf  75df                 jne 0x4b71b0
// 004b71d1  5b                   pop ebx
// 004b71d2  5f                   pop edi
// 004b71d3  5e                   pop esi
// 004b71d4  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?clear@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
