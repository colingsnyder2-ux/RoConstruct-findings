// roc 2007-08 00534280  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534280
//
// 00534280  6aff                 push -1
// 00534282  6879be7500           push 0x75be79
// 00534287  64a100000000         mov eax, dword ptr fs:[0]
// 0053428d  50                   push eax
// 0053428e  64892500000000       mov dword ptr fs:[0], esp
// 00534295  83ec1c               sub esp, 0x1c
// 00534298  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0053429c  50                   push eax
// 0053429d  8d4c2404             lea ecx, [esp + 4]
// 005342a1  51                   push ecx
// 005342a2  e8498d0500           call 0x58cff0
// 005342a7  83c408               add esp, 8
// 005342aa  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 005342af  8b442404             mov eax, dword ptr [esp + 4]
// 005342b3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005342bb  7304                 jae 0x5342c1
// 005342bd  8d442404             lea eax, [esp + 4]
// 005342c1  8b542430             mov edx, dword ptr [esp + 0x30]
// 005342c5  50                   push eax
// 005342c6  52                   push edx
// 005342c7  e824990800           call 0x5bdbf0
// 005342cc  83c408               add esp, 8
// 005342cf  8d0c24               lea ecx, [esp]
// 005342d2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005342da  ff15ace67700         call dword ptr [0x77e6ac]
// 005342e0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005342e4  b801000000           mov eax, 1
// 005342e9  64890d00000000       mov dword ptr fs:[0], ecx
// 005342f0  83c428               add esp, 0x28
// 005342f3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
