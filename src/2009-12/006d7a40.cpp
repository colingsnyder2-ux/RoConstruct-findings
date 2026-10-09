// roc 2009-12 006d7a40  unit: RBX::LaserTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d7a40
//
// 006d7a40  8b442410             mov eax, dword ptr [esp + 0x10]
// 006d7a44  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d7a48  8b542408             mov edx, dword ptr [esp + 8]
// 006d7a4c  50                   push eax
// 006d7a4d  51                   push ecx
// 006d7a4e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006d7a52  52                   push edx
// 006d7a53  e858ffffff           call 0x6d79b0
// 006d7a58  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?alloc@LuaAllocator@@SAPAXPAX0II@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
