// roc 2007-08 005341e0  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005341e0
//
// 005341e0  6aff                 push -1
// 005341e2  6879be7500           push 0x75be79
// 005341e7  64a100000000         mov eax, dword ptr fs:[0]
// 005341ed  50                   push eax
// 005341ee  64892500000000       mov dword ptr fs:[0], esp
// 005341f5  83ec1c               sub esp, 0x1c
// 005341f8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005341fc  50                   push eax
// 005341fd  8d4c2404             lea ecx, [esp + 4]
// 00534201  51                   push ecx
// 00534202  e8c98e0500           call 0x58d0d0
// 00534207  83c408               add esp, 8
// 0053420a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0053420f  8b442404             mov eax, dword ptr [esp + 4]
// 00534213  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0053421b  7304                 jae 0x534221
// 0053421d  8d442404             lea eax, [esp + 4]
// 00534221  8b542430             mov edx, dword ptr [esp + 0x30]
// 00534225  50                   push eax
// 00534226  52                   push edx
// 00534227  e8c4990800           call 0x5bdbf0
// 0053422c  83c408               add esp, 8
// 0053422f  8d0c24               lea ecx, [esp]
// 00534232  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0053423a  ff15ace67700         call dword ptr [0x77e6ac]
// 00534240  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00534244  b801000000           mov eax, 1
// 00534249  64890d00000000       mov dword ptr fs:[0], ecx
// 00534250  83c428               add esp, 0x28
// 00534253  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
