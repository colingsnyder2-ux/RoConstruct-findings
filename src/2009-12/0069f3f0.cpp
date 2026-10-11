// roc 2009-12 0069f3f0  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f3f0
//
// 0069f3f0  6aff                 push -1
// 0069f3f2  68a9e59200           push 0x92e5a9
// 0069f3f7  64a100000000         mov eax, dword ptr fs:[0]
// 0069f3fd  50                   push eax
// 0069f3fe  64892500000000       mov dword ptr fs:[0], esp
// 0069f405  83ec1c               sub esp, 0x1c
// 0069f408  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0069f40c  50                   push eax
// 0069f40d  8d4c2404             lea ecx, [esp + 4]
// 0069f411  51                   push ecx
// 0069f412  e8c9260100           call 0x6b1ae0
// 0069f417  83c408               add esp, 8
// 0069f41a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0069f41f  8b442404             mov eax, dword ptr [esp + 4]
// 0069f423  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0069f42b  7304                 jae 0x69f431
// 0069f42d  8d442404             lea eax, [esp + 4]
// 0069f431  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069f435  50                   push eax
// 0069f436  52                   push edx
// 0069f437  e8a4990e00           call 0x788de0
// 0069f43c  83c408               add esp, 8
// 0069f43f  8d0c24               lea ecx, [esp]
// 0069f442  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0069f44a  ff15e4b69800         call dword ptr [0x98b6e4]
// 0069f450  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069f454  b801000000           mov eax, 1
// 0069f459  64890d00000000       mov dword ptr fs:[0], ecx
// 0069f460  83c428               add esp, 0x28
// 0069f463  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
