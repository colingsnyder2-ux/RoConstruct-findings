// roc 2010-06 0060b3c0  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b3c0
//
// 0060b3c0  6aff                 push -1
// 0060b3c2  68095b9800           push 0x985b09
// 0060b3c7  64a100000000         mov eax, dword ptr fs:[0]
// 0060b3cd  50                   push eax
// 0060b3ce  64892500000000       mov dword ptr fs:[0], esp
// 0060b3d5  83ec1c               sub esp, 0x1c
// 0060b3d8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060b3dc  50                   push eax
// 0060b3dd  8d4c2404             lea ecx, [esp + 4]
// 0060b3e1  51                   push ecx
// 0060b3e2  e8a9480100           call 0x61fc90
// 0060b3e7  83c408               add esp, 8
// 0060b3ea  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0060b3ef  8b442404             mov eax, dword ptr [esp + 4]
// 0060b3f3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0060b3fb  7304                 jae 0x60b401
// 0060b3fd  8d442404             lea eax, [esp + 4]
// 0060b401  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060b405  50                   push eax
// 0060b406  52                   push edx
// 0060b407  e884611100           call 0x721590
// 0060b40c  83c408               add esp, 8
// 0060b40f  8d0c24               lea ecx, [esp]
// 0060b412  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0060b41a  ff1500a49e00         call dword ptr [0x9ea400]
// 0060b420  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060b424  b801000000           mov eax, 1
// 0060b429  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b430  83c428               add esp, 0x28
// 0060b433  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
