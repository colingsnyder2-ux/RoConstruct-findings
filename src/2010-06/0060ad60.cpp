// roc 2010-06 0060ad60  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060ad60
//
// 0060ad60  6aff                 push -1
// 0060ad62  68095b9800           push 0x985b09
// 0060ad67  64a100000000         mov eax, dword ptr fs:[0]
// 0060ad6d  50                   push eax
// 0060ad6e  64892500000000       mov dword ptr fs:[0], esp
// 0060ad75  83ec1c               sub esp, 0x1c
// 0060ad78  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060ad7c  50                   push eax
// 0060ad7d  8d4c2404             lea ecx, [esp + 4]
// 0060ad81  51                   push ecx
// 0060ad82  e819490100           call 0x61f6a0
// 0060ad87  83c408               add esp, 8
// 0060ad8a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0060ad8f  8b442404             mov eax, dword ptr [esp + 4]
// 0060ad93  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0060ad9b  7304                 jae 0x60ada1
// 0060ad9d  8d442404             lea eax, [esp + 4]
// 0060ada1  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060ada5  50                   push eax
// 0060ada6  52                   push edx
// 0060ada7  e8e4671100           call 0x721590
// 0060adac  83c408               add esp, 8
// 0060adaf  8d0c24               lea ecx, [esp]
// 0060adb2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0060adba  ff1500a49e00         call dword ptr [0x9ea400]
// 0060adc0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060adc4  b801000000           mov eax, 1
// 0060adc9  64890d00000000       mov dword ptr fs:[0], ecx
// 0060add0  83c428               add esp, 0x28
// 0060add3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
