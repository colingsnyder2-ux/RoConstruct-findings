// roc 2008-06 0041aee0  unit: boost::signals::detail::slot_base::Udata_t::?$sp_counted_impl_p  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041aee0
//
// 0041aee0  56                   push esi
// 0041aee1  8bf1                 mov esi, ecx
// 0041aee3  8b460c               mov eax, dword ptr [esi + 0xc]
// 0041aee6  85c0                 test eax, eax
// 0041aee8  7418                 je 0x41af02
// 0041aeea  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 0041aeed  51                   push ecx
// 0041aeee  50                   push eax
// 0041aeef  8bce                 mov ecx, esi
// 0041aef1  e8eafeffff           call 0x41ade0
// 0041aef6  8b560c               mov edx, dword ptr [esi + 0xc]
// 0041aef9  52                   push edx
// 0041aefa  e87b572800           call 0x6a067a
// 0041aeff  83c404               add esp, 4
// 0041af02  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 0041af09  c7461000000000       mov dword ptr [esi + 0x10], 0
// 0041af10  c7461400000000       mov dword ptr [esi + 0x14], 0
// 0041af17  5e                   pop esi
// 0041af18  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ?_Tidy@?$vector@VValue@Reflection@RBX@@V?$allocator@VValue@Reflection@RBX@@@std@@@std@@IAEXXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
