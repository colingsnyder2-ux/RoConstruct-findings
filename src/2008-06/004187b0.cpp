// roc 2008-06 004187b0  unit: VCContent::?$CComContainedObject  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004187b0
//
// 004187b0  56                   push esi
// 004187b1  57                   push edi
// 004187b2  8bf9                 mov edi, ecx
// 004187b4  8b4714               mov eax, dword ptr [edi + 0x14]
// 004187b7  8b30                 mov esi, dword ptr [eax]
// 004187b9  8900                 mov dword ptr [eax], eax
// 004187bb  8b4714               mov eax, dword ptr [edi + 0x14]
// 004187be  894004               mov dword ptr [eax + 4], eax
// 004187c1  c7471800000000       mov dword ptr [edi + 0x18], 0
// 004187c8  3b7714               cmp esi, dword ptr [edi + 0x14]
// 004187cb  7425                 je 0x4187f2
// 004187cd  53                   push ebx
// 004187ce  8bff                 mov edi, edi
// 004187d0  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 004187d3  8b1e                 mov ebx, dword ptr [esi]
// 004187d5  85c9                 test ecx, ecx
// 004187d7  7408                 je 0x4187e1
// 004187d9  8b01                 mov eax, dword ptr [ecx]
// 004187db  8b10                 mov edx, dword ptr [eax]
// 004187dd  6a01                 push 1
// 004187df  ffd2                 call edx
// 004187e1  56                   push esi
// 004187e2  e8937e2800           call 0x6a067a
// 004187e7  83c404               add esp, 4
// 004187ea  8bf3                 mov esi, ebx
// 004187ec  3b5f14               cmp ebx, dword ptr [edi + 0x14]
// 004187ef  75df                 jne 0x4187d0
// 004187f1  5b                   pop ebx
// 004187f2  5f                   pop edi
// 004187f3  5e                   pop esi
// 004187f4  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ?clear@?$list@UItem@SignatureDescriptor@Reflection@RBX@@V?$allocator@UItem@SignatureDescriptor@Reflection@RBX@@@std@@@std@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
