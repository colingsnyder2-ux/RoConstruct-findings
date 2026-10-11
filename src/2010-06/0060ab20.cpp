// roc 2010-06 0060ab20  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ab20
//
// 0060ab20  6aff                 push -1
// 0060ab22  68095b9800           push 0x985b09
// 0060ab27  64a100000000         mov eax, dword ptr fs:[0]
// 0060ab2d  50                   push eax
// 0060ab2e  64892500000000       mov dword ptr fs:[0], esp
// 0060ab35  83ec1c               sub esp, 0x1c
// 0060ab38  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060ab3c  50                   push eax
// 0060ab3d  8d4c2404             lea ecx, [esp + 4]
// 0060ab41  51                   push ecx
// 0060ab42  e8f94b0100           call 0x61f740
// 0060ab47  83c408               add esp, 8
// 0060ab4a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0060ab4f  8b442404             mov eax, dword ptr [esp + 4]
// 0060ab53  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0060ab5b  7304                 jae 0x60ab61
// 0060ab5d  8d442404             lea eax, [esp + 4]
// 0060ab61  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060ab65  50                   push eax
// 0060ab66  52                   push edx
// 0060ab67  e8246a1100           call 0x721590
// 0060ab6c  83c408               add esp, 8
// 0060ab6f  8d0c24               lea ecx, [esp]
// 0060ab72  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0060ab7a  ff1500a49e00         call dword ptr [0x9ea400]
// 0060ab80  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060ab84  b801000000           mov eax, 1
// 0060ab89  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ab90  83c428               add esp, 0x28
// 0060ab93  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
