// roc 2008-06 0042d3d0  unit: boost::any::H::?$holder  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0042d3d0
//
// 0042d3d0  8b442404             mov eax, dword ptr [esp + 4]
// 0042d3d4  8b4804               mov ecx, dword ptr [eax + 4]
// 0042d3d7  85c9                 test ecx, ecx
// 0042d3d9  740e                 je 0x42d3e9
// 0042d3db  8b11                 mov edx, dword ptr [ecx]
// 0042d3dd  8b02                 mov eax, dword ptr [edx]
// 0042d3df  c744240401000000     mov dword ptr [esp + 4], 1
// 0042d3e7  ffe0                 jmp eax
// 0042d3e9  c20400               ret 4
// library rbxgs/script\LuaInstanceBridge.cpp (function ?destroy@?$allocator@VValue@Reflection@RBX@@@std@@QAEXPAVValue@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
