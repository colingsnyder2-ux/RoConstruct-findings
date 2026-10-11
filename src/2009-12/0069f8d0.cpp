// roc 2009-12 0069f8d0  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f8d0
//
// 0069f8d0  6aff                 push -1
// 0069f8d2  68a9e59200           push 0x92e5a9
// 0069f8d7  64a100000000         mov eax, dword ptr fs:[0]
// 0069f8dd  50                   push eax
// 0069f8de  64892500000000       mov dword ptr fs:[0], esp
// 0069f8e5  83ec1c               sub esp, 0x1c
// 0069f8e8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0069f8ec  50                   push eax
// 0069f8ed  8d4c2404             lea ecx, [esp + 4]
// 0069f8f1  51                   push ecx
// 0069f8f2  e859360100           call 0x6b2f50
// 0069f8f7  83c408               add esp, 8
// 0069f8fa  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0069f8ff  8b442404             mov eax, dword ptr [esp + 4]
// 0069f903  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0069f90b  7304                 jae 0x69f911
// 0069f90d  8d442404             lea eax, [esp + 4]
// 0069f911  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069f915  50                   push eax
// 0069f916  52                   push edx
// 0069f917  e8c4940e00           call 0x788de0
// 0069f91c  83c408               add esp, 8
// 0069f91f  8d0c24               lea ecx, [esp]
// 0069f922  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0069f92a  ff15e4b69800         call dword ptr [0x98b6e4]
// 0069f930  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069f934  b801000000           mov eax, 1
// 0069f939  64890d00000000       mov dword ptr fs:[0], ecx
// 0069f940  83c428               add esp, 0x28
// 0069f943  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
