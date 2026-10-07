// roc 2009-06 00426210  unit: boost::any::H::?$holder  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00426210
//
// 00426210  8b442404             mov eax, dword ptr [esp + 4]
// 00426214  8b4804               mov ecx, dword ptr [eax + 4]
// 00426217  85c9                 test ecx, ecx
// 00426219  740e                 je 0x426229
// 0042621b  8b11                 mov edx, dword ptr [ecx]
// 0042621d  8b02                 mov eax, dword ptr [edx]
// 0042621f  c744240401000000     mov dword ptr [esp + 4], 1
// 00426227  ffe0                 jmp eax
// 00426229  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?destroy@?$allocator@VValue@Reflection@RBX@@@std@@QAEXPAVValue@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
