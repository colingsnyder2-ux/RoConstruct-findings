// roc 2007-08 0046d720  unit: RBX::LDraw2Lua::LuaWriter  size: 201 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0046d720
//
// 0046d720  6aff                 push -1
// 0046d722  6809f07400           push 0x74f009
// 0046d727  64a100000000         mov eax, dword ptr fs:[0]
// 0046d72d  50                   push eax
// 0046d72e  83ec1c               sub esp, 0x1c
// 0046d731  56                   push esi
// 0046d732  a188518b00           mov eax, dword ptr [0x8b5188]
// 0046d737  33c4                 xor eax, esp
// 0046d739  50                   push eax
// 0046d73a  8d442424             lea eax, [esp + 0x24]
// 0046d73e  64a300000000         mov dword ptr fs:[0], eax
// 0046d744  68031f0000           push 0x1f03
// 0046d749  ff15a8eb7700         call dword ptr [0x77eba8]
// 0046d74f  688c667900           push 0x79668c
// 0046d754  50                   push eax
// 0046d755  ff1544e97700         call dword ptr [0x77e944]
// 0046d75b  83c408               add esp, 8
// 0046d75e  85c0                 test eax, eax
// 0046d760  741b                 je 0x46d77d
// 0046d762  833dd8d98b0000       cmp dword ptr [0x8bd9d8], 0
// 0046d769  7412                 je 0x46d77d
// 0046d76b  833de0d98b0000       cmp dword ptr [0x8bd9e0], 0
// 0046d772  7409                 je 0x46d77d
// 0046d774  833dd4d98b0000       cmp dword ptr [0x8bd9d4], 0
// 0046d77b  7518                 jne 0x46d795
// 0046d77d  c6055bcf8b0000       mov byte ptr [0x8bcf5b], 0
// 0046d784  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046d788  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d78f  59                   pop ecx
// 0046d790  5e                   pop esi
// 0046d791  83c428               add esp, 0x28
// 0046d794  c3                   ret 
// 0046d795  e866feffff           call 0x46d600
// 0046d79a  6884347900           push 0x793484
// 0046d79f  8d4c240c             lea ecx, [esp + 0xc]
// 0046d7a3  8bf0                 mov esi, eax
// 0046d7a5  ff1598e67700         call dword ptr [0x77e698]
// 0046d7ab  8d442408             lea eax, [esp + 8]
// 0046d7af  50                   push eax
// 0046d7b0  56                   push esi
// 0046d7b1  c744243400000000     mov dword ptr [esp + 0x34], 0
// 0046d7b9  e8f2ad0900           call 0x5085b0
// 0046d7be  83c408               add esp, 8
// 0046d7c1  8d4c2408             lea ecx, [esp + 8]
// 0046d7c5  a25bcf8b00           mov byte ptr [0x8bcf5b], al
// 0046d7ca  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 0046d7d2  ff15ace67700         call dword ptr [0x77e6ac]
// 0046d7d8  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0046d7dc  64890d00000000       mov dword ptr fs:[0], ecx
// 0046d7e3  59                   pop ecx
// 0046d7e4  5e                   pop esi
// 0046d7e5  83c428               add esp, 0x28
// 0046d7e8  c3                   ret 
// library g3d-6.09/GLG3Dcpp\GLCaps.cpp (function ?checkBug_slowVBO@GLCaps@G3D@@CAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/GLCaps.cpp
