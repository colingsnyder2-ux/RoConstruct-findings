// roc 2007-08 00596790  unit: RBX::LaserTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596790
//
// 00596790  56                   push esi
// 00596791  57                   push edi
// 00596792  e829ffffff           call 0x5966c0
// 00596797  8bf0                 mov esi, eax
// 00596799  56                   push esi
// 0059679a  ff15fcd27700         call dword ptr [0x77d2fc]
// 005967a0  8b4618               mov eax, dword ptr [esi + 0x18]
// 005967a3  85c0                 test eax, eax
// 005967a5  8d4e18               lea ecx, [esi + 0x18]
// 005967a8  7412                 je 0x5967bc
// 005967aa  8b10                 mov edx, dword ptr [eax]
// 005967ac  56                   push esi
// 005967ad  8911                 mov dword ptr [ecx], edx
// 005967af  8bf8                 mov edi, eax
// 005967b1  ff15f8d27700         call dword ptr [0x77d2f8]
// 005967b7  8bc7                 mov eax, edi
// 005967b9  5f                   pop edi
// 005967ba  5e                   pop esi
// 005967bb  c3                   ret 
// 005967bc  e8dffdffff           call 0x5965a0
// 005967c1  56                   push esi
// 005967c2  8bf8                 mov edi, eax
// 005967c4  ff15f8d27700         call dword ptr [0x77d2f8]
// 005967ca  8bc7                 mov eax, edi
// 005967cc  5f                   pop edi
// 005967cd  5e                   pop esi
// 005967ce  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAPAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
