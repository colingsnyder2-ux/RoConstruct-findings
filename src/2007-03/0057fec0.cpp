// roc 2007-03 0057fec0  unit: seg_00570000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0057fec0
//
// 0057fec0  56                   push esi
// 0057fec1  57                   push edi
// 0057fec2  e839ffffff           call 0x57fe00
// 0057fec7  8bf0                 mov esi, eax
// 0057fec9  56                   push esi
// 0057feca  ff15bcd27700         call dword ptr [0x77d2bc]
// 0057fed0  8b4618               mov eax, dword ptr [esi + 0x18]
// 0057fed3  85c0                 test eax, eax
// 0057fed5  8d4e18               lea ecx, [esi + 0x18]
// 0057fed8  7412                 je 0x57feec
// 0057feda  8b10                 mov edx, dword ptr [eax]
// 0057fedc  56                   push esi
// 0057fedd  8911                 mov dword ptr [ecx], edx
// 0057fedf  8bf8                 mov edi, eax
// 0057fee1  ff15b8d27700         call dword ptr [0x77d2b8]
// 0057fee7  8bc7                 mov eax, edi
// 0057fee9  5f                   pop edi
// 0057feea  5e                   pop esi
// 0057feeb  c3                   ret 
// 0057feec  e82feafdff           call 0x55e920
// 0057fef1  56                   push esi
// 0057fef2  8bf8                 mov edi, eax
// 0057fef4  ff15b8d27700         call dword ptr [0x77d2b8]
// 0057fefa  8bc7                 mov eax, edi
// 0057fefc  5f                   pop edi
// 0057fefd  5e                   pop esi
// 0057fefe  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?malloc@?$singleton_pool@VLuaAllocator@@$0CA@Udefault_user_allocator_new_delete@boost@@Vwin32_mutex@pool@details@3@$0CA@@boost@@SAPAXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
