// roc 2010-06 0060b1c0  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b1c0
//
// 0060b1c0  6aff                 push -1
// 0060b1c2  68095b9800           push 0x985b09
// 0060b1c7  64a100000000         mov eax, dword ptr fs:[0]
// 0060b1cd  50                   push eax
// 0060b1ce  64892500000000       mov dword ptr fs:[0], esp
// 0060b1d5  83ec1c               sub esp, 0x1c
// 0060b1d8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060b1dc  50                   push eax
// 0060b1dd  8d4c2404             lea ecx, [esp + 4]
// 0060b1e1  51                   push ecx
// 0060b1e2  e8e9470100           call 0x61f9d0
// 0060b1e7  83c408               add esp, 8
// 0060b1ea  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0060b1ef  8b442404             mov eax, dword ptr [esp + 4]
// 0060b1f3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0060b1fb  7304                 jae 0x60b201
// 0060b1fd  8d442404             lea eax, [esp + 4]
// 0060b201  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060b205  50                   push eax
// 0060b206  52                   push edx
// 0060b207  e884631100           call 0x721590
// 0060b20c  83c408               add esp, 8
// 0060b20f  8d0c24               lea ecx, [esp]
// 0060b212  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0060b21a  ff1500a49e00         call dword ptr [0x9ea400]
// 0060b220  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060b224  b801000000           mov eax, 1
// 0060b229  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b230  83c428               add esp, 0x28
// 0060b233  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
