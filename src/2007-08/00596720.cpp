// roc 2007-08 00596720  unit: RBX::LaserTool  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00596720
//
// 00596720  56                   push esi
// 00596721  57                   push edi
// 00596722  e839ffffff           call 0x596660
// 00596727  8bf0                 mov esi, eax
// 00596729  56                   push esi
// 0059672a  ff15fcd27700         call dword ptr [0x77d2fc]
// 00596730  8b4618               mov eax, dword ptr [esi + 0x18]
// 00596733  85c0                 test eax, eax
// 00596735  8d4e18               lea ecx, [esi + 0x18]
// 00596738  7412                 je 0x59674c
// 0059673a  8b10                 mov edx, dword ptr [eax]
// 0059673c  56                   push esi
// 0059673d  8911                 mov dword ptr [ecx], edx
// 0059673f  8bf8                 mov edi, eax
// 00596741  ff15f8d27700         call dword ptr [0x77d2f8]
// 00596747  8bc7                 mov eax, edi
// 00596749  5f                   pop edi
// 0059674a  5e                   pop esi
// 0059674b  c3                   ret 
// 0059674c  e84ffeffff           call 0x5965a0
// 00596751  56                   push esi
// 00596752  8bf8                 mov edi, eax
// 00596754  ff15f8d27700         call dword ptr [0x77d2f8]
// 0059675a  8bc7                 mov eax, edi
// 0059675c  5f                   pop edi
// 0059675d  5e                   pop esi
// 0059675e  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAPAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
