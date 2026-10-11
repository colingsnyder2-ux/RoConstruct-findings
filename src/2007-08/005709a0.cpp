// roc 2007-08 005709a0  unit: RBX::Reflection::VGenericSlotWrapper::?$sp_counted_impl_p  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005709a0
//
// 005709a0  51                   push ecx
// 005709a1  53                   push ebx
// 005709a2  55                   push ebp
// 005709a3  8b2dd8e67700         mov ebp, dword ptr [0x77e6d8]
// 005709a9  56                   push esi
// 005709aa  57                   push edi
// 005709ab  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005709af  894c2410             mov dword ptr [esp + 0x10], ecx
// 005709b3  8b7704               mov esi, dword ptr [edi + 4]
// 005709b6  3b7708               cmp esi, dword ptr [edi + 8]
// 005709b9  7605                 jbe 0x5709c0
// 005709bb  ffd5                 call ebp
// 005709bd  8d4900               lea ecx, [ecx]
// 005709c0  8b5f08               mov ebx, dword ptr [edi + 8]
// 005709c3  395f04               cmp dword ptr [edi + 4], ebx
// 005709c6  7602                 jbe 0x5709ca
// 005709c8  ffd5                 call ebp
// 005709ca  3bf3                 cmp esi, ebx
// 005709cc  741f                 je 0x5709ed
// 005709ce  3b7708               cmp esi, dword ptr [edi + 8]
// 005709d1  7202                 jb 0x5709d5
// 005709d3  ffd5                 call ebp
// 005709d5  8b06                 mov eax, dword ptr [esi]
// 005709d7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005709db  50                   push eax
// 005709dc  e83ffeffff           call 0x570820
// 005709e1  3b7708               cmp esi, dword ptr [edi + 8]
// 005709e4  7202                 jb 0x5709e8
// 005709e6  ffd5                 call ebp
// 005709e8  83c604               add esi, 4
// 005709eb  ebd3                 jmp 0x5709c0
// 005709ed  8b7f20               mov edi, dword ptr [edi + 0x20]
// 005709f0  85ff                 test edi, edi
// 005709f2  75bf                 jne 0x5709b3
// 005709f4  5f                   pop edi
// 005709f5  5e                   pop esi
// 005709f6  5d                   pop ebp
// 005709f7  5b                   pop ebx
// 005709f8  59                   pop ecx
// 005709f9  c20400               ret 4
// library openrbx-client/App\reflection\reflection_object.cpp (function ?mergeMembers@?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@IAEXPBV123@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/reflection/reflection_object.cpp
