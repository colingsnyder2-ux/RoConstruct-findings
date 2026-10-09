// roc 2009-12 00426da0  unit: boost::any::H::?$holder  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00426da0
//
// 00426da0  8b442404             mov eax, dword ptr [esp + 4]
// 00426da4  8b4804               mov ecx, dword ptr [eax + 4]
// 00426da7  85c9                 test ecx, ecx
// 00426da9  740e                 je 0x426db9
// 00426dab  8b11                 mov edx, dword ptr [ecx]
// 00426dad  8b02                 mov eax, dword ptr [edx]
// 00426daf  c744240401000000     mov dword ptr [esp + 4], 1
// 00426db7  ffe0                 jmp eax
// 00426db9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?destroy@?$allocator@VValue@Reflection@RBX@@@std@@QAEXPAVValue@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
