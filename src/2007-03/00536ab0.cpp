// roc 2007-03 00536ab0  unit: seg_00530000  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00536ab0
//
// 00536ab0  6aff                 push -1
// 00536ab2  6809807500           push 0x758009
// 00536ab7  64a100000000         mov eax, dword ptr fs:[0]
// 00536abd  50                   push eax
// 00536abe  64892500000000       mov dword ptr fs:[0], esp
// 00536ac5  83ec1c               sub esp, 0x1c
// 00536ac8  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00536acc  50                   push eax
// 00536acd  8d4c2404             lea ecx, [esp + 4]
// 00536ad1  51                   push ecx
// 00536ad2  e899100500           call 0x587b70
// 00536ad7  83c408               add esp, 8
// 00536ada  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 00536adf  8b442404             mov eax, dword ptr [esp + 4]
// 00536ae3  c744242400000000     mov dword ptr [esp + 0x24], 0
// 00536aeb  7304                 jae 0x536af1
// 00536aed  8d442404             lea eax, [esp + 4]
// 00536af1  8b542430             mov edx, dword ptr [esp + 0x30]
// 00536af5  50                   push eax
// 00536af6  52                   push edx
// 00536af7  e8c4250800           call 0x5b90c0
// 00536afc  83c408               add esp, 8
// 00536aff  8d0c24               lea ecx, [esp]
// 00536b02  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00536b0a  ff158ce77700         call dword ptr [0x77e78c]
// 00536b10  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00536b14  b801000000           mov eax, 1
// 00536b19  64890d00000000       mov dword ptr fs:[0], ecx
// 00536b20  83c428               add esp, 0x28
// 00536b23  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
