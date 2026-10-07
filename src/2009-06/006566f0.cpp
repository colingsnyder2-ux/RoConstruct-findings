// roc 2009-06 006566f0  unit: RBX::LaserTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006566f0
//
// 006566f0  8b442410             mov eax, dword ptr [esp + 0x10]
// 006566f4  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006566f8  8b542408             mov edx, dword ptr [esp + 8]
// 006566fc  50                   push eax
// 006566fd  51                   push ecx
// 006566fe  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00656702  52                   push edx
// 00656703  e888ffffff           call 0x656690
// 00656708  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?alloc@LuaAllocator@@SAPAXPAX0II@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
