// roc 2010-06 0040a370  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0040a370
//
// 0040a370  56                   push esi
// 0040a371  8bf1                 mov esi, ecx
// 0040a373  8b4624               mov eax, dword ptr [esi + 0x24]
// 0040a376  57                   push edi
// 0040a377  33ff                 xor edi, edi
// 0040a379  3bc7                 cmp eax, edi
// 0040a37b  7409                 je 0x40a386
// 0040a37d  50                   push eax
// 0040a37e  e817d63900           call 0x7a799a
// 0040a383  83c404               add esp, 4
// 0040a386  8b4618               mov eax, dword ptr [esi + 0x18]
// 0040a389  50                   push eax
// 0040a38a  897e24               mov dword ptr [esi + 0x24], edi
// 0040a38d  897e28               mov dword ptr [esi + 0x28], edi
// 0040a390  897e2c               mov dword ptr [esi + 0x2c], edi
// 0040a393  e802d63900           call 0x7a799a
// 0040a398  8b460c               mov eax, dword ptr [esi + 0xc]
// 0040a39b  83c404               add esp, 4
// 0040a39e  3bc7                 cmp eax, edi
// 0040a3a0  7409                 je 0x40a3ab
// 0040a3a2  50                   push eax
// 0040a3a3  e8f2d53900           call 0x7a799a
// 0040a3a8  83c404               add esp, 4
// 0040a3ab  8b0e                 mov ecx, dword ptr [esi]
// 0040a3ad  51                   push ecx
// 0040a3ae  897e0c               mov dword ptr [esi + 0xc], edi
// 0040a3b1  897e10               mov dword ptr [esi + 0x10], edi
// 0040a3b4  897e14               mov dword ptr [esi + 0x14], edi
// 0040a3b7  e8ded53900           call 0x7a799a
// 0040a3bc  83c404               add esp, 4
// 0040a3bf  5f                   pop edi
// 0040a3c0  5e                   pop esi
// 0040a3c1  c3                   ret 
// library rbxgs/reflection\reflection_object.cpp (function ??1?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
