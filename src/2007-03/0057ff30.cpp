// roc 2007-03 0057ff30  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057ff30
//
// 0057ff30  56                   push esi
// 0057ff31  57                   push edi
// 0057ff32  e829ffffff           call 0x57fe60
// 0057ff37  8bf0                 mov esi, eax
// 0057ff39  56                   push esi
// 0057ff3a  ff15bcd27700         call dword ptr [0x77d2bc]
// 0057ff40  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057ff43  85c0                 test eax, eax
// 0057ff45  8d4e18               lea ecx, [esi + 0x18]
// 0057ff48  7412                 je 0x57ff5c
// 0057ff4a  8b10                 mov edx, dword ptr [eax]
// 0057ff4c  56                   push esi
// 0057ff4d  8911                 mov dword ptr [ecx], edx
// 0057ff4f  8bf8                 mov edi, eax
// 0057ff51  ff15b8d27700         call dword ptr [0x77d2b8]
// 0057ff57  8bc7                 mov eax, edi
// 0057ff59  5f                   pop edi
// 0057ff5a  5e                   pop esi
// 0057ff5b  c3                   ret 
// 0057ff5c  e8bfe9fdff           call 0x55e920
// 0057ff61  56                   push esi
// 0057ff62  8bf8                 mov edi, eax
// 0057ff64  ff15b8d27700         call dword ptr [0x77d2b8]
// 0057ff6a  8bc7                 mov eax, edi
// 0057ff6c  5f                   pop edi
// 0057ff6d  5e                   pop esi
// 0057ff6e  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAPAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
