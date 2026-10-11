// roc 2010-06 0060abc0  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0060abc0
//
// 0060abc0  6aff                 push -1
// 0060abc2  68095b9800           push 0x985b09
// 0060abc7  64a100000000         mov eax, dword ptr fs:[0]
// 0060abcd  50                   push eax
// 0060abce  64892500000000       mov dword ptr fs:[0], esp
// 0060abd5  83ec1c               sub esp, 0x1c
// 0060abd8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0060abdc  50                   push eax
// 0060abdd  8d4c2404             lea ecx, [esp + 4]
// 0060abe1  51                   push ecx
// 0060abe2  e8d9490100           call 0x61f5c0
// 0060abe7  83c408               add esp, 8
// 0060abea  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 0060abef  8b442404             mov eax, dword ptr [esp + 4]
// 0060abf3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 0060abfb  7304                 jae 0x60ac01
// 0060abfd  8d442404             lea eax, [esp + 4]
// 0060ac01  8b542430             mov edx, dword ptr [esp + 0x30]
// 0060ac05  50                   push eax
// 0060ac06  52                   push edx
// 0060ac07  e884691100           call 0x721590
// 0060ac0c  83c408               add esp, 8
// 0060ac0f  8d0c24               lea ecx, [esp]
// 0060ac12  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 0060ac1a  ff1500a49e00         call dword ptr [0x9ea400]
// 0060ac20  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0060ac24  b801000000           mov eax, 1
// 0060ac29  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ac30  83c428               add esp, 0x28
// 0060ac33  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
