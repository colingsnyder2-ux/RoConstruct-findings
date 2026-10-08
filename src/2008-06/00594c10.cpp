// from server: 100% by auto
// roc 2008-06 00594c10  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 104 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594c10
//
// 00594c10  55                   push ebp
// 00594c11  8bec                 mov ebp, esp
// 00594c13  6aff                 push -1
// 00594c15  68e01f7d00           push 0x7d1fe0
// 00594c1a  64a100000000         mov eax, dword ptr fs:[0]
// 00594c20  50                   push eax
// 00594c21  64892500000000       mov dword ptr fs:[0], esp
// 00594c28  83ec24               sub esp, 0x24
// 00594c2b  53                   push ebx
// 00594c2c  56                   push esi
// 00594c2d  57                   push edi
// 00594c2e  8965f0               mov dword ptr [ebp - 0x10], esp
// 00594c31  6a18                 push 0x18
// 00594c33  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00594c3a  e8e1bc1000           call 0x6a0920
// 00594c3f  8bf0                 mov esi, eax
// 00594c41  83c404               add esp, 4
// 00594c44  85f6                 test esi, esi
// 00594c46  7516                 jne 0x594c5e
// 00594c48  8d4de0               lea ecx, [ebp - 0x20]
// 00594c4b  e8e037fdff           call 0x568430
// 00594c50  68304f8d00           push 0x8d4f30
// 00594c55  8d45e0               lea eax, [ebp - 0x20]
// 00594c58  50                   push eax
// 00594c59  e82ec91000           call 0x6a158c
// 00594c5e  56                   push esi
// 00594c5f  ff15e0228000         call dword ptr [0x8022e0]
// 00594c65  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 00594c68  5f                   pop edi
// 00594c69  8bc6                 mov eax, esi
// 00594c6b  5e                   pop esi
// 00594c6c  64890d00000000       mov dword ptr fs:[0], ecx
// 00594c73  5b                   pop ebx
// 00594c74  8be5                 mov esp, ebp
// 00594c76  5d                   pop ebp
// 00594c77  c3                   ret 
// library boost-1.34.1/libs\thread\src\mutex.cpp (function ?new_critical_section@?A0x6a936049@@YAPAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/thread/src/mutex.cpp
