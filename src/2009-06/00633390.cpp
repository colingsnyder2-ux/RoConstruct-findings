// roc 2009-06 00633390  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633390
//
// 00633390  6aff                 push -1
// 00633392  68d9b88500           push 0x85b8d9
// 00633397  64a100000000         mov eax, dword ptr fs:[0]
// 0063339d  50                   push eax
// 0063339e  64892500000000       mov dword ptr fs:[0], esp
// 006333a5  83ec1c               sub esp, 0x1c
// 006333a8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006333ac  50                   push eax
// 006333ad  8d4c2404             lea ecx, [esp + 4]
// 006333b1  51                   push ecx
// 006333b2  e8d9890100           call 0x64bd90
// 006333b7  83c408               add esp, 8
// 006333ba  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 006333bf  8b442404             mov eax, dword ptr [esp + 4]
// 006333c3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006333cb  7304                 jae 0x6333d1
// 006333cd  8d442404             lea eax, [esp + 4]
// 006333d1  8b542430             mov edx, dword ptr [esp + 0x30]
// 006333d5  50                   push eax
// 006333d6  52                   push edx
// 006333d7  e8e45f0800           call 0x6b93c0
// 006333dc  83c408               add esp, 8
// 006333df  8d0c24               lea ecx, [esp]
// 006333e2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 006333ea  ff15c4e48900         call dword ptr [0x89e4c4]
// 006333f0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006333f4  b801000000           mov eax, 1
// 006333f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00633400  83c428               add esp, 0x28
// 00633403  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
