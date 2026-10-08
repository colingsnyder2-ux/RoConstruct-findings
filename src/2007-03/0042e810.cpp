// roc 2007-03 0042e810  unit: seg_00420000  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042e810
//
// 0042e810  8b442404             mov eax, dword ptr [esp + 4]
// 0042e814  8b4804               mov ecx, dword ptr [eax + 4]
// 0042e817  85c9                 test ecx, ecx
// 0042e819  740e                 je 0x42e829
// 0042e81b  8b11                 mov edx, dword ptr [ecx]
// 0042e81d  8b02                 mov eax, dword ptr [edx]
// 0042e81f  c744240401000000     mov dword ptr [esp + 4], 1
// 0042e827  ffe0                 jmp eax
// 0042e829  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?destroy@?$allocator@VValue@Reflection@RBX@@@std@@QAEXPAVValue@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
