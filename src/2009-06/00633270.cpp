// roc 2009-06 00633270  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633270
//
// 00633270  6aff                 push -1
// 00633272  68d9b88500           push 0x85b8d9
// 00633277  64a100000000         mov eax, dword ptr fs:[0]
// 0063327d  50                   push eax
// 0063327e  64892500000000       mov dword ptr fs:[0], esp
// 00633285  83ec1c               sub esp, 0x1c
// 00633288  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063328c  50                   push eax
// 0063328d  8d4c2404             lea ecx, [esp + 4]
// 00633291  51                   push ecx
// 00633292  e8998b0100           call 0x64be30
// 00633297  83c408               add esp, 8
// 0063329a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0063329f  8b442404             mov eax, dword ptr [esp + 4]
// 006332a3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006332ab  7304                 jae 0x6332b1
// 006332ad  8d442404             lea eax, [esp + 4]
// 006332b1  8b542430             mov edx, dword ptr [esp + 0x30]
// 006332b5  50                   push eax
// 006332b6  52                   push edx
// 006332b7  e804610800           call 0x6b93c0
// 006332bc  83c408               add esp, 8
// 006332bf  8d0c24               lea ecx, [esp]
// 006332c2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 006332ca  ff15c4e48900         call dword ptr [0x89e4c4]
// 006332d0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006332d4  b801000000           mov eax, 1
// 006332d9  64890d00000000       mov dword ptr fs:[0], ecx
// 006332e0  83c428               add esp, 0x28
// 006332e3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
