// roc 2009-06 00633490  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633490
//
// 00633490  6aff                 push -1
// 00633492  68d9b88500           push 0x85b8d9
// 00633497  64a100000000         mov eax, dword ptr fs:[0]
// 0063349d  50                   push eax
// 0063349e  64892500000000       mov dword ptr fs:[0], esp
// 006334a5  83ec1c               sub esp, 0x1c
// 006334a8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 006334ac  50                   push eax
// 006334ad  8d4c2404             lea ecx, [esp + 4]
// 006334b1  51                   push ecx
// 006334b2  e8398c0100           call 0x64c0f0
// 006334b7  83c408               add esp, 8
// 006334ba  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 006334bf  8b442404             mov eax, dword ptr [esp + 4]
// 006334c3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 006334cb  7304                 jae 0x6334d1
// 006334cd  8d442404             lea eax, [esp + 4]
// 006334d1  8b542430             mov edx, dword ptr [esp + 0x30]
// 006334d5  50                   push eax
// 006334d6  52                   push edx
// 006334d7  e8e45e0800           call 0x6b93c0
// 006334dc  83c408               add esp, 8
// 006334df  8d0c24               lea ecx, [esp]
// 006334e2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 006334ea  ff15c4e48900         call dword ptr [0x89e4c4]
// 006334f0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 006334f4  b801000000           mov eax, 1
// 006334f9  64890d00000000       mov dword ptr fs:[0], ecx
// 00633500  83c428               add esp, 0x28
// 00633503  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
