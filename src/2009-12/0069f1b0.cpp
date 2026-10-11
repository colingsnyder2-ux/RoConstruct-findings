// roc 2009-12 0069f1b0  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0069f1b0
//
// 0069f1b0  6aff                 push -1
// 0069f1b2  68a9e59200           push 0x92e5a9
// 0069f1b7  64a100000000         mov eax, dword ptr fs:[0]
// 0069f1bd  50                   push eax
// 0069f1be  64892500000000       mov dword ptr fs:[0], esp
// 0069f1c5  83ec1c               sub esp, 0x1c
// 0069f1c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0069f1cc  50                   push eax
// 0069f1cd  8d4c2404             lea ecx, [esp + 4]
// 0069f1d1  51                   push ecx
// 0069f1d2  e8a9290100           call 0x6b1b80
// 0069f1d7  83c408               add esp, 8
// 0069f1da  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0069f1df  8b442404             mov eax, dword ptr [esp + 4]
// 0069f1e3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0069f1eb  7304                 jae 0x69f1f1
// 0069f1ed  8d442404             lea eax, [esp + 4]
// 0069f1f1  8b542430             mov edx, dword ptr [esp + 0x30]
// 0069f1f5  50                   push eax
// 0069f1f6  52                   push edx
// 0069f1f7  e8e49b0e00           call 0x788de0
// 0069f1fc  83c408               add esp, 8
// 0069f1ff  8d0c24               lea ecx, [esp]
// 0069f202  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0069f20a  ff15e4b69800         call dword ptr [0x98b6e4]
// 0069f210  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0069f214  b801000000           mov eax, 1
// 0069f219  64890d00000000       mov dword ptr fs:[0], ecx
// 0069f220  83c428               add esp, 0x28
// 0069f223  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
