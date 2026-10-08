// roc 2011-06 0040d6e0  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0040d6e0
//
// 0040d6e0  56                   push esi
// 0040d6e1  8bf1                 mov esi, ecx
// 0040d6e3  8b4614               mov eax, dword ptr [esi + 0x14]
// 0040d6e6  57                   push edi
// 0040d6e7  33ff                 xor edi, edi
// 0040d6e9  3bc7                 cmp eax, edi
// 0040d6eb  7409                 je 0x40d6f6
// 0040d6ed  50                   push eax
// 0040d6ee  e865c93f00           call 0x80a058
// 0040d6f3  83c404               add esp, 4
// 0040d6f6  897e14               mov dword ptr [esi + 0x14], edi
// 0040d6f9  897e18               mov dword ptr [esi + 0x18], edi
// 0040d6fc  897e1c               mov dword ptr [esi + 0x1c], edi
// 0040d6ff  8b4604               mov eax, dword ptr [esi + 4]
// 0040d702  3bc7                 cmp eax, edi
// 0040d704  7409                 je 0x40d70f
// 0040d706  50                   push eax
// 0040d707  e84cc93f00           call 0x80a058
// 0040d70c  83c404               add esp, 4
// 0040d70f  897e04               mov dword ptr [esi + 4], edi
// 0040d712  897e08               mov dword ptr [esi + 8], edi
// 0040d715  897e0c               mov dword ptr [esi + 0xc], edi
// 0040d718  5f                   pop edi
// 0040d719  5e                   pop esi
// 0040d71a  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
