// roc 2011-06 004183e0  unit: VCRbxObject::?$CComObjectNoLock  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004183e0
//
// 004183e0  8b442404             mov eax, dword ptr [esp + 4]
// 004183e4  8b4804               mov ecx, dword ptr [eax + 4]
// 004183e7  85c9                 test ecx, ecx
// 004183e9  740e                 je 0x4183f9
// 004183eb  8b11                 mov edx, dword ptr [ecx]
// 004183ed  8b02                 mov eax, dword ptr [edx]
// 004183ef  c744240401000000     mov dword ptr [esp + 4], 1
// 004183f7  ffe0                 jmp eax
// 004183f9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?destroy@?$allocator@VValue@Reflection@RBX@@@std@@QAEXPAVValue@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
