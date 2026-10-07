// roc 2008-06 005c8b60  unit: RBX::LaserTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8b60
//
// 005c8b60  56                   push esi
// 005c8b61  57                   push edi
// 005c8b62  e839ffffff           call 0x5c8aa0
// 005c8b67  8bf0                 mov esi, eax
// 005c8b69  56                   push esi
// 005c8b6a  ff15d4228000         call dword ptr [0x8022d4]
// 005c8b70  8b4618               mov eax, dword ptr [esi + 0x18]
// 005c8b73  8d4e18               lea ecx, [esi + 0x18]
// 005c8b76  85c0                 test eax, eax
// 005c8b78  7412                 je 0x5c8b8c
// 005c8b7a  8b10                 mov edx, dword ptr [eax]
// 005c8b7c  56                   push esi
// 005c8b7d  8911                 mov dword ptr [ecx], edx
// 005c8b7f  8bf8                 mov edi, eax
// 005c8b81  ff15f4218000         call dword ptr [0x8021f4]
// 005c8b87  8bc7                 mov eax, edi
// 005c8b89  5f                   pop edi
// 005c8b8a  5e                   pop esi
// 005c8b8b  c3                   ret 
// 005c8b8c  e84ffeffff           call 0x5c89e0
// 005c8b91  56                   push esi
// 005c8b92  8bf8                 mov edi, eax
// 005c8b94  ff15f4218000         call dword ptr [0x8021f4]
// 005c8b9a  8bc7                 mov eax, edi
// 005c8b9c  5f                   pop edi
// 005c8b9d  5e                   pop esi
// 005c8b9e  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAPAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
