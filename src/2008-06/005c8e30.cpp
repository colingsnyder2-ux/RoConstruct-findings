// roc 2008-06 005c8e30  unit: RBX::LaserTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c8e30
//
// 005c8e30  8b442410             mov eax, dword ptr [esp + 0x10]
// 005c8e34  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c8e38  8b542408             mov edx, dword ptr [esp + 8]
// 005c8e3c  50                   push eax
// 005c8e3d  51                   push ecx
// 005c8e3e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005c8e42  52                   push edx
// 005c8e43  e888ffffff           call 0x5c8dd0
// 005c8e48  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?alloc@LuaAllocator@@SAPAXPAX0II@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
