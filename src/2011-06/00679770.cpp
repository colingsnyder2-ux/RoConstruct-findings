// roc 2011-06 00679770  unit: RBX::SpecialShape  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00679770
//
// 00679770  8b442410             mov eax, dword ptr [esp + 0x10]
// 00679774  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679778  8b542408             mov edx, dword ptr [esp + 8]
// 0067977c  50                   push eax
// 0067977d  51                   push ecx
// 0067977e  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00679782  52                   push edx
// 00679783  e838ffffff           call 0x6796c0
// 00679788  c3                   ret 
// library rbxgs/script\LuaMemory.cpp (function ?alloc@LuaAllocator@@SAPAXPAX0II@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaMemory.cpp
