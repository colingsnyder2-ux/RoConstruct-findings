// roc 2009-06 00633310  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633310
//
// 00633310  6aff                 push -1
// 00633312  68d9b88500           push 0x85b8d9
// 00633317  64a100000000         mov eax, dword ptr fs:[0]
// 0063331d  50                   push eax
// 0063331e  64892500000000       mov dword ptr fs:[0], esp
// 00633325  83ec1c               sub esp, 0x1c
// 00633328  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063332c  50                   push eax
// 0063332d  8d4c2404             lea ecx, [esp + 4]
// 00633331  51                   push ecx
// 00633332  e879890100           call 0x64bcb0
// 00633337  83c408               add esp, 8
// 0063333a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0063333f  8b442404             mov eax, dword ptr [esp + 4]
// 00633343  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0063334b  7304                 jae 0x633351
// 0063334d  8d442404             lea eax, [esp + 4]
// 00633351  8b542430             mov edx, dword ptr [esp + 0x30]
// 00633355  50                   push eax
// 00633356  52                   push edx
// 00633357  e864600800           call 0x6b93c0
// 0063335c  83c408               add esp, 8
// 0063335f  8d0c24               lea ecx, [esp]
// 00633362  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0063336a  ff15c4e48900         call dword ptr [0x89e4c4]
// 00633370  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00633374  b801000000           mov eax, 1
// 00633379  64890d00000000       mov dword ptr fs:[0], ecx
// 00633380  83c428               add esp, 0x28
// 00633383  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
