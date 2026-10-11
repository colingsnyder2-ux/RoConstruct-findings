// roc 2010-06 0060b240  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b240
//
// 0060b240  6aff                 push -1
// 0060b242  68095b9800           push 0x985b09
// 0060b247  64a100000000         mov eax, dword ptr fs:[0]
// 0060b24d  50                   push eax
// 0060b24e  64892500000000       mov dword ptr fs:[0], esp
// 0060b255  83ec1c               sub esp, 0x1c
// 0060b258  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060b25c  50                   push eax
// 0060b25d  8d4c2404             lea ecx, [esp + 4]
// 0060b261  51                   push ecx
// 0060b262  e8594a0100           call 0x61fcc0
// 0060b267  83c408               add esp, 8
// 0060b26a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0060b26f  8b442404             mov eax, dword ptr [esp + 4]
// 0060b273  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0060b27b  7304                 jae 0x60b281
// 0060b27d  8d442404             lea eax, [esp + 4]
// 0060b281  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060b285  50                   push eax
// 0060b286  52                   push edx
// 0060b287  e804631100           call 0x721590
// 0060b28c  83c408               add esp, 8
// 0060b28f  8d0c24               lea ecx, [esp]
// 0060b292  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0060b29a  ff1500a49e00         call dword ptr [0x9ea400]
// 0060b2a0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060b2a4  b801000000           mov eax, 1
// 0060b2a9  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b2b0  83c428               add esp, 0x28
// 0060b2b3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
