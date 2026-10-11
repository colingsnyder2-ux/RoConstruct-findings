// roc 2008-06 005a8850  unit: RBX::ScriptContext  size: 116 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005a8850
//
// 005a8850  6aff                 push -1
// 005a8852  6809e77c00           push 0x7ce709
// 005a8857  64a100000000         mov eax, dword ptr fs:[0]
// 005a885d  50                   push eax
// 005a885e  64892500000000       mov dword ptr fs:[0], esp
// 005a8865  83ec1c               sub esp, 0x1c
// 005a8868  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 005a886c  50                   push eax
// 005a886d  8d4c2404             lea ecx, [esp + 4]
// 005a8871  51                   push ecx
// 005a8872  e879620100           call 0x5beaf0
// 005a8877  83c408               add esp, 8
// 005a887a  837c241810           cmp dword ptr [esp + 0x18], 0x10
// 005a887f  8b442404             mov eax, dword ptr [esp + 4]
// 005a8883  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005a888b  7304                 jae 0x5a8891
// 005a888d  8d442404             lea eax, [esp + 4]
// 005a8891  8b542430             mov edx, dword ptr [esp + 0x30]
// 005a8895  50                   push eax
// 005a8896  52                   push edx
// 005a8897  e8e4990600           call 0x612280
// 005a889c  83c408               add esp, 8
// 005a889f  8d0c24               lea ecx, [esp]
// 005a88a2  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 005a88aa  ff1568248000         call dword ptr [0x802468]
// 005a88b0  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005a88b4  b801000000           mov eax, 1
// 005a88b9  64890d00000000       mov dword ptr fs:[0], ecx
// 005a88c0  83c428               add esp, 0x28
// 005a88c3  c3                   ret 
// library openrbx-client/App\script\LuaAtomicClasses.cpp (function ?on_tostring@?$Bridge@VVector3@G3D@@$00@Lua@RBX@@KAHABVVector3@G3D@@PAUlua_State@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/script/LuaAtomicClasses.cpp
