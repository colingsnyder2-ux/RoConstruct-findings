// roc 2010-06 00427200  unit: std::D::DU?$char_traits::V?$basic_string::?$holder  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00427200
//
// 00427200  8b442404             mov eax, dword ptr [esp + 4]
// 00427204  8b4804               mov ecx, dword ptr [eax + 4]
// 00427207  85c9                 test ecx, ecx
// 00427209  740e                 je 0x427219
// 0042720b  8b11                 mov edx, dword ptr [ecx]
// 0042720d  8b02                 mov eax, dword ptr [edx]
// 0042720f  c744240401000000     mov dword ptr [esp + 4], 1
// 00427217  ffe0                 jmp eax
// 00427219  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?destroy@?$allocator@VValue@Reflection@RBX@@@std@@QAEXPAVValue@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
