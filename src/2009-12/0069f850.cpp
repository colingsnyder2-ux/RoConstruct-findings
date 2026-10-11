// roc 2009-12 0069f850  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f850
//
// 0069f850  6aff                 push -1
// 0069f852  68a9e59200           push 0x92e5a9
// 0069f857  64a100000000         mov eax, dword ptr fs:[0]
// 0069f85d  50                   push eax
// 0069f85e  64892500000000       mov dword ptr fs:[0], esp
// 0069f865  83ec1c               sub esp, 0x1c
// 0069f868  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0069f86c  50                   push eax
// 0069f86d  8d4c2404             lea ecx, [esp + 4]
// 0069f871  51                   push ecx
// 0069f872  e8e9320100           call 0x6b2b60
// 0069f877  83c408               add esp, 8
// 0069f87a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0069f87f  8b442404             mov eax, dword ptr [esp + 4]
// 0069f883  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0069f88b  7304                 jae 0x69f891
// 0069f88d  8d442404             lea eax, [esp + 4]
// 0069f891  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069f895  50                   push eax
// 0069f896  52                   push edx
// 0069f897  e844950e00           call 0x788de0
// 0069f89c  83c408               add esp, 8
// 0069f89f  8d0c24               lea ecx, [esp]
// 0069f8a2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0069f8aa  ff15e4b69800         call dword ptr [0x98b6e4]
// 0069f8b0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069f8b4  b801000000           mov eax, 1
// 0069f8b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0069f8c0  83c428               add esp, 0x28
// 0069f8c3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
