// roc 2010-06 00649930  unit: RBX::LaserTool  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00649930
//
// 00649930  8b442410             mov eax, dword ptr [esp + 0x10]
// 00649934  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00649938  8b542408             mov edx, dword ptr [esp + 8]
// 0064993c  50                   push eax
// 0064993d  51                   push ecx
// 0064993e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00649942  52                   push edx
// 00649943  e858ffffff           call 0x6498a0
// 00649948  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?alloc@LuaAllocator@@SAPAXPAX0II@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
