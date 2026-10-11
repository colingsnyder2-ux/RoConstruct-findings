// roc 2009-12 0069f950  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f950
//
// 0069f950  6aff                 push -1
// 0069f952  68a9e59200           push 0x92e5a9
// 0069f957  64a100000000         mov eax, dword ptr fs:[0]
// 0069f95d  50                   push eax
// 0069f95e  64892500000000       mov dword ptr fs:[0], esp
// 0069f965  83ec1c               sub esp, 0x1c
// 0069f968  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0069f96c  50                   push eax
// 0069f96d  8d4c2404             lea ecx, [esp + 4]
// 0069f971  51                   push ecx
// 0069f972  e859270100           call 0x6b20d0
// 0069f977  83c408               add esp, 8
// 0069f97a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0069f97f  8b442404             mov eax, dword ptr [esp + 4]
// 0069f983  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0069f98b  7304                 jae 0x69f991
// 0069f98d  8d442404             lea eax, [esp + 4]
// 0069f991  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069f995  50                   push eax
// 0069f996  52                   push edx
// 0069f997  e844940e00           call 0x788de0
// 0069f99c  83c408               add esp, 8
// 0069f99f  8d0c24               lea ecx, [esp]
// 0069f9a2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0069f9aa  ff15e4b69800         call dword ptr [0x98b6e4]
// 0069f9b0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069f9b4  b801000000           mov eax, 1
// 0069f9b9  64890d00000000       mov dword ptr fs:[0], ecx
// 0069f9c0  83c428               add esp, 0x28
// 0069f9c3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
