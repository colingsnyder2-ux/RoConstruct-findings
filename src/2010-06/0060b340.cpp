// roc 2010-06 0060b340  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060b340
//
// 0060b340  6aff                 push -1
// 0060b342  68095b9800           push 0x985b09
// 0060b347  64a100000000         mov eax, dword ptr fs:[0]
// 0060b34d  50                   push eax
// 0060b34e  64892500000000       mov dword ptr fs:[0], esp
// 0060b355  83ec1c               sub esp, 0x1c
// 0060b358  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060b35c  50                   push eax
// 0060b35d  8d4c2404             lea ecx, [esp + 4]
// 0060b361  51                   push ecx
// 0060b362  e8d9570100           call 0x620b40
// 0060b367  83c408               add esp, 8
// 0060b36a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0060b36f  8b442404             mov eax, dword ptr [esp + 4]
// 0060b373  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0060b37b  7304                 jae 0x60b381
// 0060b37d  8d442404             lea eax, [esp + 4]
// 0060b381  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060b385  50                   push eax
// 0060b386  52                   push edx
// 0060b387  e804621100           call 0x721590
// 0060b38c  83c408               add esp, 8
// 0060b38f  8d0c24               lea ecx, [esp]
// 0060b392  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0060b39a  ff1500a49e00         call dword ptr [0x9ea400]
// 0060b3a0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060b3a4  b801000000           mov eax, 1
// 0060b3a9  64890d00000000       mov dword ptr fs:[0], ecx
// 0060b3b0  83c428               add esp, 0x28
// 0060b3b3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaAtomicClasses.cpp
