// roc 2007-08 00501f30  unit: G3D::Log  size: 174 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00501f30
//
// 00501f30  6aff                 push -1
// 00501f32  68c5fb7300           push 0x73fbc5
// 00501f37  64a100000000         mov eax, dword ptr fs:[0]
// 00501f3d  50                   push eax
// 00501f3e  83ec24               sub esp, 0x24
// 00501f41  53                   push ebx
// 00501f42  56                   push esi
// 00501f43  a188518b00           mov eax, dword ptr [0x8b5188]
// 00501f48  33c4                 xor eax, esp
// 00501f4a  50                   push eax
// 00501f4b  8d442430             lea eax, [esp + 0x30]
// 00501f4f  64a300000000         mov dword ptr fs:[0], eax
// 00501f55  33db                 xor ebx, ebx
// 00501f57  895c240c             mov dword ptr [esp + 0xc], ebx
// 00501f5b  a16c098c00           mov eax, dword ptr [0x8c096c]
// 00501f60  85c0                 test eax, eax
// 00501f62  7568                 jne 0x501fcc
// 00501f64  6a28                 push 0x28
// 00501f66  e88bdf1200           call 0x62fef6
// 00501f6b  8bf0                 mov esi, eax
// 00501f6d  83c404               add esp, 4
// 00501f70  89742410             mov dword ptr [esp + 0x10], esi
// 00501f74  85f6                 test esi, esi
// 00501f76  895c2438             mov dword ptr [esp + 0x38], ebx
// 00501f7a  742d                 je 0x501fa9
// 00501f7c  6844ff7900           push 0x79ff44
// 00501f81  8d4c2418             lea ecx, [esp + 0x18]
// 00501f85  ff1598e67700         call dword ptr [0x77e698]
// 00501f8b  6a00                 push 0
// 00501f8d  8d442418             lea eax, [esp + 0x18]
// 00501f91  bb01000000           mov ebx, 1
// 00501f96  50                   push eax
// 00501f97  8bce                 mov ecx, esi
// 00501f99  c644244001           mov byte ptr [esp + 0x40], 1
// 00501f9e  895c2414             mov dword ptr [esp + 0x14], ebx
// 00501fa2  e819fbffff           call 0x501ac0
// 00501fa7  eb02                 jmp 0x501fab
// 00501fa9  33c0                 xor eax, eax
// 00501fab  f6c301               test bl, 1
// 00501fae  a36c098c00           mov dword ptr [0x8c096c], eax
// 00501fb3  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 00501fbb  740f                 je 0x501fcc
// 00501fbd  8d4c2414             lea ecx, [esp + 0x14]
// 00501fc1  ff15ace67700         call dword ptr [0x77e6ac]
// 00501fc7  a16c098c00           mov eax, dword ptr [0x8c096c]
// 00501fcc  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00501fd0  64890d00000000       mov dword ptr fs:[0], ecx
// 00501fd7  59                   pop ecx
// 00501fd8  5e                   pop esi
// 00501fd9  5b                   pop ebx
// 00501fda  83c430               add esp, 0x30
// 00501fdd  c3                   ret 
// library g3d-6.09/G3Dcpp\Log.cpp (function ?common@Log@G3D@@SAPAV12@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/Log.cpp
