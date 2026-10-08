// roc 2007-03 00417c40  unit: seg_00410000  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00417c40
//
// 00417c40  56                   push esi
// 00417c41  8bf1                 mov esi, ecx
// 00417c43  8b4614               mov eax, dword ptr [esi + 0x14]
// 00417c46  57                   push edi
// 00417c47  33ff                 xor edi, edi
// 00417c49  3bc7                 cmp eax, edi
// 00417c4b  7409                 je 0x417c56
// 00417c4d  50                   push eax
// 00417c4e  e89d642000           call 0x61e0f0
// 00417c53  83c404               add esp, 4
// 00417c56  897e14               mov dword ptr [esi + 0x14], edi
// 00417c59  897e18               mov dword ptr [esi + 0x18], edi
// 00417c5c  897e1c               mov dword ptr [esi + 0x1c], edi
// 00417c5f  8b4604               mov eax, dword ptr [esi + 4]
// 00417c62  3bc7                 cmp eax, edi
// 00417c64  7409                 je 0x417c6f
// 00417c66  50                   push eax
// 00417c67  e884642000           call 0x61e0f0
// 00417c6c  83c404               add esp, 4
// 00417c6f  897e04               mov dword ptr [esi + 4], edi
// 00417c72  897e08               mov dword ptr [esi + 8], edi
// 00417c75  897e0c               mov dword ptr [esi + 0xc], edi
// 00417c78  5f                   pop edi
// 00417c79  5e                   pop esi
// 00417c7a  c3                   ret 
// library rbxgs/humanoid\Humanoid.cpp (function ??1?$MemberDescriptorContainer@VPropertyDescriptor@Reflection@RBX@@@Reflection@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs humanoid/Humanoid.cpp
