// roc 2007-08 005344b0  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005344b0
//
// 005344b0  6aff                 push -1
// 005344b2  6879be7500           push 0x75be79
// 005344b7  64a100000000         mov eax, dword ptr fs:[0]
// 005344bd  50                   push eax
// 005344be  64892500000000       mov dword ptr fs:[0], esp
// 005344c5  83ec1c               sub esp, 0x1c
// 005344c8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005344cc  50                   push eax
// 005344cd  8d4c2404             lea ecx, [esp + 4]
// 005344d1  51                   push ecx
// 005344d2  e8f98d0500           call 0x58d2d0
// 005344d7  83c408               add esp, 8
// 005344da  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 005344df  8b442404             mov eax, dword ptr [esp + 4]
// 005344e3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005344eb  7304                 jae 0x5344f1
// 005344ed  8d442404             lea eax, [esp + 4]
// 005344f1  8b542430             mov edx, dword ptr [esp + 0x30]
// 005344f5  50                   push eax
// 005344f6  52                   push edx
// 005344f7  e8f4960800           call 0x5bdbf0
// 005344fc  83c408               add esp, 8
// 005344ff  8d0c24               lea ecx, [esp]
// 00534502  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0053450a  ff15ace67700         call dword ptr [0x77e6ac]
// 00534510  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00534514  b801000000           mov eax, 1
// 00534519  64890d00000000       mov dword ptr fs:[0], ecx
// 00534520  83c428               add esp, 0x28
// 00534523  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
