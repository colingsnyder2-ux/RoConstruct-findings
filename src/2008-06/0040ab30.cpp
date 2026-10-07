// roc 2008-06 0040ab30  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040ab30
//
// 0040ab30  56                   push esi
// 0040ab31  8bf1                 mov esi, ecx
// 0040ab33  8b4624               mov eax, dword ptr [esi + 0x24]
// 0040ab36  57                   push edi
// 0040ab37  33ff                 xor edi, edi
// 0040ab39  3bc7                 cmp eax, edi
// 0040ab3b  7409                 je 0x40ab46
// 0040ab3d  50                   push eax
// 0040ab3e  e8375b2900           call 0x6a067a
// 0040ab43  83c404               add esp, 4
// 0040ab46  8b4618               mov eax, dword ptr [esi + 0x18]
// 0040ab49  50                   push eax
// 0040ab4a  897e24               mov dword ptr [esi + 0x24], edi
// 0040ab4d  897e28               mov dword ptr [esi + 0x28], edi
// 0040ab50  897e2c               mov dword ptr [esi + 0x2c], edi
// 0040ab53  e8225b2900           call 0x6a067a
// 0040ab58  8b460c               mov eax, dword ptr [esi + 0xc]
// 0040ab5b  83c404               add esp, 4
// 0040ab5e  3bc7                 cmp eax, edi
// 0040ab60  7409                 je 0x40ab6b
// 0040ab62  50                   push eax
// 0040ab63  e8125b2900           call 0x6a067a
// 0040ab68  83c404               add esp, 4
// 0040ab6b  8b0e                 mov ecx, dword ptr [esi]
// 0040ab6d  51                   push ecx
// 0040ab6e  897e0c               mov dword ptr [esi + 0xc], edi
// 0040ab71  897e10               mov dword ptr [esi + 0x10], edi
// 0040ab74  897e14               mov dword ptr [esi + 0x14], edi
// 0040ab77  e8fe5a2900           call 0x6a067a
// 0040ab7c  83c404               add esp, 4
// 0040ab7f  5f                   pop edi
// 0040ab80  5e                   pop esi
// 0040ab81  c3                   ret 
// library rbxgs/reflection\reflection_object.cpp (function ??1?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_object.cpp
