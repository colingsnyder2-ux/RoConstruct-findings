// roc 2008-06 005c8bd0  unit: RBX::LaserTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8bd0
//
// 005c8bd0  56                   push esi
// 005c8bd1  57                   push edi
// 005c8bd2  e829ffffff           call 0x5c8b00
// 005c8bd7  8bf0                 mov esi, eax
// 005c8bd9  56                   push esi
// 005c8bda  ff15d4228000         call dword ptr [0x8022d4]
// 005c8be0  8b4618               mov eax, dword ptr [esi + 0x18]
// 005c8be3  8d4e18               lea ecx, [esi + 0x18]
// 005c8be6  85c0                 test eax, eax
// 005c8be8  7412                 je 0x5c8bfc
// 005c8bea  8b10                 mov edx, dword ptr [eax]
// 005c8bec  56                   push esi
// 005c8bed  8911                 mov dword ptr [ecx], edx
// 005c8bef  8bf8                 mov edi, eax
// 005c8bf1  ff15f4218000         call dword ptr [0x8021f4]
// 005c8bf7  8bc7                 mov eax, edi
// 005c8bf9  5f                   pop edi
// 005c8bfa  5e                   pop esi
// 005c8bfb  c3                   ret 
// 005c8bfc  e8dffdffff           call 0x5c89e0
// 005c8c01  56                   push esi
// 005c8c02  8bf8                 mov edi, eax
// 005c8c04  ff15f4218000         call dword ptr [0x8021f4]
// 005c8c0a  8bc7                 mov eax, edi
// 005c8c0c  5f                   pop edi
// 005c8c0d  5e                   pop esi
// 005c8c0e  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAPAXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
