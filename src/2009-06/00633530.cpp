// roc 2009-06 00633530  unit: std::strstream  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00633530
//
// 00633530  6aff                 push -1
// 00633532  68d9b88500           push 0x85b8d9
// 00633537  64a100000000         mov eax, dword ptr fs:[0]
// 0063353d  50                   push eax
// 0063353e  64892500000000       mov dword ptr fs:[0], esp
// 00633545  83ec1c               sub esp, 0x1c
// 00633548  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0063354c  50                   push eax
// 0063354d  8d4c2404             lea ecx, [esp + 4]
// 00633551  51                   push ecx
// 00633552  e8698b0100           call 0x64c0c0
// 00633557  83c408               add esp, 8
// 0063355a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0063355f  8b442404             mov eax, dword ptr [esp + 4]
// 00633563  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0063356b  7304                 jae 0x633571
// 0063356d  8d442404             lea eax, [esp + 4]
// 00633571  8b542430             mov edx, dword ptr [esp + 0x30]
// 00633575  50                   push eax
// 00633576  52                   push edx
// 00633577  e8445e0800           call 0x6b93c0
// 0063357c  83c408               add esp, 8
// 0063357f  8d0c24               lea ecx, [esp]
// 00633582  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0063358a  ff15c4e48900         call dword ptr [0x89e4c4]
// 00633590  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00633594  b801000000           mov eax, 1
// 00633599  64890d00000000       mov dword ptr fs:[0], ecx
// 006335a0  83c428               add esp, 0x28
// 006335a3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
